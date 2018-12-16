/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2018 Bruno Van de Velde (vdv_b@tgui.eu)
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

#include <CTGUI/Config.h>
#include <CTGUI/Widget.h>
#include <SFML/Graphics/Color.h>
#include <stddef.h>

CTGUI_API tguiWidget* tguiChatBox_create(void);

CTGUI_API void tguiChatBox_addLine(tguiWidget* widget, const sfUint32* text);
CTGUI_API void tguiChatBox_addLineWithColor(tguiWidget* widget, const sfUint32* text, sfColor color);
CTGUI_API void tguiChatBox_addLineWithColorAndStyle(tguiWidget* widget, const sfUint32* text, sfColor color, sfUint32 style);

CTGUI_API const sfUint32* tguiChatBox_getLine(const tguiWidget* widget, size_t lineIndex);
CTGUI_API sfColor tguiChatBox_getLineColor(const tguiWidget* widget, size_t lineIndex);
CTGUI_API sfUint32 tguiChatBox_getLineTextStyle(const tguiWidget* widget, size_t lineIndex);

CTGUI_API sfBool tguiChatBox_removeLine(tguiWidget* widget, size_t lineIndex);
CTGUI_API void tguiChatBox_removeAllLines(tguiWidget* widget);

CTGUI_API size_t tguiChatBox_getLineAmount(const tguiWidget* widget);

CTGUI_API void tguiChatBox_setLineLimit(tguiWidget* widget, size_t maxLines);
CTGUI_API size_t tguiChatBox_getLineLimit(const tguiWidget* widget);

CTGUI_API void tguiChatBox_setTextSize(tguiWidget* widget, unsigned int textSize);
CTGUI_API unsigned int tguiChatBox_getTextSize(const tguiWidget* widget);

CTGUI_API void tguiChatBox_setTextColor(tguiWidget* widget, sfColor color);
CTGUI_API sfColor tguiChatBox_getTextColor(const tguiWidget* widget);

CTGUI_API void tguiChatBox_setTextStyle(tguiWidget* widget, sfUint32 style);
CTGUI_API sfUint32 tguiChatBox_getTextStyle(const tguiWidget* widget);

CTGUI_API void tguiChatBox_setLinesStartFromTop(tguiWidget* widget, sfBool startFromTop);
CTGUI_API sfBool tguiChatBox_getLinesStartFromTop(const tguiWidget* widget);

CTGUI_API void tguiChatBox_setNewLinesBelowOthers(tguiWidget* widget, sfBool newLinesBelowOthers);
CTGUI_API sfBool tguiChatBox_getNewLinesBelowOthers(const tguiWidget* widget);

#endif // CTGUI_CHAT_BOX_H

