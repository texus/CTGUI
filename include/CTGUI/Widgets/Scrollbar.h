// This file is generated, it should not be edited directly.

#ifndef CTGUI_SCROLLBAR_H
#define CTGUI_SCROLLBAR_H

#include <CTGUI/Widget.h>

#include <CTGUI/Orientation.h>

typedef enum
{
    tguiScrollbarPolicyAutomatic,
    tguiScrollbarPolicyAlways,
    tguiScrollbarPolicyNever,
} tguiScrollbarPolicy;

CTGUI_API tguiWidget* tguiScrollbar_create(void);

CTGUI_API void tguiScrollbar_setViewportSize(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiScrollbar_getViewportSize(const tguiWidget* thisWidget);

CTGUI_API void tguiScrollbar_setMaximum(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiScrollbar_getMaximum(const tguiWidget* thisWidget);

CTGUI_API void tguiScrollbar_setValue(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiScrollbar_getValue(const tguiWidget* thisWidget);

CTGUI_API void tguiScrollbar_setScrollAmount(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiScrollbar_getScrollAmount(const tguiWidget* thisWidget);

CTGUI_API void tguiScrollbar_setPolicy(tguiWidget* thisWidget, tguiScrollbarPolicy value);
CTGUI_API tguiScrollbarPolicy tguiScrollbar_getPolicy(const tguiWidget* thisWidget);

CTGUI_API void tguiScrollbar_setOrientation(tguiWidget* thisWidget, tguiOrientation value);
CTGUI_API tguiOrientation tguiScrollbar_getOrientation(const tguiWidget* thisWidget);

CTGUI_API tguiBool tguiScrollbar_isShown(const tguiWidget* thisWidget);

CTGUI_API unsigned int tguiScrollbar_getMaxValue(const tguiWidget* thisWidget);

CTGUI_API float tguiScrollbar_getDefaultWidth(const tguiWidget* thisWidget);

#endif // CTGUI_SCROLLBAR_H
