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


#include <CTGUI/ToolTip.h>
#include <TGUI/ToolTip.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiToolTip_setTimeToDisplay(sfTime time)
{
    tgui::ToolTip::setTimeToDisplay(sf::microseconds(time.microseconds));
}

sfTime tguiToolTip_getTimeToDisplay()
{
    return sfMicroseconds(tgui::ToolTip::getTimeToDisplay().asMicroseconds());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiToolTip_setDistanceToMouse(sfVector2f distance)
{
    tgui::ToolTip::setDistanceToMouse({distance.x, distance.y});
}

sfVector2f tguiToolTip_getDistanceToMouse()
{
    sf::Vector2f distance = tgui::ToolTip::getDistanceToMouse();
    return {distance.x, distance.y};
}
