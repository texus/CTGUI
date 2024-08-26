#ifndef CTGUI_SCROLLBAR_ACCESSOR_H
#define CTGUI_SCROLLBAR_ACCESSOR_H

#include <CTGUI/Global.h>

@TGUI_GENERATED_HEAD@

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiScrollbarAccessor* tguiScrollbarChildInterface_getScrollbar(tguiWidget* widget);

CTGUI_API tguiScrollbarAccessor* tguiDualScrollbarChildInterface_getVerticalScrollbar(tguiWidget* widget);
CTGUI_API tguiScrollbarAccessor* tguiDualScrollbarChildInterface_getHorizontalScrollbar(tguiWidget* widget);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API void tguiScrollbarAccessor_free(tguiScrollbarAccessor* accessor);

@TGUI_GENERATED_BODY@

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // CTGUI_SCROLLBAR_ACCESSOR_H

