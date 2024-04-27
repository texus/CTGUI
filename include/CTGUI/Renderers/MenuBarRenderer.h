// This file is generated, it should not be edited directly.

#ifndef CTGUI_MENUBARRENDERER_H
#define CTGUI_MENUBARRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiMenuBarRenderer_create(void);
CTGUI_API tguiRenderer* tguiMenuBarRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiMenuBarRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiMenuBarRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setSelectedBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiMenuBarRenderer_getSelectedBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiMenuBarRenderer_getTextColor(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setSelectedTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiMenuBarRenderer_getSelectedTextColor(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setTextColorDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiMenuBarRenderer_getTextColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setSeparatorColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiMenuBarRenderer_getSeparatorColor(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiMenuBarRenderer_getTextureBackground(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setTextureItemBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiMenuBarRenderer_getTextureItemBackground(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setTextureSelectedItemBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiMenuBarRenderer_getTextureSelectedItemBackground(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setDistanceToSide(tguiRenderer* renderer, float value);
CTGUI_API float tguiMenuBarRenderer_getDistanceToSide(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setSeparatorThickness(tguiRenderer* renderer, float value);
CTGUI_API float tguiMenuBarRenderer_getSeparatorThickness(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setSeparatorVerticalPadding(tguiRenderer* renderer, float value);
CTGUI_API float tguiMenuBarRenderer_getSeparatorVerticalPadding(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setSeparatorSidePadding(tguiRenderer* renderer, float value);
CTGUI_API float tguiMenuBarRenderer_getSeparatorSidePadding(const tguiRenderer* renderer);

#endif // CTGUI_MENUBARRENDERER_H
