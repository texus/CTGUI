#################################################################################################################################
#
# TGUI - Texus' Graphical User Interface
# Copyright (C) 2012-2024 Bruno Van de Velde (vdv_b@tgui.eu)
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
from FileParser import *

def generateAdditionalIncludesInSourceFile(segments):
    usedTypes = set()
    usesRenderer = False
    for segment in segments:
        if isinstance(segment, SegmentPropertyWidgetRenderer):
            if segment.prefix:
                usesRenderer = True
        elif isinstance(segment, SegmentProperty):
            usedTypes.add(segment.type)
        elif isinstance(segment, SegmentFunction):
            usedTypes.add(segment.returnType)
            for param in segment.params:
                usedTypes.add(param[0])

    generatedLines = []
    if 'Outline' in usedTypes:
        generatedLines.append('#include <CTGUI/OutlineStruct.hpp>')
    if 'RendererData' in usedTypes:
        generatedLines.append('#include <CTGUI/RendererDataStruct.hpp>')
    if 'Texture' in usedTypes:
        generatedLines.append('#include <CTGUI/TextureStruct.hpp>')
    if 'Font' in usedTypes:
        generatedLines.append('#include <CTGUI/FontStruct.hpp>')
    if 'Layout' in usedTypes or 'Layout2d' in usedTypes:
        generatedLines.append('#include <CTGUI/LayoutStruct.hpp>')

    if usesRenderer:
        generatedLines.append('#include <CTGUI/RendererStruct.hpp>')

    return generatedLines

#################################################################################################################################

def generateFunctionSignatureC(className, funcName, funcParams, returnType, constFunc, selfType, selfName, enums):
    TYPE_MAP = {
        'void' : 'void',
        'bool' : 'tguiBool',
        'int' : 'int',
        'uint' : 'unsigned int',
        'float' : 'float',
        'size_t' : 'size_t',
        'string' : 'tguiUtf32',
        'TextStyle' : 'tguiUint32',
        'Char32' : 'tguiChar32',
        'Color' : 'const tguiColor*',
        'Texture' : 'const tguiTexture*',
        'Outline' : 'const tguiOutline*',
        'Layout' : 'const tguiLayout*',
        'Layout2d' : 'const tguiLayout2d*',
        'Font' : 'const tguiFont*',
        'RendererData' : 'const tguiRendererData*',
        'Widget' : 'tguiWidget*',
        'ConstWidget' : 'const tguiWidget*',
        'Vector2f' : 'tguiVector2f',
        'AnyObject' : 'void*',
        'List<string>' : 'const tguiUtf32*',
        'List<Widget>' : 'const tguiWidget*',
        'Set<size_t>' : 'const size_t*',
        'ScrollbarPolicy': 'tguiScrollbarPolicy',
        'VerticalAlignment': 'tguiVerticalAlignment',
        'HorizontalAlignment': 'tguiHorizontalAlignment',
    }

    params = selfType + '* ' + selfName
    if constFunc:
        params = 'const ' + params

    if funcParams:
        for param in funcParams:
            if param[0] in enums:
                params += ', tgui' + className + param[0] + ' ' + param[1]
            else:
                if param[0] not in TYPE_MAP:
                    raise RuntimeError('Type "' + param[0] + '" does not exist')

                params += ', ' + TYPE_MAP[param[0]] + ' ' + param[1]
                if param[0].startswith('List<') or param[0].startswith('Set<'):
                    params += ', size_t ' + param[1] + 'Length'

    if returnType.startswith('List<') or returnType.startswith('Set<'):
        params += ', size_t* returnCount'

    if returnType in enums:
        return 'tgui' + className + returnType + ' tgui' + className + '_' + funcName + '(' + params + ')'
    else:
        return TYPE_MAP[returnType] + ' tgui' + className + '_' + funcName + '(' + params + ')'

#################################################################################################################################

