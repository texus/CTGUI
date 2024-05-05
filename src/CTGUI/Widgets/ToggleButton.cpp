// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/ToggleButton.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/ToggleButton.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ToggleButton>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiToggleButton_create(void)
{
    return ctgui::addWidgetRef(tgui::ToggleButton::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiToggleButton_setDown(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setDown(value != 0);
}

tguiBool tguiToggleButton_isDown(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->isDown();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
