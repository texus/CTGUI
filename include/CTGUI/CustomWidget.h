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


#ifndef CTGUI_CUSTOM_WIDGET_FOR_BINDINGS_H
#define CTGUI_CUSTOM_WIDGET_FOR_BINDINGS_H

#include <CTGUI/Global.h>
#include <CTGUI/Event.h>
#include <CTGUI/RenderStates.h>
#include <CTGUI/BackendRenderTarget.h>

CTGUI_API tguiWidget* tguiCustomWidget_create(void);

CTGUI_API void tguiCustomWidget_setPositionChangedCallback(tguiWidget* widget, void (*function)(tguiVector2f));
CTGUI_API void tguiCustomWidget_setSizeChangedCallback(tguiWidget* widget, void (*function)(tguiVector2f));
CTGUI_API void tguiCustomWidget_setVisibleChangedCallback(tguiWidget* widget, void (*function)(tguiBool));
CTGUI_API void tguiCustomWidget_setEnableChangedCallback(tguiWidget* widget, void (*function)(tguiBool));
CTGUI_API void tguiCustomWidget_setFocusChangedCallback(tguiWidget* widget, void (*function)(tguiBool));
CTGUI_API void tguiCustomWidget_setCanGainFocusCallback(tguiWidget* widget, tguiBool (*function)(void));
CTGUI_API void tguiCustomWidget_setGetFullSizeCallback(tguiWidget* widget, tguiVector2f (*function)(void));
CTGUI_API void tguiCustomWidget_setGetWidgetOffsetCallback(tguiWidget* widget, tguiVector2f (*function)(void));
CTGUI_API void tguiCustomWidget_setUpdateTimeCallback(tguiWidget* widget, tguiBool (*function)(tguiDuration));
CTGUI_API void tguiCustomWidget_setMouseOnWidgetCallback(tguiWidget* widget, tguiBool (*function)(tguiVector2f));
CTGUI_API void tguiCustomWidget_setLeftMousePressedCallback(tguiWidget* widget, tguiBool (*function)(tguiVector2f));
CTGUI_API void tguiCustomWidget_setLeftMouseReleasedCallback(tguiWidget* widget, void (*function)(tguiVector2f));
CTGUI_API void tguiCustomWidget_setRightMousePressedCallback(tguiWidget* widget, void (*function)(tguiVector2f));
CTGUI_API void tguiCustomWidget_setRightMouseReleasedCallback(tguiWidget* widget, void (*function)(tguiVector2f));
CTGUI_API void tguiCustomWidget_setMouseMovedCallback(tguiWidget* widget, void (*function)(tguiVector2f));
CTGUI_API void tguiCustomWidget_setKeyPressedCallback(tguiWidget* widget, void (*function)(tguiKeyEvent));
CTGUI_API void tguiCustomWidget_setTextEnteredCallback(tguiWidget* widget, void (*function)(tguiUint32));
CTGUI_API void tguiCustomWidget_setScrolledCallback(tguiWidget* widget, tguiBool (*function)(float, tguiVector2f, tguiBool));
CTGUI_API void tguiCustomWidget_setMouseNoLongerOnWidgetCallback(tguiWidget* widget, void (*function)(void));
CTGUI_API void tguiCustomWidget_setLeftMouseButtonNoLongerDownCallback(tguiWidget* widget, void (*function)(void));
CTGUI_API void tguiCustomWidget_setMouseEnteredWidgetCallback(tguiWidget* widget, void (*function)(void));
CTGUI_API void tguiCustomWidget_setMouseLeftWidgetCallback(tguiWidget* widget, void (*function)(void));
CTGUI_API void tguiCustomWidget_setRendererChangedCallback(tguiWidget* widget, tguiBool (*function)(tguiUtf32));
CTGUI_API void tguiCustomWidget_setDrawCallback(tguiWidget* widget, void (*function)(tguiBackendRenderTarget*, tguiRenderStates*)); // Parameters should NOT be freed inside callback function

#endif // CTGUI_CUSTOM_WIDGET_FOR_BINDINGS_H

