// This file is generated, it should not be edited directly.

#ifndef CTGUI_SPINBUTTON_H
#define CTGUI_SPINBUTTON_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiSpinButton_create(void);

CTGUI_API void tguiSpinButton_setMinimum(tguiWidget* thisWidget, float value);
CTGUI_API float tguiSpinButton_getMinimum(const tguiWidget* thisWidget);

CTGUI_API void tguiSpinButton_setMaximum(tguiWidget* thisWidget, float value);
CTGUI_API float tguiSpinButton_getMaximum(const tguiWidget* thisWidget);

CTGUI_API void tguiSpinButton_setValue(tguiWidget* thisWidget, float value);
CTGUI_API float tguiSpinButton_getValue(const tguiWidget* thisWidget);

CTGUI_API void tguiSpinButton_setStep(tguiWidget* thisWidget, float value);
CTGUI_API float tguiSpinButton_getStep(const tguiWidget* thisWidget);

CTGUI_API void tguiSpinButton_setVerticalScroll(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiSpinButton_getVerticalScroll(const tguiWidget* thisWidget);

#endif // CTGUI_SPINBUTTON_H
