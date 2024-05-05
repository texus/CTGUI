// This file is generated, it should not be edited directly.

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

void tguiTextArea_setText(tguiWidget* thisWidget, tguiUtf32 value)
{
    DOWNCAST(thisWidget->This)->setText(ctgui::toCppStr(value));
}

tguiUtf32 tguiTextArea_getText(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_addText(tguiWidget* thisWidget, tguiUtf32 text)
{
    DOWNCAST(thisWidget->This)->addText(ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setDefaultText(tguiWidget* thisWidget, tguiUtf32 value)
{
    DOWNCAST(thisWidget->This)->setDefaultText(ctgui::toCppStr(value));
}

tguiUtf32 tguiTextArea_getDefaultText(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getDefaultText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setSelectedText(tguiWidget* thisWidget, size_t selectionStartIndex, size_t selectionEndIndex)
{
    DOWNCAST(thisWidget->This)->setSelectedText(selectionStartIndex, selectionEndIndex);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiTextArea_getSelectedText(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getSelectedText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiTextArea_getSelectionStart(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getSelectionStart();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiTextArea_getSelectionEnd(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getSelectionEnd();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setMaximumCharacters(tguiWidget* thisWidget, size_t value)
{
    DOWNCAST(thisWidget->This)->setMaximumCharacters(value);
}

size_t tguiTextArea_getMaximumCharacters(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMaximumCharacters();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setTabString(tguiWidget* thisWidget, tguiUtf32 value)
{
    DOWNCAST(thisWidget->This)->setTabString(ctgui::toCppStr(value));
}

tguiUtf32 tguiTextArea_getTabString(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getTabString());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setCaretPosition(tguiWidget* thisWidget, size_t charactersBeforeCaret)
{
    DOWNCAST(thisWidget->This)->setCaretPosition(charactersBeforeCaret);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiTextArea_getCaretPosition(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getCaretPosition();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiTextArea_getCaretLine(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getCaretLine();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiTextArea_getCaretColumn(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getCaretColumn();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setReadOnly(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setReadOnly(value != 0);
}

tguiBool tguiTextArea_isReadOnly(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->isReadOnly();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setVerticalScrollbarPolicy(tguiWidget* thisWidget, tguiScrollbarPolicy value)
{
    DOWNCAST(thisWidget->This)->setVerticalScrollbarPolicy(static_cast<tgui::Scrollbar::Policy>(value));
}

tguiScrollbarPolicy tguiTextArea_getVerticalScrollbarPolicy(const tguiWidget* thisWidget)
{
    return static_cast<tguiScrollbarPolicy>(DOWNCAST(thisWidget->This)->getVerticalScrollbarPolicy());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setHorizontalScrollbarPolicy(tguiWidget* thisWidget, tguiScrollbarPolicy value)
{
    DOWNCAST(thisWidget->This)->setHorizontalScrollbarPolicy(static_cast<tgui::Scrollbar::Policy>(value));
}

tguiScrollbarPolicy tguiTextArea_getHorizontalScrollbarPolicy(const tguiWidget* thisWidget)
{
    return static_cast<tguiScrollbarPolicy>(DOWNCAST(thisWidget->This)->getHorizontalScrollbarPolicy());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setVerticalScrollbarValue(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setVerticalScrollbarValue(value);
}

unsigned int tguiTextArea_getVerticalScrollbarValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getVerticalScrollbarValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_setHorizontalScrollbarValue(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setHorizontalScrollbarValue(value);
}

unsigned int tguiTextArea_getHorizontalScrollbarValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getHorizontalScrollbarValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextArea_enableMonospacedFontOptimization(tguiWidget* thisWidget, tguiBool enable)
{
    DOWNCAST(thisWidget->This)->enableMonospacedFontOptimization(enable != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiTextArea_getLinesCount(tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getLinesCount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
