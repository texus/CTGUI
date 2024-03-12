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


#include <CTGUI/Color.h>
#include <TGUI/Color.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiColor tguiColorBlack       = tguiColor_fromRGB(  0,   0,   0);
tguiColor tguiColorWhite       = tguiColor_fromRGB(255, 255, 255);
tguiColor tguiColorRed         = tguiColor_fromRGB(255,   0,   0);
tguiColor tguiColorGreen       = tguiColor_fromRGB(  0, 255,   0);
tguiColor tguiColorBlue        = tguiColor_fromRGB(  0,   0, 255);
tguiColor tguiColorYellow      = tguiColor_fromRGB(255, 255,   0);
tguiColor tguiColorMagenta     = tguiColor_fromRGB(255,   0, 255);
tguiColor tguiColorCyan        = tguiColor_fromRGB(  0, 255, 255);
tguiColor tguiColorTransparent = tguiColor_fromRGBA( 0,   0,   0, 0);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiColor tguiColor_fromRGB(tguiUint8 red, tguiUint8 green, tguiUint8 blue)
{
    return tguiColor_fromRGBA(red, green, blue, 255);
}

tguiColor tguiColor_fromRGBA(tguiUint8 red, tguiUint8 green, tguiUint8 blue, tguiUint8 alpha)
{
    tguiColor color;
    color.r = red;
    color.g = green;
    color.b = blue;
    color.a = alpha;
    return color;
}

tguiColor tguiColor_fromString(const char* string)
{
    const tgui::Color cppColor(string);
    return tguiColor_fromRGBA(cppColor.getRed(), cppColor.getGreen(), cppColor.getBlue(), cppColor.getAlpha());
}
