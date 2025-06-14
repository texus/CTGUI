// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/RadioButton.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/RadioButton.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::RadioButton>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiRadioButton_create(void)
{
    return ctgui::addWidgetRef(tgui::RadioButton::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButton_setChecked(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setChecked(value != 0);
}

tguiBool tguiRadioButton_isChecked(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->isChecked();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButton_setText(tguiWidget* thisWidget, tguiUtf32 value)
{
    DOWNCAST(thisWidget->This)->setText(ctgui::toCppStr(value));
}

tguiUtf32 tguiRadioButton_getText(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButton_setTextClickable(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setTextClickable(value != 0);
}

tguiBool tguiRadioButton_isTextClickable(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->isTextClickable();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButton_setMaxWidth(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setMaxWidth(value);
}

float tguiRadioButton_getMaxWidth(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMaxWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
