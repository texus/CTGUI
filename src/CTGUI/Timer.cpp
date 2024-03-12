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


#include <CTGUI/Timer.h>
#include <CTGUI/TimerStruct.hpp>
#include <CTGUI/InternalGlobal.hpp>

void tguiTimer_scheduleCallback(void(*callback)(void), tguiDuration interval)
{
    tgui::Timer::scheduleCallback(callback, std::chrono::nanoseconds(interval.nanoseconds));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiTimer* tguiTimer_create(void(*callback)(tguiTimer*), tguiDuration interval, tguiBool enable)
{
    return new tguiTimer(callback, std::chrono::nanoseconds(interval.nanoseconds), enable != 0);
}

void tguiTimer_free(tguiTimer* timer)
{
    delete timer;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTimer_setInterval(tguiTimer* timer, tguiDuration interval)
{
    timer->This->setInterval(std::chrono::nanoseconds(interval.nanoseconds));
}

tguiDuration tguiTimer_getInterval(const tguiTimer* timer)
{
    tguiDuration duration;
    duration.nanoseconds = static_cast<tguiInt64>(std::chrono::nanoseconds(timer->This->getInterval()).count());
    return duration;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTimer_setEnabled(tguiTimer* timer, tguiBool enabled)
{
    timer->This->setEnabled(enabled != 0);
}

tguiBool tguiTimer_isEnabled(const tguiTimer* timer)
{
    return timer->This->isEnabled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTimer_setCallback(tguiTimer* timer, void(*callback)(tguiTimer*))
{
    timer->This->setCallback([=]{ callback(timer); });
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTimer_restart(tguiTimer* timer)
{
    timer->This->restart();
}
