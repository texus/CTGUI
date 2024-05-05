// This file is generated, it should not be edited directly.

#ifndef CTGUI_TABSRENDERER_H
#define CTGUI_TABSRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiTabsRenderer_create(void);
CTGUI_API tguiRenderer* tguiTabsRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiTabsRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiTabsRenderer_getBorders(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTabsRenderer_getBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setBackgroundColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTabsRenderer_getBackgroundColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setSelectedBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTabsRenderer_getSelectedBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setSelectedBackgroundColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTabsRenderer_getSelectedBackgroundColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setBackgroundColorDisabled(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTabsRenderer_getBackgroundColorDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setTextColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTabsRenderer_getTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setTextColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTabsRenderer_getTextColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setSelectedTextColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTabsRenderer_getSelectedTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setSelectedTextColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTabsRenderer_getSelectedTextColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setTextColorDisabled(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTabsRenderer_getTextColorDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setBorderColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTabsRenderer_getBorderColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setBorderColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTabsRenderer_getBorderColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setSelectedBorderColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTabsRenderer_getSelectedBorderColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setSelectedBorderColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiTabsRenderer_getSelectedBorderColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setTextureTab(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiTabsRenderer_getTextureTab(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setTextureTabHover(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiTabsRenderer_getTextureTabHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setTextureSelectedTab(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiTabsRenderer_getTextureSelectedTab(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setTextureSelectedTabHover(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiTabsRenderer_getTextureSelectedTabHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setTextureDisabledTab(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiTabsRenderer_getTextureDisabledTab(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTabsRenderer_setDistanceToSide(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiTabsRenderer_getDistanceToSide(const tguiRenderer* thisRenderer);

#endif // CTGUI_TABSRENDERER_H
