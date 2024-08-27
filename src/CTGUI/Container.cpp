// This file is generated, it should not be edited directly.

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

#include <TGUI/Container.hpp>

#include <CTGUI/WidgetStruct.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::Container>(x)

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
