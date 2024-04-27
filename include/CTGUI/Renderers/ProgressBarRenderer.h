// This file is generated, it should not be edited directly.

#ifndef CTGUI_PROGRESSBARRENDERER_H
#define CTGUI_PROGRESSBARRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiProgressBarRenderer_create(void);
CTGUI_API tguiRenderer* tguiProgressBarRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiProgressBarRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiProgressBarRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiProgressBarRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiProgressBarRenderer_getTextColor(const tguiRenderer* renderer);

CTGUI_API void tguiProgressBarRenderer_setTextColorFilled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiProgressBarRenderer_getTextColorFilled(const tguiRenderer* renderer);

CTGUI_API void tguiProgressBarRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiProgressBarRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiProgressBarRenderer_setFillColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiProgressBarRenderer_getFillColor(const tguiRenderer* renderer);

CTGUI_API void tguiProgressBarRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiProgressBarRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiProgressBarRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiProgressBarRenderer_getTextureBackground(const tguiRenderer* renderer);

CTGUI_API void tguiProgressBarRenderer_setTextureFill(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiProgressBarRenderer_getTextureFill(const tguiRenderer* renderer);

CTGUI_API void tguiProgressBarRenderer_setTextStyle(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiProgressBarRenderer_getTextStyle(const tguiRenderer* renderer);

CTGUI_API void tguiProgressBarRenderer_setTextOutlineColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiProgressBarRenderer_getTextOutlineColor(const tguiRenderer* renderer);

CTGUI_API void tguiProgressBarRenderer_setTextOutlineThickness(tguiRenderer* renderer, float value);
CTGUI_API float tguiProgressBarRenderer_getTextOutlineThickness(const tguiRenderer* renderer);

#endif // CTGUI_PROGRESSBARRENDERER_H
