// This file is generated, it should not be edited directly.

#include <CTGUI/Container.h>

#include <CTGUI/WidgetStruct.hpp>
#include <CTGUI/FormLoadOptionsStruct.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::Container>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiContainer_add(tguiWidget* thisContainer, tguiWidget* widget, tguiUtf32 widgetName)
{
    DOWNCAST(thisContainer->This)->add(widget->This, ctgui::toCppStr(widgetName));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiContainer_get(const tguiWidget* thisContainer, tguiUtf32 widgetName)
{
    tgui::Widget::Ptr widgetToReturn = DOWNCAST(thisContainer->This)->get(ctgui::toCppStr(widgetName));
    if (widgetToReturn)
        return ctgui::addWidgetRef(widgetToReturn);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget** tguiContainer_getWidgets(const tguiWidget* thisContainer, size_t* returnCount)
{
    const auto& widgets = DOWNCAST(thisContainer->This)->getWidgets();

    static std::vector<tguiWidget*> cWidgets;
    cWidgets.clear();
    cWidgets.reserve(widgets.size());
    for (const auto& widget : widgets)
        cWidgets.emplace_back(ctgui::addWidgetRef(widget));

    *returnCount = cWidgets.size();
    return cWidgets.data();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContainer_remove(tguiWidget* thisContainer, tguiWidget* widget)
{
    return DOWNCAST(thisContainer->This)->remove(widget->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiContainer_removeAllWidgets(tguiWidget* thisContainer)
{
    DOWNCAST(thisContainer->This)->removeAllWidgets();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContainer_loadWidgetsFromFile(tguiWidget* thisContainer, tguiUtf32 filename, const tguiFormLoadOptions* loadOptions)
{
    try
    {
        DOWNCAST(thisContainer->This)->loadWidgetsFromFile(ctgui::toCppStr(filename), loadOptions ? loadOptions->This : tgui::FormLoadOptions());
        return true;
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContainer_saveWidgetsToFile(const tguiWidget* thisContainer, tguiUtf32 filename)
{
    try
    {
        DOWNCAST(thisContainer->This)->saveWidgetsToFile(ctgui::toCppStr(filename));
        return true;
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiContainer_moveWidgetToFront(tguiWidget* thisContainer, tguiWidget* widget)
{
    DOWNCAST(thisContainer->This)->moveWidgetToFront(widget->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiContainer_moveWidgetToBack(tguiWidget* thisContainer, tguiWidget* widget)
{
    DOWNCAST(thisContainer->This)->moveWidgetToBack(widget->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiContainer_moveWidgetForward(tguiWidget* thisContainer, tguiWidget* widget)
{
    return DOWNCAST(thisContainer->This)->moveWidgetForward(widget->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiContainer_moveWidgetBackward(tguiWidget* thisContainer, tguiWidget* widget)
{
    return DOWNCAST(thisContainer->This)->moveWidgetBackward(widget->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContainer_setWidgetIndex(tguiWidget* thisContainer, tguiWidget* widget, size_t index)
{
    return DOWNCAST(thisContainer->This)->setWidgetIndex(widget->This, index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int tguiContainer_getWidgetIndex(const tguiWidget* thisContainer, tguiWidget* widget)
{
    return DOWNCAST(thisContainer->This)->getWidgetIndex(widget->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiContainer_getFocusedChild(const tguiWidget* thisContainer)
{
    tgui::Widget::Ptr widgetToReturn = DOWNCAST(thisContainer->This)->getFocusedChild();
    if (widgetToReturn)
        return ctgui::addWidgetRef(widgetToReturn);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiContainer_getFocusedLeaf(const tguiWidget* thisContainer)
{
    tgui::Widget::Ptr widgetToReturn = DOWNCAST(thisContainer->This)->getFocusedLeaf();
    if (widgetToReturn)
        return ctgui::addWidgetRef(widgetToReturn);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiContainer_getWidgetAtPos(const tguiWidget* thisContainer, tguiVector2f pos, tguiBool recursive)
{
    tgui::Widget::Ptr widgetToReturn = DOWNCAST(thisContainer->This)->getWidgetAtPos({pos.x, pos.y}, recursive != 0);
    if (widgetToReturn)
        return ctgui::addWidgetRef(widgetToReturn);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContainer_focusNextWidget(tguiWidget* thisContainer, tguiBool recursive)
{
    return DOWNCAST(thisContainer->This)->focusNextWidget(recursive != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContainer_focusPreviousWidget(tguiWidget* thisContainer, tguiBool recursive)
{
    return DOWNCAST(thisContainer->This)->focusPreviousWidget(recursive != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiContainer_getInnerSize(const tguiWidget* thisContainer)
{
    const auto value = DOWNCAST(thisContainer->This)->getInnerSize();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiContainer_getChildWidgetsOffset(const tguiWidget* thisContainer)
{
    const auto value = DOWNCAST(thisContainer->This)->getChildWidgetsOffset();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
