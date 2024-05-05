// This file is generated, it should not be edited directly.

#ifndef CTGUI_TREEVIEWRENDERER_H
#define CTGUI_TREEVIEWRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiTreeViewRenderer_create(void);
CTGUI_API tguiRenderer* tguiTreeViewRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiTreeViewRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiTreeViewRenderer_getBorders(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTreeViewRenderer_setPadding(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiTreeViewRenderer_getPadding(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTreeViewRenderer_setBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTreeViewRenderer_getBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTreeViewRenderer_setBackgroundColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTreeViewRenderer_getBackgroundColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTreeViewRenderer_setSelectedBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTreeViewRenderer_getSelectedBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTreeViewRenderer_setSelectedBackgroundColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTreeViewRenderer_getSelectedBackgroundColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTreeViewRenderer_setTextColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTreeViewRenderer_getTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTreeViewRenderer_setTextColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTreeViewRenderer_getTextColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTreeViewRenderer_setSelectedTextColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTreeViewRenderer_getSelectedTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTreeViewRenderer_setSelectedTextColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTreeViewRenderer_getSelectedTextColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTreeViewRenderer_setBorderColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTreeViewRenderer_getBorderColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTreeViewRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiTreeViewRenderer_getTextureBackground(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTreeViewRenderer_setTextureBranchExpanded(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiTreeViewRenderer_getTextureBranchExpanded(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTreeViewRenderer_setTextureBranchCollapsed(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiTreeViewRenderer_getTextureBranchCollapsed(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTreeViewRenderer_setTextureLeaf(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiTreeViewRenderer_getTextureLeaf(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTreeViewRenderer_setScrollbar(tguiRenderer* thisRenderer, const tguiRendererData* value);
CTGUI_API const tguiRendererData* tguiTreeViewRenderer_getScrollbar(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTreeViewRenderer_setScrollbarWidth(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiTreeViewRenderer_getScrollbarWidth(const tguiRenderer* thisRenderer);

#endif // CTGUI_TREEVIEWRENDERER_H
