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


#include <CTGUI/Widgets/TextArea.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/TextArea.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::TextArea>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiTextArea_create(void)
{
    return ctgui::addWidgetRef(tgui::TextArea::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setText(tguiWidget* widget, tguiUtf32 text)
{
    DOWNCAST(widget->This)->setText(ctgui::toCppStr(text));
}

void tguiTextArea_addText(tguiWidget* widget, tguiUtf32 text)
{
    DOWNCAST(widget->This)->addText(ctgui::toCppStr(text));
}

tguiUtf32 tguiTextArea_getText(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setDefaultText(tguiWidget* widget, tguiUtf32 text)
{
    DOWNCAST(widget->This)->setDefaultText(ctgui::toCppStr(text));
}

tguiUtf32 tguiTextArea_getDefaultText(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getDefaultText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setSelectedText(const tguiWidget* widget, size_t selectionStartIndex, size_t selectionEndIndex)
{
    DOWNCAST(widget->This)->setSelectedText(selectionStartIndex, selectionEndIndex);
}

tguiUtf32 tguiTextArea_getSelectedText(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getSelectedText());
}

size_t tguiTextArea_getSelectionStart(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getSelectionStart();
}

size_t tguiTextArea_getSelectionEnd(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getSelectionEnd();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setMaximumCharacters(tguiWidget* widget, size_t maximumCharacters)
{
    DOWNCAST(widget->This)->setMaximumCharacters(maximumCharacters);
}

size_t tguiTextArea_getMaximumCharacters(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMaximumCharacters();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setTabString(tguiWidget* widget, tguiUtf32 tabText)
{
    DOWNCAST(widget->This)->setTabString(ctgui::toCppStr(tabText));
}

tguiUtf32 tguiTextArea_getTabString(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getTabString());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setCaretPosition(tguiWidget* widget, size_t charactersBeforeCaret)
{
    DOWNCAST(widget->This)->setCaretPosition(charactersBeforeCaret);
}

size_t tguiTextArea_getCaretPosition(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getCaretPosition();
}

size_t tguiTextArea_getCaretLine(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getCaretLine();
}

size_t tguiTextArea_getCaretColumn(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getCaretColumn();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setReadOnly(tguiWidget* widget, tguiBool readOnly)
{
    DOWNCAST(widget->This)->setReadOnly(readOnly != 0);
}

tguiBool tguiTextArea_isReadOnly(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isReadOnly();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setVerticalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy)
{
    DOWNCAST(widget->This)->setVerticalScrollbarPolicy(static_cast<tgui::Scrollbar::Policy>(policy));
}

tguiScrollbarPolicy tguiTextArea_getVerticalScrollbarPolicy(const tguiWidget* widget)
{
    return static_cast<tguiScrollbarPolicy>(DOWNCAST(widget->This)->getVerticalScrollbarPolicy());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setHorizontalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy)
{
    DOWNCAST(widget->This)->setHorizontalScrollbarPolicy(static_cast<tgui::Scrollbar::Policy>(policy));
}

tguiScrollbarPolicy tguiTextArea_getHorizontalScrollbarPolicy(const tguiWidget* widget)
{
    return static_cast<tguiScrollbarPolicy>(DOWNCAST(widget->This)->getHorizontalScrollbarPolicy());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_enableMonospacedFontOptimization(tguiWidget* widget, tguiBool enable)
{
    DOWNCAST(widget->This)->enableMonospacedFontOptimization(enable != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setVerticalScrollbarValue(tguiWidget* widget, unsigned int value)
{
    DOWNCAST(widget->This)->setVerticalScrollbarValue(value);
}

unsigned int tguiTextArea_getVerticalScrollbarValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getVerticalScrollbarValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setHorizontalScrollbarValue(tguiWidget* widget, unsigned int value)
{
    DOWNCAST(widget->This)->setHorizontalScrollbarValue(value);
}

unsigned int tguiTextArea_getHorizontalScrollbarValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getHorizontalScrollbarValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiTextArea_getLinesCount(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getLinesCount();
}
