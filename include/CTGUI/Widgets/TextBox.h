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


#ifndef CTGUI_TEXT_BOX_H
#define CTGUI_TEXT_BOX_H

#include <CTGUI/Config.h>
#include <CTGUI/Widget.h>
#include <CTGUI/ScrollbarPolicy.h>
#include <stddef.h>

CTGUI_API tguiWidget* tguiTextBox_create(void);

CTGUI_API void tguiTextBox_setText(tguiWidget* widget, const sfUint32* text);
CTGUI_API void tguiTextBox_addText(tguiWidget* widget, const sfUint32* text);
CTGUI_API const sfUint32* tguiTextBox_getText(const tguiWidget* widget);
CTGUI_API const sfUint32* tguiTextBox_getSelectedText(const tguiWidget* widget);

CTGUI_API void tguiTextBox_setTextSize(tguiWidget* widget, unsigned int size);
CTGUI_API unsigned int tguiTextBox_getTextSize(const tguiWidget* widget);

CTGUI_API void tguiTextBox_setMaximumCharacters(tguiWidget* widget, size_t maximumCharacters);
CTGUI_API size_t tguiTextBox_getMaximumCharacters(const tguiWidget* widget);

CTGUI_API void tguiTextBox_setCaretPosition(tguiWidget* widget, size_t charactersBeforeCaret);
CTGUI_API size_t tguiTextBox_getCaretPosition(const tguiWidget* widget);

CTGUI_API void tguiTextBox_setReadOnly(tguiWidget* widget, sfBool readOnly);
CTGUI_API sfBool tguiTextBox_isReadOnly(const tguiWidget* widget);

CTGUI_API void tguiTextBox_setVerticalScrollbarPresent(tguiWidget* widget, sfBool present);
CTGUI_API sfBool tguiTextBox_isVerticalScrollbarPresent(const tguiWidget* widget);

CTGUI_API void tguiTextBox_setVerticalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy);
CTGUI_API tguiScrollbarPolicy tguiTextBox_getVerticalScrollbarPolicy(const tguiWidget* widget);

CTGUI_API void tguiTextBox_setHorizontalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy);
CTGUI_API tguiScrollbarPolicy tguiTextBox_getHorizontalScrollbarPolicy(const tguiWidget* widget);


CTGUI_API size_t tguiTextBox_getLinesCount(const tguiWidget* widget);

#endif // CTGUI_TEXT_BOX_H

