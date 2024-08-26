// This file is generated, it should not be edited directly.

#ifndef CTGUI_CHATBOX_H
#define CTGUI_CHATBOX_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiChatBox_create(void);

CTGUI_API void tguiChatBox_addLine(tguiWidget* thisWidget, tguiUtf32 text);

CTGUI_API void tguiChatBox_addLineWithColor(tguiWidget* thisWidget, tguiUtf32 text, const tguiColor* color);

CTGUI_API void tguiChatBox_addLineWithColorAndStyle(tguiWidget* thisWidget, tguiUtf32 text, const tguiColor* color, tguiUint32 style);

CTGUI_API tguiUtf32 tguiChatBox_getLine(const tguiWidget* thisWidget, size_t lineIndex);

CTGUI_API const tguiColor* tguiChatBox_getLineColor(const tguiWidget* thisWidget, size_t lineIndex);

CTGUI_API tguiUint32 tguiChatBox_getLineTextStyle(const tguiWidget* thisWidget, size_t lineIndex);

CTGUI_API tguiBool tguiChatBox_removeLine(tguiWidget* thisWidget, size_t lineIndex);

CTGUI_API void tguiChatBox_removeAllLines(tguiWidget* thisWidget);

CTGUI_API size_t tguiChatBox_getLineAmount(const tguiWidget* thisWidget);

CTGUI_API void tguiChatBox_setLineLimit(tguiWidget* thisWidget, size_t value);
CTGUI_API size_t tguiChatBox_getLineLimit(const tguiWidget* thisWidget);

CTGUI_API void tguiChatBox_setTextColor(tguiWidget* thisWidget, const tguiColor* value);
CTGUI_API const tguiColor* tguiChatBox_getTextColor(const tguiWidget* thisWidget);

CTGUI_API void tguiChatBox_setTextStyle(tguiWidget* thisWidget, tguiUint32 value);
CTGUI_API tguiUint32 tguiChatBox_getTextStyle(const tguiWidget* thisWidget);

CTGUI_API void tguiChatBox_setLinesStartFromTop(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiChatBox_getLinesStartFromTop(const tguiWidget* thisWidget);

CTGUI_API void tguiChatBox_setNewLinesBelowOthers(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiChatBox_getNewLinesBelowOthers(const tguiWidget* thisWidget);

#endif // CTGUI_CHATBOX_H
