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


#ifndef CTGUI_CUSTOM_WIDGET_FOR_BINDINGS_H
#define CTGUI_CUSTOM_WIDGET_FOR_BINDINGS_H

#include <CTGUI/Config.h>
#include <CTGUI/ShowAnimationType.h>
#include <SFML/Window/Event.h>
#include <SFML/System/Vector2.h>
#include <SFML/System/Time.h>
#include <SFML/Graphics/RenderStates.h>

typedef struct tguiCustomWidgetForBindings tguiCustomWidgetForBindings;

CTGUI_API tguiCustomWidgetForBindings* tguiCustomWidgetForBindings_create(void);

CTGUI_API void tguiCustomWidgetForBindings_setPositionChangedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfVector2f));
CTGUI_API void tguiCustomWidgetForBindings_setSizeChangedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfVector2f));
CTGUI_API void tguiCustomWidgetForBindings_setVisibleChangedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfBool));
CTGUI_API void tguiCustomWidgetForBindings_setEnableChangedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfBool));
CTGUI_API void tguiCustomWidgetForBindings_setFocusChangedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfBool));
CTGUI_API void tguiCustomWidgetForBindings_setCanGainFocusCallback(tguiCustomWidgetForBindings* widget, sfBool (*function)(void));
CTGUI_API void tguiCustomWidgetForBindings_setGetFullSizeCallback(tguiCustomWidgetForBindings* widget, sfVector2f (*function)(void));
CTGUI_API void tguiCustomWidgetForBindings_setGetAbsolutePositionCallback(tguiCustomWidgetForBindings* widget, sfVector2f (*function)(void));
CTGUI_API void tguiCustomWidgetForBindings_setGetWidgetOffsetCallback(tguiCustomWidgetForBindings* widget, sfVector2f (*function)(void));
CTGUI_API void tguiCustomWidgetForBindings_setUpdateCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfTime));
CTGUI_API void tguiCustomWidgetForBindings_setMouseOnWidgetCallback(tguiCustomWidgetForBindings* widget, sfBool (*function)(sfVector2f));
CTGUI_API void tguiCustomWidgetForBindings_setLeftMousePressedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfVector2f));
CTGUI_API void tguiCustomWidgetForBindings_setLeftMouseReleasedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfVector2f));
CTGUI_API void tguiCustomWidgetForBindings_setRightMousePressedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfVector2f));
CTGUI_API void tguiCustomWidgetForBindings_setRightMouseReleasedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfVector2f));
CTGUI_API void tguiCustomWidgetForBindings_setMouseMovedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfVector2f));
CTGUI_API void tguiCustomWidgetForBindings_setKeyPressedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfKeyEvent));
CTGUI_API void tguiCustomWidgetForBindings_setTextEnteredCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfUint32));
CTGUI_API void tguiCustomWidgetForBindings_setMouseWheelScrolledCallback(tguiCustomWidgetForBindings* widget, sfBool (*function)(float, sfVector2f));
CTGUI_API void tguiCustomWidgetForBindings_setMouseNoLongerOnWidgetCallback(tguiCustomWidgetForBindings* widget, void (*function)(void));
CTGUI_API void tguiCustomWidgetForBindings_setMouseNoLongerDownCallback(tguiCustomWidgetForBindings* widget, void (*function)(void));
CTGUI_API void tguiCustomWidgetForBindings_setMouseEnteredWidgetCallback(tguiCustomWidgetForBindings* widget, void (*function)(void));
CTGUI_API void tguiCustomWidgetForBindings_setMouseLeftWidgetCallback(tguiCustomWidgetForBindings* widget, void (*function)(void));
CTGUI_API void tguiCustomWidgetForBindings_setRendererChangedCallback(tguiCustomWidgetForBindings* widget, sfBool (*function)(const char*));
CTGUI_API void tguiCustomWidgetForBindings_setDrawCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfRenderStates));

#endif // CTGUI_CUSTOM_WIDGET_FOR_BINDINGS_H

