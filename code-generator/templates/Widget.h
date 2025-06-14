#ifndef CTGUI_WIDGET_H
#define CTGUI_WIDGET_H

#include <CTGUI/Global.h>
#include <CTGUI/Cursor.h>
#include <CTGUI/Layout.h>
#include <CTGUI/Animation.h>

@TGUI_GENERATED_HEAD@

CTGUI_API tguiWidget* tguiWidget_copy(const tguiWidget* other);
CTGUI_API void tguiWidget_destroy(tguiWidget* widget);
CTGUI_API tguiWidget* tguiWidget_addPointerReference(tguiWidget* widget); // An extra call to tguiWidget_destroy will be needed after calling this function. Returns the same value as the given parameter.

CTGUI_API void tguiWidget_setPosition(tguiWidget* thisWidget, tguiVector2f position);
CTGUI_API tguiVector2f tguiWidget_getPosition(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setPositionLayout(tguiWidget* thisWidget, const tguiLayout2d* layout);
CTGUI_API tguiLayout2d* tguiWidget_getPositionLayout(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setSize(tguiWidget* thisWidget, tguiVector2f size);
CTGUI_API tguiVector2f tguiWidget_getSize(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setSizeLayout(tguiWidget* thisWidget, const tguiLayout2d* layout);
CTGUI_API tguiLayout2d* tguiWidget_getSizeLayout(const tguiWidget* thisWidget);

CTGUI_API void tguiWidget_setAutoLayout(const tguiWidget* widget, tguiAutoLayout layout);
CTGUI_API tguiAutoLayout tguiWidget_getAutoLayout(const tguiWidget* widget);

CTGUI_API unsigned int tguiWidget_signalConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(void));
CTGUI_API unsigned int tguiWidget_signalConnectEx(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiWidget*, tguiUtf32)); // tguiWidget_destroy must be called on the first parameter in the callback function

CTGUI_API unsigned int tguiWidget_signalIntConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(int));
CTGUI_API unsigned int tguiWidget_signalUIntConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(unsigned int));
CTGUI_API unsigned int tguiWidget_signalSizeTConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(size_t));
CTGUI_API unsigned int tguiWidget_signalBoolConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiBool));
CTGUI_API unsigned int tguiWidget_signalFloatConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(float));
CTGUI_API unsigned int tguiWidget_signalColorConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiColor));
CTGUI_API unsigned int tguiWidget_signalStringConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiUtf32));
CTGUI_API unsigned int tguiWidget_signalVector2fConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiVector2f));
CTGUI_API unsigned int tguiWidget_signalFloatRectConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiFloatRect));
CTGUI_API unsigned int tguiWidget_signalBoolPtrConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiBool*));
CTGUI_API unsigned int tguiWidget_signalRangeConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(float, float));
CTGUI_API unsigned int tguiWidget_signalTabSelectionChangingConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(int, tguiBool*));
CTGUI_API unsigned int tguiWidget_signalChildWindowConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiWidget*)); // tguiWidget_destroy must be called on the parameter in the callback function
CTGUI_API unsigned int tguiWidget_signalItemConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(int));
CTGUI_API unsigned int tguiWidget_signalPanelListBoxItemConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(int));
CTGUI_API unsigned int tguiWidget_signalFileDialogPathsConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(size_t, const tguiUtf32*)); // List of strings (parameter should NOT be freed in callback function)
CTGUI_API unsigned int tguiWidget_signalShowEffectConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiShowEffectType, tguiBool));
CTGUI_API unsigned int tguiWidget_signalAnimationTypeConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiAnimationType));
CTGUI_API unsigned int tguiWidget_signalItemHierarchyConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(size_t, const tguiUtf32*)); // List of strings (parameter should NOT be freed in callback function)

CTGUI_API tguiBool tguiWidget_signalDisconnect(tguiWidget* widget, tguiUtf32 signalName, unsigned int id);
CTGUI_API void tguiWidget_signalDisconnectAll(tguiWidget* widget, tguiUtf32 signalName);

CTGUI_API tguiBool tguiWidget_setSignalEnabled(tguiWidget* widget, tguiUtf32 signalName, tguiBool enabled);
CTGUI_API tguiBool tguiWidget_isSignalEnabled(tguiWidget* widget, tguiUtf32 signalName);

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
CTGUI_API tguiGui* tguiWidget_getParentGui(const tguiWidget* widget);

CTGUI_API void tguiWidget_updateTime(tguiWidget* widget, tguiDuration duration);

@TGUI_GENERATED_BODY@

#endif // CTGUI_WIDGET_H

