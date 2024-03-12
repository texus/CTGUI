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

#ifndef CTGUI_INTERNAL_GLOBAL_H
#define CTGUI_INTERNAL_GLOBAL_H

#include <CTGUI/Global.h>
#include <TGUI/String.hpp>
#include <TGUI/Color.hpp>

namespace ctgui
{
    extern std::string tguiErrorMessage; // Holds the error to be returned by tgui_getLastError()

    // The bindingWidgetCleanupCallback is called once per frame for each widget that was destroyed since the last check.
    // Note that the pointer passed as parameter should NOT be freed or accessed in any way by the callback function!
    // A binding may store a global map of resources with the widget pointer as key. This callback allows the binding
    // to release all resources that were still attached to the freed widget.
    extern void (*bindingWidgetCleanupCallback)(tguiWidget*);

    // The fromCppStr copies the string to a static variable and returns a pointer to it.
    // This function should only be used when immediately returning the c-string to the user.
    const char* fromCppStr(const char* str) = delete;
    tguiUtf32 fromCppStr(tguiUtf32 str) = delete;
    tguiUtf32 fromCppStr(const tgui::String& str);

    tgui::String toCppStr(tguiUtf32 str);

    tguiColor* fromCppColor(tgui::Color color);
    tgui::Color toCppColor(const tguiColor* color);
}

#endif // CTGUI_INTERNAL_GLOBAL_H
