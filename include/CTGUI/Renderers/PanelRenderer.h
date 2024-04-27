// This file is generated, it should not be edited directly.

#ifndef CTGUI_PANELRENDERER_H
#define CTGUI_PANELRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiPanelRenderer_create(void);
CTGUI_API tguiRenderer* tguiPanelRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiPanelRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiPanelRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiPanelRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiPanelRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiPanelRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiPanelRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiPanelRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiPanelRenderer_getTextureBackground(const tguiRenderer* renderer);

CTGUI_API void tguiPanelRenderer_setRoundedBorderRadius(tguiRenderer* renderer, float value);
CTGUI_API float tguiPanelRenderer_getRoundedBorderRadius(const tguiRenderer* renderer);

#endif // CTGUI_PANELRENDERER_H
