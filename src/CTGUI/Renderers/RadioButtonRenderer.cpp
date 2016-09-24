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


#include <CTGUI/Renderers/RadioButtonRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

#include <TGUI/Renderers/RadioButtonRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::RadioButtonRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiRadioButtonRenderer_create(void)
{
    return new tguiRenderer(new tgui::RadioButtonRenderer);
}

tguiRenderer* tguiRadioButtonRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::RadioButtonRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextDistanceRatio(tguiRenderer* renderer, float ratio)
{
    DOWNCAST(renderer->This)->setTextDistanceRatio(ratio);
}

float tguiRadioButtonRenderer_getTextDistanceRatio(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextDistanceRatio();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBorders(tguiRenderer* renderer, tguiOutline borders)
{
    DOWNCAST(renderer->This)->setBorders({borders.left, borders.top, borders.right, borders.bottom});
}

tguiOutline tguiRadioButtonRenderer_getBorders(const tguiRenderer* renderer)
{
    tgui::Borders borders = DOWNCAST(renderer->This)->getBorders();
    return {borders.left, borders.top, borders.right, borders.bottom};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getTextColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getTextColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiRadioButtonRenderer_setTextColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getTextColorHover(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getTextColorHover();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiRadioButtonRenderer_setTextColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getTextColorDisabled(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getTextColorDisabled();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiRadioButtonRenderer_setTextColorChecked(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorChecked({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getTextColorChecked(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getTextColorChecked();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiRadioButtonRenderer_setTextColorCheckedHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorCheckedHover({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getTextColorCheckedHover(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getTextColorCheckedHover();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiRadioButtonRenderer_setTextColorCheckedDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorCheckedDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getTextColorCheckedDisabled(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getTextColorCheckedDisabled();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBackgroundColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiRadioButtonRenderer_setBackgroundColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBackgroundColorHover(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBackgroundColorHover();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiRadioButtonRenderer_setBackgroundColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBackgroundColorDisabled(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBackgroundColorDisabled();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiRadioButtonRenderer_setBackgroundColorChecked(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorChecked({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBackgroundColorChecked(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBackgroundColorChecked();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiRadioButtonRenderer_setBackgroundColorCheckedHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorCheckedHover({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBackgroundColorCheckedHover(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBackgroundColorCheckedHover();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiRadioButtonRenderer_setBackgroundColorCheckedDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorCheckedDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBackgroundColorCheckedDisabled(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBackgroundColorCheckedDisabled();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBorderColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColor({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBorderColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBorderColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiRadioButtonRenderer_setBorderColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBorderColorHover(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBorderColorHover();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiRadioButtonRenderer_setBorderColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBorderColorDisabled(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBorderColorDisabled();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiRadioButtonRenderer_setBorderColorChecked(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorChecked({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBorderColorChecked(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBorderColorChecked();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiRadioButtonRenderer_setBorderColorCheckedHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorCheckedHover({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBorderColorCheckedHover(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBorderColorCheckedHover();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiRadioButtonRenderer_setBorderColorCheckedDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorCheckedDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBorderColorCheckedDisabled(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBorderColorCheckedDisabled();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setCheckColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setCheckColor({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getCheckColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getCheckColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiRadioButtonRenderer_setCheckColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setCheckColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getCheckColorHover(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getCheckColorHover();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiRadioButtonRenderer_setCheckColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setCheckColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getCheckColorDisabled(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getCheckColorDisabled();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextureUnchecked(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureUnchecked(*texture->This);
}

void tguiRadioButtonRenderer_setTextureChecked(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureChecked(*texture->This);
}

void tguiRadioButtonRenderer_setTextureUncheckedHover(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureUncheckedHover(*texture->This);
}

void tguiRadioButtonRenderer_setTextureCheckedHover(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureCheckedHover(*texture->This);
}

void tguiRadioButtonRenderer_setTextureUncheckedDisabled(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureUncheckedDisabled(*texture->This);
}

void tguiRadioButtonRenderer_setTextureCheckedDisabled(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureCheckedDisabled(*texture->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextStyle(tguiRenderer* renderer, sfUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyle(style);
}

sfUint32 tguiRadioButtonRenderer_getTextStyle(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyle();
}

void tguiRadioButtonRenderer_setTextStyleChecked(tguiRenderer* renderer, sfUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyleChecked(style);
}

sfUint32 tguiRadioButtonRenderer_getTextStyleChecked(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyleChecked();
}
