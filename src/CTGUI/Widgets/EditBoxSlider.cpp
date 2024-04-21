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


#include <CTGUI/Widgets/EditBoxSlider.h>
#include <CTGUI/WidgetStruct.hpp>
#include <CTGUI/Renderers/RendererStruct.hpp>

#include <TGUI/Widgets/EditBoxSlider.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::EditBoxSlider>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiEditBoxSlider_create(void)
{
    return ctgui::addWidgetRef(tgui::EditBoxSlider::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiEditBoxSlider_getEditBoxRenderer(const tguiWidget* widget)
{
    return new tguiRenderer(DOWNCAST(widget->This)->getEditBoxRenderer(), false);
}

tguiRenderer* tguiEditBoxSlider_getEditBoxSharedRenderer(const tguiWidget* widget)
{
    return new tguiRenderer(DOWNCAST(widget->This)->getEditBoxSharedRenderer(), false);
}

tguiRenderer* tguiEditBoxSlider_getSliderRenderer(const tguiWidget* widget)
{
    return new tguiRenderer(DOWNCAST(widget->This)->getSliderRenderer(), false);
}

tguiRenderer* tguiEditBoxSlider_getSliderSharedRenderer(const tguiWidget* widget)
{
    return new tguiRenderer(DOWNCAST(widget->This)->getSliderSharedRenderer(), false);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBoxSlider_setMinimum(tguiWidget* widget, float minimum)
{
    DOWNCAST(widget->This)->setMinimum(minimum);
}

float tguiEditBoxSlider_getMinimum(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMinimum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBoxSlider_setMaximum(tguiWidget* widget, float maximum)
{
    DOWNCAST(widget->This)->setMaximum(maximum);
}

float tguiEditBoxSlider_getMaximum(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMaximum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBoxSlider_setValue(tguiWidget* widget, float value)
{
    DOWNCAST(widget->This)->setValue(value);
}

float tguiEditBoxSlider_getValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBoxSlider_setStep(tguiWidget* widget, float step)
{
    DOWNCAST(widget->This)->setStep(step);
}

float tguiEditBoxSlider_getStep(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getStep();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBoxSlider_setDecimalPlaces(tguiWidget* widget, unsigned int decimalPlaces)
{
    DOWNCAST(widget->This)->setDecimalPlaces(decimalPlaces);
}

unsigned int tguiEditBoxSlider_getDecimalPlaces(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getDecimalPlaces();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBoxSlider_setTextAlignment(tguiWidget* widget, tguiHorizontalAlignment alignment)
{
    DOWNCAST(widget->This)->setTextAlignment(static_cast<tgui::EditBox::Alignment>(alignment));
}

tguiHorizontalAlignment tguiEditBoxSlider_getAlignment(const tguiWidget* widget)
{
    return static_cast<tguiHorizontalAlignment>(DOWNCAST(widget->This)->getTextAlignment());
}
