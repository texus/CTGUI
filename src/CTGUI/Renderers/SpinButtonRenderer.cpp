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


#include <CTGUI/Renderers/SpinButtonRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

#include <TGUI/Renderers/SpinButtonRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::SpinButtonRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiSpinButtonRenderer_create(void)
{
    return new tguiRenderer(new tgui::SpinButtonRenderer);
}

tguiRenderer* tguiSpinButtonRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::SpinButtonRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setBorders(tguiRenderer* renderer, tguiOutline borders)
{
    DOWNCAST(renderer->This)->setBorders({borders.left, borders.top, borders.right, borders.bottom});
}

tguiOutline tguiSpinButtonRenderer_getBorders(const tguiRenderer* renderer)
{
    tgui::Borders borders = DOWNCAST(renderer->This)->getBorders();
    return {borders.left, borders.top, borders.right, borders.bottom};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setSpaceBetweenArrows(tguiRenderer* renderer, float spaceBetweenArrows)
{
    DOWNCAST(renderer->This)->setSpaceBetweenArrows(spaceBetweenArrows);
}

float tguiSpinButtonRenderer_getSpaceBetweenArrows(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getSpaceBetweenArrows();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiSpinButtonRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBackgroundColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiSpinButtonRenderer_setBackgroundColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiSpinButtonRenderer_getBackgroundColorHover(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBackgroundColorHover();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setArrowColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setArrowColor({color.r, color.g, color.b, color.a});
}

sfColor tguiSpinButtonRenderer_getArrowColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getArrowColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiSpinButtonRenderer_setArrowColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setArrowColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiSpinButtonRenderer_getArrowColorHover(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getArrowColorHover();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setBorderColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColor({color.r, color.g, color.b, color.a});
}

sfColor tguiSpinButtonRenderer_getBorderColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBorderColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setTextureArrowUp(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowUp(*texture->This);
}

void tguiSpinButtonRenderer_setTextureArrowUpHover(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowUpHover(*texture->This);
}

void tguiSpinButtonRenderer_setTextureArrowDown(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowDown(*texture->This);
}

void tguiSpinButtonRenderer_setTextureArrowDownHover(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowDownHover(*texture->This);
}
