// This file is generated, it should not be edited directly.

#ifndef CTGUI_LABEL_H
#define CTGUI_LABEL_H

#include <CTGUI/Widget.h>
#include <CTGUI/Alignment.h>
#include <CTGUI/ScrollbarPolicy.h>

CTGUI_API tguiWidget* tguiLabel_create(void);

CTGUI_API void tguiLabel_setText(tguiWidget* thisWidget, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiLabel_getText(const tguiWidget* thisWidget);

CTGUI_API void tguiLabel_setHorizontalAlignment(tguiWidget* thisWidget, tguiHorizontalAlignment value);
CTGUI_API tguiHorizontalAlignment tguiLabel_getHorizontalAlignment(const tguiWidget* thisWidget);

CTGUI_API void tguiLabel_setVerticalAlignment(tguiWidget* thisWidget, tguiVerticalAlignment value);
CTGUI_API tguiVerticalAlignment tguiLabel_getVerticalAlignment(const tguiWidget* thisWidget);

CTGUI_API void tguiLabel_setAutoSize(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiLabel_getAutoSize(const tguiWidget* thisWidget);

CTGUI_API void tguiLabel_setMaximumTextWidth(tguiWidget* thisWidget, float value);
CTGUI_API float tguiLabel_getMaximumTextWidth(const tguiWidget* thisWidget);

CTGUI_API void tguiLabel_setScrollbarPolicy(tguiWidget* thisWidget, tguiScrollbarPolicy value);
CTGUI_API tguiScrollbarPolicy tguiLabel_getScrollbarPolicy(const tguiWidget* thisWidget);

CTGUI_API void tguiLabel_setScrollbarValue(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiLabel_getScrollbarValue(const tguiWidget* thisWidget);

#endif // CTGUI_LABEL_H
