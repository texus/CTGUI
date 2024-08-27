#ifndef CTGUI_CONTAINER_H
#define CTGUI_CONTAINER_H

#include <CTGUI/Global.h>

@TGUI_GENERATED_HEAD@

CTGUI_API tguiBool tguiContainer_loadWidgetsFromFile(tguiWidget* container, const char* filename, tguiBool replaceExisting);
CTGUI_API tguiBool tguiContainer_saveWidgetsToFile(tguiWidget* container, const char* filename);

@TGUI_GENERATED_BODY@

#endif // CTGUI_CONTAINER_H

