// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/Scrollbar.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/Scrollbar.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::Scrollbar>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiScrollbar_create(void)
{
    return ctgui::addWidgetRef(tgui::Scrollbar::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbar_setViewportSize(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setViewportSize(value);
}

unsigned int tguiScrollbar_getViewportSize(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getViewportSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbar_setMaximum(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setMaximum(value);
}

unsigned int tguiScrollbar_getMaximum(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMaximum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbar_setValue(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setValue(value);
}

unsigned int tguiScrollbar_getValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbar_setScrollAmount(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setScrollAmount(value);
}

unsigned int tguiScrollbar_getScrollAmount(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getScrollAmount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbar_setPolicy(tguiWidget* thisWidget, tguiScrollbarPolicy value)
{
    DOWNCAST(thisWidget->This)->setPolicy(static_cast<tgui::Scrollbar::Policy>(value));
}

tguiScrollbarPolicy tguiScrollbar_getPolicy(const tguiWidget* thisWidget)
{
    return static_cast<tguiScrollbarPolicy>(DOWNCAST(thisWidget->This)->getPolicy());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbar_setOrientation(tguiWidget* thisWidget, tguiOrientation value)
{
    DOWNCAST(thisWidget->This)->setOrientation(static_cast<tgui::Orientation>(value));
}

tguiOrientation tguiScrollbar_getOrientation(const tguiWidget* thisWidget)
{
    return static_cast<tguiOrientation>(DOWNCAST(thisWidget->This)->getOrientation());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiScrollbar_isShown(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->isShown();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int tguiScrollbar_getMaxValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMaxValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiScrollbar_getDefaultWidth(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getDefaultWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
