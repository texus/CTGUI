// This file is generated, it should not be edited directly.

#ifndef CTGUI_CONTAINER_H
#define CTGUI_CONTAINER_H

#include <CTGUI/Global.h>


CTGUI_API tguiBool tguiContainer_loadWidgetsFromFile(tguiWidget* container, const char* filename, tguiBool replaceExisting);
CTGUI_API tguiBool tguiContainer_saveWidgetsToFile(tguiWidget* container, const char* filename);

CTGUI_API void tguiContainer_add(tguiWidget* thisContainer, tguiWidget* widget, tguiUtf32 widgetName);

CTGUI_API tguiWidget* tguiContainer_get(const tguiWidget* thisContainer, tguiUtf32 widgetName);

CTGUI_API tguiWidget** tguiContainer_getWidgets(const tguiWidget* thisContainer, size_t* returnCount);

CTGUI_API tguiBool tguiContainer_remove(tguiWidget* thisContainer, tguiWidget* widget);

CTGUI_API void tguiContainer_removeAllWidgets(tguiWidget* thisContainer);

CTGUI_API void tguiContainer_moveWidgetToFront(tguiWidget* thisContainer, tguiWidget* widget);

CTGUI_API void tguiContainer_moveWidgetToBack(tguiWidget* thisContainer, tguiWidget* widget);

CTGUI_API size_t tguiContainer_moveWidgetForward(tguiWidget* thisContainer, tguiWidget* widget);

CTGUI_API size_t tguiContainer_moveWidgetBackward(tguiWidget* thisContainer, tguiWidget* widget);

CTGUI_API tguiBool tguiContainer_setWidgetIndex(tguiWidget* thisContainer, tguiWidget* widget, size_t index);

CTGUI_API int tguiContainer_getWidgetIndex(const tguiWidget* thisContainer, tguiWidget* widget);

CTGUI_API tguiWidget* tguiContainer_getFocusedChild(const tguiWidget* thisContainer);

CTGUI_API tguiWidget* tguiContainer_getFocusedLeaf(const tguiWidget* thisContainer);

CTGUI_API tguiWidget* tguiContainer_getWidgetAtPos(const tguiWidget* thisContainer, tguiVector2f pos, tguiBool recursive);

CTGUI_API tguiBool tguiContainer_focusNextWidget(tguiWidget* thisContainer, tguiBool recursive);

CTGUI_API tguiBool tguiContainer_focusPreviousWidget(tguiWidget* thisContainer, tguiBool recursive);

CTGUI_API tguiVector2f tguiContainer_getInnerSize(const tguiWidget* thisContainer);

CTGUI_API tguiVector2f tguiContainer_getChildWidgetsOffset(const tguiWidget* thisContainer);

#endif // CTGUI_CONTAINER_H

