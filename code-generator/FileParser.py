#################################################################################################################################
#
# TGUI - Texus' Graphical User Interface
# Copyright (C) 2012-2026 Bruno Van de Velde (vdv_b@tgui.eu)
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

class Documentation:
    def __init__(self, brief):
        self.brief = brief
        self.extra = []

class Segment:
    def __init__(self):
        self.documentation = None

class SegmentAbstractClass:
    pass

class SegmentInherits(Segment):
    def __init__(self, parentName):
        self.parentName = parentName

class SegmentProperty(Segment):
    def __init__(self, propertyType, propertyName, static=False, getterOnly=False, getterUsesIsPrefix=False):
        self.type = propertyType
        self.name = propertyName
        self.static = static
        self.getterOnly = getterOnly
        self.getterUsesIsPrefix = getterUsesIsPrefix

class SegmentPropertyWidgetRenderer(Segment):
    def __init__(self, rendererType, namePrefix = ''):
        self.type = rendererType
        self.prefix = namePrefix

class SegmentFunction(Segment):
    def __init__(self, nameC, name, returnType, params, const, static):
        self.nameC = nameC
        self.name = name
        self.returnType = returnType
        self.params = params # List of tuples containing type, name and default value
        self.const = const
        self.static = static

class SegmentEnum(Segment):
    def __init__(self, enumName, enumValues):
        self.name = enumName
        self.values = enumValues

class SegmentSignal(Segment):
    def __init__(self, signalType, objName, descName, paramNames):
        self.signalType = signalType
        self.objName = objName
        self.descName = descName
        self.paramNames = paramNames


