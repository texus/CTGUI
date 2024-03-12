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


#ifndef CTGUI_WIDGET_H
#define CTGUI_WIDGET_H

#include <CTGUI/Global.h>
#include <CTGUI/Cursor.h>
#include <CTGUI/Layout.h>
#include <CTGUI/Animation.h>

CTGUI_API tguiWidget* tguiWidget_copy(const tguiWidget* other);
CTGUI_API void tguiWidget_free(tguiWidget* widget);

CTGUI_API void tguiWidget_setPosition(tguiWidget* widget, tguiVector2f position);
CTGUI_API void tguiWidget_setPositionFromLayout(tguiWidget* widget, tguiLayout2d* layout);
CTGUI_API tguiVector2f tguiWidget_getPosition(const tguiWidget* widget);
CTGUI_API tguiVector2f tguiWidget_getAbsolutePosition(const tguiWidget* widget);
CTGUI_API tguiVector2f tguiWidget_getWidgetOffset(const tguiWidget* widget);

CTGUI_API void tguiWidget_setWidth(tguiWidget* widget, float width);
CTGUI_API void tguiWidget_setWidthFromLayout(tguiWidget* widget, tguiLayout* layout);
CTGUI_API void tguiWidget_setHeight(tguiWidget* widget, float height);
CTGUI_API void tguiWidget_setHeightFromLayout(tguiWidget* widget, tguiLayout* layout);
CTGUI_API void tguiWidget_setSize(tguiWidget* widget, tguiVector2f size);
CTGUI_API void tguiWidget_setSizeFromLayout(tguiWidget* widget, tguiLayout2d* layout);
CTGUI_API tguiVector2f tguiWidget_getSize(const tguiWidget* widget);
CTGUI_API tguiVector2f tguiWidget_getFullSize(const tguiWidget* widget);

CTGUI_API void tguiWidget_setAutoLayout(const tguiWidget* widget, tguiAutoLayout layout);
CTGUI_API tguiAutoLayout tguiWidget_getAutoLayout(const tguiWidget* widget);

CTGUI_API void tguiWidget_setOrigin(tguiWidget* widget, tguiVector2f origin);
CTGUI_API tguiVector2f tguiWidget_getOrigin(const tguiWidget* widget);

CTGUI_API void tguiWidget_setScale(tguiWidget* widget, tguiVector2f origin);
CTGUI_API void tguiWidget_setScaleWithOrigin(tguiWidget* widget, tguiVector2f scale, tguiVector2f origin);
CTGUI_API tguiVector2f tguiWidget_getScale(const tguiWidget* widget);
CTGUI_API tguiVector2f tguiWidget_getScaleOrigin(const tguiWidget* widget);

CTGUI_API void tguiWidget_setRotation(tguiWidget* widget, float angle);
CTGUI_API void tguiWidget_setRotationWithOrigin(tguiWidget* widget, float angle, tguiVector2f origin);
CTGUI_API float tguiWidget_getRotation(const tguiWidget* widget);
CTGUI_API tguiVector2f tguiWidget_getRotationOrigin(const tguiWidget* widget);

CTGUI_API unsigned int tguiWidget_signalConnect(tguiWidget* widget, const char* signalName, void (*function)(void));
CTGUI_API unsigned int tguiWidget_signalConnectEx(tguiWidget* widget, const char* signalName, void (*function)(tguiWidget*, tguiUtf32)); // tguiWidget_free must be called on the first parameter in the callback function

CTGUI_API unsigned int tguiWidget_signalIntConnect(tguiWidget* widget, const char* signalName, void (*function)(int));
CTGUI_API unsigned int tguiWidget_signalUIntConnect(tguiWidget* widget, const char* signalName, void (*function)(unsigned int));
CTGUI_API unsigned int tguiWidget_signalBoolConnect(tguiWidget* widget, const char* signalName, void (*function)(tguiBool));
CTGUI_API unsigned int tguiWidget_signalFloatConnect(tguiWidget* widget, const char* signalName, void (*function)(float));
CTGUI_API unsigned int tguiWidget_signalColorConnect(tguiWidget* widget, const char* signalName, void (*function)(tguiColor));
CTGUI_API unsigned int tguiWidget_signalStringConnect(tguiWidget* widget, const char* signalName, void (*function)(tguiUtf32));
CTGUI_API unsigned int tguiWidget_signalVector2fConnect(tguiWidget* widget, const char* signalName, void (*function)(tguiVector2f));
CTGUI_API unsigned int tguiWidget_signalFloatRectConnect(tguiWidget* widget, const char* signalName, void (*function)(tguiFloatRect));
CTGUI_API unsigned int tguiWidget_signalRangeConnect(tguiWidget* widget, const char* signalName, void (*function)(float, float));
CTGUI_API unsigned int tguiWidget_signalChildWindowConnect(tguiWidget* widget, const char* signalName, void (*function)(tguiWidget*)); // tguiWidget_free must be called on the parameter in the callback function
CTGUI_API unsigned int tguiWidget_signalItemConnect(tguiWidget* widget, const char* signalName, void (*function)(int));
CTGUI_API unsigned int tguiWidget_signalPanelListBoxItemConnect(tguiWidget* widget, const char* signalName, void (*function)(int));
CTGUI_API unsigned int tguiWidget_signalFileDialogPathsConnect(tguiWidget* widget, const char* signalName, void (*function)(size_t, const tguiUtf32*)); // List of strings (parameter should NOT be freed in callback function)
CTGUI_API unsigned int tguiWidget_signalShowEffectConnect(tguiWidget* widget, const char* signalName, void (*function)(tguiShowEffectType, tguiBool));
CTGUI_API unsigned int tguiWidget_signalAnimationTypeConnect(tguiWidget* widget, const char* signalName, void (*function)(tguiAnimationType));
CTGUI_API unsigned int tguiWidget_signalItemHierarchyConnect(tguiWidget* widget, const char* signalName, void (*function)(size_t, const tguiUtf32*)); // List of strings (parameter should NOT be freed in callback function)

