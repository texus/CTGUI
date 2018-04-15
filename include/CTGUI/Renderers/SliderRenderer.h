/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2018 Bruno Van de Velde (vdv_b@tgui.eu)
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


#ifndef CTGUI_SLIDER_RENDERER_H
#define CTGUI_SLIDER_RENDERER_H

#include <CTGUI/Config.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Texture.h>

CTGUI_API tguiRenderer* tguiSliderRenderer_create(void);
CTGUI_API tguiRenderer* tguiSliderRenderer_copy(const tguiRenderer* renderer);

CTGUI_API void tguiSliderRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders);
CTGUI_API tguiOutline* tguiSliderRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiSliderRenderer_setTrackColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiSliderRenderer_getTrackColor(const tguiRenderer* renderer);
CTGUI_API void tguiSliderRenderer_setTrackColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiSliderRenderer_getTrackColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiSliderRenderer_setThumbColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiSliderRenderer_getThumbColor(const tguiRenderer* renderer);
CTGUI_API void tguiSliderRenderer_setThumbColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiSliderRenderer_getThumbColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiSliderRenderer_setBorderColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiSliderRenderer_getBorderColor(const tguiRenderer* renderer);
CTGUI_API void tguiSliderRenderer_setBorderColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiSliderRenderer_getBorderColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiSliderRenderer_setTextureTrack(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiSliderRenderer_setTextureTrackHover(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiSliderRenderer_setTextureThumb(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiSliderRenderer_setTextureThumbHover(tguiRenderer* renderer, sfTexture* texture);

#endif // CTGUI_SLIDER_RENDERER_H

