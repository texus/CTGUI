// This file is generated, it should not be edited directly.

#ifndef CTGUI_RANGESLIDERRENDERER_H
#define CTGUI_RANGESLIDERRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiRangeSliderRenderer_create(void);
CTGUI_API tguiRenderer* tguiRangeSliderRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiRangeSliderRenderer_setSelectedTrackColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiRangeSliderRenderer_getSelectedTrackColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiRangeSliderRenderer_setSelectedTrackColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiRangeSliderRenderer_getSelectedTrackColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiRangeSliderRenderer_setTextureSelectedTrack(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiRangeSliderRenderer_getTextureSelectedTrack(const tguiRenderer* thisRenderer);

CTGUI_API void tguiRangeSliderRenderer_setTextureSelectedTrackHover(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiRangeSliderRenderer_getTextureSelectedTrackHover(const tguiRenderer* thisRenderer);

#endif // CTGUI_RANGESLIDERRENDERER_H
