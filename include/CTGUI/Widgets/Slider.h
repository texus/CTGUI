// This file is generated, it should not be edited directly.

#ifndef CTGUI_SLIDER_H
#define CTGUI_SLIDER_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiSlider_create(void);

CTGUI_API void tguiSlider_setMinimum(tguiWidget* thisWidget, float value);
CTGUI_API float tguiSlider_getMinimum(const tguiWidget* thisWidget);

CTGUI_API void tguiSlider_setMaximum(tguiWidget* thisWidget, float value);
CTGUI_API float tguiSlider_getMaximum(const tguiWidget* thisWidget);

CTGUI_API void tguiSlider_setValue(tguiWidget* thisWidget, float value);
CTGUI_API float tguiSlider_getValue(const tguiWidget* thisWidget);

CTGUI_API void tguiSlider_setStep(tguiWidget* thisWidget, float value);
CTGUI_API float tguiSlider_getStep(const tguiWidget* thisWidget);

CTGUI_API void tguiSlider_setVerticalScroll(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiSlider_getVerticalScroll(const tguiWidget* thisWidget);

CTGUI_API void tguiSlider_setInvertedDirection(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiSlider_getInvertedDirection(const tguiWidget* thisWidget);

CTGUI_API void tguiSlider_setChangeValueOnScroll(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiSlider_getChangeValueOnScroll(const tguiWidget* thisWidget);

#endif // CTGUI_SLIDER_H
