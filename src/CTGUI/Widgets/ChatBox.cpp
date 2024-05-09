// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/ChatBox.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/ChatBox.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ChatBox>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiChatBox_create(void)
{
    return ctgui::addWidgetRef(tgui::ChatBox::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_addLine(tguiWidget* thisWidget, tguiUtf32 text)
{
    DOWNCAST(thisWidget->This)->addLine(ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_addLineWithColor(tguiWidget* thisWidget, tguiUtf32 text, const tguiColor* color)
{
    DOWNCAST(thisWidget->This)->addLine(ctgui::toCppStr(text), ctgui::toCppColor(color));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_addLineWithColorAndStyle(tguiWidget* thisWidget, tguiUtf32 text, const tguiColor* color, tguiUint32 style)
{
    DOWNCAST(thisWidget->This)->addLine(ctgui::toCppStr(text), ctgui::toCppColor(color), style);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiChatBox_getLine(const tguiWidget* thisWidget, size_t lineIndex)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getLine(lineIndex));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const tguiColor* tguiChatBox_getLineColor(const tguiWidget* thisWidget, size_t lineIndex)
{
    return ctgui::fromCppColor(DOWNCAST(thisWidget->This)->getLineColor(lineIndex));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUint32 tguiChatBox_getLineTextStyle(const tguiWidget* thisWidget, size_t lineIndex)
{
    return DOWNCAST(thisWidget->This)->getLineTextStyle(lineIndex);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiChatBox_removeLine(tguiWidget* thisWidget, size_t lineIndex)
{
    return DOWNCAST(thisWidget->This)->removeLine(lineIndex);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_removeAllLines(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->removeAllLines();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiChatBox_getLineAmount(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getLineAmount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_setLineLimit(tguiWidget* thisWidget, size_t value)
{
    DOWNCAST(thisWidget->This)->setLineLimit(value);
}

size_t tguiChatBox_getLineLimit(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getLineLimit();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_setTextColor(tguiWidget* thisWidget, const tguiColor* value)
{
    DOWNCAST(thisWidget->This)->setTextColor(ctgui::toCppColor(value));
}

const tguiColor* tguiChatBox_getTextColor(const tguiWidget* thisWidget)
{
    return ctgui::fromCppColor(DOWNCAST(thisWidget->This)->getTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_setTextStyle(tguiWidget* thisWidget, tguiUint32 value)
{
    DOWNCAST(thisWidget->This)->setTextStyle(value);
}

tguiUint32 tguiChatBox_getTextStyle(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getTextStyle();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_setLinesStartFromTop(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setLinesStartFromTop(value != 0);
}

tguiBool tguiChatBox_getLinesStartFromTop(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getLinesStartFromTop();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_setNewLinesBelowOthers(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setNewLinesBelowOthers(value != 0);
}

tguiBool tguiChatBox_getNewLinesBelowOthers(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getNewLinesBelowOthers();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_setScrollbarValue(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setScrollbarValue(value);
}

unsigned int tguiChatBox_getScrollbarValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getScrollbarValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
