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


#include <CTGUI/Global.h>
#include <CTGUI/InternalGlobal.hpp>
#include <TGUI/Global.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tgui_setGlobalTextSize(unsigned int textSize)
{
    tgui::setGlobalTextSize(textSize);
}

unsigned int tgui_getGlobalTextSize(void)
{
    return tgui::getGlobalTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tgui_setDoubleClickTime(tguiDuration duration)
{
    tgui::setDoubleClickTime(std::chrono::nanoseconds(duration.nanoseconds));
}

tguiDuration tgui_getDoubleClickTime(void)
{
    tguiDuration duration;
    duration.nanoseconds = static_cast<tguiInt64>(std::chrono::nanoseconds(tgui::getDoubleClickTime()).count());
    return duration;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tgui_setResourcePath(tguiUtf32 path)
{
    tgui::setResourcePath(ctgui::toCppStr(path));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tgui_setEditCursorBlinkRate(tguiDuration blinkRate)
{
    tgui::setEditCursorBlinkRate(std::chrono::nanoseconds(blinkRate.nanoseconds));
}

tguiDuration tgui_getEditCursorBlinkRate(void)
{
    tguiDuration duration;
    duration.nanoseconds = static_cast<tguiInt64>(std::chrono::nanoseconds(tgui::getEditCursorBlinkRate()).count());
    return duration;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUint8* tgui_readFileToMemory(tguiUtf32 filename, size_t* fileSize)
{
    auto buffer = tgui::readFileToMemory(ctgui::toCppStr(filename), *fileSize);
    if (!buffer)
        return nullptr;

    tguiUint8* data = new tguiUint8[*fileSize];
    std::memcpy(data, buffer.get(), *fileSize);
    return data;
}

tguiBool tgui_writeFile(tguiUtf32 filename, const char* textToWrite)
{
    return tgui::writeFile(ctgui::toCppStr(filename), textToWrite);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tgui_readFileToMemory_free(tguiUint8* data)
{
    delete[] data;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char* tgui_getLastError(void)
{
    static std::string errorBuffer;
    errorBuffer = ctgui::tguiErrorMessage;
    ctgui::tguiErrorMessage = "";
    return errorBuffer.c_str();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tgui_setBindingWidgetCleanupCallback(void (*function)(tguiWidget*))
{
    ctgui::bindingWidgetCleanupCallback = function;
}
