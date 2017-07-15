/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2016 Bruno Van de Velde (vdv_b@tgui.eu)
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

void tguiContainer_remove(tguiWidget* container, tguiWidget* widget)
{
    DOWNCAST(container->This)->remove(widget->This);
}

void tguiContainer_removeAllWidgets(tguiWidget* container)
{
    DOWNCAST(container->This)->removeAllWidgets();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfVector2f tguiContainer_getChildWidgetsOffset(tguiWidget* container)
{
    sf::Vector2f offset = DOWNCAST(container->This)->getChildWidgetsOffset();
    return {offset.x, offset.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiContainer_loadWidgetsFromFile(tguiWidget* container, const char* filename, const char** error)
{
    try
    {
        DOWNCAST(container->This)->loadWidgetsFromFile(filename);
        *error = nullptr;
    }
    catch (const tgui::Exception& e)
    {
        tguiErrorMessage = e.what();
        *error = tguiErrorMessage.c_str();
    }
}

void tguiContainer_saveWidgetsToFile(tguiWidget* container, const char* filename, const char** error)
{
    try
    {
        DOWNCAST(container->This)->saveWidgetsToFile(filename);
        *error = nullptr;
    }
    catch (const tgui::Exception& e)
    {
        tguiErrorMessage = e.what();
        *error = tguiErrorMessage.c_str();
    }
}
