// This file is generated, it should not be edited directly.

#ifndef CTGUI_SLIDERRENDERER_H
#define CTGUI_SLIDERRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiSliderRenderer_create(void);
CTGUI_API tguiRenderer* tguiSliderRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiSliderRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiSliderRenderer_getBorders(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSliderRenderer_setTrackColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiSliderRenderer_getTrackColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSliderRenderer_setTrackColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiSliderRenderer_getTrackColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSliderRenderer_setThumbColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiSliderRenderer_getThumbColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSliderRenderer_setThumbColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiSliderRenderer_getThumbColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSliderRenderer_setBorderColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiSliderRenderer_getBorderColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSliderRenderer_setBorderColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiSliderRenderer_getBorderColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSliderRenderer_setTextureTrack(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiSliderRenderer_getTextureTrack(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSliderRenderer_setTextureTrackHover(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiSliderRenderer_getTextureTrackHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSliderRenderer_setTextureThumb(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiSliderRenderer_getTextureThumb(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSliderRenderer_setTextureThumbHover(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiSliderRenderer_getTextureThumbHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSliderRenderer_setThumbWithinTrack(tguiRenderer* thisRenderer, tguiBool value);
CTGUI_API tguiBool tguiSliderRenderer_getThumbWithinTrack(const tguiRenderer* thisRenderer);

#endif // CTGUI_SLIDERRENDERER_H
