/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2016 Bruno Van de Velde (vdv_b@tgui.eu)
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
#include <CTGUI/WidgetStruct.h>

#include <TGUI/Widgets/Scrollbar.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::Scrollbar>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiScrollbar_create(void)
{
    return new tguiWidget(tgui::Scrollbar::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbar_setLowValue(tguiWidget* widget, unsigned int lowValue)
{
    DOWNCAST(widget->This)->setLowValue(lowValue);
}

unsigned int tguiScrollbar_getLowValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getLowValue();
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

void tguiScrollbar_setAutoHide(tguiWidget* widget, sfBool autoHide)
{
    DOWNCAST(widget->This)->setAutoHide(autoHide != 0);
}

sfBool tguiScrollbar_getAutoHide(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getAutoHide();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbar_connect_onValueChange(tguiWidget* widget, void (*function)(unsigned int), const char** error)
{
    try
    {
        DOWNCAST(widget->This)->onValueChange.connect(function);
        *error = nullptr;
    }
    catch (const tgui::Exception& e)
    {
        tguiErrorMessage = e.what();
        *error = tguiErrorMessage.c_str();
    }
}
