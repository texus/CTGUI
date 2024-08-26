// This file is generated, it should not be edited directly.

#ifndef CTGUI_SCROLLBAR_ACCESSOR_H
#define CTGUI_SCROLLBAR_ACCESSOR_H

#include <CTGUI/Global.h>

#include <CTGUI/ScrollbarPolicy.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiScrollbarAccessor* tguiScrollbarChildInterface_getScrollbar(tguiWidget* widget);

CTGUI_API tguiScrollbarAccessor* tguiDualScrollbarChildInterface_getVerticalScrollbar(tguiWidget* widget);
CTGUI_API tguiScrollbarAccessor* tguiDualScrollbarChildInterface_getHorizontalScrollbar(tguiWidget* widget);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API void tguiScrollbarAccessor_free(tguiScrollbarAccessor* accessor);

CTGUI_API void tguiScrollbarAccessor_setValue(tguiScrollbarAccessor* thisScrollbarAccessor, unsigned int value);
CTGUI_API unsigned int tguiScrollbarAccessor_getValue(const tguiScrollbarAccessor* thisScrollbarAccessor);

CTGUI_API void tguiScrollbarAccessor_setScrollAmount(tguiScrollbarAccessor* thisScrollbarAccessor, unsigned int value);
CTGUI_API unsigned int tguiScrollbarAccessor_getScrollAmount(const tguiScrollbarAccessor* thisScrollbarAccessor);

CTGUI_API void tguiScrollbarAccessor_setPolicy(tguiScrollbarAccessor* thisScrollbarAccessor, tguiScrollbarPolicy value);
CTGUI_API tguiScrollbarPolicy tguiScrollbarAccessor_getPolicy(const tguiScrollbarAccessor* thisScrollbarAccessor);

CTGUI_API unsigned int tguiScrollbarAccessor_getMaximum(const tguiScrollbarAccessor* thisScrollbarAccessor);

CTGUI_API unsigned int tguiScrollbarAccessor_getViewportSize(const tguiScrollbarAccessor* thisScrollbarAccessor);

CTGUI_API unsigned int tguiScrollbarAccessor_getMaxValue(const tguiScrollbarAccessor* thisScrollbarAccessor);

CTGUI_API tguiBool tguiScrollbarAccessor_isShown(const tguiScrollbarAccessor* thisScrollbarAccessor);

CTGUI_API float tguiScrollbarAccessor_getWidth(const tguiScrollbarAccessor* thisScrollbarAccessor);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // CTGUI_SCROLLBAR_ACCESSOR_H

