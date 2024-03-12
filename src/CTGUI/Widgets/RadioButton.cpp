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


#include <CTGUI/Widgets/RadioButton.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/RadioButton.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::RadioButton>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiRadioButton_create(void)
{
    return ctgui::addWidgetRef(tgui::RadioButton::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButton_setChecked(tguiWidget* widget, tguiBool checked)
{
    DOWNCAST(widget->This)->setChecked(checked);
}

tguiBool tguiRadioButton_isChecked(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isChecked();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButton_setText(tguiWidget* widget, tguiUtf32 text)
{
    DOWNCAST(widget->This)->setText(ctgui::toCppStr(text));
}

tguiUtf32 tguiRadioButton_getText(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButton_setTextClickable(tguiWidget* widget, tguiBool clickable)
{
    DOWNCAST(widget->This)->setTextClickable(clickable != 0);
}

tguiBool tguiRadioButton_isTextClickable(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isTextClickable();
}
