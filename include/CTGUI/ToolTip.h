/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2018 Bruno Van de Velde (vdv_b@tgui.eu)
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


#ifndef CTGUI_TOOL_TIP_H
#define CTGUI_TOOL_TIP_H

#include <CTGUI/Config.h>
#include <SFML/System/Vector2.h>
#include <SFML/System/Time.h>

CTGUI_API void tguiToolTip_setTimeToDisplay(sfTime time);
CTGUI_API sfTime tguiToolTip_getTimeToDisplay();

CTGUI_API void tguiToolTip_setDistanceToMouse(sfVector2f distance);
CTGUI_API sfVector2f tguiToolTip_getDistanceToMouse();

#endif // CTGUI_TOOL_TIP_H

