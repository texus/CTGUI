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

void tguiChatBox_addLine(tguiWidget* widget, tguiUtf32 text)
{
    DOWNCAST(widget->This)->addLine(ctgui::toCppStr(text));
}

void tguiChatBox_addLineWithColor(tguiWidget* widget, tguiUtf32 text, tguiColor* color)
{
    DOWNCAST(widget->This)->addLine(ctgui::toCppStr(text), ctgui::toCppColor(color));
}

void tguiChatBox_addLineWithColorAndStyle(tguiWidget* widget, tguiUtf32 text, tguiColor* color, tguiUint32 style)
{
    DOWNCAST(widget->This)->addLine(ctgui::toCppStr(text), ctgui::toCppColor(color), style);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiChatBox_getLine(const tguiWidget* widget, size_t lineIndex)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getLine(lineIndex));
}

tguiColor* tguiChatBox_getLineColor(const tguiWidget* widget, size_t lineIndex)
{
    return ctgui::fromCppColor(DOWNCAST(widget->This)->getLineColor(lineIndex));
}

tguiUint32 tguiChatBox_getLineTextStyle(const tguiWidget* widget, size_t lineIndex)
{
    return DOWNCAST(widget->This)->getLineTextStyle(lineIndex);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiChatBox_removeLine(tguiWidget* widget, size_t lineIndex)
{
    return DOWNCAST(widget->This)->removeLine(lineIndex);
}

void tguiChatBox_removeAllLines(tguiWidget* widget)
{
    DOWNCAST(widget->This)->removeAllLines();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiChatBox_getLineAmount(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getLineAmount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_setLineLimit(tguiWidget* widget, size_t maxLines)
{
    DOWNCAST(widget->This)->setLineLimit(maxLines);
}

size_t tguiChatBox_getLineLimit(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getLineLimit();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_setTextColor(tguiWidget* widget, tguiColor* color)
{
    DOWNCAST(widget->This)->setTextColor(ctgui::toCppColor(color));
}

tguiColor* tguiChatBox_getTextColor(const tguiWidget* widget)
{
    return ctgui::fromCppColor(DOWNCAST(widget->This)->getTextColor());
}

void tguiChatBox_setTextStyle(tguiWidget* widget, tguiUint32 style)
{
    DOWNCAST(widget->This)->setTextStyle(style);
}

tguiUint32 tguiChatBox_getTextStyle(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getTextStyle();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_setLinesStartFromTop(tguiWidget* widget, tguiBool startFromTop)
{
    DOWNCAST(widget->This)->setLinesStartFromTop(startFromTop != 0);
}

tguiBool tguiChatBox_getLinesStartFromTop(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getLinesStartFromTop();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_setNewLinesBelowOthers(tguiWidget* widget, tguiBool newLinesBelowOthers)
{
    DOWNCAST(widget->This)->setNewLinesBelowOthers(newLinesBelowOthers != 0);
}

tguiBool tguiChatBox_getNewLinesBelowOthers(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getNewLinesBelowOthers();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_setScrollbarValue(tguiWidget* widget, unsigned int value)
{
    DOWNCAST(widget->This)->setScrollbarValue(value);
}

unsigned int tguiChatBox_getScrollbarValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getScrollbarValue();
}
