#include <CTGUI/ScrollbarAccessor.h>
#include <CTGUI/ScrollbarAccessorStruct.hpp>
#include <CTGUI/WidgetStruct.hpp>

@TGUI_GENERATED_HEAD@

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiScrollbarAccessor* tguiScrollbarChildInterface_getScrollbar(tguiWidget* widget)
{
    return new tguiScrollbarAccessor(std::dynamic_pointer_cast<tgui::ScrollbarChildInterface>(widget->This)->getScrollbar());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiScrollbarAccessor* tguiDualScrollbarChildInterface_getVerticalScrollbar(tguiWidget* widget)
{
    return new tguiScrollbarAccessor(std::dynamic_pointer_cast<tgui::DualScrollbarChildInterface>(widget->This)->getVerticalScrollbar());
}

tguiScrollbarAccessor* tguiDualScrollbarChildInterface_getHorizontalScrollbar(tguiWidget* widget)
{
    return new tguiScrollbarAccessor(std::dynamic_pointer_cast<tgui::DualScrollbarChildInterface>(widget->This)->getHorizontalScrollbar());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarAccessor_destroy(tguiScrollbarAccessor* accessor)
{
    delete accessor;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

@TGUI_GENERATED_BODY@