CTGUI_API tguiBool tguiWidget_signalDisconnect(tguiWidget* widget, const char* signalName, unsigned int id);
CTGUI_API void tguiWidget_signalDisconnectAll(tguiWidget* widget, const char* signalName);

CTGUI_API tguiBool tguiWidget_setSignalEnabled(tguiWidget* widget, const char* signalName, tguiBool enabled);
CTGUI_API tguiBool tguiWidget_isSignalEnabled(tguiWidget* widget, const char* signalName);

CTGUI_API tguiBool tguiWidget_setRenderer(tguiWidget* widget, tguiRendererData* renderer);
CTGUI_API tguiRenderer* tguiWidget_getRenderer(const tguiWidget* widget);
CTGUI_API tguiRenderer* tguiWidget_getSharedRenderer(const tguiWidget* widget);

CTGUI_API void tguiWidget_setVisible(tguiWidget* widget, tguiBool visible);
CTGUI_API tguiBool tguiWidget_isVisible(const tguiWidget* widget);

CTGUI_API void tguiWidget_showWithEffect(tguiWidget* widget, tguiShowEffectType type, tguiDuration duration);
CTGUI_API void tguiWidget_hideWithEffect(tguiWidget* widget, tguiShowEffectType type, tguiDuration duration);

CTGUI_API void tguiWidget_moveWithAnimation(tguiWidget* widget, tguiVector2f position, tguiDuration duration);
CTGUI_API void tguiWidget_resizeWithAnimation(tguiWidget* widget, tguiVector2f size, tguiDuration duration);

CTGUI_API void tguiWidget_setEnabled(tguiWidget* widget, tguiBool enabled);
CTGUI_API tguiBool tguiWidget_isEnabled(const tguiWidget* widget);

CTGUI_API void tguiWidget_setFocused(tguiWidget* widget, tguiBool focused);
CTGUI_API tguiBool tguiWidget_isFocused(const tguiWidget* widget);

CTGUI_API void tguiWidget_setFocusable(tguiWidget* widget, tguiBool focusable);
CTGUI_API tguiBool tguiWidget_isFocusable(const tguiWidget* widget);

CTGUI_API tguiUtf32 tguiWidget_getWidgetType(const tguiWidget* widget);

CTGUI_API void tguiWidget_moveToFront(tguiWidget* widget);
CTGUI_API void tguiWidget_moveToBack(tguiWidget* widget);

CTGUI_API void tguiWidget_setUserData(tguiWidget* widget, void* data);
CTGUI_API void* tguiWidget_getUserData(const tguiWidget* widget);
CTGUI_API tguiBool tguiWidget_hasUserData(const tguiWidget* widget);

CTGUI_API void tguiWidget_setToolTip(tguiWidget* widget, tguiWidget* toolTip);
CTGUI_API tguiWidget* tguiWidget_getToolTip(const tguiWidget* widget);

CTGUI_API tguiWidget* tguiWidget_getParent(const tguiWidget* widget);

CTGUI_API tguiBool tguiWidget_isAnimationPlaying(const tguiWidget* widget);

CTGUI_API void tguiWidget_setTextSize(tguiWidget* widget, unsigned int size);
CTGUI_API unsigned int tguiWidget_getTextSize(const tguiWidget* widget);

CTGUI_API void tguiWidget_setWidgetName(tguiWidget* widget, tguiUtf32 name);
CTGUI_API tguiUtf32 tguiWidget_getWidgetName(const tguiWidget* widget);

CTGUI_API void tguiWidget_setMouseCursor(tguiWidget* widget, tguiCursorType cursor);
CTGUI_API tguiCursorType tguiWidget_getMouseCursor(const tguiWidget* widget);

CTGUI_API void tguiWidget_setNavigationUp(tguiWidget* widget, const tguiWidget* widgetAbove);
CTGUI_API void tguiWidget_setNavigationDown(tguiWidget* widget, const tguiWidget* widgetBelow);
CTGUI_API void tguiWidget_setNavigationLeft(tguiWidget* widget, const tguiWidget* widgetLeft);
CTGUI_API void tguiWidget_setNavigationRight(tguiWidget* widget, const tguiWidget* widgetRight);

CTGUI_API tguiWidget* tguiWidget_getNavigationUp(const tguiWidget* widget);
CTGUI_API tguiWidget* tguiWidget_getNavigationDown(const tguiWidget* widget);
CTGUI_API tguiWidget* tguiWidget_getNavigationLeft(const tguiWidget* widget);
CTGUI_API tguiWidget* tguiWidget_getNavigationRight(const tguiWidget* widget);

CTGUI_API void tguiWidget_finishAllAnimations(tguiWidget* widget);

CTGUI_API void tguiWidget_setAutoLayoutUpdateEnabled(tguiWidget* widget, tguiBool enabled);

CTGUI_API void tguiWidget_updateTime(tguiWidget* widget, tguiDuration duration);

CTGUI_API tguiBool tguiWidget_isMouseDown(const tguiWidget* widget);
CTGUI_API tguiBool tguiWidget_isMouseOnWidget(const tguiWidget* widget, tguiVector2f pos);

#endif // CTGUI_WIDGET_H

