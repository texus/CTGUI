/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2019 Bruno Van de Velde (vdv_b@tgui.eu)
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


#ifndef CTGUI_SLIDER_H
#define CTGUI_SLIDER_H

#include <CTGUI/Config.h>
#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiSlider_create(void);

CTGUI_API void tguiSlider_setMinimum(tguiWidget* widget, float minimum);
CTGUI_API float tguiSlider_getMinimum(const tguiWidget* widget);

CTGUI_API void tguiSlider_setMaximum(tguiWidget* widget, float maximum);
CTGUI_API float tguiSlider_getMaximum(const tguiWidget* widget);

CTGUI_API void tguiSlider_setValue(tguiWidget* widget, float value);
CTGUI_API float tguiSlider_getValue(const tguiWidget* widget);

CTGUI_API void tguiSlider_setStep(tguiWidget* widget, float step);
CTGUI_API float tguiSlider_getStep(const tguiWidget* widget);

CTGUI_API void tguiSlider_setVerticalScroll(tguiWidget* widget, sfBool vertical);
CTGUI_API sfBool tguiSlider_getVerticalScroll(const tguiWidget* widget);

CTGUI_API void tguiSlider_setInvertedDirection(tguiWidget* widget, sfBool invertedDirection);
CTGUI_API sfBool tguiSlider_getInvertedDirection(const tguiWidget* widget);

CTGUI_API void tguiSlider_setChangeValueOnScroll(tguiWidget* widget, sfBool changeValueOnScroll);
CTGUI_API sfBool tguiSlider_getChangeValueOnScroll(const tguiWidget* widget);

#endif // CTGUI_SLIDER_H