def generateFunctionCallC(className, funcName, funcParams, returnType, selfName, enums):
    generatedLines = []
    funcCallParams = []
    for param in funcParams:
        paramType, paramName = param
        if paramType in enums:
            funcCallParams.append('static_cast<tgui::' + className + '::' + paramType + '>(' + paramName + ')')
        elif paramType == 'size_t' or paramType == 'int' or paramType == 'uint' or paramType == 'float' \
        or paramType == 'Char32' or paramType == 'TextStyle':
            funcCallParams.append(paramName)
        elif paramType == 'bool':
            funcCallParams.append(paramName + ' != 0')
        elif paramType == 'string':
            funcCallParams.append('ctgui::toCppStr(' + paramName + ')')
        elif paramType == 'Color':
            funcCallParams.append('ctgui::toCppColor(' + paramName + ')')
        elif paramType == 'Texture' or paramType == 'Font':
            funcCallParams.append('*' + paramName + '->This')
        elif paramType == 'Widget' or  paramType == 'ConstWidget' or paramType == 'Outline' \
        or paramType == 'Layout' or paramType == 'Layout2d' or paramType == 'RendererData':
            funcCallParams.append(paramName + '->This')
        elif paramType == 'Vector2f':
            funcCallParams.append('{' + paramName + '.x, ' + paramName + '.y}')
        elif paramType == 'VerticalAlignment':
            funcCallParams.append('static_cast<tgui::VerticalAlignment>(' + paramName + ')')
        elif paramType == 'HorizontalAlignment':
            funcCallParams.append('static_cast<tgui::HorizontalAlignment>(' + paramName + ')')
        elif paramType == 'ScrollbarPolicy':
            funcCallParams.append('static_cast<tgui::Scrollbar::Policy>(' + paramName + ')')
        elif paramType == 'AnyObject':
            funcCallParams.append(paramName)
        elif paramType == 'List<string>':
            localVariableName = 'converted' + paramName.capitalize()
            generatedLines.append('    std::vector<tgui::String> ' + localVariableName + ';')
            generatedLines.append('    ' + localVariableName + '.reserve(' + paramName + 'Length);')
            generatedLines.append('    for (size_t i = 0; i < ' + paramName + 'Length; ++i)')
            generatedLines.append('        ' + localVariableName + '.push_back(ctgui::toCppStr(' + paramName + '[i]));')
            generatedLines.append('')
            funcCallParams.append('std::move(' + localVariableName + ')')
        elif paramType == 'Set<size_t>':
            localVariableName = 'converted' + paramName.capitalize()
            generatedLines.append('    std::set<size_t> ' + localVariableName + ';')
            generatedLines.append('    for (size_t i = 0; i < ' + paramName + 'Length; ++i)')
            generatedLines.append('        ' + localVariableName + '.insert(' + paramName + '[i]);')
            generatedLines.append('')
            funcCallParams.append('std::move(' + localVariableName + ')')
        else:
            raise RuntimeError('Type ' + paramType + ' is not supported as function parameter')

    funcCall = 'DOWNCAST(' + selfName + '->This)->' + funcName + '(' + ', '.join(funcCallParams) + ')'

    returnType = returnType
    if returnType in enums:
        generatedLines.append('    return static_cast<tgui' + className + returnType + '>(' + funcCall + ');')
    elif returnType == 'void':
        generatedLines.append('    ' + funcCall + ';')
    elif returnType == 'bool' or returnType == 'size_t' or returnType == 'int' or returnType == 'uint' \
    or returnType == 'float' or returnType == 'Char32' or returnType == 'TextStyle':
        generatedLines.append('    return ' + funcCall + ';')
    elif returnType == 'Widget':
        generatedLines.extend([
            '    tgui::Widget::Ptr widgetToReturn = ' + funcCall + ';',
            '    if (widgetToReturn)',
            '        return new tguiWidget(widgetToReturn);',
            '    else',
            '        return nullptr;'
        ])
    elif returnType == 'Vector2f':
        generatedLines.extend([
            '    const tgui::Vector2f value = ' + funcCall + ';',
            '    return {value.x, value.y};'
        ])
    elif returnType == 'string':
        generatedLines.append('    return ctgui::fromCppStr(' + funcCall + ');')
    elif returnType == 'Color':
        generatedLines.append('    return ctgui::fromCppColor(' + funcCall + ');')
    elif returnType == 'Outline':
        generatedLines.append('    return new tguiOutline(' + funcCall + ');')
    elif returnType == 'Layout':
        generatedLines.append('    return new tguiLayout(' + funcCall + ');')
    elif returnType == 'Layout2d':
        generatedLines.append('    return new tguiLayout2d(' + funcCall + ');')
    elif returnType == 'Texture':
        generatedLines.append('    return new tguiTexture(std::make_unique<tgui::Texture>(' + funcCall + '));')
    elif returnType == 'Font':
        generatedLines.append('    return new tguiFont(std::make_unique<tgui::Font>(' + funcCall + '));')
    elif returnType == 'RendererData':
        generatedLines.append('    return new tguiRendererData(' + funcCall + ');')
    elif returnType == 'VerticalAlignment':
        generatedLines.append('    return static_cast<tguiVerticalAlignment>(' + funcCall + ');')
    elif returnType == 'HorizontalAlignment':
        generatedLines.append('    return static_cast<tguiHorizontalAlignment>(' + funcCall + ');')
    elif returnType == 'ScrollbarPolicy':
        generatedLines.append('    return static_cast<tguiScrollbarPolicy>(' + funcCall + ');')
    elif returnType == 'AnyObject':
        bracketPos = funcCall.find(funcName) + len(funcName)
        generatedLines.extend([
            '    try',
            '    {',
            '        // User data will be of type void* when it was set in the C binding',
            '        return ' + funcCall[:bracketPos] + '<void*>' + funcCall[bracketPos:] + ';',
            '    }',
            '    catch (const std::bad_cast&)',
            '    {',
            '        try',
            '        {',
            '            // User data will be of type tgui::String when it was set by loading the widget from a form',
            '            return const_cast<void*>(static_cast<const void*>(ctgui::fromCppStr(' + funcCall[:bracketPos] + '<tgui::String>' + funcCall[bracketPos:] + ')));',
            '        }',
            '        catch (const std::bad_cast&)',
            '        {',
            '           return nullptr;',
            '        }',
            '    }',
            ''
        ])
    elif returnType == 'List<Widget>':
        generatedLines.extend([
            '    const auto& widgets = ' + funcCall + ';',
            '',
            '    static std::vector<tguiWidget*> cWidgets;',
            '    cWidgets.clear();',
            '    cWidgets.reserve(widgets.size());',
            '    for (const auto& widget : widgets)',
            '        cWidgets.emplace_back(ctgui::addWidgetRef(widget));',
            '',
            '*returnCount = cWidgets.size();',
            'return cWidgets.data();',
        ])
    elif returnType == 'List<string>':
        generatedLines.extend([
            '    static std::vector<tgui::String> cppStrings;',
            '    cppStrings = ' + funcCall + ';',
            '',
            '    static std::vector<tguiUtf32> cStrings;',
            '    cStrings.clear();',
            '    cStrings.reserve(cppStrings.size());',
            '    for (const auto& item : cppStrings)',
            '        cStrings.emplace_back(reinterpret_cast<tguiUtf32>(item.c_str()));',
            '',
            '*returnCount = cStrings.size();',
            'return cStrings.data();',
        ])
    elif returnType == 'List<size_t>' or returnType == 'Set<size_t>':
        generatedLines.extend([
            '    const auto& indices = ' + funcCall + ';',
            '',
            '    static std::vector<size_t> cIndices;',
            '    cIndices.clear();',
            '    cIndices.reserve(indices.size());',
            '    for (size_t index : indices)',
            '        cIndices.emplace_back(index);',
            '',
            '*returnCount = cIndices.size();',
            'return cIndices.data();',
        ])
    else:
        raise RuntimeError('function return type ' + returnType + ' is not supported')

    return generatedLines

