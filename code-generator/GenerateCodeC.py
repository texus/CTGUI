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
                propertyType = segment.type
                propertyName = segment.name
                # TODO: Add documentation
                if propertyType == 'Outline':
                    generatedLines.extend([
                        'CTGUI_API void tgui' + className + '_set' + propertyName + '(tguiRenderer* renderer, tguiOutline* outline);',
                        'CTGUI_API tguiOutline* tgui' + className + '_get' + propertyName + '(const tguiRenderer* renderer);'
                    ])
                elif propertyType == 'Color':
                    generatedLines.extend([
                        'CTGUI_API void tgui' + className + '_set' + propertyName + '(tguiRenderer* renderer, tguiColor* color);',
                        'CTGUI_API tguiColor* tgui' + className + '_get' + propertyName + '(const tguiRenderer* renderer);'
                    ])
                elif propertyType == 'float':
                    generatedLines.extend([
                        'CTGUI_API void tgui' + className + '_set' + propertyName + '(tguiRenderer* renderer, float value);',
                        'CTGUI_API float tgui' + className + '_get' + propertyName + '(const tguiRenderer* renderer);'
                    ])
                elif propertyType == 'TextStyle':
                    generatedLines.extend([
                        'CTGUI_API void tgui' + className + '_set' + propertyName + '(tguiRenderer* renderer, tguiUint32 style);',
                        'CTGUI_API tguiUint32 tgui' + className + '_get' + propertyName + '(const tguiRenderer* renderer);'
                    ])
                elif propertyType == 'RendererData':
                    generatedLines.extend([
                        'CTGUI_API void tgui' + className + '_set' + propertyName + '(tguiRenderer* renderer, tguiRendererData* rendererData);',
                        'CTGUI_API tguiRendererData* tgui' + className + '_get' + propertyName + '(const tguiRenderer* renderer);'
                    ])
                elif propertyType == 'Texture':
                    generatedLines.extend([
                        'CTGUI_API void tgui' + className + '_set' + propertyName + '(tguiRenderer* renderer, tguiTexture* texture);',
                        'CTGUI_API tguiTexture* tgui' + className + '_get' + propertyName + '(const tguiRenderer* renderer);'
                    ])
                elif propertyType == 'bool':
                    generatedLines.extend([
                        'CTGUI_API void tgui' + className + '_set' + propertyName + '(tguiRenderer* renderer, tguiBool value);',
                        'CTGUI_API tguiBool tgui' + className + '_get' + propertyName + '(const tguiRenderer* renderer);'
                    ])
                else:
                    raise RuntimeError('Unsupported property type: ' + segment.type)
            else:
                raise RuntimeError('Unsupported instruction in description file')

            # Add a newline behind each segment
            generatedLines.append('')
    except RuntimeError as e:
        raise RuntimeError('Error generating "' + destFile + '": ' + str(e))

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

    usesOutline = False
    usesRendererData = False
    for segment in segments:
        if isinstance(segment, SegmentProperty):
            propertyType = segment.type
            if propertyType == 'Outline':
                usesOutline = True
            elif propertyType == 'RendererData':
                usesRendererData = True

    generatedLines = [
        '// This file is generated, it should not be edited directly.',
        '',
        '#include <CTGUI/Renderers/' + className + '.h>',
        '#include <CTGUI/Renderers/RendererStruct.hpp>',
    ]
    if usesOutline:
        generatedLines.append('#include <CTGUI/OutlineStruct.hpp>')
    if usesRendererData:
        generatedLines.append('#include <CTGUI/RendererDataStruct.hpp>')
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
        'tguiRenderer* tgui' + className + '_copy(const tguiRenderer* renderer)',
        '{',
        '    return new tguiRenderer(new tgui::' + className + '(*DOWNCAST(renderer->This)));',
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
                propertyType = segment.type
                propertyName = segment.name
                if propertyType == 'Outline':
                    generatedLines.extend([
                        'void tgui' + className + '_set' + propertyName + '(tguiRenderer* renderer, tguiOutline* outline)',
                        '{',
                        '    DOWNCAST(renderer->This)->set' + propertyName + '(outline->This);',
                        '}',
                        '',
                        'tguiOutline* tgui' + className + '_get' + propertyName + '(const tguiRenderer* renderer)',
                        '{',
                        '    return new tguiOutline(DOWNCAST(renderer->This)->get' + propertyName + '());',
                        '}',
                    ])
                elif propertyType == 'Color':
                    generatedLines.extend([
                        'void tgui' + className + '_set' + propertyName + '(tguiRenderer* renderer, tguiColor* color)',
                        '{',
                        '    DOWNCAST(renderer->This)->set' + propertyName + '(ctgui::toCppColor(color));',
                        '}',
                        '',
                        'tguiColor* tgui' + className + '_get' + propertyName + '(const tguiRenderer* renderer)',
                        '{',
                        '    return ctgui::fromCppColor(DOWNCAST(renderer->This)->get' + propertyName + '());',
                        '}',
                    ])
                elif propertyType == 'float':
                    generatedLines.extend([
                        'void tgui' + className + '_set' + propertyName + '(tguiRenderer* renderer, float value)',
                        '{',
                        '    DOWNCAST(renderer->This)->set' + propertyName + '(value);',
                        '}',
                        '',
                        'float tgui' + className + '_get' + propertyName + '(const tguiRenderer* renderer)',
                        '{',
                        '    return DOWNCAST(renderer->This)->get' + propertyName + '();',
                        '}',
                    ])
                elif propertyType == 'TextStyle':
                    generatedLines.extend([
                        'void tgui' + className + '_set' + propertyName + '(tguiRenderer* renderer, tguiUint32 style)',
                        '{',
                        '    DOWNCAST(renderer->This)->set' + propertyName + '(style);',
                        '}',
                        '',
                        'tguiUint32 tgui' + className + '_get' + propertyName + '(const tguiRenderer* renderer)',
                        '{',
                        '    return DOWNCAST(renderer->This)->get' + propertyName + '();',
                        '}',
                    ])
                elif propertyType == 'RendererData':
                    generatedLines.extend([
                        'void tgui' + className + '_set' + propertyName + '(tguiRenderer* renderer, tguiRendererData* rendererData)',
                        '{',
                        '    DOWNCAST(renderer->This)->set' + propertyName + '(rendererData->This);',
                        '}',
                        '',
                        'tguiRendererData* tgui' + className + '_get' + propertyName + '(const tguiRenderer* renderer)',
                        '{',
                        '    return new tguiRendererData(DOWNCAST(renderer->This)->get' + propertyName + '());',
                        '}',
                    ])
                elif propertyType == 'Texture':
                    generatedLines.extend([
                        'void tgui' + className + '_set' + propertyName + '(tguiRenderer* renderer, tguiTexture* texture)',
                        '{',
                        '    DOWNCAST(renderer->This)->set' + propertyName + '(*texture->This);',
                        '}',
                        '',
                        'tguiTexture* tgui' + className + '_get' + propertyName + '(const tguiRenderer* renderer)',
                        '{',
                        '    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->get' + propertyName + '()));',
                        '}',
                    ])
                elif propertyType == 'bool':
                    generatedLines.extend([
                        'void tgui' + className + '_set' + propertyName + '(tguiRenderer* renderer, tguiBool value)',
                        '{',
                        '    DOWNCAST(renderer->This)->set' + propertyName + '(value != 0);',
                        '}',
                        '',
                        'tguiBool tgui' + className + '_get' + propertyName + '(const tguiRenderer* renderer)',
                        '{',
                        '    return DOWNCAST(renderer->This)->get' + propertyName + '();',
                        '}',
                    ])
                else:
                    raise RuntimeError('Unsupported property type: ' + segment.type)
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

#################################################################################################################################

if __name__ == "__main__":
    main()
