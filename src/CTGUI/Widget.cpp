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


#include <CTGUI/Widget.h>
#include <CTGUI/WidgetStruct.h>
#include <CTGUI/LayoutStruct.h>
#include <CTGUI/RendererDataStruct.h>
#include <CTGUI/Renderers/RendererStruct.h>

#include <TGUI/Container.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiWidget_copy(const tguiWidget* widget)
{
    return new tguiWidget(widget->This->clone());
}

void tguiWidget_destroy(tguiWidget* widget)
{
    delete widget;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setPosition(tguiWidget* widget, sfVector2f position)
{
    widget->This->setPosition({position.x, position.y});
}

void tguiWidget_setPosition_fromLayout(tguiWidget* widget, tguiLayout2d* layout)
{
    widget->This->setPosition(layout->This);
}

sfVector2f tguiWidget_getPosition(const tguiWidget* widget)
{
    sf::Vector2f pos = widget->This->getPosition();
    return {pos.x, pos.y};
}

sfVector2f tguiWidget_getAbsolutePosition(const tguiWidget* widget)
{
    sf::Vector2f pos = widget->This->getAbsolutePosition();
    return {pos.x, pos.y};
}

sfVector2f tguiWidget_getWidgetOffset(const tguiWidget* widget)
{
    sf::Vector2f pos = widget->This->getWidgetOffset();
    return {pos.x, pos.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setSize(tguiWidget* widget, sfVector2f size)
{
    widget->This->setSize({size.x, size.y});
}

void tguiWidget_setSize_fromLayout(tguiWidget* widget, tguiLayout2d* layout)
{
    widget->This->setSize(layout->This);
}

sfVector2f tguiWidget_getSize(const tguiWidget* widget)
{
    sf::Vector2f size = widget->This->getSize();
    return {size.x, size.y};
}

sfVector2f tguiWidget_getFullSize(const tguiWidget* widget)
{
    sf::Vector2f size = widget->This->getFullSize();
    return {size.x, size.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int tguiWidget_connect(tguiWidget* widget, const char* signalName, void (*function)(), const char** error)
{
    try
    {
        unsigned int id = widget->This->connect(signalName, function);
        *error = nullptr;
        return id;
    }
    catch (const tgui::Exception& e)
    {
        static std::string errorMessage;
        errorMessage = e.what();
        *error = errorMessage.c_str();
        return 0;
    }
}

void tguiWidget_connect_vector2f(tguiWidget* widget, const char* signalName, void (*function)(sfVector2f), const char** error)
{
    try
    {
        widget->This->connect(signalName, [function](const sf::Vector2f& vector2f){ function({vector2f.x, vector2f.y}); });
        *error = nullptr;
    }
    catch (const tgui::Exception& e)
    {
        static std::string errorMessage;
        errorMessage = e.what();
        *error = errorMessage.c_str();
    }
}

void tguiWidget_connect_string(tguiWidget* widget, const char* signalName, void (*function)(const sfUint32*), const char** error)
{
    try
    {
        widget->This->connect(signalName, [function](const sf::String& str){ function(str.getData()); });
        *error = nullptr;
    }
    catch (const tgui::Exception& e)
    {
        static std::string errorMessage;
        errorMessage = e.what();
        *error = errorMessage.c_str();
    }
}

void tguiWidget_connect_int(tguiWidget* widget, const char* signalName, void (*function)(int), const char** error)
{
    try
    {
        widget->This->connect(signalName, function);
        *error = nullptr;
    }
    catch (const tgui::Exception& e)
    {
        static std::string errorMessage;
        errorMessage = e.what();
        *error = errorMessage.c_str();
    }
}

void tguiWidget_connect_itemSelected(tguiWidget* widget, const char* signalName, void (*function)(const sfUint32*, const sfUint32*), const char** error)
{
    try
    {
        widget->This->connect(signalName, [function](const sf::String& item, const sf::String& id){ function(item.getData(), id.getData()); });
        *error = nullptr;
    }
    catch (const tgui::Exception& e)
    {
        static std::string errorMessage;
        errorMessage = e.what();
        *error = errorMessage.c_str();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_disconnect(tguiWidget* widget, unsigned int id)
{
    widget->This->disconnect(id);
}

void tguiWidget_disconnectAll(tguiWidget* widget)
{
    widget->This->disconnectAll();
}

void tguiWidget_disconnectAllBySignalName(tguiWidget* widget, const char* signalName)
{
    widget->This->disconnectAll(signalName);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setRenderer(tguiWidget* widget, tguiRendererData* renderer, const char** error)
{
    try
    {
        widget->This->setRenderer(renderer->This);
        *error = nullptr;
    }
    catch (const tgui::Exception& e)
    {
        static std::string errorMessage;
        errorMessage = e.what();
        *error = errorMessage.c_str();
    }
}

tguiRenderer* tguiWidget_getRenderer(const tguiWidget* widget)
{
    return new tguiRenderer(widget->This->getRenderer(), false);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_show(tguiWidget* widget)
{
    widget->This->show();
}

void tguiWidget_showWithEffect(tguiWidget* widget, tguiShowAnimationType type, sfTime time)
{
    widget->This->showWithEffect(static_cast<tgui::ShowAnimationType>(type), sf::microseconds(time.microseconds));
}

void tguiWidget_hide(tguiWidget* widget)
{
    widget->This->hide();
}

void tguiWidget_hideWithEffect(tguiWidget* widget, tguiShowAnimationType type, sfTime time)
{
    widget->This->hideWithEffect(static_cast<tgui::ShowAnimationType>(type), sf::microseconds(time.microseconds));
}

sfBool tguiWidget_isVisible(const tguiWidget* widget)
{
    return widget->This->isVisible();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_enable(tguiWidget* widget)
{
    widget->This->enable();
}

void tguiWidget_disable(tguiWidget* widget)
{
    widget->This->disable();
}

sfBool tguiWidget_isEnabled(const tguiWidget* widget)
{
    return widget->This->isEnabled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_focus(tguiWidget* widget)
{
    widget->This->focus();
}

void tguiWidget_unfocus(tguiWidget* widget)
{
    widget->This->unfocus();
}

sfBool tguiWidget_isFocused(const tguiWidget* widget)
{
    return widget->This->isFocused();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char* tguiWidget_getWidgetType(const tguiWidget* widget)
{
    return widget->This->getWidgetType().c_str();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_moveToFront(tguiWidget* widget)
{
    widget->This->moveToFront();
}

void tguiWidget_moveToBack(tguiWidget* widget)
{
    widget->This->moveToBack();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setToolTip(tguiWidget* widget, tguiWidget* toolTip)
{
    if (toolTip)
        widget->This->setToolTip(toolTip->This);
    else
        widget->This->setToolTip(nullptr);
}

tguiWidget* tguiWidget_getToolTip(const tguiWidget* widget)
{
    tgui::Widget::Ptr toolTip = widget->This->getToolTip();
    if (widget)
        return new tguiWidget(toolTip);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiWidget_getParent(tguiWidget* widget)
{
    tgui::Container* parent = widget->This->getParent();
    if (parent)
        return new tguiWidget(parent->shared_from_this());
    else
        return nullptr;
}
