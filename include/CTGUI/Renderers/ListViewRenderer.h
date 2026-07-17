// This file is generated, it should not be edited directly.

#ifndef CTGUI_LISTVIEWRENDERER_H
#define CTGUI_LISTVIEWRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiListViewRenderer_create(void);
CTGUI_API tguiRenderer* tguiListViewRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiListViewRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiListViewRenderer_getBorders(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListViewRenderer_setPadding(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiListViewRenderer_getPadding(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListViewRenderer_setBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListViewRenderer_getBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListViewRenderer_setBackgroundColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListViewRenderer_getBackgroundColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListViewRenderer_setSelectedBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListViewRenderer_getSelectedBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListViewRenderer_setSelectedBackgroundColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListViewRenderer_getSelectedBackgroundColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListViewRenderer_setTextColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListViewRenderer_getTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListViewRenderer_setTextColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListViewRenderer_getTextColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListViewRenderer_setSelectedTextColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListViewRenderer_getSelectedTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListViewRenderer_setSelectedTextColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListViewRenderer_getSelectedTextColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListViewRenderer_setHeaderBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListViewRenderer_getHeaderBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListViewRenderer_setHeaderTextColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListViewRenderer_getHeaderTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListViewRenderer_setBorderColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListViewRenderer_getBorderColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListViewRenderer_setSeparatorColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListViewRenderer_getSeparatorColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListViewRenderer_setGridLinesColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListViewRenderer_getGridLinesColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListViewRenderer_setTextureHeaderBackground(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiListViewRenderer_getTextureHeaderBackground(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListViewRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiListViewRenderer_getTextureBackground(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListViewRenderer_setScrollbar(tguiRenderer* thisRenderer, tguiRendererData* value);
CTGUI_API tguiRendererData* tguiListViewRenderer_getScrollbar(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListViewRenderer_setScrollbarWidth(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiListViewRenderer_getScrollbarWidth(const tguiRenderer* thisRenderer);

#endif // CTGUI_LISTVIEWRENDERER_H
