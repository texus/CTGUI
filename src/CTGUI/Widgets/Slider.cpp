// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/Slider.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/Slider.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::Slider>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiSlider_create(void)
{
    return ctgui::addWidgetRef(tgui::Slider::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSlider_setMinimum(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setMinimum(value);
}

float tguiSlider_getMinimum(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMinimum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSlider_setMaximum(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setMaximum(value);
}

float tguiSlider_getMaximum(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMaximum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSlider_setValue(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setValue(value);
}

float tguiSlider_getValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSlider_setStep(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setStep(value);
}

float tguiSlider_getStep(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getStep();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSlider_setVerticalScroll(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setVerticalScroll(value != 0);
}

tguiBool tguiSlider_getVerticalScroll(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getVerticalScroll();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSlider_setInvertedDirection(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setInvertedDirection(value != 0);
}

tguiBool tguiSlider_getInvertedDirection(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getInvertedDirection();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSlider_setChangeValueOnScroll(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setChangeValueOnScroll(value != 0);
}

tguiBool tguiSlider_getChangeValueOnScroll(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getChangeValueOnScroll();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
