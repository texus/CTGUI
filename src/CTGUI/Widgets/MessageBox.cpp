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


#include <CTGUI/Widgets/MessageBox.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/MessageBox.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::MessageBox>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiMessageBox_create(void)
{
    return ctgui::addWidgetRef(tgui::MessageBox::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMessageBox_setText(tguiWidget* widget, tguiUtf32 text)
{
    DOWNCAST(widget->This)->setText(ctgui::toCppStr(text));
}

tguiUtf32 tguiMessageBox_getText(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMessageBox_addButton(tguiWidget* widget, tguiUtf32 text)
{
    DOWNCAST(widget->This)->addButton(ctgui::toCppStr(text));
}

void tguiMessageBox_removeButtons(tguiWidget* widget)
{
    DOWNCAST(widget->This)->changeButtons({});
}

const tguiUtf32* tguiMessageBox_getButtons(const tguiWidget* widget, size_t* count)
{
    static std::vector<tgui::String> cppItems;
    cppItems = DOWNCAST(widget->This)->getButtons();

    static std::vector<tguiUtf32> cItems;
    cItems.clear();
    cItems.reserve(cppItems.size());
    for (const auto& item : cppItems)
        cItems.emplace_back(item.c_str());

    *count = cItems.size();
    return cItems.data();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMessageBox_setLabelAlignment(tguiWidget* widget, tguiHorizontalAlignment labelAlignment)
{
    DOWNCAST(widget->This)->setLabelAlignment(static_cast<tgui::MessageBox::Alignment>(labelAlignment));
}

tguiHorizontalAlignment tguiMessageBox_getLabelAlignment(const tguiWidget* widget)
{
    return static_cast<tguiHorizontalAlignment>(DOWNCAST(widget->This)->getLabelAlignment());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMessageBox_setButtonAlignment(tguiWidget* widget, tguiHorizontalAlignment buttonAlignment)
{
    DOWNCAST(widget->This)->setButtonAlignment(static_cast<tgui::MessageBox::Alignment>(buttonAlignment));
}

tguiHorizontalAlignment tguiMessageBox_getButtonAlignment(const tguiWidget* widget)
{
    return static_cast<tguiHorizontalAlignment>(DOWNCAST(widget->This)->getButtonAlignment());
}
