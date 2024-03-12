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


#include <CTGUI/Widgets/EditBox.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/EditBox.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::EditBox>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiEditBox_create(void)
{
    return ctgui::addWidgetRef(tgui::EditBox::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setText(tguiWidget* widget, tguiUtf32 text)
{
    DOWNCAST(widget->This)->setText(ctgui::toCppStr(text));
}

tguiUtf32 tguiEditBox_getText(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setDefaultText(tguiWidget* widget, tguiUtf32 text)
{
    DOWNCAST(widget->This)->setDefaultText(ctgui::toCppStr(text));
}

tguiUtf32 tguiEditBox_getDefaultText(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getDefaultText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_selectText(tguiWidget* widget, size_t start, size_t length)
{
    DOWNCAST(widget->This)->selectText(start, length);
}

tguiUtf32 tguiEditBox_getSelectedText(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getSelectedText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setPasswordCharacter(tguiWidget* widget, char32_t passwordChar)
{
    DOWNCAST(widget->This)->setPasswordCharacter(passwordChar);
}

char32_t tguiEditBox_getPasswordCharacter(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getPasswordCharacter();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setMaximumCharacters(tguiWidget* widget, unsigned int maximumCharacters)
{
    DOWNCAST(widget->This)->setMaximumCharacters(maximumCharacters);
}

unsigned int tguiEditBox_getMaximumCharacters(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMaximumCharacters();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setAlignment(tguiWidget* widget, tguiHorizontalAlignment alignment)
{
    DOWNCAST(widget->This)->setAlignment(static_cast<tgui::EditBox::Alignment>(alignment));
}

tguiHorizontalAlignment tguiEditBox_getAlignment(const tguiWidget* widget)
{
    return static_cast<tguiHorizontalAlignment>(DOWNCAST(widget->This)->getAlignment());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_limitTextWidth(tguiWidget* widget, tguiBool limitWidth)
{
    DOWNCAST(widget->This)->limitTextWidth(limitWidth != 0);
}

tguiBool tguiEditBox_isTextWidthLimited(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isTextWidthLimited();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setReadOnly(tguiWidget* widget, tguiBool readOnly)
{
    DOWNCAST(widget->This)->setReadOnly(readOnly != 0);
}

tguiBool tguiEditBox_isReadOnly(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isReadOnly();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setCaretPosition(tguiWidget* widget, size_t caretPosition)
{
    DOWNCAST(widget->This)->setCaretPosition(caretPosition);
}

size_t tguiEditBox_getCaretPosition(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getCaretPosition();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setInputValidator(tguiWidget* widget, tguiUtf32 validator)
{
    DOWNCAST(widget->This)->setInputValidator(ctgui::toCppStr(validator));
}

tguiUtf32 tguiEditBox_getInputValidator(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getInputValidator());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setSuffix(tguiWidget* widget, tguiUtf32 suffix)
{
    DOWNCAST(widget->This)->setSuffix(ctgui::toCppStr(suffix));
}

tguiUtf32 tguiEditBox_getSuffix(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getSuffix());
}
