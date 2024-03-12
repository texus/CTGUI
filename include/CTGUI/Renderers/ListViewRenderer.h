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


#ifndef CTGUI_LIST_VIEW_RENDERER_H
#define CTGUI_LIST_VIEW_RENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiListViewRenderer_create(void);
CTGUI_API tguiRenderer* tguiListViewRenderer_copy(const tguiRenderer* renderer);

CTGUI_API void tguiListViewRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders);
CTGUI_API tguiOutline* tguiListViewRenderer_getBorders(const tguiRenderer* renderer);
CTGUI_API void tguiListViewRenderer_setPadding(tguiRenderer* renderer, tguiOutline* padding);
CTGUI_API tguiOutline* tguiListViewRenderer_getPadding(const tguiRenderer* renderer);

CTGUI_API void tguiListViewRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListViewRenderer_getBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiListViewRenderer_setBackgroundColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListViewRenderer_getBackgroundColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiListViewRenderer_setSelectedBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListViewRenderer_getSelectedBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiListViewRenderer_setSelectedBackgroundColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListViewRenderer_getSelectedBackgroundColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiListViewRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListViewRenderer_getTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiListViewRenderer_setTextColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListViewRenderer_getTextColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiListViewRenderer_setSelectedTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListViewRenderer_getSelectedTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiListViewRenderer_setSelectedTextColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListViewRenderer_getSelectedTextColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiListViewRenderer_setHeaderBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListViewRenderer_getHeaderBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiListViewRenderer_setHeaderTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListViewRenderer_getHeaderTextColor(const tguiRenderer* renderer);

CTGUI_API void tguiListViewRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListViewRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiListViewRenderer_setSeparatorColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListViewRenderer_getSeparatorColor(const tguiRenderer* renderer);

CTGUI_API void tguiListViewRenderer_setGridLinesColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListViewRenderer_getGridLinesColor(const tguiRenderer* renderer);

CTGUI_API void tguiListViewRenderer_setTextureHeaderBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiListViewRenderer_getTextureHeaderBackground(const tguiRenderer* renderer);

CTGUI_API void tguiListViewRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiListViewRenderer_getTextureBackground(const tguiRenderer* renderer);

CTGUI_API void tguiListViewRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiListViewRenderer_getScrollbar(const tguiRenderer* renderer);

CTGUI_API void tguiListViewRenderer_setScrollbarWidth(tguiRenderer* renderer, float width);
CTGUI_API float tguiListViewRenderer_getScrollbarWidth(const tguiRenderer* renderer);

#endif // CTGUI_LIST_VIEW_RENDERER_H

