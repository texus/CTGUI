import os
import re
from FileParser import *

TGUI_DIR = '../../TGUI'

VALID_CPP_TYPES = {
    'float' : ['float'],
    'int' : ['int'],
    'uint' : ['unsigned int'],
    'bool' : ['bool'],
    'Color' : ['Color'],
    'Texture' : ['const Texture&'],
    'TextStyle' : ['TextStyles'],
    'RendererData' : ['std::shared_ptr<RendererData>'],
    'Outline' : ['const Outline&', 'const Borders&', 'const Padding&'],
}

error = False
for filename in os.listdir('Renderers'):
    if filename.endswith('.desc'):
        descFile = os.path.join('Renderers', filename)
        className = filename[:-5]
        cppFile = os.path.join(os.path.join(TGUI_DIR, 'include', 'TGUI', 'Renderers', className + '.hpp'))
        cppProperties = set()
        cppPropertyTypes = {}
        cppInherits = None
        for line in open(cppFile, 'r').readlines():
            if line.strip().startswith('//'):
                continue

            match = re.search(' : public ([a-zA-Z]+)', line)
            if match:
                cppInherits = match.group(1)

            match = re.search('void set(.*)\((.*) [a-zA-Z]+\)', line)
            if match:
                propertyName = match.group(1)
                propertyType = match.group(2)
                cppProperties.add(propertyName)
                cppPropertyTypes[propertyName] = propertyType

        assert(cppInherits)

        matchedCppProperties = set()
        segments = parseDescriptionFile(descFile)
        inherits = None
        for segment in segments:
            if isinstance(segment, SegmentInherits):
                inherits = segment.parentName

            if isinstance(segment, SegmentProperty):
                propertyType = segment.type
                propertyName = segment.name
                if propertyName not in cppProperties:
                    print(className + ': Property ' + propertyName + ' does not exist in c++')
                    error = True
                    continue

                matchedCppProperties.add(propertyName)
                
                validCppTypes = VALID_CPP_TYPES[propertyType]
                if cppPropertyTypes[propertyName] not in validCppTypes:
                    print(className + ': Type mismatch for property ' + propertyName)
                    error = True
                    continue

        if cppInherits != 'WidgetRenderer' and cppInherits != inherits:
            if not inherits:
                print(className + ': Missing inheritance from ' + cppInherits)
            else:
                print(className + ': Inheritance type mismatch')
            error = True

        for propertyName in cppProperties.difference(matchedCppProperties):
            print(className + ': Property ' + propertyName + ' is missing')
            error = True

exit(error)
