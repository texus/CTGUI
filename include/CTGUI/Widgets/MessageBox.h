// This file is generated, it should not be edited directly.

#ifndef CTGUI_MESSAGEBOX_H
#define CTGUI_MESSAGEBOX_H

#include <CTGUI/Widget.h>
#include <CTGUI/Alignment.h>

CTGUI_API tguiWidget* tguiMessageBox_create(void);

CTGUI_API void tguiMessageBox_setText(tguiWidget* thisWidget, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiMessageBox_getText(const tguiWidget* thisWidget);

CTGUI_API void tguiMessageBox_addButton(tguiWidget* thisWidget, tguiUtf32 text);

CTGUI_API void tguiMessageBox_changeButtons(tguiWidget* thisWidget, const tguiUtf32* buttonCaptions, size_t buttonCaptionsLength);

CTGUI_API const tguiUtf32* tguiMessageBox_getButtons(tguiWidget* thisWidget, size_t* returnCount);

CTGUI_API void tguiMessageBox_setLabelAlignment(tguiWidget* thisWidget, tguiHorizontalAlignment value);
CTGUI_API tguiHorizontalAlignment tguiMessageBox_getLabelAlignment(const tguiWidget* thisWidget);

CTGUI_API void tguiMessageBox_setButtonAlignment(tguiWidget* thisWidget, tguiHorizontalAlignment value);
CTGUI_API tguiHorizontalAlignment tguiMessageBox_getButtonAlignment(const tguiWidget* thisWidget);

#endif // CTGUI_MESSAGEBOX_H
