// This file is generated, it should not be edited directly.

#ifndef CTGUI_KNOBRENDERER_H
#define CTGUI_KNOBRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiKnobRenderer_create(void);
CTGUI_API tguiRenderer* tguiKnobRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiKnobRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiKnobRenderer_getBorders(const tguiRenderer* thisRenderer);

CTGUI_API void tguiKnobRenderer_setBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiKnobRenderer_getBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiKnobRenderer_setThumbColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiKnobRenderer_getThumbColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiKnobRenderer_setBorderColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiKnobRenderer_getBorderColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiKnobRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiKnobRenderer_getTextureBackground(const tguiRenderer* thisRenderer);

CTGUI_API void tguiKnobRenderer_setTextureForeground(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiKnobRenderer_getTextureForeground(const tguiRenderer* thisRenderer);

CTGUI_API void tguiKnobRenderer_setImageRotation(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiKnobRenderer_getImageRotation(const tguiRenderer* thisRenderer);

#endif // CTGUI_KNOBRENDERER_H
