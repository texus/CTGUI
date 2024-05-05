// This file is generated, it should not be edited directly.

#ifndef CTGUI_BOXLAYOUT_H
#define CTGUI_BOXLAYOUT_H

#include <CTGUI/Widget.h>

CTGUI_API void tguiBoxLayout_insert(tguiWidget* thisWidget, size_t index, tguiWidget* widgetToAdd, tguiUtf32 widgetName);

CTGUI_API tguiBool tguiBoxLayout_removeAtIndex(tguiWidget* thisWidget, size_t index);

CTGUI_API tguiWidget* tguiBoxLayout_getAtIndex(const tguiWidget* thisWidget, size_t index);

#endif // CTGUI_BOXLAYOUT_H
