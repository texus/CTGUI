// This file is generated, it should not be edited directly.

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

void tguiKnob_setStartRotation(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setStartRotation(value);
}

float tguiKnob_getStartRotation(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getStartRotation();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnob_setEndRotation(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setEndRotation(value);
}

float tguiKnob_getEndRotation(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getEndRotation();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnob_setMinimum(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setMinimum(value);
}

float tguiKnob_getMinimum(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMinimum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnob_setMaximum(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setMaximum(value);
}

float tguiKnob_getMaximum(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMaximum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnob_setValue(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setValue(value);
}

float tguiKnob_getValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnob_setClockwiseTurning(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setClockwiseTurning(value != 0);
}

tguiBool tguiKnob_getClockwiseTurning(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getClockwiseTurning();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
