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


#include <CTGUI/Renderers/ChildWindowRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/RendererDataStruct.h>
#include <CTGUI/OutlineStruct.h>
#include <CTGUI/ColorConverter.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

#include <TGUI/Renderers/ChildWindowRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ChildWindowRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiChildWindowRenderer_create(void)
{
    return new tguiRenderer(new tgui::ChildWindowRenderer);
}

tguiRenderer* tguiChildWindowRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::ChildWindowRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders)
{
    DOWNCAST(renderer->This)->setBorders(borders->This);
}

tguiOutline* tguiChildWindowRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setTitleBarColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTitleBarColor({color.r, color.g, color.b, color.a});
}

sfColor tguiChildWindowRenderer_getTitleBarColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTitleBarColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setTitleColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTitleColor({color.r, color.g, color.b, color.a});
}

sfColor tguiChildWindowRenderer_getTitleColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTitleColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiChildWindowRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setBorderColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColor({color.r, color.g, color.b, color.a});
}

sfColor tguiChildWindowRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setBorderColorFocused(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorFocused({color.r, color.g, color.b, color.a});
}

sfColor tguiChildWindowRenderer_getBorderColorFocused(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColorFocused());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setBorderBelowTitleBar(tguiRenderer* renderer, float border)
{
    DOWNCAST(renderer->This)->setBorderBelowTitleBar(border);
}

float tguiChildWindowRenderer_getBorderBelowTitleBar(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getBorderBelowTitleBar();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setTitleBarHeight(tguiRenderer* renderer, float height)
{
    DOWNCAST(renderer->This)->setTitleBarHeight(height);
}

float tguiChildWindowRenderer_getTitleBarHeight(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTitleBarHeight();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setDistanceToSide(tguiRenderer* renderer, float distance)
{
    DOWNCAST(renderer->This)->setDistanceToSide(distance);
}

float tguiChildWindowRenderer_getDistanceToSide(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getDistanceToSide();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setPaddingBetweenButtons(tguiRenderer* renderer, float padding)
{
    DOWNCAST(renderer->This)->setPaddingBetweenButtons(padding);
}

float tguiChildWindowRenderer_getPaddingBetweenButtons(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getPaddingBetweenButtons();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setMinimumResizableBorderWidth(tguiRenderer* renderer, float minimumBorderWidth)
{
    DOWNCAST(renderer->This)->setMinimumResizableBorderWidth(minimumBorderWidth);
}

float tguiChildWindowRenderer_getMinimumResizableBorderWidth(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getMinimumResizableBorderWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setShowTextOnTitleButtons(tguiRenderer* renderer, sfBool showTitle)
{
    DOWNCAST(renderer->This)->setShowTextOnTitleButtons(showTitle);
}

sfBool tguiChildWindowRenderer_getShowTextOnTitleButtons(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getShowTextOnTitleButtons();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setTextureTitleBar(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureTitleBar(*texture->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setTextureBackground(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBackground(*texture->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setCloseButton(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setCloseButton(rendererData->This);
}

tguiRendererData* tguiChildWindowRenderer_getCloseButton(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getCloseButton());
}

void tguiChildWindowRenderer_setMaximizeButton(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setMaximizeButton(rendererData->This);
}

tguiRendererData* tguiChildWindowRenderer_getMaximizeButton(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getMaximizeButton());
}

void tguiChildWindowRenderer_setMinimizeButton(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setMinimizeButton(rendererData->This);
}

tguiRendererData* tguiChildWindowRenderer_getMinimizeButton(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getMinimizeButton());
}
