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

void tguiScrollbar_setViewportSize(tguiWidget* widget, unsigned int viewport)
{
    DOWNCAST(widget->This)->setViewportSize(viewport);
}

unsigned int tguiScrollbar_getViewportSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getViewportSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbar_setMaximum(tguiWidget* widget, unsigned int maximum)
{
    DOWNCAST(widget->This)->setMaximum(maximum);
}

unsigned int tguiScrollbar_getMaximum(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMaximum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbar_setValue(tguiWidget* widget, unsigned int value)
{
    DOWNCAST(widget->This)->setValue(value);
}

unsigned int tguiScrollbar_getValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbar_setScrollAmount(tguiWidget* widget, unsigned int scrollAmount)
{
    DOWNCAST(widget->This)->setScrollAmount(scrollAmount);
}

unsigned int tguiScrollbar_getScrollAmount(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getScrollAmount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbar_setAutoHide(tguiWidget* widget, tguiBool autoHide)
{
    DOWNCAST(widget->This)->setAutoHide(autoHide != 0);
}

tguiBool tguiScrollbar_getAutoHide(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getAutoHide();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbar_setVerticalScroll(tguiWidget* widget, tguiBool vertical)
{
    DOWNCAST(widget->This)->setVerticalScroll(vertical != 0);
}

tguiBool tguiScrollbar_getVerticalScroll(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getVerticalScroll();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiScrollbar_getDefaultWidth(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getDefaultWidth();
}
