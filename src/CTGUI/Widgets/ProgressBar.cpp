// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/ProgressBar.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/ProgressBar.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ProgressBar>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiProgressBar_create(void)
{
    return ctgui::addWidgetRef(tgui::ProgressBar::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBar_setMinimum(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setMinimum(value);
}

unsigned int tguiProgressBar_getMinimum(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMinimum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBar_setMaximum(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setMaximum(value);
}

unsigned int tguiProgressBar_getMaximum(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMaximum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBar_setValue(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setValue(value);
}

unsigned int tguiProgressBar_getValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int tguiProgressBar_incrementValue(tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->incrementValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBar_setText(tguiWidget* thisWidget, tguiUtf32 value)
{
    DOWNCAST(thisWidget->This)->setText(ctgui::toCppStr(value));
}

tguiUtf32 tguiProgressBar_getText(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBar_setFillDirection(tguiWidget* thisWidget, tguiProgressBarFillDirection value)
{
    DOWNCAST(thisWidget->This)->setFillDirection(static_cast<tgui::ProgressBar::FillDirection>(value));
}

tguiProgressBarFillDirection tguiProgressBar_getFillDirection(const tguiWidget* thisWidget)
{
    return static_cast<tguiProgressBarFillDirection>(DOWNCAST(thisWidget->This)->getFillDirection());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
