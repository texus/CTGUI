// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/RadioButtonGroup.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/RadioButtonGroup.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::RadioButtonGroup>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiRadioButtonGroup_create(void)
{
    return ctgui::addWidgetRef(tgui::RadioButtonGroup::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonGroup_uncheckRadioButtons(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->uncheckRadioButtons();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiRadioButtonGroup_getCheckedRadioButton(tguiWidget* thisWidget)
{
    tgui::Widget::Ptr widgetToReturn = DOWNCAST(thisWidget->This)->getCheckedRadioButton();
    if (widgetToReturn)
        return new tguiWidget(widgetToReturn);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
