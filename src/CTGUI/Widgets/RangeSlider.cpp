// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/RangeSlider.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/RangeSlider.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::RangeSlider>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiRangeSlider_create(void)
{
    return ctgui::addWidgetRef(tgui::RangeSlider::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSlider_setMinimum(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setMinimum(value);
}

float tguiRangeSlider_getMinimum(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMinimum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSlider_setMaximum(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setMaximum(value);
}

float tguiRangeSlider_getMaximum(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMaximum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSlider_setSelectionStart(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setSelectionStart(value);
}

float tguiRangeSlider_getSelectionStart(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getSelectionStart();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSlider_setSelectionEnd(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setSelectionEnd(value);
}

float tguiRangeSlider_getSelectionEnd(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getSelectionEnd();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSlider_setStep(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setStep(value);
}

float tguiRangeSlider_getStep(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getStep();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
