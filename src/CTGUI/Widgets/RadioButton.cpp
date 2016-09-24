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


#include <CTGUI/Widgets/RadioButton.h>
#include <CTGUI/WidgetStruct.h>

#include <TGUI/Widgets/RadioButton.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::RadioButton>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiRadioButton_create(void)
{
    return new tguiWidget(tgui::RadioButton::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButton_check(tguiWidget* widget)
{
    DOWNCAST(widget->This)->check();
}

void tguiRadioButton_uncheck(tguiWidget* widget)
{
    DOWNCAST(widget->This)->uncheck();
}

sfBool tguiRadioButton_isChecked(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isChecked();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButton_setText(tguiWidget* widget, const sfUint32* text)
{
    DOWNCAST(widget->This)->setText(text);
}

const sfUint32* tguiRadioButton_getText(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getText().getData();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButton_setTextSize(tguiWidget* widget, unsigned int size)
{
    DOWNCAST(widget->This)->setTextSize(size);
}

unsigned int tguiRadioButton_getTextSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButton_setTextClickable(tguiWidget* widget, sfBool clickable)
{
    DOWNCAST(widget->This)->setTextClickable(clickable);
}

sfBool tguiRadioButton_isTextClickable(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isTextClickable();
}
