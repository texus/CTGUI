// This file is generated, it should not be edited directly.

#ifndef CTGUI_TREEVIEWRENDERER_H
#define CTGUI_TREEVIEWRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiTreeViewRenderer_create(void);
CTGUI_API tguiRenderer* tguiTreeViewRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiTreeViewRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiTreeViewRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiTreeViewRenderer_setPadding(tguiRenderer* renderer, tguiOutline* outline);
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

CTGUI_API void tguiTreeViewRenderer_setScrollbarWidth(tguiRenderer* renderer, float value);
CTGUI_API float tguiTreeViewRenderer_getScrollbarWidth(const tguiRenderer* renderer);

#endif // CTGUI_TREEVIEWRENDERER_H
