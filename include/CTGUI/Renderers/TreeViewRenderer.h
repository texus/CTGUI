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


#ifndef CTGUI_TREE_VIEW_RENDERER_H
#define CTGUI_TREE_VIEW_RENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiTreeViewRenderer_create(void);
CTGUI_API tguiRenderer* tguiTreeViewRenderer_copy(const tguiRenderer* renderer);

CTGUI_API void tguiTreeViewRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders);
CTGUI_API tguiOutline* tguiTreeViewRenderer_getBorders(const tguiRenderer* renderer);
CTGUI_API void tguiTreeViewRenderer_setPadding(tguiRenderer* renderer, tguiOutline* padding);
CTGUI_API tguiOutline* tguiTreeViewRenderer_getPadding(const tguiRenderer* renderer);

CTGUI_API void tguiTreeViewRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTreeViewRenderer_getBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiTreeViewRenderer_setBackgroundColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTreeViewRenderer_getBackgroundColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiTreeViewRenderer_setSelectedBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTreeViewRenderer_getSelectedBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiTreeViewRenderer_setSelectedBackgroundColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTreeViewRenderer_getSelectedBackgroundColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiTreeViewRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTreeViewRenderer_getTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiTreeViewRenderer_setTextColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTreeViewRenderer_getTextColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiTreeViewRenderer_setSelectedTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTreeViewRenderer_getSelectedTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiTreeViewRenderer_setSelectedTextColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTreeViewRenderer_getSelectedTextColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiTreeViewRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTreeViewRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiTreeViewRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiTreeViewRenderer_getTextureBackground(const tguiRenderer* renderer);

CTGUI_API void tguiTreeViewRenderer_setTextureBranchExpanded(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiTreeViewRenderer_getTextureBranchExpanded(const tguiRenderer* renderer);
CTGUI_API void tguiTreeViewRenderer_setTextureBranchCollapsed(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiTreeViewRenderer_getTextureBranchCollapsed(const tguiRenderer* renderer);
CTGUI_API void tguiTreeViewRenderer_setTextureLeaf(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiTreeViewRenderer_getTextureLeaf(const tguiRenderer* renderer);

CTGUI_API void tguiTreeViewRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiTreeViewRenderer_getScrollbar(const tguiRenderer* renderer);

CTGUI_API void tguiTreeViewRenderer_setScrollbarWidth(tguiRenderer* renderer, float width);
CTGUI_API float tguiTreeViewRenderer_getScrollbarWidth(const tguiRenderer* renderer);

#endif // CTGUI_TREE_VIEW_RENDERER_H

