/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2018 Bruno Van de Velde (vdv_b@tgui.eu)
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


#include <CTGUI/Widgets/ProgressBar.h>
#include <CTGUI/WidgetStruct.h>

#include <TGUI/Widgets/ProgressBar.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ProgressBar>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiProgressBar_create(void)
{
    return new tguiWidget(tgui::ProgressBar::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBar_setMinimum(tguiWidget* widget, unsigned int minimum)
{
    DOWNCAST(widget->This)->setMinimum(minimum);
}

unsigned int tguiProgressBar_getMinimum(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMinimum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBar_setMaximum(tguiWidget* widget, unsigned int maximum)
{
    DOWNCAST(widget->This)->setMaximum(maximum);
}

unsigned int tguiProgressBar_getMaximum(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMaximum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBar_setValue(tguiWidget* widget, unsigned int value)
{
    DOWNCAST(widget->This)->setValue(value);
}

unsigned int tguiProgressBar_getValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int tguiProgressBar_incrementValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->incrementValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBar_setText(tguiWidget* widget, const sfUint32* text)
{
    DOWNCAST(widget->This)->setText(text);
}

const sfUint32* tguiProgressBar_getText(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getText().getData();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBar_setTextSize(tguiWidget* widget, unsigned int size)
{
    DOWNCAST(widget->This)->setTextSize(size);
}

unsigned int tguiProgressBar_getTextSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBar_setFillDirection(tguiWidget* widget, tguiFillDirection fillDirection)
{
    DOWNCAST(widget->This)->setFillDirection(static_cast<tgui::ProgressBar::FillDirection>(fillDirection));
}

tguiFillDirection tguiProgressBar_getFillDirection(const tguiWidget* widget)
{
    return static_cast<tguiFillDirection>(DOWNCAST(widget->This)->getFillDirection());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBar_connect_onValueChange(tguiWidget* widget, void (*function)(unsigned int), const char** error)
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

void tguiProgressBar_connect_onFull(tguiWidget* widget, void (*function)(), const char** error)
{
    try
    {
        DOWNCAST(widget->This)->onFull.connect(function);
        *error = nullptr;
    }
    catch (const tgui::Exception& e)
    {
        tguiErrorMessage = e.what();
        *error = tguiErrorMessage.c_str();
    }
}
