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


#ifndef CTGUI_LIST_BOX_RENDERER_H
#define CTGUI_LIST_BOX_RENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiListBoxRenderer_create(void);
CTGUI_API tguiRenderer* tguiListBoxRenderer_copy(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders);
CTGUI_API tguiOutline* tguiListBoxRenderer_getBorders(const tguiRenderer* renderer);
CTGUI_API void tguiListBoxRenderer_setPadding(tguiRenderer* renderer, tguiOutline* padding);
CTGUI_API tguiOutline* tguiListBoxRenderer_getPadding(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListBoxRenderer_getBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiListBoxRenderer_setBackgroundColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListBoxRenderer_getBackgroundColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiListBoxRenderer_setSelectedBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListBoxRenderer_getSelectedBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiListBoxRenderer_setSelectedBackgroundColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListBoxRenderer_getSelectedBackgroundColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListBoxRenderer_getTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiListBoxRenderer_setTextColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListBoxRenderer_getTextColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiListBoxRenderer_setSelectedTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListBoxRenderer_getSelectedTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiListBoxRenderer_setSelectedTextColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListBoxRenderer_getSelectedTextColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListBoxRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiListBoxRenderer_getTextureBackground(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setTextStyle(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiListBoxRenderer_getTextStyle(const tguiRenderer* renderer);
CTGUI_API void tguiListBoxRenderer_setSelectedTextStyle(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiListBoxRenderer_getSelectedTextStyle(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiListBoxRenderer_getScrollbar(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setScrollbarWidth(tguiRenderer* renderer, float width);
CTGUI_API float tguiListBoxRenderer_getScrollbarWidth(const tguiRenderer* renderer);

#endif // CTGUI_LIST_BOX_RENDERER_H

