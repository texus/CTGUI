// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/SpinControl.h>
#include <CTGUI/RendererStruct.hpp>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/SpinControl.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::SpinControl>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiSpinControl_create(void)
{
    return ctgui::addWidgetRef(tgui::SpinControl::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiSpinControl_getSpinButtonRenderer(const tguiWidget* thisWidget)
{
    return new tguiRenderer(DOWNCAST(thisWidget->This)->getSpinButtonRenderer(), false);
}

tguiRenderer* tguiSpinControl_getSpinButtonSharedRenderer(const tguiWidget* thisWidget)
{
    return new tguiRenderer(DOWNCAST(thisWidget->This)->getSpinButtonSharedRenderer(), false);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiSpinControl_getSpinTextRenderer(const tguiWidget* thisWidget)
{
    return new tguiRenderer(DOWNCAST(thisWidget->This)->getSpinTextRenderer(), false);
}

tguiRenderer* tguiSpinControl_getSpinTextSharedRenderer(const tguiWidget* thisWidget)
{
    return new tguiRenderer(DOWNCAST(thisWidget->This)->getSpinTextSharedRenderer(), false);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinControl_setMinimum(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setMinimum(value);
}

float tguiSpinControl_getMinimum(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMinimum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinControl_setMaximum(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setMaximum(value);
}

float tguiSpinControl_getMaximum(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMaximum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinControl_setDecimalPlaces(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setDecimalPlaces(value);
}

unsigned int tguiSpinControl_getDecimalPlaces(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getDecimalPlaces();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinControl_setSpinButtonWidth(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setSpinButtonWidth(value);
}

float tguiSpinControl_getSpinButtonWidth(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getSpinButtonWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiSpinControl_setValue(tguiWidget* thisWidget, float value)
{
    return DOWNCAST(thisWidget->This)->setValue(value);
}

float tguiSpinControl_getValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinControl_setStep(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setStep(value);
}

float tguiSpinControl_getStep(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getStep();
}
