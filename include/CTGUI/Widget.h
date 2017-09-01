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


#ifndef CTGUI_WIDGET_H
#define CTGUI_WIDGET_H

#include <CTGUI/Config.h>
#include <CTGUI/ShowAnimationType.h>
#include <SFML/System/Vector2.h>
#include <SFML/System/Time.h>

CTGUI_API tguiWidget* tguiWidget_copy(const tguiWidget* other);
CTGUI_API void tguiWidget_destroy(tguiWidget* widget);

CTGUI_API void tguiWidget_setPosition(tguiWidget* widget, sfVector2f position);
CTGUI_API void tguiWidget_setPositionFromLayout(tguiWidget* widget, tguiLayout2d* layout);
CTGUI_API sfVector2f tguiWidget_getPosition(const tguiWidget* widget);
CTGUI_API sfVector2f tguiWidget_getAbsolutePosition(const tguiWidget* widget);
CTGUI_API sfVector2f tguiWidget_getWidgetOffset(const tguiWidget* widget);

CTGUI_API void tguiWidget_setSize(tguiWidget* widget, sfVector2f size);
CTGUI_API void tguiWidget_setSizeFromLayout(tguiWidget* widget, tguiLayout2d* layout);
CTGUI_API sfVector2f tguiWidget_getSize(const tguiWidget* widget);
CTGUI_API sfVector2f tguiWidget_getFullSize(const tguiWidget* widget);

CTGUI_API unsigned int tguiWidget_connect(tguiWidget* widget, const char* signalName, void (*function)(), const char** error);
CTGUI_API void tguiWidget_connect_onPositionChange(tguiWidget* widget, void (*function)(sfVector2f), const char** error);
CTGUI_API void tguiWidget_connect_onSizeChange(tguiWidget* widget, void (*function)(sfVector2f), const char** error);
CTGUI_API void tguiWidget_connect_onMouseEnter(tguiWidget* widget, void (*function)(), const char** error);
CTGUI_API void tguiWidget_connect_onMouseLeave(tguiWidget* widget, void (*function)(), const char** error);
CTGUI_API void tguiWidget_connect_onFocus(tguiWidget* widget, void (*function)(), const char** error);
CTGUI_API void tguiWidget_connect_onUnfocus(tguiWidget* widget, void (*function)(), const char** error);

CTGUI_API void tguiWidget_disconnect(tguiWidget* widget, unsigned int id);
CTGUI_API void tguiWidget_disconnectAll(tguiWidget* widget, const char* signalName);

CTGUI_API void tguiWidget_setRenderer(tguiWidget* widget, tguiRendererData* renderer, const char** error);
CTGUI_API tguiRenderer* tguiWidget_getRenderer(const tguiWidget* widget);

CTGUI_API void tguiWidget_show(tguiWidget* widget);
CTGUI_API void tguiWidget_showWithEffect(tguiWidget* widget, tguiShowAnimationType type, sfTime time);
CTGUI_API void tguiWidget_hide(tguiWidget* widget);
CTGUI_API void tguiWidget_hideWithEffect(tguiWidget* widget, tguiShowAnimationType type, sfTime time);
CTGUI_API sfBool tguiWidget_isVisible(const tguiWidget* widget);

CTGUI_API void tguiWidget_enable(tguiWidget* widget);
CTGUI_API void tguiWidget_disable(tguiWidget* widget);
CTGUI_API sfBool tguiWidget_isEnabled(const tguiWidget* widget);

CTGUI_API void tguiWidget_focus(tguiWidget* widget);
CTGUI_API void tguiWidget_unfocus(tguiWidget* widget);
CTGUI_API sfBool tguiWidget_isFocused(const tguiWidget* widget);

CTGUI_API const char* tguiWidget_getWidgetType(const tguiWidget* widget);

CTGUI_API void tguiWidget_moveToFront(tguiWidget* widget);
CTGUI_API void tguiWidget_moveToBack(tguiWidget* widget);

CTGUI_API void tguiWidget_setToolTip(tguiWidget* widget, tguiWidget* toolTip);
CTGUI_API tguiWidget* tguiWidget_getToolTip(const tguiWidget* widget);

CTGUI_API tguiWidget* tguiWidget_getParent(tguiWidget* widget);

CTGUI_API sfBool tguiWidget_mouseOnWidget(tguiWidget* widget, sfVector2f pos);

#endif // CTGUI_WIDGET_H

