/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2020 Bruno Van de Velde (vdv_b@tgui.eu)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <CTGUI/Container.h>
#include <CTGUI/WidgetStruct.h>

#include <TGUI/Container.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::Container>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiContainer_add(tguiWidget* container, tguiWidget* widget, const sfUint32* widgetName)
{
    DOWNCAST(container->This)->add(widget->This, widgetName);
}

tguiWidget* tguiContainer_get(tguiWidget* container, const sfUint32* widgetName)
{
    tgui::Widget::Ptr widget = DOWNCAST(container->This)->get(widgetName);
    if (widget)
        return new tguiWidget(widget);
    else
        return nullptr;
}

tguiWidget** tguiContainer_getWidgets(tguiWidget* container, size_t* count)
{
    const auto& widgets = DOWNCAST(container->This)->getWidgets();

    static std::vector<tguiWidget*> cWidgets;
    cWidgets.resize(widgets.size());

    for (std::size_t i = 0; i < widgets.size(); ++i)
        cWidgets[i] = new tguiWidget(widgets[i]);

    *count = cWidgets.size();
    return cWidgets.data();
}

const sfUint32** tguiContainer_getWidgetNames(tguiWidget* container, size_t* count)
{
    const auto& names = DOWNCAST(container->This)->getWidgetNames();

    static std::vector<const sfUint32*> cNames;
    cNames.resize(names.size());

    for (std::size_t i = 0; i < names.size(); ++i)
        cNames[i] = names[i].getData();

    *count = cNames.size();
    return cNames.data();
}

sfBool tguiContainer_remove(tguiWidget* container, tguiWidget* widget)
{
    return DOWNCAST(container->This)->remove(widget->This);
}

void tguiContainer_removeAllWidgets(tguiWidget* container)
{
    DOWNCAST(container->This)->removeAllWidgets();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiContainer_moveWidgetToFront(tguiWidget* container, tguiWidget* widget)
{
    DOWNCAST(container->This)->moveWidgetToFront(widget->This);
}

void tguiContainer_moveWidgetToBack(tguiWidget* container, tguiWidget* widget)
{
    DOWNCAST(container->This)->moveWidgetToBack(widget->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int tguiContainer_getFocusedChildIndex(tguiWidget* container)
{
    const auto focusedWidget = DOWNCAST(container->This)->getFocusedChild();
    if (focusedWidget)
    {
        const auto& widgets = DOWNCAST(container->This)->getWidgets();
        for (std::size_t i = 0; i < widgets.size(); ++i)
        {
            if (widgets[i] == focusedWidget)
                return i;
        }
    }

    return -1;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const int* tguiContainer_getWidgetAtPositionIndices(tguiWidget* container, float x, float y, size_t* count)
{
    static std::vector<int> indices;
    indices.clear();

    const auto leafWidget = DOWNCAST(container->This)->getWidgetAtPosition({x, y});
    if (leafWidget)
    {
        tgui::Widget* widget = leafWidget.get();
        while (widget->getParent())
        {
            int widgetIndex = 0;
            const auto& widgets = widget->getParent()->getWidgets();
            for (std::size_t i = 0; i < widgets.size(); ++i)
            {
                if (widgets[i].get() == widget)
                {
                    widgetIndex = static_cast<int>(i);
                    break;
                }
            }

            indices.insert(indices.begin(), widgetIndex);
            widget = widget->getParent();
        }
    }

    *count = indices.size();
    return indices.data();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiContainer_focusNextWidget(tguiWidget* container)
{
    return DOWNCAST(container->This)->focusNextWidget();
}

sfBool tguiContainer_focusPreviousWidget(tguiWidget* container)
{
    return DOWNCAST(container->This)->focusPreviousWidget();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfVector2f tguiContainer_getInnerSize(tguiWidget* container)
{
    const sf::Vector2f offset = DOWNCAST(container->This)->getInnerSize();
    return {offset.x, offset.y};
}

sfVector2f tguiContainer_getChildWidgetsOffset(tguiWidget* container)
{
    sf::Vector2f offset = DOWNCAST(container->This)->getChildWidgetsOffset();
    return {offset.x, offset.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiContainer_loadWidgetsFromFile(tguiWidget* container, const char* filename, sfBool replaceExisting)
{
    try
    {
        DOWNCAST(container->This)->loadWidgetsFromFile(filename, replaceExisting);
        return true;
    }
    catch (const tgui::Exception& e)
    {
        tguiErrorMessage = e.what();
        return false;
    }
}

sfBool tguiContainer_saveWidgetsToFile(tguiWidget* container, const char* filename)
{
    try
    {
        DOWNCAST(container->This)->saveWidgetsToFile(filename);
        return true;
    }
    catch (const tgui::Exception& e)
    {
        tguiErrorMessage = e.what();
        return false;
    }
}
