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


#include <CTGUI/Widgets/EditBox.h>
#include <CTGUI/WidgetStruct.h>

#include <TGUI/Widgets/EditBox.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::EditBox>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiEditBox_create(void)
{
    return new tguiWidget(tgui::EditBox::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setText(tguiWidget* widget, const sfUint32* text)
{
    DOWNCAST(widget->This)->setText(text);
}

const sfUint32* tguiEditBox_getText(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getText().getData();
}

void tguiEditBox_setDefaultText(tguiWidget* widget, const sfUint32* text)
{
    DOWNCAST(widget->This)->setDefaultText(text);
}

const sfUint32* tguiEditBox_getDefaultText(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getDefaultText().getData();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_selectText(tguiWidget* widget, size_t start, size_t length)
{
    DOWNCAST(widget->This)->selectText(start, length);
}

const sfUint32* tguiEditBox_getSelectedText(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getSelectedText().getData();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setTextSize(tguiWidget* widget, unsigned int size)
{
    DOWNCAST(widget->This)->setTextSize(size);
}

unsigned int tguiEditBox_getTextSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setPasswordCharacter(tguiWidget* widget, char passwordChar)
{
    DOWNCAST(widget->This)->setPasswordCharacter(passwordChar);
}

char tguiEditBox_getPasswordCharacter(const tguiWidget* widget)
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

unsigned int tguiEditBox_getAlignment(const tguiWidget* widget)
{
    return static_cast<tguiHorizontalAlignment>(DOWNCAST(widget->This)->getAlignment());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_limitTextWidth(tguiWidget* widget, sfBool limitWidth)
{
    DOWNCAST(widget->This)->limitTextWidth(limitWidth);
}

sfBool tguiEditBox_isTextWidthLimited(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isTextWidthLimited();
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

void tguiEditBox_setInputValidator(tguiWidget* widget, const char* validator)
{
    DOWNCAST(widget->This)->setInputValidator(validator);
}

const char* tguiEditBox_getInputValidator(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getInputValidator().c_str();
}
