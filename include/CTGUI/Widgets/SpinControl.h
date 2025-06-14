// This file is generated, it should not be edited directly.

#ifndef CTGUI_SPINCONTROL_H
#define CTGUI_SPINCONTROL_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiSpinControl_create(void);

CTGUI_API tguiRenderer* tguiSpinControl_getSpinButtonRenderer(const tguiWidget* thisWidget);
CTGUI_API tguiRenderer* tguiSpinControl_getSpinButtonSharedRenderer(const tguiWidget* thisWidget);

CTGUI_API tguiRenderer* tguiSpinControl_getSpinTextRenderer(const tguiWidget* thisWidget);
CTGUI_API tguiRenderer* tguiSpinControl_getSpinTextSharedRenderer(const tguiWidget* thisWidget);

CTGUI_API void tguiSpinControl_setMinimum(tguiWidget* thisWidget, float value);
CTGUI_API float tguiSpinControl_getMinimum(const tguiWidget* thisWidget);

CTGUI_API void tguiSpinControl_setMaximum(tguiWidget* thisWidget, float value);
CTGUI_API float tguiSpinControl_getMaximum(const tguiWidget* thisWidget);

CTGUI_API void tguiSpinControl_setDecimalPlaces(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiSpinControl_getDecimalPlaces(const tguiWidget* thisWidget);

CTGUI_API void tguiSpinControl_setSpinButtonWidth(tguiWidget* thisWidget, float value);
CTGUI_API float tguiSpinControl_getSpinButtonWidth(const tguiWidget* thisWidget);

CTGUI_API tguiBool tguiSpinControl_setValue(tguiWidget* thisWidget, float value);
CTGUI_API float tguiSpinControl_getValue(const tguiWidget* thisWidget);

CTGUI_API void tguiSpinControl_setStep(tguiWidget* thisWidget, float value);
CTGUI_API float tguiSpinControl_getStep(const tguiWidget* thisWidget);

#endif // CTGUI_SPINCONTROL_H
