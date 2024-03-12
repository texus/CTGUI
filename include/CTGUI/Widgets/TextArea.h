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


#ifndef CTGUI_TEXT_BOX_H
#define CTGUI_TEXT_BOX_H

#include <CTGUI/Widget.h>
#include <CTGUI/ScrollbarPolicy.h>

CTGUI_API tguiWidget* tguiTextArea_create(void);

CTGUI_API void tguiTextArea_setText(tguiWidget* widget, tguiUtf32 text);
CTGUI_API void tguiTextArea_addText(tguiWidget* widget, tguiUtf32 text);
CTGUI_API tguiUtf32 tguiTextArea_getText(const tguiWidget* widget);

CTGUI_API void tguiTextArea_setDefaultText(tguiWidget* widget, tguiUtf32 text);
CTGUI_API tguiUtf32 tguiTextArea_getDefaultText(const tguiWidget* widget);

CTGUI_API void tguiTextArea_setSelectedText(const tguiWidget* widget, size_t selectionStartIndex, size_t selectionEndIndex);
CTGUI_API tguiUtf32 tguiTextArea_getSelectedText(const tguiWidget* widget);
CTGUI_API size_t tguiTextArea_getSelectionStart(const tguiWidget* widget);
CTGUI_API size_t tguiTextArea_getSelectionEnd(const tguiWidget* widget);

CTGUI_API void tguiTextArea_setMaximumCharacters(tguiWidget* widget, size_t maximumCharacters);
CTGUI_API size_t tguiTextArea_getMaximumCharacters(const tguiWidget* widget);

CTGUI_API void tguiTextArea_setTabString(tguiWidget* widget, tguiUtf32 tabText);
CTGUI_API tguiUtf32 tguiTextArea_getTabString(const tguiWidget* widget);

CTGUI_API void tguiTextArea_setCaretPosition(tguiWidget* widget, size_t charactersBeforeCaret);
CTGUI_API size_t tguiTextArea_getCaretPosition(const tguiWidget* widget);
CTGUI_API size_t tguiTextArea_getCaretLine(const tguiWidget* widget);
CTGUI_API size_t tguiTextArea_getCaretColumn(const tguiWidget* widget);

CTGUI_API void tguiTextArea_setReadOnly(tguiWidget* widget, tguiBool readOnly);
CTGUI_API tguiBool tguiTextArea_isReadOnly(const tguiWidget* widget);

CTGUI_API void tguiTextArea_setVerticalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy);
CTGUI_API tguiScrollbarPolicy tguiTextArea_getVerticalScrollbarPolicy(const tguiWidget* widget);

CTGUI_API void tguiTextArea_setHorizontalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy);
CTGUI_API tguiScrollbarPolicy tguiTextArea_getHorizontalScrollbarPolicy(const tguiWidget* widget);

CTGUI_API void tguiTextArea_enableMonospacedFontOptimization(tguiWidget* widget, tguiBool enable);

CTGUI_API void tguiTextArea_setVerticalScrollbarValue(tguiWidget* widget, unsigned int value);
CTGUI_API unsigned int tguiTextArea_getVerticalScrollbarValue(const tguiWidget* widget);

CTGUI_API void tguiTextArea_setHorizontalScrollbarValue(tguiWidget* widget, unsigned int value);
CTGUI_API unsigned int tguiTextArea_getHorizontalScrollbarValue(const tguiWidget* widget);

CTGUI_API size_t tguiTextArea_getLinesCount(const tguiWidget* widget);

#endif // CTGUI_TEXT_BOX_H

