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


#ifndef CTGUI_TIMER_H
#define CTGUI_TIMER_H

#include <CTGUI/Global.h>

CTGUI_API void tguiTimer_scheduleCallback(void(*callback)(void), tguiDuration interval);

CTGUI_API tguiTimer* tguiTimer_create(void(*callback)(tguiTimer*), tguiDuration interval, tguiBool enable);
CTGUI_API void tguiTimer_free(tguiTimer* timer);

CTGUI_API void tguiTimer_setInterval(tguiTimer* timer, tguiDuration interval);
CTGUI_API tguiDuration tguiTimer_getInterval(const tguiTimer* timer);

CTGUI_API void tguiTimer_setEnabled(tguiTimer* timer, tguiBool enabled);
CTGUI_API tguiBool tguiTimer_isEnabled(const tguiTimer* timer);

CTGUI_API void tguiTimer_setCallback(tguiTimer* timer, void(*callback)(tguiTimer*));

CTGUI_API void tguiTimer_restart(tguiTimer* timer);

#endif // CTGUI_TIMER_H

