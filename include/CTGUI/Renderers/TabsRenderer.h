// This file is generated, it should not be edited directly.

#ifndef CTGUI_TABSRENDERER_H
#define CTGUI_TABSRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiTabsRenderer_create(void);
CTGUI_API tguiRenderer* tguiTabsRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiTabsRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiTabsRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setBackgroundColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getBackgroundColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setSelectedBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getSelectedBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setSelectedBackgroundColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getSelectedBackgroundColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setBackgroundColorDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getBackgroundColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getTextColor(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setTextColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getTextColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setSelectedTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getSelectedTextColor(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setSelectedTextColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getSelectedTextColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setTextColorDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getTextColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setBorderColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getBorderColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setSelectedBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getSelectedBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setSelectedBorderColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTabsRenderer_getSelectedBorderColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setTextureTab(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiTabsRenderer_getTextureTab(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setTextureTabHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiTabsRenderer_getTextureTabHover(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setTextureSelectedTab(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiTabsRenderer_getTextureSelectedTab(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setTextureSelectedTabHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiTabsRenderer_getTextureSelectedTabHover(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setTextureDisabledTab(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiTabsRenderer_getTextureDisabledTab(const tguiRenderer* renderer);

CTGUI_API void tguiTabsRenderer_setDistanceToSide(tguiRenderer* renderer, float value);
CTGUI_API float tguiTabsRenderer_getDistanceToSide(const tguiRenderer* renderer);

#endif // CTGUI_TABSRENDERER_H
