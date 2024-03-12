/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2024 Bruno Van de Velde (vdv_b@tgui.eu)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef CTGUI_RANGE_SLIDER_RENDERER_H
#define CTGUI_RANGE_SLIDER_RENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiRangeSliderRenderer_create(void);
CTGUI_API tguiRenderer* tguiRangeSliderRenderer_copy(const tguiRenderer* renderer);

CTGUI_API void tguiRangeSliderRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders);
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

CTGUI_API void tguiRangeSliderRenderer_setThumbWithinTrack(tguiRenderer* renderer, tguiBool keepThumbInside);
CTGUI_API tguiBool tguiRangeSliderRenderer_getThumbWithinTrack(const tguiRenderer* renderer);

#endif // CTGUI_RANGE_SLIDER_RENDERER_H

