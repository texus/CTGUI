// This file is generated, it should not be edited directly.

#ifndef CTGUI_EDITBOXSLIDER_H
#define CTGUI_EDITBOXSLIDER_H

#include <CTGUI/Widget.h>
#include <CTGUI/Alignment.h>

CTGUI_API tguiWidget* tguiEditBoxSlider_create(void);

CTGUI_API tguiRenderer* tguiEditBoxSlider_getEditBoxRenderer(const tguiWidget* thisWidget);
CTGUI_API tguiRenderer* tguiEditBoxSlider_getEditBoxSharedRenderer(const tguiWidget* thisWidget);

CTGUI_API tguiRenderer* tguiEditBoxSlider_getSliderRenderer(const tguiWidget* thisWidget);
CTGUI_API tguiRenderer* tguiEditBoxSlider_getSliderSharedRenderer(const tguiWidget* thisWidget);

CTGUI_API tguiBool tguiEditBoxSlider_setValue(tguiWidget* thisWidget, float value);

CTGUI_API float tguiEditBoxSlider_getValue(const tguiWidget* thisWidget);

CTGUI_API void tguiEditBoxSlider_setMinimum(tguiWidget* thisWidget, float value);
CTGUI_API float tguiEditBoxSlider_getMinimum(const tguiWidget* thisWidget);

CTGUI_API void tguiEditBoxSlider_setMaximum(tguiWidget* thisWidget, float value);
CTGUI_API float tguiEditBoxSlider_getMaximum(const tguiWidget* thisWidget);

CTGUI_API void tguiEditBoxSlider_setStep(tguiWidget* thisWidget, float value);
CTGUI_API float tguiEditBoxSlider_getStep(const tguiWidget* thisWidget);

CTGUI_API void tguiEditBoxSlider_setDecimalPlaces(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiEditBoxSlider_getDecimalPlaces(const tguiWidget* thisWidget);

CTGUI_API void tguiEditBoxSlider_setTextAlignment(tguiWidget* thisWidget, tguiHorizontalAlignment value);
CTGUI_API tguiHorizontalAlignment tguiEditBoxSlider_getTextAlignment(const tguiWidget* thisWidget);

#endif // CTGUI_EDITBOXSLIDER_H
