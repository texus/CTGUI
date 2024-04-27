// This file is generated, it should not be edited directly.

#ifndef CTGUI_KNOBRENDERER_H
#define CTGUI_KNOBRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiKnobRenderer_create(void);
CTGUI_API tguiRenderer* tguiKnobRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiKnobRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiKnobRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiKnobRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiKnobRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiKnobRenderer_setThumbColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiKnobRenderer_getThumbColor(const tguiRenderer* renderer);

CTGUI_API void tguiKnobRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiKnobRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiKnobRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiKnobRenderer_getTextureBackground(const tguiRenderer* renderer);

CTGUI_API void tguiKnobRenderer_setTextureForeground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiKnobRenderer_getTextureForeground(const tguiRenderer* renderer);

CTGUI_API void tguiKnobRenderer_setImageRotation(tguiRenderer* renderer, float value);
CTGUI_API float tguiKnobRenderer_getImageRotation(const tguiRenderer* renderer);

#endif // CTGUI_KNOBRENDERER_H
