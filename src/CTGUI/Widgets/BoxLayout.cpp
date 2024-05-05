// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/BoxLayout.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/BoxLayout.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::BoxLayout>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiBoxLayout_insert(tguiWidget* thisWidget, size_t index, tguiWidget* widgetToAdd, tguiUtf32 widgetName)
{
    DOWNCAST(thisWidget->This)->insert(index, widgetToAdd->This, ctgui::toCppStr(widgetName));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiBoxLayout_removeAtIndex(tguiWidget* thisWidget, size_t index)
{
    return DOWNCAST(thisWidget->This)->remove(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiBoxLayout_getAtIndex(const tguiWidget* thisWidget, size_t index)
{
    tgui::Widget::Ptr widgetToReturn = DOWNCAST(thisWidget->This)->get(index);
    if (widgetToReturn)
        return new tguiWidget(widgetToReturn);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
