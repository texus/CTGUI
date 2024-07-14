// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/ScrollablePanel.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/ScrollablePanel.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ScrollablePanel>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiScrollablePanel_create(void)
{
    return ctgui::addWidgetRef(tgui::ScrollablePanel::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanel_setContentSize(tguiWidget* thisWidget, tguiVector2f value)
{
    DOWNCAST(thisWidget->This)->setContentSize({value.x, value.y});
}

tguiVector2f tguiScrollablePanel_getContentSize(const tguiWidget* thisWidget)
{
    const auto value = DOWNCAST(thisWidget->This)->getContentSize();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiScrollablePanel_getScrollbarWidth(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getScrollbarWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanel_setVerticalScrollbarPolicy(tguiWidget* thisWidget, tguiScrollbarPolicy value)
{
    DOWNCAST(thisWidget->This)->setVerticalScrollbarPolicy(static_cast<tgui::Scrollbar::Policy>(value));
}

tguiScrollbarPolicy tguiScrollablePanel_getVerticalScrollbarPolicy(const tguiWidget* thisWidget)
{
    return static_cast<tguiScrollbarPolicy>(DOWNCAST(thisWidget->This)->getVerticalScrollbarPolicy());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanel_setHorizontalScrollbarPolicy(tguiWidget* thisWidget, tguiScrollbarPolicy value)
{
    DOWNCAST(thisWidget->This)->setHorizontalScrollbarPolicy(static_cast<tgui::Scrollbar::Policy>(value));
}

tguiScrollbarPolicy tguiScrollablePanel_getHorizontalScrollbarPolicy(const tguiWidget* thisWidget)
{
    return static_cast<tguiScrollbarPolicy>(DOWNCAST(thisWidget->This)->getHorizontalScrollbarPolicy());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanel_setVerticalScrollAmount(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setVerticalScrollAmount(value);
}

unsigned int tguiScrollablePanel_getVerticalScrollAmount(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getVerticalScrollAmount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanel_setHorizontalScrollAmount(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setHorizontalScrollAmount(value);
}

unsigned int tguiScrollablePanel_getHorizontalScrollAmount(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getHorizontalScrollAmount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanel_setVerticalScrollbarValue(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setVerticalScrollbarValue(value);
}

unsigned int tguiScrollablePanel_getVerticalScrollbarValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getVerticalScrollbarValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanel_setHorizontalScrollbarValue(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setHorizontalScrollbarValue(value);
}

unsigned int tguiScrollablePanel_getHorizontalScrollbarValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getHorizontalScrollbarValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int tguiScrollablePanel_getVerticalScrollbarMaxValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getVerticalScrollbarMaxValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int tguiScrollablePanel_getHorizontalScrollbarMaxValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getHorizontalScrollbarMaxValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiScrollablePanel_isVerticalScrollbarShown(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->isVerticalScrollbarShown();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiScrollablePanel_isHorizontalScrollbarShown(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->isHorizontalScrollbarShown();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiScrollablePanel_getContentOffset(const tguiWidget* thisWidget)
{
    const auto value = DOWNCAST(thisWidget->This)->getContentOffset();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
