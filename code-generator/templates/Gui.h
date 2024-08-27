#ifndef CTGUI_GUI_H
#define CTGUI_GUI_H

#include <CTGUI/Global.h>
#include <CTGUI/Cursor.h>

@TGUI_GENERATED_HEAD@

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API void tguiGui_draw(tguiGui* gui);

CTGUI_API tguiBool tguiGui_loadWidgetsFromFile(tguiGui* gui, const char* filename, tguiBool replaceExisting);
CTGUI_API tguiBool tguiGui_saveWidgetsToFile(tguiGui* gui, const char* filename);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

@TGUI_GENERATED_BODY@

#endif // CTGUI_GUI_H

