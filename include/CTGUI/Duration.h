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


#ifndef CTGUI_DURATION_H
#define CTGUI_DURATION_H

#include <CTGUI/Config.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct
{
    tguiInt64 nanoseconds;
} tguiDuration;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiDuration tguiDuration_Zero;

CTGUI_API tguiDuration tguiDuration_fromSeconds(float amount);
CTGUI_API tguiDuration tguiDuration_fromMilliseconds(tguiInt32 amount);
CTGUI_API tguiDuration tguiDuration_fromMicroseconds(tguiInt64 amount);
CTGUI_API tguiDuration tguiDuration_fromNanoseconds(tguiInt64 amount);

CTGUI_API float tguiDuration_asSeconds(tguiDuration duration);
CTGUI_API tguiInt32 tguiDuration_asMilliseconds(tguiDuration duration);
CTGUI_API tguiInt64 tguiDuration_asMicroseconds(tguiDuration duration);
CTGUI_API tguiInt64 tguiDuration_asNanoseconds(tguiDuration duration);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // CTGUI_DURATION_H

