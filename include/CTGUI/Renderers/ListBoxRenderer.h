// This file is generated, it should not be edited directly.

#ifndef CTGUI_LISTBOXRENDERER_H
#define CTGUI_LISTBOXRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiListBoxRenderer_create(void);
CTGUI_API tguiRenderer* tguiListBoxRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiListBoxRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiListBoxRenderer_getBorders(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListBoxRenderer_setPadding(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiListBoxRenderer_getPadding(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListBoxRenderer_setBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListBoxRenderer_getBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListBoxRenderer_setBackgroundColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListBoxRenderer_getBackgroundColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListBoxRenderer_setSelectedBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListBoxRenderer_getSelectedBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListBoxRenderer_setSelectedBackgroundColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListBoxRenderer_getSelectedBackgroundColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListBoxRenderer_setTextColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListBoxRenderer_getTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListBoxRenderer_setTextColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListBoxRenderer_getTextColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListBoxRenderer_setSelectedTextColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListBoxRenderer_getSelectedTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListBoxRenderer_setSelectedTextColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListBoxRenderer_getSelectedTextColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListBoxRenderer_setBorderColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiListBoxRenderer_getBorderColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListBoxRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiListBoxRenderer_getTextureBackground(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListBoxRenderer_setTextStyle(tguiRenderer* thisRenderer, tguiUint32 value);
CTGUI_API tguiUint32 tguiListBoxRenderer_getTextStyle(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListBoxRenderer_setSelectedTextStyle(tguiRenderer* thisRenderer, tguiUint32 value);
CTGUI_API tguiUint32 tguiListBoxRenderer_getSelectedTextStyle(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListBoxRenderer_setScrollbar(tguiRenderer* thisRenderer, const tguiRendererData* value);
CTGUI_API const tguiRendererData* tguiListBoxRenderer_getScrollbar(const tguiRenderer* thisRenderer);

CTGUI_API void tguiListBoxRenderer_setScrollbarWidth(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiListBoxRenderer_getScrollbarWidth(const tguiRenderer* thisRenderer);

#endif // CTGUI_LISTBOXRENDERER_H
