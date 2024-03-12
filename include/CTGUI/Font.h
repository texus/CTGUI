/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2024 Bruno Van de Velde (vdv_b@tgui.eu)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef CTGUI_FONT_H
#define CTGUI_FONT_H

#include <CTGUI/Global.h>

typedef struct
{
    float         advance;      //!< Offset to move horizontally to the next character
    tguiFloatRect bounds;       //!< Bounding rectangle of the glyph, in coordinates relative to the baseline
    tguiUIntRect  textureRect;  //!< Texture coordinates of the glyph inside the font's texture
} tguiFontGlyph;

CTGUI_API void tguiFont_setGlobalFont(tguiFont* font);
CTGUI_API tguiFont* tguiFont_getGlobalFont(void);

CTGUI_API tguiFont* tguiFont_createNull(void);
CTGUI_API tguiFont* tguiFont_createFromFile(tguiUtf32 filename);
CTGUI_API tguiFont* tguiFont_createFromMemory(tguiUint8* data, size_t dataSize);

CTGUI_API void tguiFont_free(tguiFont* font);

CTGUI_API tguiUtf32 tguiFont_getId(const tguiFont* font);
CTGUI_API tguiFontGlyph tguiFont_getGlyph(const tguiFont* font, unsigned int characterSize, tguiBool bold, float outlineThickness);
CTGUI_API float tguiFont_getKerning(const tguiFont* font, tguiUint32 first, tguiUint32 second, unsigned int characterSize, tguiBool bold);
CTGUI_API float tguiFont_getLineSpacing(const tguiFont* font, unsigned int characterSize);
CTGUI_API float tguiFont_getFontHeight(const tguiFont* font, unsigned int characterSize);

CTGUI_API void tguiFont_setSmooth(tguiFont* font, tguiBool smooth);
CTGUI_API tguiBool tguiFont_isSmooth(const tguiFont* font);

#endif // CTGUI_FONT_H

