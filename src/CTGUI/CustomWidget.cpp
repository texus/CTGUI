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

void tguiCustomWidget_setPositionChangedCallback(tguiWidget* widget, void (*function)(tguiVector2f))
{
    DOWNCAST(widget->This)->implPositionChanged = [function](tgui::Vector2f pos){ function({pos.x, pos.y}); };
}

void tguiCustomWidget_setSizeChangedCallback(tguiWidget* widget, void (*function)(tguiVector2f))
{
    DOWNCAST(widget->This)->implSizeChanged = [function](tgui::Vector2f size){ function({size.x, size.y}); };
}

void tguiCustomWidget_setVisibleChangedCallback(tguiWidget* widget, void (*function)(tguiBool))
{
    DOWNCAST(widget->This)->implVisibleChanged = [function](bool visible){ function(visible); };
}

void tguiCustomWidget_setEnableChangedCallback(tguiWidget* widget, void (*function)(tguiBool))
{
    DOWNCAST(widget->This)->implEnableChanged = [function](bool enabled){ function(enabled); };
}

void tguiCustomWidget_setFocusChangedCallback(tguiWidget* widget, void (*function)(tguiBool))
{
    DOWNCAST(widget->This)->implFocusChanged = [function](bool focused){ function(focused); };
}

void tguiCustomWidget_setCanGainFocusCallback(tguiWidget* widget, tguiBool (*function)(void))
{
    DOWNCAST(widget->This)->implCanGainFocus = [function]{ return function() != 0; };
}

void tguiCustomWidget_setGetFullSizeCallback(tguiWidget* widget, tguiVector2f (*function)(void))
{
    DOWNCAST(widget->This)->implGetFullSize = [function]{
        const tguiVector2f size = function();
        return tgui::Vector2f{size.x, size.y};
    };
}

void tguiCustomWidget_setGetWidgetOffsetCallback(tguiWidget* widget, tguiVector2f (*function)(void))
{
    DOWNCAST(widget->This)->implGetWidgetOffset = [function]{
        const tguiVector2f offset = function();
        return tgui::Vector2f{offset.x, offset.y};
    };
}

void tguiCustomWidget_setUpdateTimeCallback(tguiWidget* widget, tguiBool (*function)(tguiDuration))
{
    DOWNCAST(widget->This)->implUpdateTimeFunction = [function](tgui::Duration duration){
        tguiDuration cDuration;
        cDuration.nanoseconds = static_cast<tguiInt64>(std::chrono::nanoseconds(duration).count());
        return function(cDuration);
    };
}

void tguiCustomWidget_setMouseOnWidgetCallback(tguiWidget* widget, tguiBool (*function)(tguiVector2f))
{
    DOWNCAST(widget->This)->implMouseOnWidget = [function](tgui::Vector2f pos){ return function({pos.x, pos.y}) != 0; };
}

void tguiCustomWidget_setLeftMousePressedCallback(tguiWidget* widget, tguiBool (*function)(tguiVector2f))
{
    DOWNCAST(widget->This)->implLeftMousePressed = [function](tgui::Vector2f pos){ return function({pos.x, pos.y}) != 0; };
}

void tguiCustomWidget_setLeftMouseReleasedCallback(tguiWidget* widget, void (*function)(tguiVector2f))
{
    DOWNCAST(widget->This)->implLeftMouseReleased = [function](tgui::Vector2f pos){ function({pos.x, pos.y}); };
}

void tguiCustomWidget_setRightMousePressedCallback(tguiWidget* widget, void (*function)(tguiVector2f))
{
    DOWNCAST(widget->This)->implRightMousePressed = [function](tgui::Vector2f pos){ function({pos.x, pos.y}); };
}

void tguiCustomWidget_setRightMouseReleasedCallback(tguiWidget* widget, void (*function)(tguiVector2f))
{
    DOWNCAST(widget->This)->implRightMouseReleased = [function](tgui::Vector2f pos){ function({pos.x, pos.y}); };
}

void tguiCustomWidget_setMouseMovedCallback(tguiWidget* widget, void (*function)(tguiVector2f))
{
    DOWNCAST(widget->This)->implMouseMoved = [function](tgui::Vector2f pos){ function({pos.x, pos.y}); };
}

void tguiCustomWidget_setKeyPressedCallback(tguiWidget* widget, void (*function)(tguiKeyEvent))
{
    DOWNCAST(widget->This)->implKeyPressed = [function](const tgui::Event::KeyEvent& event){
        tguiKeyEvent keyEvent;
        keyEvent.code = static_cast<tguiKeyboardKey>(event.code);
        keyEvent.alt = event.alt;
        keyEvent.control = event.control;
        keyEvent.shift = event.shift;
        keyEvent.system = event.system;
        function(keyEvent);
    };
}

void tguiCustomWidget_setTextEnteredCallback(tguiWidget* widget, void (*function)(tguiUint32))
{
    DOWNCAST(widget->This)->implTextEntered = [function](char32_t key){ function(static_cast<tguiUint32>(key)); };
}

void tguiCustomWidget_setScrolledCallback(tguiWidget* widget, tguiBool (*function)(float, tguiVector2f, tguiBool))
{
    DOWNCAST(widget->This)->implScrolled = [function](float delta, tgui::Vector2f pos, bool touch){
        return function(delta, {pos.x, pos.y}, touch) != 0;
    };
}

void tguiCustomWidget_setMouseNoLongerOnWidgetCallback(tguiWidget* widget, void (*function)(void))
{
    DOWNCAST(widget->This)->implMouseNoLongerOnWidget = function;
}

void tguiCustomWidget_setLeftMouseButtonNoLongerDownCallback(tguiWidget* widget, void (*function)(void))
{
    DOWNCAST(widget->This)->implLeftMouseButtonNoLongerDown = function;
}

void tguiCustomWidget_setMouseEnteredWidgetCallback(tguiWidget* widget, void (*function)(void))
{
    DOWNCAST(widget->This)->implMouseEnteredWidget = function;
}

void tguiCustomWidget_setMouseLeftWidgetCallback(tguiWidget* widget, void (*function)(void))
{
    DOWNCAST(widget->This)->implMouseLeftWidget = function;
}

void tguiCustomWidget_setRendererChangedCallback(tguiWidget* widget, tguiBool (*function)(tguiUtf32))
{
    DOWNCAST(widget->This)->implRendererChanged = [function](const tgui::String& property){
        return (function(ctgui::fromCppStr(property)) != 0);
    };
}

void tguiCustomWidget_setDrawCallback(tguiWidget* widget, void (*function)(tguiBackendRenderTarget*, tguiRenderStates*))
{
    DOWNCAST(widget->This)->implDrawFunction = [function](tgui::BackendRenderTarget& cppTarget, tgui::RenderStates cppStates){
        tguiBackendRenderTarget cTarget(&cppTarget);
        tguiRenderStates cStates;
        std::memcpy(cStates.transform.matrix, cppStates.transform.getMatrix().data(), 16*sizeof(float));
        function(&cTarget, &cStates);
    };
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

