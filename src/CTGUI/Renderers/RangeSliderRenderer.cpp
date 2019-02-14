/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2019 Bruno Van de Velde (vdv_b@tgui.eu)
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


#include <CTGUI/Renderers/RangeSliderRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/ColorConverter.h>
#include <CTGUI/OutlineStruct.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

#include <TGUI/Renderers/RangeSliderRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::RangeSliderRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiRangeSliderRenderer_create(void)
{
    return new tguiRenderer(new tgui::RangeSliderRenderer);
}

tguiRenderer* tguiRangeSliderRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::RangeSliderRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSliderRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders)
{
    DOWNCAST(renderer->This)->setBorders(borders->This);
}

tguiOutline* tguiRangeSliderRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSliderRenderer_setTrackColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTrackColor({color.r, color.g, color.b, color.a});
}

sfColor tguiRangeSliderRenderer_getTrackColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTrackColor());
}

void tguiRangeSliderRenderer_setTrackColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTrackColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiRangeSliderRenderer_getTrackColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTrackColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSliderRenderer_setSelectedTrackColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedTrackColor({color.r, color.g, color.b, color.a});
}

sfColor tguiRangeSliderRenderer_getSelectedTrackColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedTrackColor());
}

void tguiRangeSliderRenderer_setSelectedTrackColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedTrackColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiRangeSliderRenderer_getSelectedTrackColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedTrackColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSliderRenderer_setThumbColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setThumbColor({color.r, color.g, color.b, color.a});
}

sfColor tguiRangeSliderRenderer_getThumbColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getThumbColor());
}

void tguiRangeSliderRenderer_setThumbColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setThumbColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiRangeSliderRenderer_getThumbColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getThumbColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSliderRenderer_setBorderColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColor({color.r, color.g, color.b, color.a});
}

sfColor tguiRangeSliderRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColor());
}

void tguiRangeSliderRenderer_setBorderColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiRangeSliderRenderer_getBorderColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSliderRenderer_setTextureTrack(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureTrack(*texture->This);
}

void tguiRangeSliderRenderer_setTextureTrackHover(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureTrackHover(*texture->This);
}

void tguiRangeSliderRenderer_setTextureThumb(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureThumb(*texture->This);
}

void tguiRangeSliderRenderer_setTextureThumbHover(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureThumbHover(*texture->This);
}
