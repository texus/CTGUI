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


#ifndef CTGUI_SPIN_CONTROL_H
#define CTGUI_SPIN_CONTROL_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiSpinControl_create(void);

CTGUI_API tguiRenderer* tguiSpinControl_getSpinButtonRenderer(const tguiWidget* widget);
CTGUI_API tguiRenderer* tguiSpinControl_getSpinButtonSharedRenderer(const tguiWidget* widget);
CTGUI_API tguiRenderer* tguiSpinControl_getSpinTextRenderer(const tguiWidget* widget);
CTGUI_API tguiRenderer* tguiSpinControl_getSpinTextSharedRenderer(const tguiWidget* widget);

CTGUI_API void tguiSpinControl_setMinimum(tguiWidget* widget, float minimum);
CTGUI_API float tguiSpinControl_getMinimum(const tguiWidget* widget);

CTGUI_API void tguiSpinControl_setMaximum(tguiWidget* widget, float maximum);
CTGUI_API float tguiSpinControl_getMaximum(const tguiWidget* widget);

CTGUI_API void tguiSpinControl_setValue(tguiWidget* widget, float value);
CTGUI_API float tguiSpinControl_getValue(const tguiWidget* widget);

CTGUI_API void tguiSpinControl_setStep(tguiWidget* widget, float step);
CTGUI_API float tguiSpinControl_getStep(const tguiWidget* widget);

CTGUI_API void tguiSpinControl_setDecimalPlaces(tguiWidget* widget, unsigned int decimalPlaces);
CTGUI_API unsigned int tguiSpinControl_getDecimalPlaces(const tguiWidget* widget);

CTGUI_API void tguiSpinControl_setUseWideArrows(tguiWidget* widget, tguiBool useWideArrows);
CTGUI_API tguiBool tguiSpinControl_getUseWideArrows(const tguiWidget* widget);

#endif // CTGUI_SPIN_CONTROL_H

