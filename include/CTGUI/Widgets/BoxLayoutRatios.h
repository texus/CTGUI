// This file is generated, it should not be edited directly.

#ifndef CTGUI_BOXLAYOUTRATIOS_H
#define CTGUI_BOXLAYOUTRATIOS_H

#include <CTGUI/Widget.h>

CTGUI_API void tguiBoxLayoutRatios_add(tguiWidget* thisWidget, tguiWidget* widget, float ratio, tguiUtf32 widgetName);

CTGUI_API void tguiBoxLayoutRatios_insert(tguiWidget* thisWidget, size_t index, tguiWidget* widget, float ratio, tguiUtf32 widgetName);

CTGUI_API void tguiBoxLayoutRatios_addSpace(tguiWidget* thisWidget, float ratio);

CTGUI_API void tguiBoxLayoutRatios_insertSpace(tguiWidget* thisWidget, size_t index, float ratio);

CTGUI_API tguiBool tguiBoxLayoutRatios_setRatio(tguiWidget* thisWidget, tguiWidget* widget, float ratio);

CTGUI_API tguiBool tguiBoxLayoutRatios_setRatioAtIndex(tguiWidget* thisWidget, size_t index, float ratio);

CTGUI_API float tguiBoxLayoutRatios_getRatio(const tguiWidget* thisWidget, tguiWidget* widget);

CTGUI_API float tguiBoxLayoutRatios_getRatioAtIndex(const tguiWidget* thisWidget, size_t index);

#endif // CTGUI_BOXLAYOUTRATIOS_H
