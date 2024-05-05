// This file is generated, it should not be edited directly.

#ifndef CTGUI_KNOB_H
#define CTGUI_KNOB_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiKnob_create(void);

CTGUI_API void tguiKnob_setStartRotation(tguiWidget* thisWidget, float value);
CTGUI_API float tguiKnob_getStartRotation(const tguiWidget* thisWidget);

CTGUI_API void tguiKnob_setEndRotation(tguiWidget* thisWidget, float value);
CTGUI_API float tguiKnob_getEndRotation(const tguiWidget* thisWidget);

CTGUI_API void tguiKnob_setMinimum(tguiWidget* thisWidget, float value);
CTGUI_API float tguiKnob_getMinimum(const tguiWidget* thisWidget);

CTGUI_API void tguiKnob_setMaximum(tguiWidget* thisWidget, float value);
CTGUI_API float tguiKnob_getMaximum(const tguiWidget* thisWidget);

CTGUI_API void tguiKnob_setValue(tguiWidget* thisWidget, float value);
CTGUI_API float tguiKnob_getValue(const tguiWidget* thisWidget);

CTGUI_API void tguiKnob_setClockwiseTurning(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiKnob_getClockwiseTurning(const tguiWidget* thisWidget);

#endif // CTGUI_KNOB_H
