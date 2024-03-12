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


#include <CTGUI/Widgets/Knob.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/Knob.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::Knob>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiKnob_create(void)
{
    return ctgui::addWidgetRef(tgui::Knob::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnob_setStartRotation(tguiWidget* widget, float startRotation)
{
    DOWNCAST(widget->This)->setStartRotation(startRotation);
}

float tguiKnob_getStartRotation(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getStartRotation();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnob_setEndRotation(tguiWidget* widget, float startRotation)
{
    DOWNCAST(widget->This)->setEndRotation(startRotation);
}

float tguiKnob_getEndRotation(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getEndRotation();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnob_setMinimum(tguiWidget* widget, float minimum)
{
    DOWNCAST(widget->This)->setMinimum(minimum);
}

float tguiKnob_getMinimum(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMinimum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnob_setMaximum(tguiWidget* widget, float maximum)
{
    DOWNCAST(widget->This)->setMaximum(maximum);
}

float tguiKnob_getMaximum(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMaximum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnob_setValue(tguiWidget* widget, float value)
{
    DOWNCAST(widget->This)->setValue(value);
}

float tguiKnob_getValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnob_setClockwiseTurning(tguiWidget* widget, tguiBool clockwise)
{
    DOWNCAST(widget->This)->setClockwiseTurning(clockwise != 0);
}

tguiBool tguiKnob_getClockwiseTurning(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getClockwiseTurning();
}
