// This file is generated, it should not be edited directly.

#ifndef CTGUI_SLIDERRENDERER_H
#define CTGUI_SLIDERRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiSliderRenderer_create(void);
CTGUI_API tguiRenderer* tguiSliderRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiSliderRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiSliderRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiSliderRenderer_setTrackColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiSliderRenderer_getTrackColor(const tguiRenderer* renderer);

CTGUI_API void tguiSliderRenderer_setTrackColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiSliderRenderer_getTrackColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiSliderRenderer_setThumbColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiSliderRenderer_getThumbColor(const tguiRenderer* renderer);

CTGUI_API void tguiSliderRenderer_setThumbColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiSliderRenderer_getThumbColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiSliderRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiSliderRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiSliderRenderer_setBorderColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiSliderRenderer_getBorderColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiSliderRenderer_setTextureTrack(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiSliderRenderer_getTextureTrack(const tguiRenderer* renderer);

CTGUI_API void tguiSliderRenderer_setTextureTrackHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiSliderRenderer_getTextureTrackHover(const tguiRenderer* renderer);

CTGUI_API void tguiSliderRenderer_setTextureThumb(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiSliderRenderer_getTextureThumb(const tguiRenderer* renderer);

CTGUI_API void tguiSliderRenderer_setTextureThumbHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiSliderRenderer_getTextureThumbHover(const tguiRenderer* renderer);

CTGUI_API void tguiSliderRenderer_setThumbWithinTrack(tguiRenderer* renderer, tguiBool value);
CTGUI_API tguiBool tguiSliderRenderer_getThumbWithinTrack(const tguiRenderer* renderer);

#endif // CTGUI_SLIDERRENDERER_H
