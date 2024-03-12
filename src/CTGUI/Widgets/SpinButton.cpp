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


#include <CTGUI/Widgets/SpinButton.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/SpinButton.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::SpinButton>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiSpinButton_create(void)
{
    return ctgui::addWidgetRef(tgui::SpinButton::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButton_setMinimum(tguiWidget* widget, float minimum)
{
    DOWNCAST(widget->This)->setMinimum(minimum);
}

float tguiSpinButton_getMinimum(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMinimum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButton_setMaximum(tguiWidget* widget, float maximum)
{
    DOWNCAST(widget->This)->setMaximum(maximum);
}

float tguiSpinButton_getMaximum(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMaximum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButton_setValue(tguiWidget* widget, float value)
{
    DOWNCAST(widget->This)->setValue(value);
}

float tguiSpinButton_getValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButton_setStep(tguiWidget* widget, float step)
{
    DOWNCAST(widget->This)->setStep(step);
}

float tguiSpinButton_getStep(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getStep();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButton_setVerticalScroll(tguiWidget* widget, tguiBool vertical)
{
    DOWNCAST(widget->This)->setVerticalScroll(vertical != 0);
}

tguiBool tguiSpinButton_getVerticalScroll(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getVerticalScroll();
}
