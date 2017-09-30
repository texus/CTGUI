/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2016 Bruno Van de Velde (vdv_b@tgui.eu)
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


#ifndef CTGUI_SPIN_BUTTON_H
#define CTGUI_SPIN_BUTTON_H

#include <CTGUI/Config.h>
#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiSpinButton_create(void);

CTGUI_API void tguiSpinButton_setMinimum(tguiWidget* widget, int minimum);
CTGUI_API int tguiSpinButton_getMinimum(const tguiWidget* widget);

CTGUI_API void tguiSpinButton_setMaximum(tguiWidget* widget, int maximum);
CTGUI_API int tguiSpinButton_getMaximum(const tguiWidget* widget);

CTGUI_API void tguiSpinButton_setValue(tguiWidget* widget, int value);
CTGUI_API int tguiSpinButton_getValue(const tguiWidget* widget);

CTGUI_API void tguiSpinButton_connect_onValueChange(tguiWidget* widget, void (*function)(int), const char** error);

#endif // CTGUI_SPIN_BUTTON_H

