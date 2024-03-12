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

#include <CTGUI/Gui.h>
#include <CTGUI/GuiStruct.hpp>
#include <CTGUI/InternalGlobal.hpp>
#include <CTGUI/FontStruct.hpp>
#include <CTGUI/WidgetStruct.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setAbsoluteViewport(tguiGui* gui, tguiFloatRect viewport)
{
    gui->This->setAbsoluteViewport({viewport.left, viewport.top, viewport.width, viewport.height});
}

void tguiGui_setRelativeViewport(tguiGui* gui, tguiFloatRect viewport)
{
    gui->This->setRelativeViewport({viewport.left, viewport.top, viewport.width, viewport.height});
}

tguiFloatRect tguiGui_getViewport(const tguiGui* gui)
{
    const tgui::FloatRect rect = gui->This->getViewport().getRect();
    return {rect.left, rect.top, rect.width, rect.height};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setAbsoluteView(tguiGui* gui, tguiFloatRect view)
{
    gui->This->setAbsoluteView({view.left, view.top, view.width, view.height});
}

void tguiGui_setRelativeView(tguiGui* gui, tguiFloatRect view)
{
    gui->This->setRelativeView({view.left, view.top, view.width, view.height});
}

tguiFloatRect tguiGui_getView(const tguiGui* gui)
{
    const tgui::FloatRect rect = gui->This->getView().getRect();
    return {rect.left, rect.top, rect.width, rect.height};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setTabKeyUsageEnabled(tguiGui* gui, tguiBool enabled)
{
    gui->This->setTabKeyUsageEnabled(enabled != 0);
}

tguiBool tguiGui_isTabKeyUsageEnabled(tguiGui* gui)
{
    return gui->This->isTabKeyUsageEnabled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_draw(tguiGui* gui)
{
    gui->This->draw();

    ctgui::cleanupWidgets(); // Fully destroy widgets that no longer exist
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setFont(tguiGui* gui, tguiFont* font)
{
    gui->This->setFont(*font->This);
}

tguiFont* tguiGui_getFont(const tguiGui* gui)
{
    return new tguiFont(std::make_unique<tgui::Font>(gui->This->getFont()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_add(tguiGui* gui, tguiWidget* widget, tguiUtf32 widgetName)
{
    gui->This->add(widget->This, ctgui::toCppStr(widgetName));
}

tguiWidget* tguiGui_get(tguiGui* gui, tguiUtf32 widgetName)
{
    tgui::Widget::Ptr widget = gui->This->get(ctgui::toCppStr(widgetName));
    if (widget)
        return ctgui::addWidgetRef(widget);
    else
        return nullptr;
}

tguiWidget** tguiGui_getWidgets(tguiGui* gui, size_t* count)
{
    const auto& widgets = gui->This->getWidgets();

    static std::vector<tguiWidget*> cWidgets;
    cWidgets.resize(widgets.size());

    for (std::size_t i = 0; i < widgets.size(); ++i)
        cWidgets[i] = ctgui::addWidgetRef(widgets[i]);

    *count = cWidgets.size();
    return cWidgets.data();
}

tguiBool tguiGui_remove(tguiGui* gui, tguiWidget* widget)
{
    return gui->This->remove(widget->This);
}

void tguiGui_removeAllWidgets(tguiGui* gui)
{
    gui->This->removeAllWidgets();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiGui_getFocusedChild(tguiGui* gui)
{
    const auto focusedWidget = gui->This->getFocusedChild();
    if (focusedWidget)
    {
        const auto& widgets = gui->This->getWidgets();
        for (std::size_t i = 0; i < widgets.size(); ++i)
        {
            if (widgets[i] == focusedWidget)
                return ctgui::addWidgetRef(focusedWidget);
        }
    }

    return nullptr;
}

tguiWidget* tguiGui_getFocusedLeaf(tguiGui* gui)
{
    const auto leafWidget = gui->This->getFocusedLeaf();
    if (leafWidget)
        return ctgui::addWidgetRef(leafWidget);
    else
        return nullptr;
}

tguiWidget* tguiGui_getWidgetAtPos(tguiGui* gui, tguiVector2f pos, tguiBool recursive)
{
    const auto leafWidgetAtPos = gui->This->getWidgetAtPos({pos.x, pos.y}, recursive != 0);
    if (leafWidgetAtPos)
        return ctgui::addWidgetRef(leafWidgetAtPos);
    else
        return nullptr;
}

tguiWidget* tguiGui_getWidgetBelowMouseCursor(tguiGui* gui, tguiVector2i mousePos, tguiBool recursive)
{
    const auto leafWidgetAtPos = gui->This->getWidgetBelowMouseCursor({mousePos.x, mousePos.y}, recursive != 0);
    if (leafWidgetAtPos)
        return ctgui::addWidgetRef(leafWidgetAtPos);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiGui_focusNextWidget(tguiGui* gui, tguiBool recursive)
{
    return gui->This->focusNextWidget(recursive != 0);
}

tguiBool tguiGui_focusPreviousWidget(tguiGui* gui, tguiBool recursive)
{
    return gui->This->focusPreviousWidget(recursive != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_unfocusAllWidgets(tguiGui* gui)
{
    gui->This->unfocusAllWidgets();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_moveWidgetToFront(tguiGui* gui, tguiWidget* widget)
{
    gui->This->moveWidgetToFront(widget->This);
}

void tguiGui_moveWidgetToBack(tguiGui* gui, tguiWidget* widget)
{
    gui->This->moveWidgetToBack(widget->This);
}

size_t tguiGui_moveWidgetForward(tguiGui* gui, tguiWidget* widget)
{
    return gui->This->moveWidgetForward(widget->This);
}

size_t tguiGui_moveWidgetBackward(tguiGui* gui, tguiWidget* widget)
{
    return gui->This->moveWidgetBackward(widget->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiGui_setWidgetIndex(tguiGui* gui, tguiWidget* widget, size_t index)
{
    return gui->This->setWidgetIndex(widget->This, index);
}

int tguiGui_getWidgetIndex(tguiGui* gui, tguiWidget* widget)
{
    return gui->This->getWidgetIndex(widget->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setOpacity(tguiGui* gui, float alpha)
{
    gui->This->setOpacity(alpha);
}

float tguiGui_getOpacity(const tguiGui* gui)
{
    return gui->This->getOpacity();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setTextSize(tguiGui* gui, unsigned int size)
{
    gui->This->setTextSize(size);
}

unsigned int tguiGui_getTextSize(const tguiGui* gui)
{
    return gui->This->getTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiGui_loadWidgetsFromFile(tguiGui* gui, const char* filename, tguiBool replaceExisting)
{
    try
    {
        gui->This->loadWidgetsFromFile(filename, replaceExisting);
        return true;
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return false;
    }
}

tguiBool tguiGui_saveWidgetsToFile(tguiGui* gui, const char* filename)
{
    try
    {
        gui->This->saveWidgetsToFile(filename);
        return true;
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setDrawingUpdatesTime(tguiGui* gui, tguiBool drawUpdatesTime)
{
    gui->This->setDrawingUpdatesTime(drawUpdatesTime != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiGui_updateTime(tguiGui* gui)
{
    return gui->This->updateTime();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setOverrideMouseCursor(tguiGui* gui, tguiCursorType type)
{
    gui->This->setOverrideMouseCursor(static_cast<tgui::Cursor::Type>(type));
}

void tguiGui_restoreOverrideMouseCursor(tguiGui* gui)
{
    gui->This->restoreOverrideMouseCursor();
}

void tguiGui_requestMouseCursor(tguiGui* gui, tguiCursorType type)
{
    gui->This->requestMouseCursor(static_cast<tgui::Cursor::Type>(type));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiGui_mapPixelToCoords(const tguiGui* gui, tguiVector2i pixel)
{
    const tgui::Vector2f coord = gui->This->mapPixelToCoords({pixel.x, pixel.y});
    return {coord.x, coord.y};
}

tguiVector2f tguiGui_mapCoordsToPixel(const tguiGui* gui, tguiVector2f coord)
{
    const tgui::Vector2f pixel = gui->This->mapCoordsToPixel({coord.x, coord.y});
    return {pixel.x, pixel.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setKeyboardNavigationEnabled(tguiGui* gui, tguiBool enabled)
{
    gui->This->setKeyboardNavigationEnabled(enabled != 0);
}

tguiBool tguiGui_isKeyboardNavigationEnabled(const tguiGui* gui)
{
    return gui->This->isKeyboardNavigationEnabled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_mainLoop(tguiGui* gui, tguiColor* clearColor)
{
    gui->This->mainLoop(ctgui::toCppColor(clearColor));
}
