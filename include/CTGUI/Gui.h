// This file is generated, it should not be edited directly.

#ifndef CTGUI_GUI_H
#define CTGUI_GUI_H

#include <CTGUI/Global.h>
#include <CTGUI/Cursor.h>
#include <CTGUI/Event.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiBool tguiGui_handleEventLostFocus(tguiGui* gui);
CTGUI_API tguiBool tguiGui_handleEventGainedFocus(tguiGui* gui);
CTGUI_API tguiBool tguiGui_handleEventTextEntered(tguiGui* gui, tguiTextEvent textEvent);
CTGUI_API tguiBool tguiGui_handleEventKeyPressed(tguiGui* gui, tguiKeyEvent keyEvent);
CTGUI_API tguiBool tguiGui_handleEventMouseWheelScrolled(tguiGui* gui, tguiMouseWheelEvent mouseWheelEvent);
CTGUI_API tguiBool tguiGui_handleEventMouseButtonPressed(tguiGui* gui, tguiMouseButtonEvent mouseButtonEvent);
CTGUI_API tguiBool tguiGui_handleEventMouseButtonReleased(tguiGui* gui, tguiMouseButtonEvent mouseButtonEvent);
CTGUI_API tguiBool tguiGui_handleEventMouseMoved(tguiGui* gui, tguiMouseMoveEvent mouseMoveEvent);
CTGUI_API tguiBool tguiGui_handleEventMouseEntered(tguiGui* gui);
CTGUI_API tguiBool tguiGui_handleEventMouseLeft(tguiGui* gui);
CTGUI_API tguiBool tguiGui_handleEventFingerDown(tguiGui* gui, tguiFingerEvent fingerEvent);
CTGUI_API tguiBool tguiGui_handleEventFingerMoved(tguiGui* gui, tguiFingerEvent fingerEvent);
CTGUI_API tguiBool tguiGui_handleEventFingerUp(tguiGui* gui, tguiFingerEvent fingerEvent);
CTGUI_API tguiBool tguiGui_handleEventResized(tguiGui* gui, tguiSizeEvent sizeEvent);
CTGUI_API tguiBool tguiGui_handleEventClosed(tguiGui* gui);

CTGUI_API void tguiGui_draw(tguiGui* gui);

CTGUI_API void tguiGui_setViewChangeCallback(tguiGui* gui, void (*function)(tguiGui*));
CTGUI_API void tguiGui_setWindowFocusCallback(tguiGui* gui, void (*function)(tguiGui*));
CTGUI_API void tguiGui_setWindowUnfocusCallback(tguiGui* gui, void (*function)(tguiGui*));

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API void tguiGui_setAbsoluteViewport(tguiGui* thisGui, tguiFloatRect viewport);

CTGUI_API void tguiGui_setRelativeViewport(tguiGui* thisGui, tguiFloatRect viewport);

CTGUI_API tguiFloatRect tguiGui_getViewport(const tguiGui* thisGui);

CTGUI_API void tguiGui_setAbsoluteView(tguiGui* thisGui, tguiFloatRect view);

CTGUI_API void tguiGui_setRelativeView(tguiGui* thisGui, tguiFloatRect view);

CTGUI_API tguiFloatRect tguiGui_getView(const tguiGui* thisGui);

CTGUI_API void tguiGui_setTabKeyUsageEnabled(tguiGui* thisGui, tguiBool value);
CTGUI_API tguiBool tguiGui_isTabKeyUsageEnabled(const tguiGui* thisGui);

CTGUI_API void tguiGui_setFont(tguiGui* thisGui, const tguiFont* value);
CTGUI_API const tguiFont* tguiGui_getFont(const tguiGui* thisGui);

CTGUI_API void tguiGui_add(tguiGui* thisGui, tguiWidget* widget, tguiUtf32 widgetName);

CTGUI_API tguiWidget* tguiGui_get(const tguiGui* thisGui, tguiUtf32 widgetName);

CTGUI_API tguiWidget** tguiGui_getWidgets(const tguiGui* thisGui, size_t* returnCount);

CTGUI_API tguiBool tguiGui_remove(tguiGui* thisGui, tguiWidget* widget);

CTGUI_API void tguiGui_removeAllWidgets(tguiGui* thisGui);

CTGUI_API tguiWidget* tguiGui_getFocusedChild(const tguiGui* thisGui);

CTGUI_API tguiWidget* tguiGui_getFocusedLeaf(const tguiGui* thisGui);

CTGUI_API tguiWidget* tguiGui_getWidgetAtPos(const tguiGui* thisGui, tguiVector2f pos, tguiBool recursive);

CTGUI_API tguiWidget* tguiGui_getWidgetBelowMouseCursor(const tguiGui* thisGui, tguiVector2i mousePos, tguiBool recursive);

CTGUI_API tguiBool tguiGui_focusNextWidget(tguiGui* thisGui, tguiBool recursive);

CTGUI_API tguiBool tguiGui_focusPreviousWidget(tguiGui* thisGui, tguiBool recursive);

CTGUI_API void tguiGui_unfocusAllWidgets(tguiGui* thisGui);

CTGUI_API tguiBool tguiGui_loadWidgetsFromFile(tguiGui* thisGui, tguiUtf32 filename, const tguiFormLoadOptions* loadOptions);

CTGUI_API tguiBool tguiGui_saveWidgetsToFile(const tguiGui* thisGui, tguiUtf32 filename);

CTGUI_API void tguiGui_moveWidgetToFront(tguiGui* thisGui, tguiWidget* widget);

CTGUI_API void tguiGui_moveWidgetToBack(tguiGui* thisGui, tguiWidget* widget);

CTGUI_API size_t tguiGui_moveWidgetForward(tguiGui* thisGui, tguiWidget* widget);

CTGUI_API size_t tguiGui_moveWidgetBackward(tguiGui* thisGui, tguiWidget* widget);

CTGUI_API tguiBool tguiGui_setWidgetIndex(tguiGui* thisGui, tguiWidget* widget, size_t index);

CTGUI_API int tguiGui_getWidgetIndex(const tguiGui* thisGui, tguiWidget* widget);

CTGUI_API void tguiGui_setOpacity(tguiGui* thisGui, float value);
CTGUI_API float tguiGui_getOpacity(const tguiGui* thisGui);

CTGUI_API void tguiGui_setTextSize(tguiGui* thisGui, unsigned int value);
CTGUI_API unsigned int tguiGui_getTextSize(const tguiGui* thisGui);

CTGUI_API void tguiGui_setDrawingUpdatesTime(tguiGui* thisGui, tguiBool drawUpdatesTime);

CTGUI_API tguiBool tguiGui_updateTime(tguiGui* thisGui);

CTGUI_API void tguiGui_setOverrideMouseCursor(tguiGui* thisGui, tguiCursorType type);

CTGUI_API void tguiGui_restoreOverrideMouseCursor(tguiGui* thisGui);

CTGUI_API void tguiGui_requestMouseCursor(tguiGui* thisGui, tguiCursorType type);

CTGUI_API tguiVector2f tguiGui_mapPixelToCoords(const tguiGui* thisGui, tguiVector2i pixel);

CTGUI_API tguiVector2f tguiGui_mapCoordsToPixel(const tguiGui* thisGui, tguiVector2f coord);

CTGUI_API void tguiGui_setKeyboardNavigationEnabled(tguiGui* thisGui, tguiBool value);
CTGUI_API tguiBool tguiGui_isKeyboardNavigationEnabled(const tguiGui* thisGui);

CTGUI_API void tguiGui_mainLoop(tguiGui* thisGui, tguiColor clearColor);

#endif // CTGUI_GUI_H

