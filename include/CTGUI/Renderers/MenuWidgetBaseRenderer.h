// This file is generated, it should not be edited directly.

#ifndef CTGUI_MENUWIDGETBASERENDERER_H
#define CTGUI_MENUWIDGETBASERENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiMenuWidgetBaseRenderer_create(void);
CTGUI_API tguiRenderer* tguiMenuWidgetBaseRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiMenuWidgetBaseRenderer_setBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiMenuWidgetBaseRenderer_getBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuWidgetBaseRenderer_setSelectedBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiMenuWidgetBaseRenderer_getSelectedBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuWidgetBaseRenderer_setTextColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiMenuWidgetBaseRenderer_getTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuWidgetBaseRenderer_setSelectedTextColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiMenuWidgetBaseRenderer_getSelectedTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuWidgetBaseRenderer_setTextColorDisabled(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiMenuWidgetBaseRenderer_getTextColorDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuWidgetBaseRenderer_setSeparatorColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiMenuWidgetBaseRenderer_getSeparatorColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuWidgetBaseRenderer_setTextureItemBackground(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiMenuWidgetBaseRenderer_getTextureItemBackground(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuWidgetBaseRenderer_setTextureSelectedItemBackground(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiMenuWidgetBaseRenderer_getTextureSelectedItemBackground(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuWidgetBaseRenderer_setDistanceToSide(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiMenuWidgetBaseRenderer_getDistanceToSide(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuWidgetBaseRenderer_setSeparatorThickness(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiMenuWidgetBaseRenderer_getSeparatorThickness(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuWidgetBaseRenderer_setSeparatorVerticalPadding(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiMenuWidgetBaseRenderer_getSeparatorVerticalPadding(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuWidgetBaseRenderer_setSeparatorSidePadding(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiMenuWidgetBaseRenderer_getSeparatorSidePadding(const tguiRenderer* thisRenderer);

#endif // CTGUI_MENUWIDGETBASERENDERER_H
