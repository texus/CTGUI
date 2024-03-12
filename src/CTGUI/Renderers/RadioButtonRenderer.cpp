/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2024 Bruno Van de Velde (vdv_b@tgui.eu)
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
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>

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

void tguiRadioButtonRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColor(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getTextColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColor());
}

void tguiRadioButtonRenderer_setTextColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getTextColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColorHover());
}

void tguiRadioButtonRenderer_setTextColorDisabled(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColorDisabled(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getTextColorDisabled(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColorDisabled());
}

void tguiRadioButtonRenderer_setTextColorChecked(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColorChecked(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getTextColorChecked(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColorChecked());
}

void tguiRadioButtonRenderer_setTextColorCheckedHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColorCheckedHover(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getTextColorCheckedHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColorCheckedHover());
}

void tguiRadioButtonRenderer_setTextColorCheckedDisabled(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColorCheckedDisabled(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getTextColorCheckedDisabled(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColorCheckedDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

void tguiRadioButtonRenderer_setBackgroundColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getBackgroundColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColorHover());
}

void tguiRadioButtonRenderer_setBackgroundColorDisabled(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColorDisabled(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getBackgroundColorDisabled(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColorDisabled());
}

void tguiRadioButtonRenderer_setBackgroundColorChecked(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColorChecked(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getBackgroundColorChecked(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColorChecked());
}

void tguiRadioButtonRenderer_setBackgroundColorCheckedHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColorCheckedHover(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getBackgroundColorCheckedHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColorCheckedHover());
}

void tguiRadioButtonRenderer_setBackgroundColorCheckedDisabled(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColorCheckedDisabled(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getBackgroundColorCheckedDisabled(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColorCheckedDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColor(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColor());
}

void tguiRadioButtonRenderer_setBorderColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getBorderColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColorHover());
}

void tguiRadioButtonRenderer_setBorderColorFocused(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColorFocused(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getBorderColorFocused(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColorFocused());
}

void tguiRadioButtonRenderer_setBorderColorDisabled(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColorDisabled(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getBorderColorDisabled(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColorDisabled());
}

void tguiRadioButtonRenderer_setBorderColorChecked(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColorChecked(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getBorderColorChecked(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColorChecked());
}

void tguiRadioButtonRenderer_setBorderColorCheckedHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColorCheckedHover(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getBorderColorCheckedHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColorCheckedHover());
}

void tguiRadioButtonRenderer_setBorderColorCheckedFocused(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColorCheckedFocused(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getBorderColorCheckedFocused(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColorCheckedFocused());
}

void tguiRadioButtonRenderer_setBorderColorCheckedDisabled(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColorCheckedDisabled(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getBorderColorCheckedDisabled(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColorCheckedDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setCheckColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setCheckColor(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getCheckColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getCheckColor());
}

void tguiRadioButtonRenderer_setCheckColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setCheckColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getCheckColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getCheckColorHover());
}

void tguiRadioButtonRenderer_setCheckColorDisabled(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setCheckColorDisabled(ctgui::toCppColor(color));
}

tguiColor* tguiRadioButtonRenderer_getCheckColorDisabled(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getCheckColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextureUnchecked(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureUnchecked(*texture->This);
}

tguiTexture* tguiRadioButtonRenderer_getTextureUnchecked(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureUnchecked()));
}

void tguiRadioButtonRenderer_setTextureChecked(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureChecked(*texture->This);
}

tguiTexture* tguiRadioButtonRenderer_getTextureChecked(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureChecked()));
}

void tguiRadioButtonRenderer_setTextureUncheckedHover(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureUncheckedHover(*texture->This);
}

tguiTexture* tguiRadioButtonRenderer_getTextureUncheckedHover(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureUncheckedHover()));
}

void tguiRadioButtonRenderer_setTextureCheckedHover(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureCheckedHover(*texture->This);
}

tguiTexture* tguiRadioButtonRenderer_getTextureCheckedHover(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureCheckedHover()));
}

void tguiRadioButtonRenderer_setTextureUncheckedFocused(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureUncheckedFocused(*texture->This);
}

tguiTexture* tguiRadioButtonRenderer_getTextureUncheckedFocused(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureUncheckedFocused()));
}

void tguiRadioButtonRenderer_setTextureCheckedFocused(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureCheckedFocused(*texture->This);
}

tguiTexture* tguiRadioButtonRenderer_getTextureCheckedFocused(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureCheckedFocused()));
}

void tguiRadioButtonRenderer_setTextureUncheckedDisabled(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureUncheckedDisabled(*texture->This);
}

tguiTexture* tguiRadioButtonRenderer_getTextureUncheckedDisabled(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureUncheckedDisabled()));
}

void tguiRadioButtonRenderer_setTextureCheckedDisabled(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureCheckedDisabled(*texture->This);
}

tguiTexture* tguiRadioButtonRenderer_getTextureCheckedDisabled(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureCheckedDisabled()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextStyle(tguiRenderer* renderer, tguiUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyle(style);
}

tguiUint32 tguiRadioButtonRenderer_getTextStyle(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyle();
}

void tguiRadioButtonRenderer_setTextStyleChecked(tguiRenderer* renderer, tguiUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyleChecked(style);
}

tguiUint32 tguiRadioButtonRenderer_getTextStyleChecked(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyleChecked();
}
