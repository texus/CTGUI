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


#ifndef CTGUI_TEXT_H
#define CTGUI_TEXT_H

#include <CTGUI/Global.h>

CTGUI_API float tguiText_getStaticExtraHorizontalPadding(const tguiFont* font, unsigned int characterSize);
CTGUI_API float tguiText_getStaticExtraHorizontalOffset(const tguiFont* font, unsigned int characterSize);
CTGUI_API float tguiText_getStaticExtraVerticalPadding(unsigned int characterSize);
CTGUI_API float tguiText_getStaticLineHeight(const tguiFont* font, unsigned int characterSize);
CTGUI_API float tguiText_getStaticLineWidth(tguiUtf32 text, const tguiFont* font, unsigned int characterSize, tguiUint32 style);
CTGUI_API unsigned int tguiText_findBestTextSize(const tguiFont* font, float height, int fit);
CTGUI_API tguiUtf32 tguiText_wordWrap(float maxWidth, tguiUtf32 text, const tguiFont* font, unsigned int textSize, tguiBool bold);

CTGUI_API tguiText* tguiText_create(void);
CTGUI_API void tguiText_free(tguiText* text);

CTGUI_API void tguiText_setPosition(tguiText* text, tguiVector2f position);
CTGUI_API tguiVector2f tguiText_getPosition(const tguiText* text);

CTGUI_API tguiVector2f tguiText_getSize(const tguiText* text);

CTGUI_API void tguiText_setString(tguiText* text, tguiUtf32 string);
CTGUI_API tguiUtf32 tguiText_getString(const tguiText* text);

CTGUI_API void tguiText_setCharacterSize(tguiText* text, unsigned int size);
CTGUI_API unsigned int tguiText_getCharacterSize(const tguiText* text);

CTGUI_API void tguiText_setColor(tguiText* text, tguiColor* color);
CTGUI_API tguiColor* tguiText_getColor(const tguiText* text);

CTGUI_API void tguiText_setOpacity(tguiText* text, float opacity);
CTGUI_API float tguiText_getOpacity(const tguiText* text);

CTGUI_API void tguiText_setFont(tguiText* text, tguiFont* font);
CTGUI_API tguiFont* tguiText_getFont(const tguiText* text);

CTGUI_API void tguiText_setStyle(tguiText* text, tguiUint32 style);
CTGUI_API tguiUint32 tguiText_getStyle(const tguiText* text);

CTGUI_API void tguiText_setOutlineColor(tguiText* text, tguiColor* color);
CTGUI_API tguiColor* tguiText_getOutlineColor(const tguiText* text);

CTGUI_API void tguiText_setOutlineThickness(tguiText* text, float thickness);
CTGUI_API float tguiText_getOutlineThickness(const tguiText* text);

CTGUI_API tguiVector2f tguiText_findCharacterPos(const tguiText* text, size_t index);

CTGUI_API float tguiText_getExtraHorizontalPadding(const tguiText* text);
CTGUI_API float tguiText_getExtraHorizontalOffset(const tguiText* text);
CTGUI_API float tguiText_getLineHeight(const tguiText* text);
CTGUI_API float tguiText_getLineWidth(const tguiText* text);

#endif // CTGUI_TEXT_H

