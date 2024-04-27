// This file is generated, it should not be edited directly.

#ifndef CTGUI_RANGESLIDERRENDERER_H
#define CTGUI_RANGESLIDERRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiRangeSliderRenderer_create(void);
CTGUI_API tguiRenderer* tguiRangeSliderRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiRangeSliderRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiRangeSliderRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiRangeSliderRenderer_setTrackColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRangeSliderRenderer_getTrackColor(const tguiRenderer* renderer);

CTGUI_API void tguiRangeSliderRenderer_setTrackColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRangeSliderRenderer_getTrackColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiRangeSliderRenderer_setSelectedTrackColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRangeSliderRenderer_getSelectedTrackColor(const tguiRenderer* renderer);

CTGUI_API void tguiRangeSliderRenderer_setSelectedTrackColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRangeSliderRenderer_getSelectedTrackColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiRangeSliderRenderer_setThumbColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRangeSliderRenderer_getThumbColor(const tguiRenderer* renderer);

CTGUI_API void tguiRangeSliderRenderer_setThumbColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRangeSliderRenderer_getThumbColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiRangeSliderRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRangeSliderRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiRangeSliderRenderer_setBorderColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRangeSliderRenderer_getBorderColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiRangeSliderRenderer_setTextureTrack(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiRangeSliderRenderer_getTextureTrack(const tguiRenderer* renderer);

CTGUI_API void tguiRangeSliderRenderer_setTextureTrackHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiRangeSliderRenderer_getTextureTrackHover(const tguiRenderer* renderer);

CTGUI_API void tguiRangeSliderRenderer_setTextureSelectedTrack(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiRangeSliderRenderer_getTextureSelectedTrack(const tguiRenderer* renderer);

CTGUI_API void tguiRangeSliderRenderer_setTextureSelectedTrackHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiRangeSliderRenderer_getTextureSelectedTrackHover(const tguiRenderer* renderer);

CTGUI_API void tguiRangeSliderRenderer_setTextureThumb(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiRangeSliderRenderer_getTextureThumb(const tguiRenderer* renderer);

CTGUI_API void tguiRangeSliderRenderer_setTextureThumbHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiRangeSliderRenderer_getTextureThumbHover(const tguiRenderer* renderer);

CTGUI_API void tguiRangeSliderRenderer_setThumbWithinTrack(tguiRenderer* renderer, tguiBool value);
CTGUI_API tguiBool tguiRangeSliderRenderer_getThumbWithinTrack(const tguiRenderer* renderer);

#endif // CTGUI_RANGESLIDERRENDERER_H
