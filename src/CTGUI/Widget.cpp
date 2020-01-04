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

void tguiWidget_setPositionFromLayout(tguiWidget* widget, tguiLayout2d* layout)
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

void tguiWidget_setSizeFromLayout(tguiWidget* widget, tguiLayout2d* layout)
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

template <typename Func>
static unsigned int connectSignal(tguiWidget* widget, const char* signalName, Func&& func)
{
    try
    {
        return widget->This->connect(signalName, func);
    }
    catch (const tgui::Exception& e)
    {
        tguiErrorMessage = e.what();
        return 0;
    }
}

unsigned int tguiWidget_connect(tguiWidget* widget, const char* signalName, void (*function)())
{
    return connectSignal(widget, signalName, function);
}

unsigned int tguiWidget_connectVector2f(tguiWidget* widget, const char* signalName, void (*function)(sfVector2f))
{
    return connectSignal(widget, signalName, [function](const sf::Vector2f& pos){ function({pos.x, pos.y}); });
}

unsigned int tguiWidget_connectString(tguiWidget* widget, const char* signalName, void (*function)(const sfUint32*))
{
    return connectSignal(widget, signalName, [function](const sf::String& str){ function(str.getData()); });
}

unsigned int tguiWidget_connectInt(tguiWidget* widget, const char* signalName, void (*function)(int))
{
    return connectSignal(widget, signalName, function);
}

unsigned int tguiWidget_connectUInt(tguiWidget* widget, const char* signalName, void (*function)(unsigned int))
{
    return connectSignal(widget, signalName, function);
}

unsigned int tguiWidget_connectFloat(tguiWidget* widget, const char* signalName, void (*function)(float))
{
    return connectSignal(widget, signalName, function);
}

unsigned int tguiWidget_connectRange(tguiWidget* widget, const char* signalName, void (*function)(float, float))
{
    return connectSignal(widget, signalName, function);
}

unsigned int tguiWidget_connectItemSelected(tguiWidget* widget, const char* signalName, void (*function)(const sfUint32*, const sfUint32*))
{
    return connectSignal(widget, signalName, [function](const sf::String& item, const sf::String& id){ function(item.getData(), id.getData()); });
}

unsigned int tguiWidget_connectAnimation(tguiWidget* widget, const char* signalName, void (*function)(tguiShowAnimationType, sfBool))
{
    return connectSignal(widget, signalName, [function](tgui::ShowAnimationType type, bool visible){ function(static_cast<tguiShowAnimationType>(type), visible); });
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_disconnect(tguiWidget* widget, unsigned int id)
{
    widget->This->disconnect(id);
}

void tguiWidget_disconnectAll(tguiWidget* widget, const char* signalName)
{
    if (signalName != NULL)
        widget->This->disconnectAll(signalName);
    else
        widget->This->disconnectAll();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiWidget_setRenderer(tguiWidget* widget, tguiRendererData* renderer)
{
    try
    {
        widget->This->setRenderer(renderer->This);
        return true;
    }
    catch (const tgui::Exception& e)
    {
        tguiErrorMessage = e.what();
        return false;
    }
}

tguiRenderer* tguiWidget_getRenderer(const tguiWidget* widget)
{
    return new tguiRenderer(widget->This->getRenderer(), false);
}

tguiRenderer* tguiWidget_getSharedRenderer(const tguiWidget* widget)
{
    return new tguiRenderer(widget->This->getSharedRenderer(), false);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setVisible(tguiWidget* widget, sfBool visible)
{
    widget->This->setVisible(visible != 0);
}

sfBool tguiWidget_isVisible(const tguiWidget* widget)
{
    return widget->This->isVisible();
}

void tguiWidget_showWithEffect(tguiWidget* widget, tguiShowAnimationType type, sfTime time)
{
    widget->This->showWithEffect(static_cast<tgui::ShowAnimationType>(type), sf::microseconds(time.microseconds));
}

void tguiWidget_hideWithEffect(tguiWidget* widget, tguiShowAnimationType type, sfTime time)
{
    widget->This->hideWithEffect(static_cast<tgui::ShowAnimationType>(type), sf::microseconds(time.microseconds));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setEnabled(tguiWidget* widget, sfBool enabled)
{
    widget->This->setEnabled(enabled != 0);
}

sfBool tguiWidget_isEnabled(const tguiWidget* widget)
{
    return widget->This->isEnabled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setFocused(tguiWidget* widget, sfBool focused)
{
    widget->This->setFocused(focused != 0);
}

sfBool tguiWidget_isFocused(const tguiWidget* widget)
{
    return widget->This->isFocused();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setFocusable(tguiWidget* widget, sfBool focusable)
{
    widget->This->setFocusable(focusable != 0);
}

sfBool tguiWidget_isFocusable(const tguiWidget* widget)
{
    return widget->This->isFocusable();
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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiWidget_isAnimationPlaying(const tguiWidget* widget)
{
    return widget->This->isAnimationPlaying();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiWidget_mouseOnWidget(tguiWidget* widget, sfVector2f pos)
{
    return widget->This->mouseOnWidget({pos.x, pos.y});
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiWidget_setSignalEnabled(tguiWidget* widget, const char* signalName, sfBool enabled)
{
    try
    {
        widget->This->getSignal(signalName).setEnabled(enabled != 0);
        return true;
    }
    catch (const tgui::Exception&)
    {
        // No signal exists with the given name
        return false;
    }
}