#################################################################################################################################

def generatePropertySourceC(className, segment, enums, selfType, selfName):
    propertyType = segment.type
    propertyName = segment.name
    if segment.getterUsesIsPrefix and propertyType != 'bool':
        raise RuntimeError('"is" prefix in property is only allowed for bool types')

    generatedLines = []
    generatedLines.append(generateFunctionSignatureC(className, 'set' + propertyName, [(propertyType, 'value')], 'void', False, selfType, selfName, enums))
    generatedLines.append('{')
    generatedLines.extend(generateFunctionCallC(className, 'set' + propertyName, [(propertyType, 'value')], 'void', selfName, enums))
    generatedLines.append('}')
    generatedLines.append('')
    if propertyType == 'bool' and segment.getterUsesIsPrefix:
        generatedLines.append(generateFunctionSignatureC(className, 'is' + propertyName, [], propertyType, True, selfType, selfName, {}))
    else:
        generatedLines.append(generateFunctionSignatureC(className, 'get' + propertyName, [], propertyType, True, selfType, selfName, enums))
    generatedLines.append('{')
    if propertyType == 'bool' and segment.getterUsesIsPrefix:
        generatedLines.extend(generateFunctionCallC(className, 'is' + propertyName, [], propertyType, selfName, {}))
    else:
        generatedLines.extend(generateFunctionCallC(className, 'get' + propertyName, [], propertyType, selfName, enums))
    generatedLines.append('}')
    return generatedLines

