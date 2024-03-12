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


#ifndef CTGUI_COLOR_H
#define CTGUI_COLOR_H

#include <CTGUI/Config.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct
{
    tguiUint8 r;
    tguiUint8 g;
    tguiUint8 b;
    tguiUint8 a;
} tguiColor;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiColor tguiColorBlack;       ///< Black predefined color
CTGUI_API tguiColor tguiColorWhite;       ///< White predefined color
CTGUI_API tguiColor tguiColorRed;         ///< Red predefined color
CTGUI_API tguiColor tguiColorGreen;       ///< Green predefined color
CTGUI_API tguiColor tguiColorBlue;        ///< Blue predefined color
CTGUI_API tguiColor tguiColorYellow;      ///< Yellow predefined color
CTGUI_API tguiColor tguiColorMagenta;     ///< Magenta predefined color
CTGUI_API tguiColor tguiColorCyan;        ///< Cyan predefined color
CTGUI_API tguiColor tguiColorTransparent; ///< Transparent (black) predefined color

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiColor tguiColor_fromRGB(tguiUint8 red, tguiUint8 green, tguiUint8 blue);
CTGUI_API tguiColor tguiColor_fromRGBA(tguiUint8 red, tguiUint8 green, tguiUint8 blue, tguiUint8 alpha);
CTGUI_API tguiColor tguiColor_fromString(const char* string);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // CTGUI_COLOR_H

