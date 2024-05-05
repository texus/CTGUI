// This file is generated, it should not be edited directly.

#ifndef CTGUI_PROGRESSBARRENDERER_H
#define CTGUI_PROGRESSBARRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiProgressBarRenderer_create(void);
CTGUI_API tguiRenderer* tguiProgressBarRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiProgressBarRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiProgressBarRenderer_getBorders(const tguiRenderer* thisRenderer);

CTGUI_API void tguiProgressBarRenderer_setTextColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiProgressBarRenderer_getTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiProgressBarRenderer_setTextColorFilled(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiProgressBarRenderer_getTextColorFilled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiProgressBarRenderer_setBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiProgressBarRenderer_getBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiProgressBarRenderer_setFillColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiProgressBarRenderer_getFillColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiProgressBarRenderer_setBorderColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiProgressBarRenderer_getBorderColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiProgressBarRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiProgressBarRenderer_getTextureBackground(const tguiRenderer* thisRenderer);

CTGUI_API void tguiProgressBarRenderer_setTextureFill(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiProgressBarRenderer_getTextureFill(const tguiRenderer* thisRenderer);

CTGUI_API void tguiProgressBarRenderer_setTextStyle(tguiRenderer* thisRenderer, tguiUint32 value);
CTGUI_API tguiUint32 tguiProgressBarRenderer_getTextStyle(const tguiRenderer* thisRenderer);

CTGUI_API void tguiProgressBarRenderer_setTextOutlineColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiProgressBarRenderer_getTextOutlineColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiProgressBarRenderer_setTextOutlineThickness(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiProgressBarRenderer_getTextOutlineThickness(const tguiRenderer* thisRenderer);

#endif // CTGUI_PROGRESSBARRENDERER_H
