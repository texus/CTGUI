/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2024 Bruno Van de Velde (vdv_b@tgui.eu)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <CTGUI/Widgets/ScrollablePanel.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/ScrollablePanel.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ScrollablePanel>(x)

tguiWidget* tguiScrollablePanel_create(void)
{
    return ctgui::addWidgetRef(tgui::ScrollablePanel::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanel_setContentSize(tguiWidget* widget, tguiVector2f contentSize)
{
    DOWNCAST(widget->This)->setContentSize({contentSize.x, contentSize.y});
}

tguiVector2f tguiScrollablePanel_getContentSize(const tguiWidget* widget)
{
    const tgui::Vector2f contentSize = DOWNCAST(widget->This)->getContentSize();
    return {contentSize.x, contentSize.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiScrollablePanel_getScrollbarWidth(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getScrollbarWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanel_setVerticalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy)
{
    DOWNCAST(widget->This)->setVerticalScrollbarPolicy(static_cast<tgui::Scrollbar::Policy>(policy));
}

tguiScrollbarPolicy tguiScrollablePanel_getVerticalScrollbarPolicy(const tguiWidget* widget)
{
    return static_cast<tguiScrollbarPolicy>(DOWNCAST(widget->This)->getVerticalScrollbarPolicy());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanel_setHorizontalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy)
{
    DOWNCAST(widget->This)->setHorizontalScrollbarPolicy(static_cast<tgui::Scrollbar::Policy>(policy));
}

tguiScrollbarPolicy tguiScrollablePanel_getHorizontalScrollbarPolicy(const tguiWidget* widget)
{
    return static_cast<tguiScrollbarPolicy>(DOWNCAST(widget->This)->getHorizontalScrollbarPolicy());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanel_setVerticalScrollAmount(tguiWidget* widget, unsigned int scrollAmount)
{
    DOWNCAST(widget->This)->setVerticalScrollAmount(scrollAmount);
}

unsigned int tguiScrollablePanel_getVerticalScrollAmount(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getVerticalScrollAmount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanel_setHorizontalScrollAmount(tguiWidget* widget, unsigned int scrollAmount)
{
    DOWNCAST(widget->This)->setHorizontalScrollAmount(scrollAmount);
}

unsigned int tguiScrollablePanel_getHorizontalScrollAmount(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getHorizontalScrollAmount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanel_setVerticalScrollbarValue(tguiWidget* widget, unsigned int value)
{
    DOWNCAST(widget->This)->setVerticalScrollbarValue(value);
}

unsigned int tguiScrollablePanel_getVerticalScrollbarValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getVerticalScrollbarValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanel_setHorizontalScrollbarValue(tguiWidget* widget, unsigned int value)
{
    DOWNCAST(widget->This)->setHorizontalScrollbarValue(value);
}

unsigned int tguiScrollablePanel_getHorizontalScrollbarValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getHorizontalScrollbarValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiScrollablePanel_isVerticalScrollbarShown(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isVerticalScrollbarShown();
}

tguiBool tguiScrollablePanel_isHorizontalScrollbarShown(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isHorizontalScrollbarShown();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiScrollablePanel_getContentOffset(const tguiWidget* widget)
{
    const tgui::Vector2f contentOffset = DOWNCAST(widget->This)->getContentOffset();
    return {contentOffset.x, contentOffset.y};
}
