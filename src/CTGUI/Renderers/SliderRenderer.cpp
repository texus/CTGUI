/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2016 Bruno Van de Velde (vdv_b@tgui.eu)
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


#include <CTGUI/Renderers/SliderRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

#include <TGUI/Renderers/SliderRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::SliderRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiSliderRenderer_create(void)
{
    return new tguiRenderer(new tgui::SliderRenderer);
}

tguiRenderer* tguiSliderRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::SliderRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setBorders(tguiRenderer* renderer, tguiOutline borders)
{
    DOWNCAST(renderer->This)->setBorders({borders.left, borders.top, borders.right, borders.bottom});
}

tguiOutline tguiSliderRenderer_getBorders(const tguiRenderer* renderer)
{
    tgui::Borders borders = DOWNCAST(renderer->This)->getBorders();
    return {borders.left, borders.top, borders.right, borders.bottom};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setTrackColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTrackColor({color.r, color.g, color.b, color.a});
}

sfColor tguiSliderRenderer_getTrackColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getTrackColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiSliderRenderer_setTrackColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTrackColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiSliderRenderer_getTrackColorHover(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getTrackColorHover();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setThumbColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setThumbColor({color.r, color.g, color.b, color.a});
}

sfColor tguiSliderRenderer_getThumbColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getThumbColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiSliderRenderer_setThumbColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setThumbColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiSliderRenderer_getThumbColorHover(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getThumbColorHover();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setBorderColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColor({color.r, color.g, color.b, color.a});
}

sfColor tguiSliderRenderer_getBorderColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBorderColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiSliderRenderer_setBorderColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiSliderRenderer_getBorderColorHover(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBorderColorHover();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setTextureTrack(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureTrack(*texture->This);
}

void tguiSliderRenderer_setTextureTrackHover(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureTrackHover(*texture->This);
}

void tguiSliderRenderer_setTextureThumb(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureThumb(*texture->This);
}

void tguiSliderRenderer_setTextureThumbHover(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureThumbHover(*texture->This);
}
