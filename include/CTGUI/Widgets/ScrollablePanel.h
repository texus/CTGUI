// This file is generated, it should not be edited directly.

#ifndef CTGUI_SCROLLABLEPANEL_H
#define CTGUI_SCROLLABLEPANEL_H

#include <CTGUI/Widget.h>

#include <CTGUI/ScrollbarPolicy.h>

CTGUI_API tguiWidget* tguiScrollablePanel_create(void);

CTGUI_API void tguiScrollablePanel_setContentSize(tguiWidget* thisWidget, tguiVector2f value);
CTGUI_API tguiVector2f tguiScrollablePanel_getContentSize(const tguiWidget* thisWidget);

CTGUI_API float tguiScrollablePanel_getScrollbarWidth(const tguiWidget* thisWidget);

CTGUI_API void tguiScrollablePanel_setVerticalScrollbarPolicy(tguiWidget* thisWidget, tguiScrollbarPolicy value);
CTGUI_API tguiScrollbarPolicy tguiScrollablePanel_getVerticalScrollbarPolicy(const tguiWidget* thisWidget);

CTGUI_API void tguiScrollablePanel_setHorizontalScrollbarPolicy(tguiWidget* thisWidget, tguiScrollbarPolicy value);
CTGUI_API tguiScrollbarPolicy tguiScrollablePanel_getHorizontalScrollbarPolicy(const tguiWidget* thisWidget);

CTGUI_API void tguiScrollablePanel_setVerticalScrollAmount(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiScrollablePanel_getVerticalScrollAmount(const tguiWidget* thisWidget);

CTGUI_API void tguiScrollablePanel_setHorizontalScrollAmount(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiScrollablePanel_getHorizontalScrollAmount(const tguiWidget* thisWidget);

CTGUI_API void tguiScrollablePanel_setVerticalScrollbarValue(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiScrollablePanel_getVerticalScrollbarValue(const tguiWidget* thisWidget);

CTGUI_API void tguiScrollablePanel_setHorizontalScrollbarValue(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiScrollablePanel_getHorizontalScrollbarValue(const tguiWidget* thisWidget);

CTGUI_API unsigned int tguiScrollablePanel_getVerticalScrollbarMaxValue(const tguiWidget* thisWidget);

CTGUI_API unsigned int tguiScrollablePanel_getHorizontalScrollbarMaxValue(const tguiWidget* thisWidget);

CTGUI_API tguiBool tguiScrollablePanel_isVerticalScrollbarShown(const tguiWidget* thisWidget);

CTGUI_API tguiBool tguiScrollablePanel_isHorizontalScrollbarShown(const tguiWidget* thisWidget);

CTGUI_API tguiVector2f tguiScrollablePanel_getContentOffset(const tguiWidget* thisWidget);

#endif // CTGUI_SCROLLABLEPANEL_H
