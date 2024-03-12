/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2024 Bruno Van de Velde (vdv_b@tgui.eu)
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
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Container.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::Container>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiContainer_add(tguiWidget* container, tguiWidget* widget, tguiUtf32 widgetName)
{
    DOWNCAST(container->This)->add(widget->This, ctgui::toCppStr(widgetName));
}

tguiWidget* tguiContainer_get(tguiWidget* container, tguiUtf32 widgetName)
{
    tgui::Widget::Ptr widget = DOWNCAST(container->This)->get(ctgui::toCppStr(widgetName));
    if (widget)
        return ctgui::addWidgetRef(widget);
    else
        return nullptr;
}

tguiWidget** tguiContainer_getWidgets(tguiWidget* container, size_t* count)
{
    const auto& widgets = DOWNCAST(container->This)->getWidgets();

    static std::vector<tguiWidget*> cWidgets;
    cWidgets.resize(widgets.size());

    for (std::size_t i = 0; i < widgets.size(); ++i)
        cWidgets[i] = ctgui::addWidgetRef(widgets[i]);

    *count = cWidgets.size();
    return cWidgets.data();
}

tguiBool tguiContainer_remove(tguiWidget* container, tguiWidget* widget)
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

size_t tguiContainer_moveWidgetForward(tguiWidget* container, tguiWidget* widget)
{
    return DOWNCAST(container->This)->moveWidgetForward(widget->This);
}

size_t tguiContainer_moveWidgetBackward(tguiWidget* container, tguiWidget* widget)
{
    return DOWNCAST(container->This)->moveWidgetBackward(widget->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContainer_setWidgetIndex(tguiWidget* container, tguiWidget* widget, size_t index)
{
    return DOWNCAST(container->This)->setWidgetIndex(widget->This, index);
}

int tguiContainer_getWidgetIndex(tguiWidget* container, tguiWidget* widget)
{
    return DOWNCAST(container->This)->getWidgetIndex(widget->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiContainer_getFocusedChild(tguiWidget* container)
{
    const auto focusedWidget = DOWNCAST(container->This)->getFocusedChild();
    if (focusedWidget)
    {
        const auto& widgets = DOWNCAST(container->This)->getWidgets();
        for (std::size_t i = 0; i < widgets.size(); ++i)
        {
            if (widgets[i] == focusedWidget)
                return ctgui::addWidgetRef(focusedWidget);
        }
    }

    return nullptr;
}

tguiWidget* tguiContainer_getFocusedLeaf(tguiWidget* container)
{
    const auto leafWidget = DOWNCAST(container->This)->getFocusedLeaf();
    if (leafWidget)
        return ctgui::addWidgetRef(leafWidget);
    else
        return nullptr;
}

tguiWidget* tguiContainer_getWidgetAtPos(tguiWidget* container, tguiVector2f pos, tguiBool recursive)
{
    const auto leafWidgetAtPos = DOWNCAST(container->This)->getWidgetAtPos({pos.x, pos.y}, recursive != 0);
    if (leafWidgetAtPos)
        return ctgui::addWidgetRef(leafWidgetAtPos);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContainer_focusNextWidget(tguiWidget* container, tguiBool recursive)
{
    return DOWNCAST(container->This)->focusNextWidget(recursive != 0);
}

tguiBool tguiContainer_focusPreviousWidget(tguiWidget* container, tguiBool recursive)
{
    return DOWNCAST(container->This)->focusPreviousWidget(recursive != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiContainer_getInnerSize(tguiWidget* container)
{
    const tgui::Vector2f offset = DOWNCAST(container->This)->getInnerSize();
    return {offset.x, offset.y};
}

tguiVector2f tguiContainer_getChildWidgetsOffset(tguiWidget* container)
{
    tgui::Vector2f offset = DOWNCAST(container->This)->getChildWidgetsOffset();
    return {offset.x, offset.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContainer_loadWidgetsFromFile(tguiWidget* container, const char* filename, tguiBool replaceExisting)
{
    try
    {
        DOWNCAST(container->This)->loadWidgetsFromFile(filename, replaceExisting);
        return true;
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return false;
    }
}

tguiBool tguiContainer_saveWidgetsToFile(tguiWidget* container, const char* filename)
{
    try
    {
        DOWNCAST(container->This)->saveWidgetsToFile(filename);
        return true;
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return false;
    }
}
