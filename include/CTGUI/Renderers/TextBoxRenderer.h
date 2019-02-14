/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2019 Bruno Van de Velde (vdv_b@tgui.eu)
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


#ifndef CTGUI_TEXT_BOX_RENDERER_H
#define CTGUI_TEXT_BOX_RENDERER_H

#include <CTGUI/Config.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Texture.h>

CTGUI_API tguiRenderer* tguiTextBoxRenderer_create(void);
CTGUI_API tguiRenderer* tguiTextBoxRenderer_copy(const tguiRenderer* renderer);

CTGUI_API void tguiTextBoxRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders);
CTGUI_API tguiOutline* tguiTextBoxRenderer_getBorders(const tguiRenderer* renderer);
CTGUI_API void tguiTextBoxRenderer_setPadding(tguiRenderer* renderer, tguiOutline* padding);
CTGUI_API tguiOutline* tguiTextBoxRenderer_getPadding(const tguiRenderer* renderer);

CTGUI_API void tguiTextBoxRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiTextBoxRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiTextBoxRenderer_setTextColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiTextBoxRenderer_getTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiTextBoxRenderer_setSelectedTextColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiTextBoxRenderer_getSelectedTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiTextBoxRenderer_setSelectedTextBackgroundColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiTextBoxRenderer_getSelectedTextBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiTextBoxRenderer_setBorderColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiTextBoxRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiTextBoxRenderer_setCaretColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiTextBoxRenderer_getCaretColor(const tguiRenderer* renderer);

CTGUI_API void tguiTextBoxRenderer_setTextureBackground(tguiRenderer* renderer, sfTexture* texture);

CTGUI_API void tguiTextBoxRenderer_setCaretWidth(const tguiRenderer* renderer, float width);
CTGUI_API float tguiTextBoxRenderer_getCaretWidth(const tguiRenderer* renderer);

CTGUI_API void tguiTextBoxRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiTextBoxRenderer_getScrollbar(const tguiRenderer* renderer);

CTGUI_API void tguiTextBoxRenderer_setScrollbarWidth(tguiRenderer* renderer, float width);
CTGUI_API float tguiTextBoxRenderer_getScrollbarWidth(const tguiRenderer* renderer);

#endif // CTGUI_TEXT_BOX_RENDERER_H