#################################################################################################################################

def generatePropertyHeaderC(className, segment, enums, selfType, selfName):
    propertyType = segment.type
    propertyName = segment.name
    if segment.getterUsesIsPrefix and propertyType != 'bool':
        raise RuntimeError('"is" prefix in property is only allowed for bool types')

    if propertyType == 'bool' and segment.getterUsesIsPrefix:
        return [
            'CTGUI_API ' + generateFunctionSignatureC(className, 'set' + propertyName, [(propertyType, 'value')], 'void', False, selfType, selfName, {}) + ';',
            'CTGUI_API ' + generateFunctionSignatureC(className, 'is' + propertyName, [], propertyType, True, selfType, selfName, {}) + ';'
        ]
    else:
        return [
            'CTGUI_API ' + generateFunctionSignatureC(className, 'set' + propertyName, [(propertyType, 'value')], 'void', False, selfType, selfName, enums) + ';',
            'CTGUI_API ' + generateFunctionSignatureC(className, 'get' + propertyName, [], propertyType, True, selfType, selfName, enums) + ';'
        ]

#################################################################################################################################

def generateRendererHeaderFileC(srcFile, destFile, className):
    segments = parseDescriptionFile(srcFile)

    generatedLines = [
        '// This file is generated, it should not be edited directly.',
        '',
        '#ifndef CTGUI_' + className.upper() + '_H',
        '#define CTGUI_' + className.upper() + '_H',
        '',
        '#include <CTGUI/Global.h>',
        '',
        'CTGUI_API tguiRenderer* tgui' + className + '_create(void);',
        'CTGUI_API tguiRenderer* tgui' + className + '_copy(const tguiRenderer* other);',
        ''
    ]

    try:
        for segment in segments:
            if isinstance(segment, SegmentInherits):
                continue # We don't use this information in the C header file
            if isinstance(segment, SegmentPropertyWidgetRenderer):
                raise RuntimeError('property-widget-renderer is not supported in a renderer')
            elif isinstance(segment, SegmentProperty):
                generatedLines.extend(generatePropertyHeaderC(className, segment, {}, 'tguiRenderer', 'thisRenderer'))
            elif isinstance(segment, SegmentFunction):
                # Functions are allowed in the base class, but not in the derived classes which are only allowed to use properties
                if className == 'WidgetRenderer':
                    generatedLines.append('CTGUI_API ' + generateFunctionSignatureC(className, segment.nameC, segment.params, segment.returnType, segment.const, 'tguiRenderer', 'thisRenderer', {}) + ';')
                else:
                    raise RuntimeError('function is not supported in a renderer')
            elif isinstance(segment, SegmentAbstractClass):
                raise RuntimeError('abstract-class is not supported in a renderer')
            elif isinstance(segment, SegmentEnum):
                raise RuntimeError('enum is not supported in a renderer')
            else:
                raise RuntimeError('Unsupported instruction in description file')

            # Add a newline behind each segment
            generatedLines.append('')
    except RuntimeError as e:
        raise RuntimeError('Error generating "' + destFile + '": ' + str(e))

    assert(srcFile.endswith('.desc'))
    if os.path.isfile(srcFile[:-5] + '.extra.h'):
        extraFile = open(srcFile[:-5] + '.extra.h')
        for line in extraFile.readlines():
            generatedLines.append(line.rstrip())

    if generatedLines[-1] != '':
        generatedLines.append('')

    generatedLines.append('#endif // CTGUI_' + className.upper() + '_H')

    outFile = open(destFile, 'w')
    for line in generatedLines:
        if line:
            outFile.write(line + '\n')
        else:
            outFile.write('\n')

