/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2019 Bruno Van de Velde (vdv_b@tgui.eu)
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


#include <CTGUI/Widgets/TextBox.h>
#include <CTGUI/WidgetStruct.h>

#include <TGUI/Widgets/TextBox.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::TextBox>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiTextBox_create(void)
{
    return new tguiWidget(tgui::TextBox::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBox_setText(tguiWidget* widget, const sfUint32* text)
{
    DOWNCAST(widget->This)->setText(text);
}

void tguiTextBox_addText(tguiWidget* widget, const sfUint32* text)
{
    DOWNCAST(widget->This)->addText(text);
}

const sfUint32* tguiTextBox_getText(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getText().getData();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBox_setSelectedText(const tguiWidget* widget, size_t selectionStartIndex, size_t selectionEndIndex)
{
    DOWNCAST(widget->This)->setSelectedText(selectionStartIndex, selectionEndIndex);
}

const sfUint32* tguiTextBox_getSelectedText(const tguiWidget* widget)
{
    static sf::String selectedText;
    selectedText = DOWNCAST(widget->This)->getSelectedText();
    return selectedText.getData();
}

size_t tguiTextBox_getSelectionStart(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getSelectionStart();
}

size_t tguiTextBox_getSelectionEnd(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getSelectionEnd();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBox_setTextSize(tguiWidget* widget, unsigned int size)
{
    DOWNCAST(widget->This)->setTextSize(size);
}

unsigned int tguiTextBox_getTextSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBox_setMaximumCharacters(tguiWidget* widget, size_t maximumCharacters)
{
    DOWNCAST(widget->This)->setMaximumCharacters(maximumCharacters);
}

size_t tguiTextBox_getMaximumCharacters(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMaximumCharacters();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBox_setCaretPosition(tguiWidget* widget, size_t charactersBeforeCaret)
{
    DOWNCAST(widget->This)->setCaretPosition(charactersBeforeCaret);
}

size_t tguiTextBox_getCaretPosition(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getCaretPosition();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBox_setReadOnly(tguiWidget* widget, sfBool readOnly)
{
    DOWNCAST(widget->This)->setReadOnly(readOnly != 0);
}

sfBool tguiTextBox_isReadOnly(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isReadOnly();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBox_setVerticalScrollbarPresent(tguiWidget* widget, sfBool present)
{
    DOWNCAST(widget->This)->setVerticalScrollbarPresent(present != 0);
}

sfBool tguiTextBox_isVerticalScrollbarPresent(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isVerticalScrollbarPresent();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBox_setVerticalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy)
{
    DOWNCAST(widget->This)->setVerticalScrollbarPolicy(static_cast<tgui::Scrollbar::Policy>(policy));
}

tguiScrollbarPolicy tguiTextBox_getVerticalScrollbarPolicy(const tguiWidget* widget)
{
    return static_cast<tguiScrollbarPolicy>(DOWNCAST(widget->This)->getVerticalScrollbarPolicy());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBox_setHorizontalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy)
{
    DOWNCAST(widget->This)->setHorizontalScrollbarPolicy(static_cast<tgui::Scrollbar::Policy>(policy));
}

tguiScrollbarPolicy tguiTextBox_getHorizontalScrollbarPolicy(const tguiWidget* widget)
{
    return static_cast<tguiScrollbarPolicy>(DOWNCAST(widget->This)->getHorizontalScrollbarPolicy());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBox_setVerticalScrollbarValue(tguiWidget* widget, unsigned int value)
{
    DOWNCAST(widget->This)->setVerticalScrollbarValue(value);
}

unsigned int tguiTextBox_getVerticalScrollbarValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getVerticalScrollbarValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBox_setHorizontalScrollbarValue(tguiWidget* widget, unsigned int value)
{
    DOWNCAST(widget->This)->setHorizontalScrollbarValue(value);
}

unsigned int tguiTextBox_getHorizontalScrollbarValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getHorizontalScrollbarValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiTextBox_getLinesCount(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getLinesCount();
}
