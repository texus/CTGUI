// This file is generated, it should not be edited directly.

#ifndef CTGUI_PANELRENDERER_H
#define CTGUI_PANELRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiPanelRenderer_create(void);
CTGUI_API tguiRenderer* tguiPanelRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiPanelRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiPanelRenderer_getBorders(const tguiRenderer* thisRenderer);

CTGUI_API void tguiPanelRenderer_setBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiPanelRenderer_getBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiPanelRenderer_setBorderColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiPanelRenderer_getBorderColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiPanelRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiPanelRenderer_getTextureBackground(const tguiRenderer* thisRenderer);

CTGUI_API void tguiPanelRenderer_setRoundedBorderRadius(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiPanelRenderer_getRoundedBorderRadius(const tguiRenderer* thisRenderer);

#endif // CTGUI_PANELRENDERER_H