#################################################################################################################################

def generateRendererSourceFileC(srcFile, destFile, className):
    segments = parseDescriptionFile(srcFile)

    generatedLines = [
        '// This file is generated, it should not be edited directly.',
        '',
        '#include <CTGUI/Renderers/' + className + '.h>',
        '#include <CTGUI/RendererStruct.hpp>',
    ]
    generatedLines.extend(generateAdditionalIncludesInSourceFile(segments))
    generatedLines.extend([
        '',
        '#include <TGUI/Renderers/' + className + '.hpp>',
        '',
        '#define DOWNCAST(x) static_cast<tgui::' + className + '*>(x)',
        '',
        '/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////',
        '',
        'tguiRenderer* tgui' + className + '_create(void)',
        '{',
        '    return new tguiRenderer(new tgui::' + className + ');',
        '}',
        '',
        'tguiRenderer* tgui' + className + '_copy(const tguiRenderer* thisRenderer)',
        '{',
        '    return new tguiRenderer(new tgui::' + className + '(*DOWNCAST(thisRenderer->This)));',
        '}',
        '',
        '/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////',
        '',
    ])

    try:
        for segment in segments:
            if isinstance(segment, SegmentInherits):
                continue # We don't use this information in the C source file
            if isinstance(segment, SegmentPropertyWidgetRenderer):
                raise RuntimeError('property-widget-renderer is not supported in a renderer')
            elif isinstance(segment, SegmentProperty):
                generatedLines.extend(generatePropertySourceC(className, segment, {}, 'tguiRenderer', 'thisRenderer'))
            elif isinstance(segment, SegmentFunction):
                # Functions are allowed in the base class, but not in the derived classes which are only allowed to use properties
                if className == 'WidgetRenderer':
                    generatedLines.append(generateFunctionSignatureC(className, segment.nameC, segment.params, segment.returnType, segment.const, 'tguiRenderer', 'thisRenderer', {}))
                    generatedLines.append('{')
                    generatedLines.extend(generateFunctionCallC(className, segment.name, segment.params, segment.returnType, 'thisRenderer', {}))
                    generatedLines.append('}')
                else:
                    raise RuntimeError('function is not supported in a renderer')
            elif isinstance(segment, SegmentAbstractClass):
                raise RuntimeError('abstract-class is not supported in a renderer')
            elif isinstance(segment, SegmentEnum):
                raise RuntimeError('enum is not supported in a renderer')
            else:
                raise RuntimeError('Unsupported instruction in description file')

            # Add a newline behind each segment
            generatedLines.extend([
                '',
                '/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////',
                ''
            ])
    except RuntimeError as e:
        raise RuntimeError('Error generating "' + destFile + '": ' + str(e))

    assert(srcFile.endswith('.desc'))
    if os.path.isfile(srcFile[:-5] + '.extra.cpp'):
        extraFile = open(srcFile[:-5] + '.extra.cpp')
        for line in extraFile.readlines():
            generatedLines.append(line.rstrip())

    # Remove empty lines at the end of the file
    lastNonEmptyLineIdx = len(generatedLines)
    for i in range(len(generatedLines), 0, -1):
        if generatedLines[i-1].strip():
            break
        else:
            lastNonEmptyLineIdx = i-1
    generatedLines = generatedLines[:lastNonEmptyLineIdx]

    outFile = open(destFile, 'w')
    for line in generatedLines:
        if line:
            outFile.write(line + '\n')
        else:
            outFile.write('\n')

#################################################################################################################################

