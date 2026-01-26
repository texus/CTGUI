// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/Tabs.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/Tabs.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::Tabs>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiTabs_create(void)
{
    return ctgui::addWidgetRef(tgui::Tabs::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabs_setAutoSize(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setAutoSize(value != 0);
}

tguiBool tguiTabs_getAutoSize(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getAutoSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabs_setTabHeight(tguiWidget* thisWidget, float height)
{
    DOWNCAST(thisWidget->This)->setTabHeight(height);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabs_setMaximumTabWidth(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setMaximumTabWidth(value);
}

float tguiTabs_getMaximumTabWidth(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMaximumTabWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabs_setMinimumTabWidth(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setMinimumTabWidth(value);
}

float tguiTabs_getMinimumTabWidth(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMinimumTabWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
