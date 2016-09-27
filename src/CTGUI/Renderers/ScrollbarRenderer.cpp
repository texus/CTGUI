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


#include <CTGUI/Renderers/ScrollbarRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

#include <TGUI/Renderers/ScrollbarRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ScrollbarRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiScrollbarRenderer_create(void)
{
    return new tguiRenderer(new tgui::ScrollbarRenderer);
}

tguiRenderer* tguiScrollbarRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::ScrollbarRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setTrackColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTrackColor({color.r, color.g, color.b, color.a});
}

sfColor tguiScrollbarRenderer_getTrackColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getTrackColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiScrollbarRenderer_setTrackColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTrackColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiScrollbarRenderer_getTrackColorHover(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getTrackColorHover();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setThumbColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setThumbColor({color.r, color.g, color.b, color.a});
}

sfColor tguiScrollbarRenderer_getThumbColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getThumbColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiScrollbarRenderer_setThumbColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setThumbColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiScrollbarRenderer_getThumbColorHover(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getThumbColorHover();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setArrowBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setArrowBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiScrollbarRenderer_getArrowBackgroundColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getArrowBackgroundColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiScrollbarRenderer_setArrowBackgroundColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setArrowBackgroundColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiScrollbarRenderer_getArrowBackgroundColorHover(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getArrowBackgroundColorHover();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setArrowColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setArrowColor({color.r, color.g, color.b, color.a});
}

sfColor tguiScrollbarRenderer_getArrowColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getArrowColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiScrollbarRenderer_setArrowColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setArrowColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiScrollbarRenderer_getArrowColorHover(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getArrowColorHover();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setTextureTrack(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureTrack(*texture->This);
}

void tguiScrollbarRenderer_setTextureTrackHover(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureTrackHover(*texture->This);
}

void tguiScrollbarRenderer_setTextureThumb(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureThumb(*texture->This);
}

void tguiScrollbarRenderer_setTextureThumbHover(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureThumbHover(*texture->This);
}

void tguiScrollbarRenderer_setTextureArrowUp(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowUp(*texture->This);
}

void tguiScrollbarRenderer_setTextureArrowUpHover(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowUpHover(*texture->This);
}

void tguiScrollbarRenderer_setTextureArrowDown(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowDown(*texture->This);
}

void tguiScrollbarRenderer_setTextureArrowDownHover(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowDownHover(*texture->This);
}
