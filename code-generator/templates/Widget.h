#ifndef CTGUI_WIDGET_H
#define CTGUI_WIDGET_H

#include <CTGUI/Global.h>
#include <CTGUI/Cursor.h>
#include <CTGUI/Layout.h>
#include <CTGUI/Animation.h>

@TGUI_GENERATED_HEAD@

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

CTGUI_API void tguiWidget_setMouseCursor(tguiWidget* widget, tguiCursorType cursor);
CTGUI_API tguiCursorType tguiWidget_getMouseCursor(const tguiWidget* widget);

CTGUI_API void tguiWidget_updateTime(tguiWidget* widget, tguiDuration duration);

@TGUI_GENERATED_BODY@

#endif // CTGUI_WIDGET_H