def generateWidgetHeaderFileC(srcFile, destFile, className):
    segments = parseDescriptionFile(srcFile)

    abstractClass = False
    usesAlignment = False
    usesScrollbarPolicy = False
    for segment in segments:
        if isinstance(segment, SegmentAbstractClass):
            abstractClass = True
        elif isinstance(segment, SegmentProperty):
            propertyType = segment.type
            if propertyType == 'HorizontalAlignment' or propertyType == 'VerticalAlignment':
                usesAlignment = True
            elif propertyType == 'ScrollbarPolicy':
                usesScrollbarPolicy = True
        elif isinstance(segment, SegmentFunction):
            typesToCheck = [segment.returnType]
            for param in segment.params:
                typesToCheck.append(param[0])
            for typeName in typesToCheck:
                if typeName == 'HorizontalAlignment' or typeName == 'VerticalAlignment':
                    usesAlignment = True
                elif typeName == 'ScrollbarPolicy':
                    usesScrollbarPolicy = True

    generatedLines = [
        '// This file is generated, it should not be edited directly.',
        '',
        '#ifndef CTGUI_' + className.upper() + '_H',
        '#define CTGUI_' + className.upper() + '_H',
        '',
        '#include <CTGUI/Widget.h>',
    ]
    if usesAlignment:
        generatedLines.append('#include <CTGUI/Alignment.h>')
    if usesScrollbarPolicy:
        generatedLines.append('#include <CTGUI/ScrollbarPolicy.h>')
    generatedLines.append('')

    enums = {}
    for segment in segments:
        if isinstance(segment, SegmentEnum):
            enums[segment.name] = segment.values
            generatedLines.extend([
                'typedef enum',
                '{',
            ])
            for value in segment.values:
                generatedLines.append('    tgui' + className + segment.name + value + ',')
            generatedLines.extend([
                '} tgui' + className + segment.name + ';',
                ''
            ])

    if not abstractClass:
        generatedLines.extend([
            'CTGUI_API tguiWidget* tgui' + className + '_create(void);',
            ''
        ])

    try:
        for segment in segments:
            if isinstance(segment, SegmentInherits):
                continue # We don't use this information in the C header file
            if isinstance(segment, SegmentPropertyWidgetRenderer):
                if not segment.prefix:
                    continue # We don't create a function in C for our own renderer (as the one from tguiWidget can be used)
                generatedLines.extend([
                    'CTGUI_API tguiRenderer* tgui' + className + '_get' + segment.prefix + 'Renderer(const tguiWidget* thisWidget);',
                    'CTGUI_API tguiRenderer* tgui' + className + '_get' + segment.prefix + 'SharedRenderer(const tguiWidget* thisWidget);'
                ])
            elif isinstance(segment, SegmentProperty):
                generatedLines.extend(generatePropertyHeaderC(className, segment, enums, 'tguiWidget', 'thisWidget'))
            elif isinstance(segment, SegmentFunction):
                generatedLines.append('CTGUI_API ' + generateFunctionSignatureC(className, segment.nameC, segment.params, segment.returnType, segment.const, 'tguiWidget', 'thisWidget', enums) + ';')
            elif isinstance(segment, SegmentAbstractClass) or isinstance(segment, SegmentEnum):
                continue # Already handled earlier
            else:
                raise RuntimeError('Unsupported instruction in description file')

            # Add a newline behind each segment
            generatedLines.append('')
    except RuntimeError as e:
        raise RuntimeError('Error generating "' + destFile + '": ' + str(e))

    assert(srcFile.endswith('.desc'))
    if os.path.isfile(srcFile[:-5] + '.extra.h'):
        extraFile = open(srcFile[:-5] + '.extra.h')
        for line in extraFile.readlines():
            generatedLines.append(line.rstrip())

    generatedLines.append('#endif // CTGUI_' + className.upper() + '_H')

    outFile = open(destFile, 'w')
    for line in generatedLines:
        if line:
            outFile.write(line + '\n')
        else:
            outFile.write('\n')

#################################################################################################################################

