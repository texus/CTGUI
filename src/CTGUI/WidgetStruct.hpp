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

#ifndef CTGUI_WIDGET_STRUCT_H
#define CTGUI_WIDGET_STRUCT_H

#include <CTGUI/InternalGlobal.hpp>
#include <TGUI/Widget.hpp>
#include <cassert>

// tguiWidget_free must be called on every tguiWidget* returned by CTGUI
struct tguiWidget
{
    std::shared_ptr<tgui::Widget> This;
    std::weak_ptr<tgui::Widget> weakWidgetPtr; // To determine if the widget still exists after referenceCount == 0 and This == nullptr
    std::size_t referenceCount = 1;

    tguiWidget(const std::shared_ptr<tgui::Widget>& widget) :
        This{widget},
        weakWidgetPtr{widget}
    {
        assert(widget != nullptr);
    }

    bool isAlive() const
    {
        if (referenceCount > 0)
            return true;

        return !weakWidgetPtr.expired();
    }
};

namespace ctgui
{
    extern std::unordered_map<tgui::Widget*, std::unique_ptr<tguiWidget>> globalWidgetsMap;

    tguiWidget* addWidgetRef(tgui::Widget::Ptr cppWidget);
    void removeWidgetRef(const tgui::Widget::Ptr& cppWidget);

    void cleanupWidgets();

    template <typename SignalType, typename FuncType>
    unsigned int connectSignal(tguiWidget* widget, const char* signalName, FuncType&& function)
    {
        try
        {
            auto* signal = dynamic_cast<SignalType*>(&widget->This->getSignal(signalName));
            if (signal)
                return signal->connect(function);
            else
            {
                ctgui::tguiErrorMessage = "Signal '" + std::string(signalName) + "' has a wrong type for connect";
                return 0;
            }
        }
        catch (const tgui::Exception& e)
        {
            ctgui::tguiErrorMessage = e.what();
            return 0;
        }
    }
}

#endif // CTGUI_WIDGET_STRUCT_H
