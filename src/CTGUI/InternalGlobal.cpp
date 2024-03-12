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

#include <CTGUI/InternalGlobal.hpp>

namespace ctgui
{
    std::string tguiErrorMessage; // Holds the error to be returned by tgui_getLastError()

    // The bindingWidgetCleanupCallback is called once per frame for each widget that was destroyed since the last check.
    // Note that the pointer passed as parameter should NOT be freed or accessed in any way by the callback function!
    // A binding may store a global map of resources with the widget pointer as key. This callback allows the binding
    // to release all resources that were still attached to the freed widget.
    void (*bindingWidgetCleanupCallback)(tguiWidget*) = nullptr;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    const char* fromCppStr(const std::string& str)
    {
        static std::string tmpString; // String memory still needs to exist after the function returns
        tmpString = str;
        return tmpString.c_str();
    }

    tguiUtf32 fromCppStr(const tgui::String& str)
    {
        static tgui::String tmpString; // String memory still needs to exist after the function returns
        tmpString = str;
        return reinterpret_cast<tguiUtf32>(tmpString.c_str());
    }

    tgui::String toCppStr(tguiUtf32 str)
    {
        return {str};
    }

    tguiColor* fromCppColor(tgui::Color cppColor)
    {
        static tguiColor color;

        if (!cppColor.isSet())
            return nullptr;

        color.r = cppColor.getRed();
        color.g = cppColor.getGreen();
        color.b = cppColor.getBlue();
        color.a = cppColor.getAlpha();
        return &color;
    }

    tgui::Color toCppColor(const tguiColor* color)
    {
        if (color)
            return {color->r, color->g, color->b, color->a};
        else
            return {};
    }
}
