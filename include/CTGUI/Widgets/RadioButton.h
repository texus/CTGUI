// This file is generated, it should not be edited directly.

#ifndef CTGUI_RADIOBUTTON_H
#define CTGUI_RADIOBUTTON_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiRadioButton_create(void);

CTGUI_API void tguiRadioButton_setChecked(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiRadioButton_isChecked(const tguiWidget* thisWidget);

CTGUI_API void tguiRadioButton_setText(tguiWidget* thisWidget, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiRadioButton_getText(const tguiWidget* thisWidget);

CTGUI_API void tguiRadioButton_setTextClickable(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiRadioButton_isTextClickable(const tguiWidget* thisWidget);

CTGUI_API void tguiRadioButton_setMaxWidth(tguiWidget* thisWidget, float value);
CTGUI_API float tguiRadioButton_getMaxWidth(const tguiWidget* thisWidget);

#endif // CTGUI_RADIOBUTTON_H
