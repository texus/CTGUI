#################################################################################################################################
#
# TGUI - Texus' Graphical User Interface
# Copyright (C) 2012-2025 Bruno Van de Velde (vdv_b@tgui.eu)
#
# This software is provided 'as-is', without any express or implied warranty.
# In no event will the authors be held liable for any damages arising from the use of this software.
#
# Permission is granted to anyone to use this software for any purpose,
# including commercial applications, and to alter it and redistribute it freely,
# subject to the following restrictions:
#
# 1. The origin of this software must not be misrepresented;
#    you must not claim that you wrote the original software.
#    If you use this software in a product, an acknowledgment
#    in the product documentation would be appreciated but is not required.
#
# 2. Altered source versions must be plainly marked as such,
#    and must not be misrepresented as being the original software.
#
# 3. This notice may not be removed or altered from any source distribution.
#
#################################################################################################################################

import os
import re
from FileParser import *
from collections import defaultdict

TGUI_DIR = '../../TGUI'

VALID_CPP_TYPES = {
    'void' : ['void'],
    'float' : ['float', 'AbsoluteOrRelativeValue'], # TODO: Properly implement AbsoluteOrRelativeValue to allow relative values
    'int' : ['int'],
    'uint' : ['unsigned int'],
    'bool' : ['bool'],
    'string' : ['String', 'const String&'],
    'Color' : ['Color', 'const Color&'],
    'Font' : ['Font', 'const Font&'],
    'Texture' : ['const Texture&'],
    'TextStyle' : ['TextStyles'],
    'RendererData' : ['std::shared_ptr<RendererData>'],
    'Outline' : ['const Outline&', 'const Borders&', 'const Padding&', 'Borders', 'Padding', 'Outline'],
    'HorizontalAlignment' : ['HorizontalAlignment', 'tgui::HorizontalAlignment'],
    'VerticalAlignment' : ['VerticalAlignment', 'tgui::VerticalAlignment'],
    'ScrollbarPolicy' : ['Scrollbar::Policy'],
    'Orientation' : ['Orientation'],
    'CursorType' : ['Cursor::Type'],
    'Vector2f' : ['Vector2f'],
    'Vector2i' : ['Vector2i'],
    'Vector2u' : ['Vector2u'],
    'FloatRect' : ['FloatRect', 'const FloatRect&', 'RelFloatRect'],
    'IntRect' : ['IntRect', 'const IntRect&'],
    'UIntRect' : ['UIntRect', 'const UIntRect&'],
    'Char32' : ['char32_t'],
    'size_t' : ['std::size_t'],
    'Layout' : ['Layout', 'const Layout&'],
    'Layout2d' : ['const Layout2d&'],
    'List<Widget>' : ['const std::vector<Widget::Ptr>&'],
    'List<string>' : ['std::vector<String>', 'const std::vector<String>&'],
    'Set<size_t>' : ['std::set<std::size_t>', 'const std::set<std::size_t>&'],
    'AnyObject' : ['Any', 'DataType'],
    'Widget' : ['Widget::Ptr', 'const Widget::Ptr&'],
}

IGNORE_MISSING_PROPERTIES = {
    'FileDialog' : ['IconLoader'],
    'Texture' : ['Shader', 'BackendTextureLoader', 'TextureLoader'],
    'Theme' : ['ThemeLoader'],
    'Widget' : ['InheritedFont', 'InheritedOpacity', 'Parent'],
}

