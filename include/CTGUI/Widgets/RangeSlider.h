// This file is generated, it should not be edited directly.

#ifndef CTGUI_RANGESLIDER_H
#define CTGUI_RANGESLIDER_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiRangeSlider_create(void);

CTGUI_API void tguiRangeSlider_setMinimum(tguiWidget* thisWidget, float value);
CTGUI_API float tguiRangeSlider_getMinimum(const tguiWidget* thisWidget);

CTGUI_API void tguiRangeSlider_setMaximum(tguiWidget* thisWidget, float value);
CTGUI_API float tguiRangeSlider_getMaximum(const tguiWidget* thisWidget);

CTGUI_API void tguiRangeSlider_setSelectionStart(tguiWidget* thisWidget, float value);
CTGUI_API float tguiRangeSlider_getSelectionStart(const tguiWidget* thisWidget);

CTGUI_API void tguiRangeSlider_setSelectionEnd(tguiWidget* thisWidget, float value);
CTGUI_API float tguiRangeSlider_getSelectionEnd(const tguiWidget* thisWidget);

CTGUI_API void tguiRangeSlider_setStep(tguiWidget* thisWidget, float value);
CTGUI_API float tguiRangeSlider_getStep(const tguiWidget* thisWidget);

#endif // CTGUI_RANGESLIDER_H
