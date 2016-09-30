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


#include <CTGUI/Renderers/TextBoxRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/RendererDataStruct.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

#include <TGUI/Renderers/TextBoxRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::TextBoxRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiTextBoxRenderer_create(void)
{
    return new tguiRenderer(new tgui::TextBoxRenderer);
}

tguiRenderer* tguiTextBoxRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::TextBoxRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBoxRenderer_setBorders(tguiRenderer* renderer, tguiOutline borders)
{
    DOWNCAST(renderer->This)->setBorders({borders.left, borders.top, borders.right, borders.bottom});
}

tguiOutline tguiTextBoxRenderer_getBorders(const tguiRenderer* renderer)
{
    tgui::Borders borders = DOWNCAST(renderer->This)->getBorders();
    return {borders.left, borders.top, borders.right, borders.bottom};
}

void tguiTextBoxRenderer_setPadding(tguiRenderer* renderer, tguiOutline padding)
{
    DOWNCAST(renderer->This)->setPadding({padding.left, padding.top, padding.right, padding.bottom});
}

tguiOutline tguiTextBoxRenderer_getPadding(const tguiRenderer* renderer)
{
    tgui::Padding padding = DOWNCAST(renderer->This)->getPadding();
    return {padding.left, padding.top, padding.right, padding.bottom};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBoxRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTextBoxRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBackgroundColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBoxRenderer_setTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTextBoxRenderer_getTextColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getTextColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiTextBoxRenderer_setSelectedTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTextBoxRenderer_getSelectedTextColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getSelectedTextColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiTextBoxRenderer_setSelectedTextBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedTextBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTextBoxRenderer_getSelectedTextBackgroundColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getSelectedTextBackgroundColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBoxRenderer_setBorderColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTextBoxRenderer_getBorderColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBorderColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBoxRenderer_setCaretColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setCaretColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTextBoxRenderer_getCaretColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getCaretColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBoxRenderer_setTextureBackground(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBackground(*texture->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBoxRenderer_setCaretWidth(const tguiRenderer* renderer, float width)
{
    DOWNCAST(renderer->This)->setCaretWidth(width);
}

float tguiTextBoxRenderer_getCaretWidth(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getCaretWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBoxRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setScrollbar(rendererData->This);
}

tguiRendererData* tguiTextBoxRenderer_getScrollbar(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getScrollbar());
}
