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


#ifndef CTGUI_EDIT_BOX_H
#define CTGUI_EDIT_BOX_H

#include <CTGUI/Widget.h>
#include <CTGUI/Alignment.h>

CTGUI_API tguiWidget* tguiEditBox_create(void);

CTGUI_API void tguiEditBox_setText(tguiWidget* widget, tguiUtf32 text);
CTGUI_API tguiUtf32 tguiEditBox_getText(const tguiWidget* widget);

CTGUI_API void tguiEditBox_setDefaultText(tguiWidget* widget, tguiUtf32 text);
CTGUI_API tguiUtf32 tguiEditBox_getDefaultText(const tguiWidget* widget);

CTGUI_API void tguiEditBox_selectText(tguiWidget* widget, size_t start, size_t length);
CTGUI_API tguiUtf32 tguiEditBox_getSelectedText(const tguiWidget* widget);

CTGUI_API void tguiEditBox_setPasswordCharacter(tguiWidget* widget, char32_t passwordChar);
CTGUI_API char32_t tguiEditBox_getPasswordCharacter(const tguiWidget* widget);

CTGUI_API void tguiEditBox_setMaximumCharacters(tguiWidget* widget, unsigned int maximumCharacters);
CTGUI_API unsigned int tguiEditBox_getMaximumCharacters(const tguiWidget* widget);

CTGUI_API void tguiEditBox_setAlignment(tguiWidget* widget, tguiHorizontalAlignment alignment);
CTGUI_API tguiHorizontalAlignment tguiEditBox_getAlignment(const tguiWidget* widget);

CTGUI_API void tguiEditBox_limitTextWidth(tguiWidget* widget, tguiBool limitWidth);
CTGUI_API tguiBool tguiEditBox_isTextWidthLimited(const tguiWidget* widget);

CTGUI_API void tguiEditBox_setReadOnly(tguiWidget* widget, tguiBool readOnly);
CTGUI_API tguiBool tguiEditBox_isReadOnly(const tguiWidget* widget);

CTGUI_API void tguiEditBox_setCaretPosition(tguiWidget* widget, size_t caretPosition);
CTGUI_API size_t tguiEditBox_getCaretPosition(const tguiWidget* widget);

CTGUI_API void tguiEditBox_setInputValidator(tguiWidget* widget, tguiUtf32 validator);
CTGUI_API tguiUtf32 tguiEditBox_getInputValidator(const tguiWidget* widget);

CTGUI_API void tguiEditBox_setSuffix(tguiWidget* widget, tguiUtf32 suffix);
CTGUI_API tguiUtf32 tguiEditBox_getSuffix(const tguiWidget* widget);

#endif // CTGUI_EDIT_BOX_H

