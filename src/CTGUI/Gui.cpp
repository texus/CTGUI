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

#include <CTGUI/Gui.h>
#include <CTGUI/GuiStruct.hpp>
#include <CTGUI/InternalGlobal.hpp>

#include <CTGUI/WidgetStruct.hpp>
#include <CTGUI/FontStruct.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_draw(tguiGui* gui)
{
    gui->This->draw();

    ctgui::cleanupWidgets(); // Fully destroy widgets that no longer exist
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

void tguiGui_setAbsoluteViewport(tguiGui* thisGui, tguiFloatRect viewport)
{
    thisGui->This->setAbsoluteViewport({viewport.left, viewport.top, viewport.width, viewport.height});
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setRelativeViewport(tguiGui* thisGui, tguiFloatRect viewport)
{
    thisGui->This->setRelativeViewport({viewport.left, viewport.top, viewport.width, viewport.height});
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiFloatRect tguiGui_getViewport(const tguiGui* thisGui)
{
    const auto rect = thisGui->This->getViewport();
    return {rect.getPosition().x, rect.getPosition().y, rect.getSize().x, rect.getSize().y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setAbsoluteView(tguiGui* thisGui, tguiFloatRect view)
{
    thisGui->This->setAbsoluteView({view.left, view.top, view.width, view.height});
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setRelativeView(tguiGui* thisGui, tguiFloatRect view)
{
    thisGui->This->setRelativeView({view.left, view.top, view.width, view.height});
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiFloatRect tguiGui_getView(const tguiGui* thisGui)
{
    const auto rect = thisGui->This->getView();
    return {rect.getPosition().x, rect.getPosition().y, rect.getSize().x, rect.getSize().y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setTabKeyUsageEnabled(tguiGui* thisGui, tguiBool value)
{
    thisGui->This->setTabKeyUsageEnabled(value != 0);
}

tguiBool tguiGui_isTabKeyUsageEnabled(const tguiGui* thisGui)
{
    return thisGui->This->isTabKeyUsageEnabled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setFont(tguiGui* thisGui, const tguiFont* value)
{
    thisGui->This->setFont(*value->This);
}

const tguiFont* tguiGui_getFont(const tguiGui* thisGui)
{
    return new tguiFont(std::make_unique<tgui::Font>(thisGui->This->getFont()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_add(tguiGui* thisGui, tguiWidget* widget, tguiUtf32 widgetName)
{
    thisGui->This->add(widget->This, ctgui::toCppStr(widgetName));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiGui_get(const tguiGui* thisGui, tguiUtf32 widgetName)
{
    tgui::Widget::Ptr widgetToReturn = thisGui->This->get(ctgui::toCppStr(widgetName));
    if (widgetToReturn)
        return ctgui::addWidgetRef(widgetToReturn);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget** tguiGui_getWidgets(const tguiGui* thisGui, size_t* returnCount)
{
    const auto& widgets = thisGui->This->getWidgets();

    static std::vector<tguiWidget*> cWidgets;
    cWidgets.clear();
    cWidgets.reserve(widgets.size());
    for (const auto& widget : widgets)
        cWidgets.emplace_back(ctgui::addWidgetRef(widget));

    *returnCount = cWidgets.size();
    return cWidgets.data();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiGui_remove(tguiGui* thisGui, tguiWidget* widget)
{
    return thisGui->This->remove(widget->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_removeAllWidgets(tguiGui* thisGui)
{
    thisGui->This->removeAllWidgets();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiGui_getFocusedChild(const tguiGui* thisGui)
{
    tgui::Widget::Ptr widgetToReturn = thisGui->This->getFocusedChild();
    if (widgetToReturn)
        return ctgui::addWidgetRef(widgetToReturn);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiGui_getFocusedLeaf(const tguiGui* thisGui)
{
    tgui::Widget::Ptr widgetToReturn = thisGui->This->getFocusedLeaf();
    if (widgetToReturn)
        return ctgui::addWidgetRef(widgetToReturn);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiGui_getWidgetAtPos(const tguiGui* thisGui, tguiVector2f pos, tguiBool recursive)
{
    tgui::Widget::Ptr widgetToReturn = thisGui->This->getWidgetAtPos({pos.x, pos.y}, recursive != 0);
    if (widgetToReturn)
        return ctgui::addWidgetRef(widgetToReturn);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiGui_getWidgetBelowMouseCursor(const tguiGui* thisGui, tguiVector2i mousePos, tguiBool recursive)
{
    tgui::Widget::Ptr widgetToReturn = thisGui->This->getWidgetBelowMouseCursor({mousePos.x, mousePos.y}, recursive != 0);
    if (widgetToReturn)
        return ctgui::addWidgetRef(widgetToReturn);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiGui_focusNextWidget(tguiGui* thisGui, tguiBool recursive)
{
    return thisGui->This->focusNextWidget(recursive != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiGui_focusPreviousWidget(tguiGui* thisGui, tguiBool recursive)
{
    return thisGui->This->focusPreviousWidget(recursive != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_unfocusAllWidgets(tguiGui* thisGui)
{
    thisGui->This->unfocusAllWidgets();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_moveWidgetToFront(tguiGui* thisGui, tguiWidget* widget)
{
    thisGui->This->moveWidgetToFront(widget->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_moveWidgetToBack(tguiGui* thisGui, tguiWidget* widget)
{
    thisGui->This->moveWidgetToBack(widget->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiGui_moveWidgetForward(tguiGui* thisGui, tguiWidget* widget)
{
    return thisGui->This->moveWidgetForward(widget->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiGui_moveWidgetBackward(tguiGui* thisGui, tguiWidget* widget)
{
    return thisGui->This->moveWidgetBackward(widget->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiGui_setWidgetIndex(tguiGui* thisGui, tguiWidget* widget, size_t index)
{
    return thisGui->This->setWidgetIndex(widget->This, index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int tguiGui_getWidgetIndex(const tguiGui* thisGui, tguiWidget* widget)
{
    return thisGui->This->getWidgetIndex(widget->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setOpacity(tguiGui* thisGui, float value)
{
    thisGui->This->setOpacity(value);
}

float tguiGui_getOpacity(const tguiGui* thisGui)
{
    return thisGui->This->getOpacity();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setTextSize(tguiGui* thisGui, unsigned int value)
{
    thisGui->This->setTextSize(value);
}

unsigned int tguiGui_getTextSize(const tguiGui* thisGui)
{
    return thisGui->This->getTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setDrawingUpdatesTime(tguiGui* thisGui, tguiBool drawUpdatesTime)
{
    thisGui->This->setDrawingUpdatesTime(drawUpdatesTime != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiGui_updateTime(tguiGui* thisGui)
{
    return thisGui->This->updateTime();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setOverrideMouseCursor(tguiGui* thisGui, tguiCursorType type)
{
    thisGui->This->setOverrideMouseCursor(static_cast<tgui::Cursor::Type>(type));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_restoreOverrideMouseCursor(tguiGui* thisGui)
{
    thisGui->This->restoreOverrideMouseCursor();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_requestMouseCursor(tguiGui* thisGui, tguiCursorType type)
{
    thisGui->This->requestMouseCursor(static_cast<tgui::Cursor::Type>(type));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiGui_mapPixelToCoords(const tguiGui* thisGui, tguiVector2i pixel)
{
    const auto value = thisGui->This->mapPixelToCoords({pixel.x, pixel.y});
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiGui_mapCoordsToPixel(const tguiGui* thisGui, tguiVector2f coord)
{
    const auto value = thisGui->This->mapCoordsToPixel({coord.x, coord.y});
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setKeyboardNavigationEnabled(tguiGui* thisGui, tguiBool value)
{
    thisGui->This->setKeyboardNavigationEnabled(value != 0);
}

tguiBool tguiGui_isKeyboardNavigationEnabled(const tguiGui* thisGui)
{
    return thisGui->This->isKeyboardNavigationEnabled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_mainLoop(tguiGui* thisGui, const tguiColor* clearColor)
{
    thisGui->This->mainLoop(ctgui::toCppColor(clearColor));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
