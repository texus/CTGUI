/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2018 Bruno Van de Velde (vdv_b@tgui.eu)
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

#ifndef CTGUI_CUSTOM_WIDGET_FOR_BINDINGS_STRUCT_H
#define CTGUI_CUSTOM_WIDGET_FOR_BINDINGS_STRUCT_H

#include <CTGUI/WidgetStruct.h>
#include <TGUI/CustomWidgetForBindings.hpp>

struct tguiCustomWidgetForBindings : tguiWidget
{
    void (*positionChanged)(sfVector2f) = nullptr;
    void (*sizeChanged)(sfVector2f) = nullptr;
    void (*visibleChanged)(sfBool) = nullptr;
    void (*enableChanged)(sfBool) = nullptr;
    void (*focusChanged)(sfBool) = nullptr;
    sfBool (*canGainFocus)(void) = nullptr;
    sfVector2f (*getFullSize)(void) = nullptr;
    sfVector2f (*getAbsolutePosition)(void) = nullptr;
    sfVector2f (*getWidgetOffset)(void) = nullptr;
    void (*updateFunction)(sfTime) = nullptr;
    sfBool (*mouseOnWidget)(sfVector2f) = nullptr;
    void (*leftMousePressed)(sfVector2f) = nullptr;
    void (*leftMouseReleased)(sfVector2f) = nullptr;
    void (*rightMousePressed)(sfVector2f) = nullptr;
    void (*rightMouseReleased)(sfVector2f) = nullptr;
    void (*mouseMoved)(sfVector2f) = nullptr;
    void (*keyPressed)(sfKeyEvent) = nullptr;
    void (*textEntered)(sfUint32) = nullptr;
    sfBool (*mouseWheelScrolled)(float, sfVector2f) = nullptr;
    void (*mouseNoLongerOnWidget)(void) = nullptr;
    void (*mouseNoLongerDown)(void) = nullptr;
    void (*mouseEnteredWidget)(void) = nullptr;
    void (*mouseLeftWidget)(void) = nullptr;
    sfBool (*rendererChanged)(const char*) = nullptr;
    void (*drawFunction)(sfRenderStates) = nullptr;

    tguiCustomWidgetForBindings(tgui::CustomWidgetForBindings::Ptr widget) : tguiWidget{widget} {}
};

#endif // CTGUI_CUSTOM_WIDGET_FOR_BINDINGS_STRUCT_H