def parseDescriptionFile(descFileName):
    descFile = open(descFileName, 'r')

    segments = []
    documentation = None
    newLineInDocumentation = False
    lineNr = 0
    try:
        for line in descFile.readlines():
            lineNr += 1
            line = line.strip()
            if not line:
                if documentation:
                    raise RuntimeError('Documentation needs to be directly above instruction without an empty line')
                else:
                    continue

            if line.startswith('///'):
                if len(line) == 3:
                    if documentation:
                        if documentation.extra:
                            newLineInDocumentation = True
                        continue
                    else:
                        raise RuntimeError('First line in documentation must not be empty')

                if line[3] != ' ':
                    raise RuntimeError('"///" of documentation should always be followed by a space')
                documentationTextLine = line[4:]

                if documentation:
                    if documentationTextLine.startswith('@'):
                        raise RuntimeError('Only @brief tag is supported, and only as the first line')
                    else:
                        if newLineInDocumentation:
                            newLineInDocumentation = False
                            documentation.extra.append('')
                        documentation.extra.append(documentationTextLine)
                else:
                    if not documentationTextLine.startswith('@brief '):
                        raise RuntimeError('First line in documentation must start with "@brief "')

                    documentation = Documentation(documentationTextLine[7:].strip())
                    newLineInDocumentation = False
            else:
                parts = [part.strip() for part in line.split(' ') if len(part.strip()) > 0]
                if parts[0] == 'inherits':
                    if len(parts) == 2:
                        segments.append(SegmentInherits(parts[1]))
                    else:
                        raise RuntimeError('"inherits" instruction should be followed by parent class name')

                elif parts[0] == 'abstract-class':
                    if len(parts) == 1:
                        segments.append(SegmentAbstractClass())
                    else:
                        raise RuntimeError('"abstract-class" instruction should not have anything behind it')

                elif parts[0] == 'property-widget-renderer':
                    if len(parts) == 2:
                        segments.append(SegmentPropertyWidgetRenderer(parts[1]))
                    elif len(parts) == 3:
                        segments.append(SegmentPropertyWidgetRenderer(parts[1], parts[2]))
                    else:
                        raise RuntimeError('"property-widget-renderer" instruction should be followed renderer type (and optional name prefix)')

                elif parts[0] == 'property' or parts[0] == 'static-property' or parts[0] == 'get-property':
                    if len(parts) == 3:
                        static = (parts[0] == 'static-property')
                        getterOnly = (parts[0] == 'get-property')
                        segments.append(SegmentProperty(parts[1], parts[2], static=static, getterOnly=getterOnly))
                    else:
                        raise RuntimeError('"property" instruction should be followed by type and name')

                elif parts[0] == 'property-bool-is' or parts[0] == 'get-property-bool-is':
                    if len(parts) == 2:
                        getterOnly = (parts[0] == 'get-property-bool-is')
                        segments.append(SegmentProperty("bool", parts[1], getterOnly=getterOnly, getterUsesIsPrefix=True))
                    else:
                        raise RuntimeError('"property-bool-is" instruction should be followed by a name')

                elif parts[0] == 'function' or parts[0] == 'const-function' or parts[0] == 'static-function':
                    if len(parts) < 3:
                        raise RuntimeError('"function" instruction should have format "function returnValue name(params)"')

                    const = (parts[0] == 'const-function')
                    static = (parts[0] == 'static-function')
                    returnType = parts[1]

                    functionPart = ' '.join(parts[2:])
                    openBracketPos = functionPart.find('(')
                    closeBracketPos = functionPart.find(')')
                    if openBracketPos == -1:
                        raise RuntimeError('Opening bracket missing in "function" instruction')
                    if closeBracketPos == -1:
                        raise RuntimeError('Closing bracket missing in "function" instruction')
                    if closeBracketPos <= openBracketPos:
                        raise RuntimeError('"function" instruction had closing bracket before opening one')

                    params = []
                    if closeBracketPos != openBracketPos+1 and functionPart[openBracketPos+1:closeBracketPos] != 'void':
                        for param in functionPart[openBracketPos+1:closeBracketPos].split(','):
                            equalPos = param.find('=')
                            if equalPos != -1:
                                paramTypeAndName = param[:equalPos]
                                defaultValue = param[equalPos+1:].strip()
                            else:
                                paramTypeAndName = param
                                defaultValue = None

                            paramType, paramName = tuple(paramTypeAndName.strip().split(' '))
                            params.append((paramType, paramName, defaultValue))

                    name = functionPart[:openBracketPos].strip()
                    if ' ' in name:
                        nameParts = name.split(' ')
                        if len(nameParts) != 2:
                            raise RuntimeError('Name in "function" should not consists of many parts')
                        nameC = nameParts[0]
                        name = nameParts[1]
                    else:
                        nameC = name

                    segments.append(SegmentFunction(nameC, name, returnType, params, const, static))

                elif parts[0] == 'enum':
                    openBracePos = line.find('{')
                    closeBracePos = line.find('}')
                    if openBracePos == -1:
                        raise RuntimeError('Opening brace missing in "enum" instruction')
                    if closeBracePos == -1:
                        raise RuntimeError('Closing brace missing in "enum" instruction')
                    if closeBracePos <= openBracePos:
                        raise RuntimeError('"enum" instruction had closing brace before opening one')

                    enumName = line[5:openBracePos].strip()
                    enumValues = [value.strip() for value in line[openBracePos+1:closeBracePos].split(',')]
                    segments.append(SegmentEnum(enumName, enumValues))

                elif parts[0].startswith('signal'):
                    if len(parts) != 3 and len(parts) != 4:
                        raise RuntimeError('"function" instruction should have format "Signal eventNamePresentTense eventNamePastTense" or "Signal Type(paramNames) eventNamePresentTense eventNamePastTense"')

                    if len(parts) == 3:
                        signalType = ''
                        paramNames = []
                        objName = parts[1]
                        descName = parts[2]
                    else:
                        openBracketPos = parts[1].find('(')
                        closeBracketPos = parts[1].find(')')
                        if openBracketPos == -1:
                            raise RuntimeError('Opening bracket missing in "signal" instruction')
                        if closeBracketPos == -1:
                            raise RuntimeError('Closing bracket missing in "signal" instruction')
                        if closeBracketPos <= openBracketPos:
                            raise RuntimeError('"signal" instruction had closing bracket before opening one')

                        signalType = parts[1][:openBracketPos]
                        paramNames = parts[1][openBracketPos+1:closeBracketPos].split(',')
                        objName = parts[2]
                        descName = parts[3]

                    segments.append(SegmentSignal(signalType, objName, descName, paramNames))

                else:
                    raise RuntimeError('Instruction "' + parts[0] + '" not recognised')

                documentation = None
                newLineInDocumentation = False

    except RuntimeError as e:
        raise RuntimeError('Error processing "' + descFileName + '" at line ' + str(lineNr) + ': ' + str(e))

    return segments

