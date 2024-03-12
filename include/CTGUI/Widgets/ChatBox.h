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


#ifndef CTGUI_CHAT_BOX_H
#define CTGUI_CHAT_BOX_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiChatBox_create(void);

CTGUI_API void tguiChatBox_addLine(tguiWidget* widget, tguiUtf32 text);
CTGUI_API void tguiChatBox_addLineWithColor(tguiWidget* widget, tguiUtf32 text, tguiColor* color);
CTGUI_API void tguiChatBox_addLineWithColorAndStyle(tguiWidget* widget, tguiUtf32 text, tguiColor* color, tguiUint32 style);

CTGUI_API tguiUtf32 tguiChatBox_getLine(const tguiWidget* widget, size_t lineIndex);
CTGUI_API tguiColor* tguiChatBox_getLineColor(const tguiWidget* widget, size_t lineIndex);
CTGUI_API tguiUint32 tguiChatBox_getLineTextStyle(const tguiWidget* widget, size_t lineIndex);

CTGUI_API tguiBool tguiChatBox_removeLine(tguiWidget* widget, size_t lineIndex);
CTGUI_API void tguiChatBox_removeAllLines(tguiWidget* widget);

CTGUI_API size_t tguiChatBox_getLineAmount(const tguiWidget* widget);

CTGUI_API void tguiChatBox_setLineLimit(tguiWidget* widget, size_t maxLines);
CTGUI_API size_t tguiChatBox_getLineLimit(const tguiWidget* widget);

CTGUI_API void tguiChatBox_setTextColor(tguiWidget* widget, tguiColor* color);
CTGUI_API tguiColor* tguiChatBox_getTextColor(const tguiWidget* widget);

CTGUI_API void tguiChatBox_setTextStyle(tguiWidget* widget, tguiUint32 style);
CTGUI_API tguiUint32 tguiChatBox_getTextStyle(const tguiWidget* widget);

CTGUI_API void tguiChatBox_setLinesStartFromTop(tguiWidget* widget, tguiBool startFromTop);
CTGUI_API tguiBool tguiChatBox_getLinesStartFromTop(const tguiWidget* widget);

CTGUI_API void tguiChatBox_setNewLinesBelowOthers(tguiWidget* widget, tguiBool newLinesBelowOthers);
CTGUI_API tguiBool tguiChatBox_getNewLinesBelowOthers(const tguiWidget* widget);

CTGUI_API void tguiChatBox_setScrollbarValue(tguiWidget* widget, unsigned int value);
CTGUI_API unsigned int tguiChatBox_getScrollbarValue(const tguiWidget* widget);

#endif // CTGUI_CHAT_BOX_H

