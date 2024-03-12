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


#ifndef CTGUI_BUTTON_BASE_H
#define CTGUI_BUTTON_BASE_H

#include <CTGUI/Widget.h>

CTGUI_API void tguiButtonBase_setText(tguiWidget* widget, tguiUtf32 text);
CTGUI_API tguiUtf32 tguiButtonBase_getText(const tguiWidget* widget);

CTGUI_API void tguiButtonBase_setTextPositionAbs(tguiWidget* widget, tguiVector2f position, tguiVector2f origin); // Position is absolute, origin is value between 0 and 1
CTGUI_API void tguiButtonBase_setTextPositionRel(tguiWidget* widget, tguiVector2f position, tguiVector2f origin); // position and origin are values between 0 and 1

#endif // CTGUI_BUTTON_BASE_H
