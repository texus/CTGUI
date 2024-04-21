/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2024 Bruno Van de Velde (vdv_b@tgui.eu)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef CTGUI_EDIT_BOX_SLIDER_H
#define CTGUI_EDIT_BOX_SLIDER_H

#include <CTGUI/Widget.h>
#include <CTGUI/Alignment.h>

CTGUI_API tguiWidget* tguiEditBoxSlider_create(void);

CTGUI_API tguiRenderer* tguiEditBoxSlider_getEditBoxRenderer(const tguiWidget* widget);
CTGUI_API tguiRenderer* tguiEditBoxSlider_getEditBoxSharedRenderer(const tguiWidget* widget);
CTGUI_API tguiRenderer* tguiEditBoxSlider_getSliderRenderer(const tguiWidget* widget);
CTGUI_API tguiRenderer* tguiEditBoxSlider_getSliderSharedRenderer(const tguiWidget* widget);

CTGUI_API void tguiEditBoxSlider_setMinimum(tguiWidget* widget, float minimum);
CTGUI_API float tguiEditBoxSlider_getMinimum(const tguiWidget* widget);

CTGUI_API void tguiEditBoxSlider_setMaximum(tguiWidget* widget, float maximum);
CTGUI_API float tguiEditBoxSlider_getMaximum(const tguiWidget* widget);

CTGUI_API void ttguiEditBoxSlider_setValue(tguiWidget* widget, float value);
CTGUI_API float tguiEditBoxSlider_getValue(const tguiWidget* widget);

CTGUI_API void tguiEditBoxSlider_setStep(tguiWidget* widget, float step);
CTGUI_API float tguiEditBoxSlider_getStep(const tguiWidget* widget);

CTGUI_API void tguiEditBoxSlider_setDecimalPlaces(tguiWidget* widget, unsigned int decimalPlaces);
CTGUI_API unsigned int tguiEditBoxSlider_getDecimalPlaces(const tguiWidget* widget);

CTGUI_API void tguiEditBoxSlider_setTextAlignment(tguiWidget* widget, tguiHorizontalAlignment alignment);
CTGUI_API tguiHorizontalAlignment tguiEditBoxSlider_getTextAlignment(const tguiWidget* widget);

#endif // CTGUI_EDIT_BOX_SLIDER_H

