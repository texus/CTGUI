// This file is generated, it should not be edited directly.

#ifndef CTGUI_WIDGET_H
#define CTGUI_WIDGET_H

#include <CTGUI/Global.h>
#include <CTGUI/Cursor.h>
#include <CTGUI/Layout.h>
#include <CTGUI/Animation.h>


CTGUI_API tguiWidget* tguiWidget_copy(const tguiWidget* other);
CTGUI_API void tguiWidget_free(tguiWidget* widget);

CTGUI_API void tguiWidget_setAutoLayout(const tguiWidget* widget, tguiAutoLayout layout);
CTGUI_API tguiAutoLayout tguiWidget_getAutoLayout(const tguiWidget* widget);

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

CTGUI_API void tguiWidget_showWithEffect(tguiWidget* widget, tguiShowEffectType type, tguiDuration duration);
CTGUI_API void tguiWidget_hideWithEffect(tguiWidget* widget, tguiShowEffectType type, tguiDuration duration);

CTGUI_API void tguiWidget_moveWithAnimation(tguiWidget* widget, tguiVector2f position, tguiDuration duration);
CTGUI_API void tguiWidget_resizeWithAnimation(tguiWidget* widget, tguiVector2f size, tguiDuration duration);

CTGUI_API void tguiWidget_setToolTip(tguiWidget* widget, tguiWidget* toolTip);
CTGUI_API tguiWidget* tguiWidget_getToolTip(const tguiWidget* widget);

CTGUI_API tguiWidget* tguiWidget_getParent(const tguiWidget* widget);

CTGUI_API void tguiWidget_updateTime(tguiWidget* widget, tguiDuration duration);

CTGUI_API void tguiWidget_setPosition(tguiWidget* thisWidget, tguiVector2f position);

CTGUI_API void tguiWidget_setPositionFromLayout(tguiWidget* thisWidget, const tguiLayout2d* layout);

CTGUI_API tguiVector2f tguiWidget_getPosition(const tguiWidget* thisWidget);

CTGUI_API tguiVector2f tguiWidget_getAbsolutePosition(const tguiWidget* thisWidget);

CTGUI_API tguiVector2f tguiWidget_getAbsolutePositionWithOffset(const tguiWidget* thisWidget, tguiVector2f offset);

CTGUI_API tguiVector2f tguiWidget_getWidgetOffset(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setWidth(tguiWidget* thisWidget, float width);

CTGUI_API void tguiWidget_setWidthFromLayout(tguiWidget* thisWidget, const tguiLayout* layout);

CTGUI_API void tguiWidget_setHeight(tguiWidget* thisWidget, float height);

CTGUI_API void tguiWidget_setHeightFromLayout(tguiWidget* thisWidget, const tguiLayout* layout);

CTGUI_API void tguiWidget_setSize(tguiWidget* thisWidget, tguiVector2f size);

CTGUI_API void tguiWidget_setSizeFromLayout(tguiWidget* thisWidget, const tguiLayout2d* layout);

CTGUI_API tguiVector2f tguiWidget_getSize(const tguiWidget* thisWidget);

CTGUI_API tguiVector2f tguiWidget_getFullSize(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setOrigin(tguiWidget* thisWidget, tguiVector2f value);
CTGUI_API tguiVector2f tguiWidget_getOrigin(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setScale(tguiWidget* thisWidget, tguiVector2f origin);

CTGUI_API void tguiWidget_setScaleWithOrigin(tguiWidget* thisWidget, tguiVector2f scale, tguiVector2f origin);

CTGUI_API tguiVector2f tguiWidget_getScale(const tguiWidget* thisWidget);

CTGUI_API tguiVector2f tguiWidget_getScaleOrigin(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setRotation(tguiWidget* thisWidget, float angle);

CTGUI_API void tguiWidget_setRotationWithOrigin(tguiWidget* thisWidget, float angle, tguiVector2f origin);

CTGUI_API float tguiWidget_getRotation(const tguiWidget* thisWidget);

CTGUI_API tguiVector2f tguiWidget_getRotationOrigin(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setVisible(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiWidget_isVisible(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setEnabled(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiWidget_isEnabled(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setFocused(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiWidget_isFocused(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setFocusable(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiWidget_isFocusable(const tguiWidget* thisWidget);

CTGUI_API tguiUtf32 tguiWidget_getWidgetType(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_moveToFront(tguiWidget* thisWidget);

CTGUI_API void tguiWidget_moveToBack(tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setUserData(tguiWidget* thisWidget, void* value);
CTGUI_API void* tguiWidget_getUserData(const tguiWidget* thisWidget);

CTGUI_API tguiBool tguiWidget_hasUserData(const tguiWidget* thisWidget);

CTGUI_API tguiBool tguiWidget_isAnimationPlaying(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setTextSize(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiWidget_getTextSize(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setWidgetName(tguiWidget* thisWidget, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiWidget_getWidgetName(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setMouseCursor(tguiWidget* thisWidget, tguiCursorType value);
CTGUI_API tguiCursorType tguiWidget_getMouseCursor(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setNavigationUp(tguiWidget* thisWidget, tguiWidget* value);
CTGUI_API tguiWidget* tguiWidget_getNavigationUp(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setNavigationDown(tguiWidget* thisWidget, tguiWidget* value);
CTGUI_API tguiWidget* tguiWidget_getNavigationDown(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setNavigationLeft(tguiWidget* thisWidget, tguiWidget* value);
CTGUI_API tguiWidget* tguiWidget_getNavigationLeft(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setNavigationRight(tguiWidget* thisWidget, tguiWidget* value);
CTGUI_API tguiWidget* tguiWidget_getNavigationRight(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setIgnoreMouseEvents(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiWidget_getIgnoreMouseEvents(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_finishAllAnimations(tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setAutoLayoutUpdateEnabled(tguiWidget* thisWidget, tguiBool enabled);

CTGUI_API tguiBool tguiWidget_isMouseDown(const tguiWidget* thisWidget);

CTGUI_API tguiBool tguiWidget_isMouseOnWidget(const tguiWidget* thisWidget, tguiVector2f pos);

#endif // CTGUI_WIDGET_H

