#ifndef CTGUI_GUI_H
#define CTGUI_GUI_H

#include <CTGUI/Global.h>
#include <CTGUI/Cursor.h>
#include <CTGUI/Event.h>

@TGUI_GENERATED_HEAD@

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

CTGUI_API tguiBool tguiGui_loadWidgetsFromFile(tguiGui* gui, tguiUtf32 filename, tguiFormLoadOptions *loadOptions);

CTGUI_API void tguiGui_setViewChangeCallback(tguiGui* gui, void (*function)(tguiGui*));
CTGUI_API void tguiGui_setWindowFocusCallback(tguiGui* gui, void (*function)(tguiGui*));
CTGUI_API void tguiGui_setWindowUnfocusCallback(tguiGui* gui, void (*function)(tguiGui*));

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

@TGUI_GENERATED_BODY@

#endif // CTGUI_GUI_H

