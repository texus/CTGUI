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


#include <CTGUI/Widgets/RangeSlider.h>
#include <CTGUI/WidgetStruct.h>

#include <TGUI/Widgets/RangeSlider.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::RangeSlider>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiRangeSlider_create(void)
{
    return new tguiWidget(tgui::RangeSlider::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSlider_setMinimum(tguiWidget* widget, float minimum)
{
    DOWNCAST(widget->This)->setMinimum(minimum);
}

float tguiRangeSlider_getMinimum(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMinimum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSlider_setMaximum(tguiWidget* widget, float maximum)
{
    DOWNCAST(widget->This)->setMaximum(maximum);
}

float tguiRangeSlider_getMaximum(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMaximum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSlider_setSelectionStart(tguiWidget* widget, float value)
{
    DOWNCAST(widget->This)->setSelectionStart(value);
}

float tguiRangeSlider_getSelectionStart(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getSelectionStart();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSlider_setSelectionEnd(tguiWidget* widget, float value)
{
    DOWNCAST(widget->This)->setSelectionEnd(value);
}

float tguiRangeSlider_getSelectionEnd(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getSelectionEnd();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSlider_setStep(tguiWidget* widget, float step)
{
    DOWNCAST(widget->This)->setStep(step);
}

float tguiRangeSlider_getStep(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getStep();
}
