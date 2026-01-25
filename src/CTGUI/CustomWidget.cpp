/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2026 Bruno Van de Velde (vdv_b@tgui.eu)
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


#include <CTGUI/CustomWidget.h>
#include <CTGUI/WidgetStruct.hpp>
#include <CTGUI/BackendRenderTargetStruct.hpp>
#include <CTGUI/CustomWidgetBase.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define DOWNCAST(x) std::static_pointer_cast<ctgui::CustomWidgetBase>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiCustomWidget_create(void)
{
    return ctgui::addWidgetRef(ctgui::CustomWidgetBase::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiCustomWidget_setWidgetData(tguiWidget* widget, void* data)
{
    DOWNCAST(widget->This)->widgetData = data;
}

void* tguiCustomWidget_getWidgetData(tguiWidget* widget)
{
    return DOWNCAST(widget->This)->widgetData;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiCustomWidget_setPositionChangedCallback(tguiWidget* widget, void (*function)(tguiWidget*, tguiVector2f))
{
    DOWNCAST(widget->This)->implPositionChanged = [function,widget](tgui::Vector2f pos){ function(widget, {pos.x, pos.y}); };
}

void tguiCustomWidget_setSizeChangedCallback(tguiWidget* widget, void (*function)(tguiWidget*, tguiVector2f))
{
    DOWNCAST(widget->This)->implSizeChanged = [function,widget](tgui::Vector2f size){ function(widget, {size.x, size.y}); };
}

void tguiCustomWidget_setVisibleChangedCallback(tguiWidget* widget, void (*function)(tguiWidget*, tguiBool))
{
    DOWNCAST(widget->This)->implVisibleChanged = [function,widget](bool visible){ function(widget, visible); };
}

void tguiCustomWidget_setEnableChangedCallback(tguiWidget* widget, void (*function)(tguiWidget*, tguiBool))
{
    DOWNCAST(widget->This)->implEnableChanged = [function,widget](bool enabled){ function(widget, enabled); };
}

void tguiCustomWidget_setFocusChangedCallback(tguiWidget* widget, void (*function)(tguiWidget*, tguiBool))
{
    DOWNCAST(widget->This)->implFocusChanged = [function,widget](bool focused){ function(widget, focused); };
}

void tguiCustomWidget_setCanGainFocusCallback(tguiWidget* widget, tguiBool (*function)(tguiWidget*))
{
    DOWNCAST(widget->This)->implCanGainFocus = [function,widget]{ return function(widget) != 0; };
}

void tguiCustomWidget_setGetFullSizeCallback(tguiWidget* widget, tguiVector2f (*function)(tguiWidget*))
{
    DOWNCAST(widget->This)->implGetFullSize = [function,widget]{
        const tguiVector2f size = function(widget);
        return tgui::Vector2f{size.x, size.y};
    };
}

void tguiCustomWidget_setGetWidgetOffsetCallback(tguiWidget* widget, tguiVector2f (*function)(tguiWidget*))
{
    DOWNCAST(widget->This)->implGetWidgetOffset = [function,widget]{
        const tguiVector2f offset = function(widget);
        return tgui::Vector2f{offset.x, offset.y};
    };
}

void tguiCustomWidget_setUpdateTimeCallback(tguiWidget* widget, tguiBool (*function)(tguiWidget*, tguiDuration))
{
    DOWNCAST(widget->This)->implUpdateTimeFunction = [function,widget](tgui::Duration duration){
        tguiDuration cDuration;
        cDuration.nanoseconds = static_cast<tguiInt64>(std::chrono::nanoseconds(duration).count());
        return function(widget, cDuration);
    };
}

void tguiCustomWidget_setMouseOnWidgetCallback(tguiWidget* widget, tguiBool (*function)(tguiWidget*, tguiVector2f))
{
    DOWNCAST(widget->This)->implMouseOnWidget = [function,widget](tgui::Vector2f pos){ return function(widget, {pos.x, pos.y}) != 0; };
}

void tguiCustomWidget_setLeftMousePressedCallback(tguiWidget* widget, tguiBool (*function)(tguiWidget*, tguiVector2f))
{
    DOWNCAST(widget->This)->implLeftMousePressed = [function,widget](tgui::Vector2f pos){ return function(widget, {pos.x, pos.y}) != 0; };
}

void tguiCustomWidget_setLeftMouseReleasedCallback(tguiWidget* widget, void (*function)(tguiWidget*, tguiVector2f))
{
    DOWNCAST(widget->This)->implLeftMouseReleased = [function,widget](tgui::Vector2f pos){ function(widget, {pos.x, pos.y}); };
}

void tguiCustomWidget_setRightMousePressedCallback(tguiWidget* widget, void (*function)(tguiWidget*, tguiVector2f))
{
    DOWNCAST(widget->This)->implRightMousePressed = [function,widget](tgui::Vector2f pos){ function(widget, {pos.x, pos.y}); };
}

void tguiCustomWidget_setRightMouseReleasedCallback(tguiWidget* widget, void (*function)(tguiWidget*, tguiVector2f))
{
    DOWNCAST(widget->This)->implRightMouseReleased = [function,widget](tgui::Vector2f pos){ function(widget, {pos.x, pos.y}); };
}

void tguiCustomWidget_setMouseMovedCallback(tguiWidget* widget, void (*function)(tguiWidget*, tguiVector2f))
{
    DOWNCAST(widget->This)->implMouseMoved = [function,widget](tgui::Vector2f pos){ function(widget, {pos.x, pos.y}); };
}

void tguiCustomWidget_setKeyPressedCallback(tguiWidget* widget, void (*function)(tguiWidget*, tguiKeyEvent))
{
    DOWNCAST(widget->This)->implKeyPressed = [function,widget](const tgui::Event::KeyEvent& event){
        tguiKeyEvent keyEvent;
        keyEvent.code = static_cast<tguiKeyboardKey>(event.code);
        keyEvent.alt = event.alt;
        keyEvent.control = event.control;
        keyEvent.shift = event.shift;
        keyEvent.system = event.system;
        function(widget, keyEvent);
    };
}

void tguiCustomWidget_setTextEnteredCallback(tguiWidget* widget, void (*function)(tguiWidget*, tguiChar32))
{
    DOWNCAST(widget->This)->implTextEntered = [function,widget](char32_t key){ function(widget, static_cast<tguiChar32>(key)); };
}

void tguiCustomWidget_setScrolledCallback(tguiWidget* widget, tguiBool (*function)(tguiWidget*, float, tguiVector2f, tguiBool))
{
    DOWNCAST(widget->This)->implScrolled = [function,widget](float delta, tgui::Vector2f pos, bool touch){
        return function(widget, delta, {pos.x, pos.y}, touch) != 0;
    };
}

void tguiCustomWidget_setMouseNoLongerOnWidgetCallback(tguiWidget* widget, void (*function)(tguiWidget*))
{
    DOWNCAST(widget->This)->implMouseNoLongerOnWidget = [function,widget]{ function(widget); };
}

void tguiCustomWidget_setLeftMouseButtonNoLongerDownCallback(tguiWidget* widget, void (*function)(tguiWidget*))
{
    DOWNCAST(widget->This)->implLeftMouseButtonNoLongerDown = [function,widget]{ function(widget); };
}

void tguiCustomWidget_setMouseEnteredWidgetCallback(tguiWidget* widget, void (*function)(tguiWidget*))
{
    DOWNCAST(widget->This)->implMouseEnteredWidget = [function,widget]{ function(widget); };
}

void tguiCustomWidget_setMouseLeftWidgetCallback(tguiWidget* widget, void (*function)(tguiWidget*))
{
    DOWNCAST(widget->This)->implMouseLeftWidget = [function,widget]{ function(widget); };
}

void tguiCustomWidget_setRendererChangedCallback(tguiWidget* widget, tguiBool (*function)(tguiWidget*, tguiUtf32))
{
    DOWNCAST(widget->This)->implRendererChanged = [function,widget](const tgui::String& property){
        return (function(widget, ctgui::fromCppStr(property)) != 0);
    };
}

void tguiCustomWidget_setDrawCallback(tguiWidget* widget, void (*function)(tguiWidget*, tguiBackendRenderTarget*, tguiRenderStates*))
{
    DOWNCAST(widget->This)->implDrawFunction = [function,widget](tgui::BackendRenderTarget& cppTarget, tgui::RenderStates cppStates){
        tguiBackendRenderTarget cTarget(&cppTarget);
        tguiRenderStates cStates;
        std::memcpy(cStates.transform.matrix, cppStates.transform.getMatrix().data(), 16*sizeof(float));
        function(widget, &cTarget, &cStates);
    };
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

