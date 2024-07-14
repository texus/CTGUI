// This file is generated, it should not be edited directly.

#ifndef CTGUI_EDITBOX_H
#define CTGUI_EDITBOX_H

#include <CTGUI/Widget.h>

#include <CTGUI/Alignment.h>

CTGUI_API tguiWidget* tguiEditBox_create(void);

CTGUI_API void tguiEditBox_setText(tguiWidget* thisWidget, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiEditBox_getText(const tguiWidget* thisWidget);

CTGUI_API void tguiEditBox_setDefaultText(tguiWidget* thisWidget, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiEditBox_getDefaultText(const tguiWidget* thisWidget);

CTGUI_API void tguiEditBox_setPasswordCharacter(tguiWidget* thisWidget, tguiChar32 value);
CTGUI_API tguiChar32 tguiEditBox_getPasswordCharacter(const tguiWidget* thisWidget);

CTGUI_API void tguiEditBox_setMaximumCharacters(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiEditBox_getMaximumCharacters(const tguiWidget* thisWidget);

CTGUI_API void tguiEditBox_setAlignment(tguiWidget* thisWidget, tguiHorizontalAlignment value);
CTGUI_API tguiHorizontalAlignment tguiEditBox_getAlignment(const tguiWidget* thisWidget);

CTGUI_API void tguiEditBox_setTextWidthLimited(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiEditBox_isTextWidthLimited(const tguiWidget* thisWidget);

CTGUI_API void tguiEditBox_setReadOnly(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiEditBox_isReadOnly(const tguiWidget* thisWidget);

CTGUI_API void tguiEditBox_setCaretPosition(tguiWidget* thisWidget, size_t value);
CTGUI_API size_t tguiEditBox_getCaretPosition(const tguiWidget* thisWidget);

CTGUI_API void tguiEditBox_setSuffix(tguiWidget* thisWidget, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiEditBox_getSuffix(const tguiWidget* thisWidget);

CTGUI_API tguiBool tguiEditBox_setInputValidator(tguiWidget* thisWidget, tguiUtf32 regex);

CTGUI_API tguiUtf32 tguiEditBox_getInputValidator(const tguiWidget* thisWidget);

CTGUI_API void tguiEditBox_selectText(tguiWidget* thisWidget, size_t start, size_t length);

CTGUI_API tguiUtf32 tguiEditBox_getSelectedText(const tguiWidget* thisWidget);

#endif // CTGUI_EDITBOX_H
