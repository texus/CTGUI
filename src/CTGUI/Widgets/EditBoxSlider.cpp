// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/EditBoxSlider.h>
#include <CTGUI/RendererStruct.hpp>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/EditBoxSlider.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::EditBoxSlider>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiEditBoxSlider_create(void)
{
    return ctgui::addWidgetRef(tgui::EditBoxSlider::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiEditBoxSlider_getEditBoxRenderer(const tguiWidget* thisWidget)
{
    return new tguiRenderer(DOWNCAST(thisWidget->This)->getEditBoxRenderer(), false);
}

tguiRenderer* tguiEditBoxSlider_getEditBoxSharedRenderer(const tguiWidget* thisWidget)
{
    return new tguiRenderer(DOWNCAST(thisWidget->This)->getEditBoxSharedRenderer(), false);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiEditBoxSlider_getSliderRenderer(const tguiWidget* thisWidget)
{
    return new tguiRenderer(DOWNCAST(thisWidget->This)->getSliderRenderer(), false);
}

tguiRenderer* tguiEditBoxSlider_getSliderSharedRenderer(const tguiWidget* thisWidget)
{
    return new tguiRenderer(DOWNCAST(thisWidget->This)->getSliderSharedRenderer(), false);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiEditBoxSlider_setValue(tguiWidget* thisWidget, float value)
{
    return DOWNCAST(thisWidget->This)->setValue(value);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiEditBoxSlider_getValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBoxSlider_setMinimum(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setMinimum(value);
}

float tguiEditBoxSlider_getMinimum(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMinimum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBoxSlider_setMaximum(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setMaximum(value);
}

float tguiEditBoxSlider_getMaximum(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMaximum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBoxSlider_setStep(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setStep(value);
}

float tguiEditBoxSlider_getStep(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getStep();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBoxSlider_setDecimalPlaces(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setDecimalPlaces(value);
}

unsigned int tguiEditBoxSlider_getDecimalPlaces(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getDecimalPlaces();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBoxSlider_setTextAlignment(tguiWidget* thisWidget, tguiHorizontalAlignment value)
{
    DOWNCAST(thisWidget->This)->setTextAlignment(static_cast<tgui::HorizontalAlignment>(value));
}

tguiHorizontalAlignment tguiEditBoxSlider_getTextAlignment(const tguiWidget* thisWidget)
{
    return static_cast<tguiHorizontalAlignment>(DOWNCAST(thisWidget->This)->getTextAlignment());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