def generateWidgetSourceFileC(srcFile, destFile, className):
    segments = parseDescriptionFile(srcFile)

    abstractClass = False
    enums = {}
    for segment in segments:
        if isinstance(segment, SegmentAbstractClass):
            abstractClass = True
        elif isinstance(segment, SegmentEnum):
            enums[segment.name] = segment.values

    generatedLines = [
        '// This file is generated, it should not be edited directly.',
        '',
        '#include <CTGUI/Widgets/' + className + '.h>',
        '#include <CTGUI/WidgetStruct.hpp>',
    ]
    generatedLines.extend(generateAdditionalIncludesInSourceFile(segments))
    generatedLines.extend([
        '',
        '#include <TGUI/Widgets/' + className + '.hpp>',
        '',
        '#define DOWNCAST(x) std::static_pointer_cast<tgui::' + className + '>(x)',
        '',
        '/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////',
        '',
    ])
    if not abstractClass:
        generatedLines.extend([
            'tguiWidget* tgui' + className + '_create(void)',
            '{',
            '    return ctgui::addWidgetRef(tgui::' + className + '::create());',
            '}',
            '',
            '/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////',
            '',
        ])

    try:
        for segment in segments:
            if isinstance(segment, SegmentInherits):
                continue # We don't use this information in the C source file
            if isinstance(segment, SegmentPropertyWidgetRenderer):
                if not segment.prefix:
                    continue # We don't create a function in C for our own renderer (as the one from tguiWidget can be used)
                generatedLines.extend([
                    'tguiRenderer* tgui' + className + '_get' + segment.prefix + 'Renderer(const tguiWidget* thisWidget)',
                    '{',
                    '    return new tguiRenderer(DOWNCAST(thisWidget->This)->get' + segment.prefix + 'Renderer(), false);',
                    '}',
                    '',
                    'tguiRenderer* tgui' + className + '_get' + segment.prefix + 'SharedRenderer(const tguiWidget* thisWidget)',
                    '{',
                    '    return new tguiRenderer(DOWNCAST(thisWidget->This)->get' + segment.prefix + 'SharedRenderer(), false);',
                    '}'
                ])

            elif isinstance(segment, SegmentProperty):
                generatedLines.extend(generatePropertySourceC(className, segment, enums, 'tguiWidget', 'thisWidget'))
            elif isinstance(segment, SegmentFunction):
                generatedLines.append(generateFunctionSignatureC(className, segment.nameC, segment.params, segment.returnType, segment.const, 'tguiWidget', 'thisWidget', enums))
                generatedLines.append('{')
                generatedLines.extend(generateFunctionCallC(className, segment.name, segment.params, segment.returnType, 'thisWidget', enums))
                generatedLines.append('}')
            elif isinstance(segment, SegmentAbstractClass) or isinstance(segment, SegmentEnum):
                continue # Already handled earlier
            else:
                raise RuntimeError('Unsupported instruction in description file')

            # Add a newline behind each segment
            generatedLines.extend([
                '',
                '/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////',
                ''
            ])
    except RuntimeError as e:
        raise RuntimeError('Error generating "' + destFile + '": ' + str(e))

    assert(srcFile.endswith('.desc'))
    if os.path.isfile(srcFile[:-5] + '.extra.cpp'):
        extraFile = open(srcFile[:-5] + '.extra.cpp')
        for line in extraFile.readlines():
            generatedLines.append(line.rstrip())

    # Remove empty lines at the end of the file
    lastNonEmptyLineIdx = len(generatedLines)
    for i in range(len(generatedLines), 0, -1):
        if generatedLines[i-1].strip():
            break
        else:
            lastNonEmptyLineIdx = i-1
    generatedLines = generatedLines[:lastNonEmptyLineIdx]

    outFile = open(destFile, 'w')
    for line in generatedLines:
        if line:
            outFile.write(line + '\n')
        else:
            outFile.write('\n')

#################################################################################################################################

def main():
    for filename in os.listdir('Renderers'):
        if filename.endswith('.desc'):
            srcFile = os.path.join('Renderers', filename)
            className = filename[:-5]
            destSrcFile = os.path.join('..', 'src', 'CTGUI', 'Renderers', className + '.cpp')
            destIncludeFile = os.path.join('..', 'include', 'CTGUI', 'Renderers', className + '.h')
            generateRendererSourceFileC(srcFile, destSrcFile, className)
            generateRendererHeaderFileC(srcFile, destIncludeFile, className)

    for filename in os.listdir('Widgets'):
        if filename.endswith('.desc'):
            srcFile = os.path.join('Widgets', filename)
            className = filename[:-5]
            destSrcFile = os.path.join('..', 'src', 'CTGUI', 'Widgets', className + '.cpp')
            destIncludeFile = os.path.join('..', 'include', 'CTGUI', 'Widgets', className + '.h')
            generateWidgetSourceFileC(srcFile, destSrcFile, className)
            generateWidgetHeaderFileC(srcFile, destIncludeFile, className)

#################################################################################################################################

if __name__ == "__main__":
    main()
