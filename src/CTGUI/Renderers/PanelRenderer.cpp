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


#include <CTGUI/Renderers/PanelRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>

#include <TGUI/Renderers/PanelRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::PanelRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiPanelRenderer_create(void)
{
    return new tguiRenderer(new tgui::PanelRenderer);
}

tguiRenderer* tguiPanelRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::PanelRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelRenderer_setBorders(tguiRenderer* renderer, tguiOutline borders)
{
    DOWNCAST(renderer->This)->setBorders({borders.left, borders.top, borders.right, borders.bottom});
}

tguiOutline tguiPanelRenderer_getBorders(const tguiRenderer* renderer)
{
    tgui::Borders borders = DOWNCAST(renderer->This)->getBorders();
    return {borders.left, borders.top, borders.right, borders.bottom};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiPanelRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBackgroundColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelRenderer_setBorderColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColor({color.r, color.g, color.b, color.a});
}

sfColor tguiPanelRenderer_getBorderColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBorderColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}
