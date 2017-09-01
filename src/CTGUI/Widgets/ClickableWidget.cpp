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


#include <CTGUI/Widgets/ClickableWidget.h>
#include <CTGUI/WidgetStruct.h>

#include <TGUI/Widgets/ClickableWidget.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ClickableWidget>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiClickableWidget_create(void)
{
    return new tguiWidget(tgui::ClickableWidget::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiClickableWidget_connect_onMousePress(tguiWidget* widget, void (*function)(sfVector2f), const char** error)
{
    try
    {
        DOWNCAST(widget->This)->onMousePress.connect([function](const sf::Vector2f& size){ function({size.x, size.y}); });
        *error = nullptr;
    }
    catch (const tgui::Exception& e)
    {
        tguiErrorMessage = e.what();
        *error = tguiErrorMessage.c_str();
    }
}

void tguiClickableWidget_connect_onMouseRelease(tguiWidget* widget, void (*function)(sfVector2f), const char** error)
{
    try
    {
        DOWNCAST(widget->This)->onMouseRelease.connect([function](const sf::Vector2f& size){ function({size.x, size.y}); });
        *error = nullptr;
    }
    catch (const tgui::Exception& e)
    {
        tguiErrorMessage = e.what();
        *error = tguiErrorMessage.c_str();
    }
}

void tguiClickableWidget_connect_onClick(tguiWidget* widget, void (*function)(sfVector2f), const char** error)
{
    try
    {
        DOWNCAST(widget->This)->onClick.connect([function](const sf::Vector2f& size){ function({size.x, size.y}); });
        *error = nullptr;
    }
    catch (const tgui::Exception& e)
    {
        tguiErrorMessage = e.what();
        *error = tguiErrorMessage.c_str();
    }
}
