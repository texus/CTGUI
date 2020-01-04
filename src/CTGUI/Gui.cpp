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


#include <CTGUI/Gui.h>
#include <CTGUI/GuiStruct.h>
#include <CTGUI/WidgetStruct.h>
#include <CTGUI/ConvertEvent.h>
#include <CTGUI/SFML/Graphics/RenderWindowStruct.h>
#include <CTGUI/SFML/Graphics/RenderTextureStruct.h>
#include <CTGUI/SFML/Graphics/FontStruct.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiGui* tguiGui_create(void)
{
    return new tguiGui;
}

tguiGui* tguiGui_createFromTargetRenderWindow(sfRenderWindow* target)
{
    tguiGui* gui = tguiGui_create();
    tguiGui_setTargetRenderWindow(gui, target);
    return gui;
}

tguiGui* tguiGui_createFromTargetRenderTexture(sfRenderTexture* target)
{
    tguiGui* gui = tguiGui_create();
    tguiGui_setTargetRenderTexture(gui, target);
    return gui;
}

void tguiGui_destroy(tguiGui* gui)
{
    delete gui;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setTargetRenderWindow(tguiGui* gui, sfRenderWindow* window)
{
    gui->This.setTarget(window->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setTargetRenderTexture(tguiGui* gui, sfRenderTexture* window)
{
    gui->This.setTarget(window->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setView(tguiGui* gui, const sfView* view)
{
    gui->This.setView(view->This);
    gui->View.This = view->This;
}

const sfView* tguiGui_getView(const tguiGui* gui)
{
    return &gui->View;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiGui_handleEvent(tguiGui* gui, sfEvent event)
{
    sf::Event SFMLEvent;
    convertEvent(event, SFMLEvent);
    return gui->This.handleEvent(SFMLEvent);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_add(tguiGui* gui, tguiWidget* widget, const sfUint32* widgetName)
{
    gui->This.add(widget->This, widgetName);
}

tguiWidget* tguiGui_get(tguiGui* gui, const sfUint32* widgetName)
{
    tgui::Widget::Ptr widget = gui->This.get(widgetName);
    if (widget)
        return new tguiWidget(widget);
    else
        return nullptr;
}

tguiWidget** tguiGui_getWidgets(tguiGui* gui, size_t* count)
{
    const auto& widgets = gui->This.getWidgets();

    static std::vector<tguiWidget*> cWidgets;
    cWidgets.resize(widgets.size());

    for (std::size_t i = 0; i < widgets.size(); ++i)
        cWidgets[i] = new tguiWidget(widgets[i]);

    *count = cWidgets.size();
    return cWidgets.data();
}

const sfUint32** tguiGui_getWidgetNames(tguiGui* gui, size_t* count)
{
    const auto& names = gui->This.getWidgetNames();

    static std::vector<const sfUint32*> cNames;
    cNames.resize(names.size());

    for (std::size_t i = 0; i < names.size(); ++i)
        cNames[i] = names[i].getData();

    *count = cNames.size();
    return cNames.data();
}

void tguiGui_remove(tguiGui* gui, tguiWidget* widget)
{
    gui->This.remove(widget->This);
}

void tguiGui_removeAllWidgets(tguiGui* gui)
{
    gui->This.removeAllWidgets();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setTabKeyUsageEnabled(tguiGui* gui, sfBool enabled)
{
    gui->This.setTabKeyUsageEnabled(enabled != 0);
}

sfBool tguiGui_isTabKeyUsageEnabled(tguiGui* gui)
{
    return gui->This.isTabKeyUsageEnabled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_draw(tguiGui* gui)
{
    gui->This.draw();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setFont(tguiGui* gui, sfFont* font)
{
    gui->This.setFont(font->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setOpacity(tguiGui* gui, float alpha)
{
    gui->This.setOpacity(alpha);
}

float tguiGui_getOpacity(const tguiGui* gui)
{
    return gui->This.getOpacity();
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiGui_loadWidgetsFromFile(tguiGui* gui, const char* filename, sfBool replaceExisting)
{
    try
    {
        gui->This.loadWidgetsFromFile(filename, replaceExisting);
        return true;
    }
    catch (const tgui::Exception& e)
    {
        tguiErrorMessage = e.what();
        return false;
    }
}

sfBool tguiGui_saveWidgetsToFile(tguiGui* gui, const char* filename)
{
    try
    {
        gui->This.saveWidgetsToFile(filename);
        return true;
    }
    catch (const tgui::Exception& e)
    {
        tguiErrorMessage = e.what();
        return false;
    }
}
