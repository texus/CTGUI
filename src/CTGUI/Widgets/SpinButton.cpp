// This file is generated, it should not be edited directly.

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

void tguiSpinButton_setMinimum(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setMinimum(value);
}

float tguiSpinButton_getMinimum(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMinimum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButton_setMaximum(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setMaximum(value);
}

float tguiSpinButton_getMaximum(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMaximum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButton_setValue(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setValue(value);
}

float tguiSpinButton_getValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButton_setStep(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setStep(value);
}

float tguiSpinButton_getStep(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getStep();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButton_setVerticalScroll(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setVerticalScroll(value != 0);
}

tguiBool tguiSpinButton_getVerticalScroll(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getVerticalScroll();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
