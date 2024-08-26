// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/ScrollablePanel.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/ScrollablePanel.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ScrollablePanel>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiScrollablePanel_create(void)
{
    return ctgui::addWidgetRef(tgui::ScrollablePanel::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanel_setContentSize(tguiWidget* thisWidget, tguiVector2f value)
{
    DOWNCAST(thisWidget->This)->setContentSize({value.x, value.y});
}

tguiVector2f tguiScrollablePanel_getContentSize(const tguiWidget* thisWidget)
{
    const auto value = DOWNCAST(thisWidget->This)->getContentSize();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiScrollablePanel_getContentOffset(const tguiWidget* thisWidget)
{
    const auto value = DOWNCAST(thisWidget->This)->getContentOffset();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
