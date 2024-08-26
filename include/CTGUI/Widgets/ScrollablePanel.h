// This file is generated, it should not be edited directly.

#ifndef CTGUI_SCROLLABLEPANEL_H
#define CTGUI_SCROLLABLEPANEL_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiScrollablePanel_create(void);

CTGUI_API void tguiScrollablePanel_setContentSize(tguiWidget* thisWidget, tguiVector2f value);
CTGUI_API tguiVector2f tguiScrollablePanel_getContentSize(const tguiWidget* thisWidget);

CTGUI_API tguiVector2f tguiScrollablePanel_getContentOffset(const tguiWidget* thisWidget);

#endif // CTGUI_SCROLLABLEPANEL_H
