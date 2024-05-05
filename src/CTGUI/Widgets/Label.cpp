// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/Label.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/Label.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::Label>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiLabel_create(void)
{
    return ctgui::addWidgetRef(tgui::Label::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiLabel_setText(tguiWidget* thisWidget, tguiUtf32 value)
{
    DOWNCAST(thisWidget->This)->setText(ctgui::toCppStr(value));
}

tguiUtf32 tguiLabel_getText(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiLabel_setHorizontalAlignment(tguiWidget* thisWidget, tguiHorizontalAlignment value)
{
    DOWNCAST(thisWidget->This)->setHorizontalAlignment(static_cast<tgui::HorizontalAlignment>(value));
}

tguiHorizontalAlignment tguiLabel_getHorizontalAlignment(const tguiWidget* thisWidget)
{
    return static_cast<tguiHorizontalAlignment>(DOWNCAST(thisWidget->This)->getHorizontalAlignment());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiLabel_setVerticalAlignment(tguiWidget* thisWidget, tguiVerticalAlignment value)
{
    DOWNCAST(thisWidget->This)->setVerticalAlignment(static_cast<tgui::VerticalAlignment>(value));
}

tguiVerticalAlignment tguiLabel_getVerticalAlignment(const tguiWidget* thisWidget)
{
    return static_cast<tguiVerticalAlignment>(DOWNCAST(thisWidget->This)->getVerticalAlignment());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiLabel_setAutoSize(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setAutoSize(value != 0);
}

tguiBool tguiLabel_getAutoSize(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getAutoSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiLabel_setMaximumTextWidth(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setMaximumTextWidth(value);
}

float tguiLabel_getMaximumTextWidth(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMaximumTextWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiLabel_setScrollbarPolicy(tguiWidget* thisWidget, tguiScrollbarPolicy value)
{
    DOWNCAST(thisWidget->This)->setScrollbarPolicy(static_cast<tgui::Scrollbar::Policy>(value));
}

tguiScrollbarPolicy tguiLabel_getScrollbarPolicy(const tguiWidget* thisWidget)
{
    return static_cast<tguiScrollbarPolicy>(DOWNCAST(thisWidget->This)->getScrollbarPolicy());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiLabel_setScrollbarValue(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setScrollbarValue(value);
}

unsigned int tguiLabel_getScrollbarValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getScrollbarValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
