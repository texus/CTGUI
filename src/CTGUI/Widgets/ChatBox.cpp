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


#include <CTGUI/Widgets/ChatBox.h>
#include <CTGUI/WidgetStruct.h>

#include <TGUI/Widgets/ChatBox.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ChatBox>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiChatBox_create(void)
{
    return new tguiWidget(tgui::ChatBox::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_addLine(tguiWidget* widget, const sfUint32* text)
{
    DOWNCAST(widget->This)->addLine(text);
}

void tguiChatBox_addLineWithColor(tguiWidget* widget, const sfUint32* text, sfColor color)
{
    DOWNCAST(widget->This)->addLine(text, {color.r, color.g, color.b, color.a});
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const sfUint32* tguiChatBox_getLine(tguiWidget* widget, size_t lineIndex)
{
    static sf::String line;
    line = DOWNCAST(widget->This)->getLine(lineIndex);
    return line.getData();
}

sfColor tguiChatBox_getLineColor(const tguiWidget* widget, size_t lineIndex)
{
    sf::Color color = DOWNCAST(widget->This)->getLineColor(lineIndex);
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiChatBox_removeLine(tguiWidget* widget, size_t lineIndex)
{
    return DOWNCAST(widget->This)->removeLine(lineIndex);
}

void tguiChatBox_removeAllLines(tguiWidget* widget)
{
    DOWNCAST(widget->This)->removeAllLines();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiChatBox_getLineAmount(tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getLineAmount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_setLineLimit(tguiWidget* widget, size_t maxLines)
{
    DOWNCAST(widget->This)->setLineLimit(maxLines);
}

size_t tguiChatBox_getLineLimit(tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getLineLimit();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_setTextSize(tguiWidget* widget, unsigned int textSize)
{
    DOWNCAST(widget->This)->setTextSize(textSize);
}

unsigned int tguiChatBox_getTextSize(tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getTextSize();
}

void tguiChatBox_setTextColor(tguiWidget* widget, sfColor color)
{
    DOWNCAST(widget->This)->setTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiChatBox_getTextColor(const tguiWidget* widget)
{
    sf::Color color = DOWNCAST(widget->This)->getTextColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_setLinesStartFromTop(tguiWidget* widget, sfBool startFromTop)
{
    DOWNCAST(widget->This)->setLinesStartFromTop(startFromTop);
}

sfBool tguiChatBox_getLinesStartFromTop(tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getLinesStartFromTop();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBox_setNewLinesBelowOthers(tguiWidget* widget, sfBool newLinesBelowOthers)
{
    DOWNCAST(widget->This)->setNewLinesBelowOthers(newLinesBelowOthers);
}

sfBool tguiChatBox_getNewLinesBelowOthers(tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getNewLinesBelowOthers();
}