error = False
for subfolder in ['Widgets', 'Renderers', '.']:
    for filename in os.listdir(os.path.join('templates', subfolder)):
        if not filename.endswith('.desc'):
            continue

        if filename == 'ScrollbarAccessor.desc':
            continue # We can't check this file, the class is located in the Scrollbar header in c++

        descFile = os.path.join('templates', subfolder, filename)
        className = filename[:-5]

        if filename == 'Gui.desc':
            cppFile = os.path.join(os.path.join(TGUI_DIR, 'include', 'TGUI', 'Backend', 'Window', 'BackendGui.hpp'))
        elif filename == 'Theme.desc':
            cppFile = os.path.join(os.path.join(TGUI_DIR, 'include', 'TGUI', 'Loading', 'Theme.hpp'))
        else:
            cppFile = os.path.join(os.path.join(TGUI_DIR, 'include', 'TGUI', subfolder, className + '.hpp'))

        cppEnums = set()
        cppSetters = set()
        cppGetters = set()
        cppBoolIsGetters = set()
        cppPropertyTypes = {}
        cppDeprecated = set()
        cppFunctions = defaultdict(list)
        cppPotentialMultilineFunctions = set()
        cppInherits = None
        cppInheritsScrollbarChildInterface = False
        cppInheritsDualScrollbarChildInterface = False
        for line in open(cppFile, 'r').readlines():
            line = line.strip()
            if line.startswith('//'):
                continue

            deprecatedProperty = False
            if line.startswith('TGUI_DEPRECATED'):
                line = line[line.find('")')+2:].lstrip()
                deprecatedProperty = True

            # Look for enums
            match = re.search('enum class ([a-zA-Z]+)', line)
            if match:
                cppEnums.add(match.group(1))

            # Look for inheritance
            match = re.search(' ' + className + ' : public ([a-zA-Z]+)', line)
            if match and match.group(1) != 'std':
                cppInherits = match.group(1)
            if 'public ScrollbarChildInterface' in line:
                cppInheritsScrollbarChildInterface = True
            if 'public DualScrollbarChildInterface' in line:
                cppInheritsDualScrollbarChildInterface = True

            # Look for setter functions
            match = re.search('void set([a-zA-Z]+)\\(([^,=)]*) [a-zA-Z]+( = .*)?\\)', line)
            if match:
                propertyName = match.group(1)
                propertyType = match.group(2)
                cppSetters.add(propertyName)
                cppPropertyTypes[propertyName] = propertyType

            # Look for getter functions
            match = re.search(' get([a-zA-Z]+)\\(\\)', line)
            if match:
                propertyName = match.group(1)
                cppGetters.add(propertyName)
                assert('TGUI_DEPRECATED' not in line)
                if deprecatedProperty:
                    cppDeprecated.add(propertyName)
                if 'TGUI_NODISCARD' not in line:
                    print(className + ': C++ getter "get' + propertyName + '" is missing [[nodiscard]] attribute')
                if ' const' not in line and not ' static ' in line and not 'ScrollbarAccessor' in line and not propertyName.endswith('Renderer'):
                    print(className + ': C++ getter "get' + propertyName + '" is missing const modifier')

            # Look for getters with the "is" prefix
            match = re.search('bool is([a-zA-Z]+)\\(\\)', line)
            if match:
                propertyName = match.group(1)
                cppGetters.add(propertyName)
                cppBoolIsGetters.add(propertyName)
                if 'TGUI_NODISCARD' not in line:
                    print(className + ': C++ getter "is' + propertyName + '" is missing [[nodiscard]] attribute')
                if ' const' not in line and not ' static ' in line:
                    print(className + ': C++ getter "is' + propertyName + '" is missing const modifier')

            # Look for any function
            match = re.search(' ([a-zA-Z]+)\\(([^)]*)\\)', line)
            if match:
                functionName = match.group(1)
                params = match.group(2)
                while ' = {' in params: # Parameters like "T x = {a, b}" are converted to "T x" to parse them correctly
                    defaultAggValStartPos = params.find(' = {')
                    defaultAggValEndPos = params.find('}', defaultAggValStartPos)
                    assert(defaultAggValEndPos != -1)
                    params = params[:defaultAggValStartPos] + params[defaultAggValEndPos+1:]
                params = [param.split('=')[0].strip() for param in params.split(',')]
                params = [' '.join(param.split(' ')[:-1]).strip() for param in params]
                if len(params) == 1 and not params[0]: # If there are no parameter then params contains [''] now
                    params = []
                returnType = line[:line.rfind('(')-len(functionName)].strip()
                if returnType.startswith('TGUI_DEPRECATED'):
                    returnType = returnType[returnType.find('")')+2:].strip()
                returnType = ' '.join([part for part in returnType.split(' ') if part != 'static' and part != 'virtual' and part != 'TGUI_NODISCARD' and not part.startswith('TGUI_DEPRECATED')])
                isConst = line.endswith(' const;') or line.endswith(' const noexcept;') or line.endswith(' const override;') or line.endswith(' const noexcept override;') \
                          or line.endswith(' const') or line.endswith(' const noexcept') or line.endswith(' const override') or line.endswith(' const noexcept override') \
                          or line.endswith('const = 0;')
                isStatic = line.startswith('static') or ' static ' in line
                cppFunctions[functionName].append((returnType, params, isConst, isStatic))

            # Look for functions that have many parameters that are split over multiple lines
            match = re.search(' ([a-zA-Z]+)\\(([^)]+)$', line)
            if match:
                functionName = match.group(1)
                cppPotentialMultilineFunctions.add(functionName)

        cppProperties = cppSetters.intersection(cppGetters)

        assert(cppInherits or className == 'WidgetRenderer' or subfolder == '.')

        segments = parseDescriptionFile(descFile)

        encounteredFunctions = set()
        functionsWithOverloads = set()
        for segment in segments:
            if isinstance(segment, SegmentFunction):
                if segment.name in encounteredFunctions:
                    functionsWithOverloads.add(segment.name)
                encounteredFunctions.add(segment.name)

        matchedCppProperties = set()
        encounteredFunctions = set()
        inherits = None
        inheritsScrollbarChildInterface = False
        inheritsDualScrollbarChildInterface = False
        for segment in segments:
            if isinstance(segment, SegmentInherits):
                if segment.parentName == 'ScrollbarChildInterface':
                    inheritsScrollbarChildInterface = True
                    if not cppInheritsScrollbarChildInterface:
                        print(className + ': Class does not inherit from ScrollbarChildInterface in c++')
                        error = True
                elif segment.parentName == 'DualScrollbarChildInterface':
                    inheritsDualScrollbarChildInterface = True
                    if not cppInheritsDualScrollbarChildInterface:
                        print(className + ': Class does not inherit from DualScrollbarChildInterface in c++')
                        error = True
                else:
                    inherits = segment.parentName

            if isinstance(segment, SegmentProperty):
                propertyType = segment.type
                propertyName = segment.name
                if propertyName not in cppProperties:
                    print(className + ': Property ' + propertyName + ' does not exist in c++')
                    error = True
                    continue

                if segment.getterUsesIsPrefix and propertyName not in cppBoolIsGetters:
                    print(className + ': Property ' + propertyName + ' does not use "is" prefix in c++')
                    error = True
                    continue
                if not segment.getterUsesIsPrefix and propertyName in cppBoolIsGetters:
                    print(className + ': Property ' + propertyName + ' uses "is" instead of "get" prefix in c++')
                    error = True
                    continue

                matchedCppProperties.add(propertyName)

                validCppTypes = VALID_CPP_TYPES[propertyType] if propertyType not in cppEnums else [propertyType]
                if cppPropertyTypes[propertyName] not in validCppTypes:
                    print(className + ': Type mismatch for property ' + propertyName)
                    error = True
                    continue

            if isinstance(segment, SegmentFunction):
                encounteredFunctions.add(segment.name)
                cppCandidates = cppFunctions[segment.name]
                if not cppCandidates:
                    if segment.name in cppPotentialMultilineFunctions:
                        continue
                    print(className + ': Function ' + segment.name + ' not found in c++')
                    error = True
                    continue

                if len(cppCandidates) == 1:
                    cppCandidateReturnType, cppCandidateParams, cppCandidateIsConst, cppCandidateIsStatic = cppCandidates[0]
                    if cppCandidateIsConst != segment.const:
                        print(className + ': Constness mismatch in ' + segment.name)
                        error = True
                    if cppCandidateIsStatic != segment.static:
                        print(className + ': Staticness mismatch in ' + segment.name)
                        error = True

                    validCppReturnTypes = VALID_CPP_TYPES[segment.returnType] if segment.returnType not in cppEnums else [segment.returnType]
                    if cppCandidateReturnType not in validCppReturnTypes:
                        print(className + ': Return type mismatch for function ' + segment.name)
                        error = True

                    if segment.name not in functionsWithOverloads:
                        if len(cppCandidateParams) != len(segment.params):
                            print(className + ': Parameter count does not match for function ' + segment.name)
                            error = True
                        else:
                            for i in range(len(segment.params)):
                                paramType = segment.params[i][0]
                                validCppParamTypes = VALID_CPP_TYPES[paramType] if paramType not in cppEnums else [paramType]
                                if cppCandidateParams[i] not in validCppParamTypes:
                                    print(className + ': Parameter type mismatch for function ' + segment.name + ' for parameter ' + segment.params[i][1])
                                    error = True

                if len(cppCandidates) >= 2:
                    matchFound = False
                    for cppCandidate in cppCandidates:
                        cppCandidateReturnType, cppCandidateParams, cppCandidateIsConst, cppCandidateIsStatic = cppCandidate
                        if cppCandidateIsConst != segment.const:
                            continue
                        if cppCandidateIsStatic != segment.static:
                            continue
                        validCppReturnTypes = VALID_CPP_TYPES[segment.returnType] if segment.returnType not in cppEnums else [segment.returnType]
                        if cppCandidateReturnType not in validCppReturnTypes:
                            continue
                        if len(cppCandidateParams) != len(segment.params):
                            continue
                        allParamsMatch = True
                        for i in range(len(segment.params)):
                            paramType = segment.params[i][0]
                            validCppParamTypes = VALID_CPP_TYPES[paramType] if paramType not in cppEnums else [paramType]
                            if cppCandidateParams[i] not in validCppParamTypes:
                                allParamsMatch = False
                                break
                        if allParamsMatch:
                            matchFound = True

                    if not matchFound and segment.name not in functionsWithOverloads:
                        print(className + ': Failed to find a matching overload for function ' + segment.name)

        if className != 'WidgetRenderer':
            if cppInherits != 'WidgetRenderer' and cppInherits != inherits:
                if not inherits:
                    print(className + ': Missing inheritance from ' + cppInherits)
                else:
                    print(className + ': Inheritance type mismatch')
                error = True

        if cppInheritsScrollbarChildInterface and not inheritsScrollbarChildInterface:
            print(className + ': Missing inheritance from ScrollbarChildInterface')
            error = True
        if cppInheritsDualScrollbarChildInterface and not inheritsDualScrollbarChildInterface:
            print(className + ': Missing inheritance from DualScrollbarChildInterface')
            error = True

        manualHeaderFileContents = ''
        if subfolder != '.':
            extraHeaderFilename = os.path.join('templates', subfolder, className + '.extra.h')
        else:
            extraHeaderFilename = os.path.join('templates', className + '.h')
        if os.path.isfile(extraHeaderFilename):
            for line in open(extraHeaderFilename, 'r').readlines():
                line = line.strip()
                if line and not line.startswith('//'):
                    manualHeaderFileContents += line

        for propertyName in cppProperties.difference(matchedCppProperties):
            if propertyName in cppDeprecated:
                continue

            if className in IGNORE_MISSING_PROPERTIES and propertyName in IGNORE_MISSING_PROPERTIES[className]:
                continue

            hasSetterFunction = ('set' + propertyName) in encounteredFunctions
            hasGetterFunction = ('get' + propertyName) in encounteredFunctions or ('is' + propertyName) in encounteredFunctions
            if hasSetterFunction and hasGetterFunction:
                continue

            hasManualSetter = manualHeaderFileContents.find('set' + propertyName) >= 0
            hasManualGetter = (manualHeaderFileContents.find('get' + propertyName) >= 0) or (manualHeaderFileContents.find('is' + propertyName) >= 0)
            if hasManualSetter and hasManualGetter:
                continue

            print(className + ': Property ' + propertyName + ' is missing')
            error = True

exit(error)
