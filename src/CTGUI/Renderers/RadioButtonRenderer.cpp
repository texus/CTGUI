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


#include <CTGUI/Renderers/RadioButtonRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/OutlineStruct.h>
#include <CTGUI/ColorConverter.h>
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

void tguiRadioButtonRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders)
{
    DOWNCAST(renderer->This)->setBorders(borders->This);
}

tguiOutline* tguiRadioButtonRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getTextColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColor());
}

void tguiRadioButtonRenderer_setTextColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getTextColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColorHover());
}

void tguiRadioButtonRenderer_setTextColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getTextColorDisabled(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColorDisabled());
}

void tguiRadioButtonRenderer_setTextColorChecked(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorChecked({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getTextColorChecked(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColorChecked());
}

void tguiRadioButtonRenderer_setTextColorCheckedHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorCheckedHover({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getTextColorCheckedHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColorCheckedHover());
}

void tguiRadioButtonRenderer_setTextColorCheckedDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorCheckedDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getTextColorCheckedDisabled(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColorCheckedDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

void tguiRadioButtonRenderer_setBackgroundColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBackgroundColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColorHover());
}

void tguiRadioButtonRenderer_setBackgroundColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBackgroundColorDisabled(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColorDisabled());
}

void tguiRadioButtonRenderer_setBackgroundColorChecked(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorChecked({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBackgroundColorChecked(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColorChecked());
}

void tguiRadioButtonRenderer_setBackgroundColorCheckedHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorCheckedHover({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBackgroundColorCheckedHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColorCheckedHover());
}

void tguiRadioButtonRenderer_setBackgroundColorCheckedDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorCheckedDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBackgroundColorCheckedDisabled(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColorCheckedDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBorderColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColor({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColor());
}

void tguiRadioButtonRenderer_setBorderColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBorderColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColorHover());
}

void tguiRadioButtonRenderer_setBorderColorFocused(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorFocused({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBorderColorFocused(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColorFocused());
}

void tguiRadioButtonRenderer_setBorderColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBorderColorDisabled(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColorDisabled());
}

void tguiRadioButtonRenderer_setBorderColorChecked(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorChecked({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBorderColorChecked(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColorChecked());
}

void tguiRadioButtonRenderer_setBorderColorCheckedHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorCheckedHover({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBorderColorCheckedHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColorCheckedHover());
}

void tguiRadioButtonRenderer_setBorderColorCheckedFocused(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorCheckedFocused({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBorderColorCheckedFocused(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColorCheckedFocused());
}

void tguiRadioButtonRenderer_setBorderColorCheckedDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorCheckedDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getBorderColorCheckedDisabled(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColorCheckedDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setCheckColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setCheckColor({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getCheckColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getCheckColor());
}

void tguiRadioButtonRenderer_setCheckColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setCheckColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getCheckColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getCheckColorHover());
}

void tguiRadioButtonRenderer_setCheckColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setCheckColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiRadioButtonRenderer_getCheckColorDisabled(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getCheckColorDisabled());
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

void tguiRadioButtonRenderer_setTextureUncheckedFocused(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureUncheckedFocused(*texture->This);
}

void tguiRadioButtonRenderer_setTextureCheckedFocused(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureCheckedFocused(*texture->This);
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
