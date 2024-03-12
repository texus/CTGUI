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


#ifndef CTGUI_RANGE_SLIDER_H
#define CTGUI_RANGE_SLIDER_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiRangeSlider_create(void);

CTGUI_API void tguiRangeSlider_setMinimum(tguiWidget* widget, float minimum);
CTGUI_API float tguiRangeSlider_getMinimum(const tguiWidget* widget);

CTGUI_API void tguiRangeSlider_setMaximum(tguiWidget* widget, float maximum);
CTGUI_API float tguiRangeSlider_getMaximum(const tguiWidget* widget);

CTGUI_API void tguiRangeSlider_setSelectionStart(tguiWidget* widget, float value);
CTGUI_API float tguiRangeSlider_getSelectionStart(const tguiWidget* widget);

CTGUI_API void tguiRangeSlider_setSelectionEnd(tguiWidget* widget, float value);
CTGUI_API float tguiRangeSlider_getSelectionEnd(const tguiWidget* widget);

CTGUI_API void tguiRangeSlider_setStep(tguiWidget* widget, float step);
CTGUI_API float tguiRangeSlider_getStep(const tguiWidget* widget);

#endif // CTGUI_RANGE_SLIDER_H

