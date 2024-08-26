// This file is generated, it should not be edited directly.

#include <CTGUI/ScrollbarAccessor.h>
#include <CTGUI/ScrollbarAccessorStruct.hpp>
#include <CTGUI/WidgetStruct.hpp>


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

void tguiScrollbarAccessor_free(tguiScrollbarAccessor* accessor)
{
    delete accessor;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarAccessor_setValue(tguiScrollbarAccessor* thisScrollbarAccessor, unsigned int value)
{
    thisScrollbarAccessor->This->setValue(value);
}

unsigned int tguiScrollbarAccessor_getValue(const tguiScrollbarAccessor* thisScrollbarAccessor)
{
    return thisScrollbarAccessor->This->getValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarAccessor_setScrollAmount(tguiScrollbarAccessor* thisScrollbarAccessor, unsigned int value)
{
    thisScrollbarAccessor->This->setScrollAmount(value);
}

unsigned int tguiScrollbarAccessor_getScrollAmount(const tguiScrollbarAccessor* thisScrollbarAccessor)
{
    return thisScrollbarAccessor->This->getScrollAmount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarAccessor_setPolicy(tguiScrollbarAccessor* thisScrollbarAccessor, tguiScrollbarPolicy value)
{
    thisScrollbarAccessor->This->setPolicy(static_cast<tgui::Scrollbar::Policy>(value));
}

tguiScrollbarPolicy tguiScrollbarAccessor_getPolicy(const tguiScrollbarAccessor* thisScrollbarAccessor)
{
    return static_cast<tguiScrollbarPolicy>(thisScrollbarAccessor->This->getPolicy());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int tguiScrollbarAccessor_getMaximum(const tguiScrollbarAccessor* thisScrollbarAccessor)
{
    return thisScrollbarAccessor->This->getMaximum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int tguiScrollbarAccessor_getViewportSize(const tguiScrollbarAccessor* thisScrollbarAccessor)
{
    return thisScrollbarAccessor->This->getViewportSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int tguiScrollbarAccessor_getMaxValue(const tguiScrollbarAccessor* thisScrollbarAccessor)
{
    return thisScrollbarAccessor->This->getMaxValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiScrollbarAccessor_isShown(const tguiScrollbarAccessor* thisScrollbarAccessor)
{
    return thisScrollbarAccessor->This->isShown();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiScrollbarAccessor_getWidth(const tguiScrollbarAccessor* thisScrollbarAccessor)
{
    return thisScrollbarAccessor->This->getWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

