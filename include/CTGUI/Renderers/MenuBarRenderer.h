// This file is generated, it should not be edited directly.

#ifndef CTGUI_MENUBARRENDERER_H
#define CTGUI_MENUBARRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiMenuBarRenderer_create(void);
CTGUI_API tguiRenderer* tguiMenuBarRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiMenuBarRenderer_setBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiMenuBarRenderer_getBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuBarRenderer_setSelectedBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiMenuBarRenderer_getSelectedBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuBarRenderer_setTextColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiMenuBarRenderer_getTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuBarRenderer_setSelectedTextColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiMenuBarRenderer_getSelectedTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuBarRenderer_setTextColorDisabled(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiMenuBarRenderer_getTextColorDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuBarRenderer_setSeparatorColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiMenuBarRenderer_getSeparatorColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuBarRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiMenuBarRenderer_getTextureBackground(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuBarRenderer_setTextureItemBackground(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiMenuBarRenderer_getTextureItemBackground(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuBarRenderer_setTextureSelectedItemBackground(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiMenuBarRenderer_getTextureSelectedItemBackground(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuBarRenderer_setDistanceToSide(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiMenuBarRenderer_getDistanceToSide(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuBarRenderer_setSeparatorThickness(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiMenuBarRenderer_getSeparatorThickness(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuBarRenderer_setSeparatorVerticalPadding(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiMenuBarRenderer_getSeparatorVerticalPadding(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMenuBarRenderer_setSeparatorSidePadding(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiMenuBarRenderer_getSeparatorSidePadding(const tguiRenderer* thisRenderer);

#endif // CTGUI_MENUBARRENDERER_H
