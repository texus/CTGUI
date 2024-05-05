// This file is generated, it should not be edited directly.

#ifndef CTGUI_SCROLLBAR_H
#define CTGUI_SCROLLBAR_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiScrollbar_create(void);

CTGUI_API void tguiScrollbar_setViewportSize(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiScrollbar_getViewportSize(const tguiWidget* thisWidget);

CTGUI_API void tguiScrollbar_setMaximum(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiScrollbar_getMaximum(const tguiWidget* thisWidget);

CTGUI_API void tguiScrollbar_setValue(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiScrollbar_getValue(const tguiWidget* thisWidget);

CTGUI_API void tguiScrollbar_setScrollAmount(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiScrollbar_getScrollAmount(const tguiWidget* thisWidget);

CTGUI_API void tguiScrollbar_setAutoHide(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiScrollbar_getAutoHide(const tguiWidget* thisWidget);

CTGUI_API void tguiScrollbar_setVerticalScroll(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiScrollbar_getVerticalScroll(const tguiWidget* thisWidget);

CTGUI_API float tguiScrollbar_getDefaultWidth(const tguiWidget* thisWidget);

#endif // CTGUI_SCROLLBAR_H
