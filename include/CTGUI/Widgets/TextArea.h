// This file is generated, it should not be edited directly.

#ifndef CTGUI_TEXTAREA_H
#define CTGUI_TEXTAREA_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiTextArea_create(void);

CTGUI_API void tguiTextArea_setText(tguiWidget* thisWidget, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiTextArea_getText(const tguiWidget* thisWidget);

CTGUI_API void tguiTextArea_addText(tguiWidget* thisWidget, tguiUtf32 text);

CTGUI_API void tguiTextArea_setDefaultText(tguiWidget* thisWidget, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiTextArea_getDefaultText(const tguiWidget* thisWidget);

CTGUI_API void tguiTextArea_setSelectedText(tguiWidget* thisWidget, size_t selectionStartIndex, size_t selectionEndIndex);

CTGUI_API tguiUtf32 tguiTextArea_getSelectedText(const tguiWidget* thisWidget);

CTGUI_API size_t tguiTextArea_getSelectionStart(const tguiWidget* thisWidget);

CTGUI_API size_t tguiTextArea_getSelectionEnd(const tguiWidget* thisWidget);

CTGUI_API void tguiTextArea_setMaximumCharacters(tguiWidget* thisWidget, size_t value);
CTGUI_API size_t tguiTextArea_getMaximumCharacters(const tguiWidget* thisWidget);

CTGUI_API void tguiTextArea_setTabString(tguiWidget* thisWidget, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiTextArea_getTabString(const tguiWidget* thisWidget);

CTGUI_API void tguiTextArea_setCaretPosition(tguiWidget* thisWidget, size_t value);
CTGUI_API size_t tguiTextArea_getCaretPosition(const tguiWidget* thisWidget);

CTGUI_API size_t tguiTextArea_getCaretLine(const tguiWidget* thisWidget);

CTGUI_API size_t tguiTextArea_getCaretColumn(const tguiWidget* thisWidget);

CTGUI_API void tguiTextArea_setReadOnly(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiTextArea_isReadOnly(const tguiWidget* thisWidget);

CTGUI_API void tguiTextArea_enableMonospacedFontOptimization(tguiWidget* thisWidget, tguiBool enable);

CTGUI_API size_t tguiTextArea_getLinesCount(const tguiWidget* thisWidget);

#endif // CTGUI_TEXTAREA_H
