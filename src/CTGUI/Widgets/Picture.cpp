/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2018 Bruno Van de Velde (vdv_b@tgui.eu)
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


#include <CTGUI/Widgets/Picture.h>
#include <CTGUI/WidgetStruct.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

#include <TGUI/Widgets/Picture.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::Picture>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiPicture_create(void)
{
    return new tguiWidget(tgui::Picture::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPicture_ignoreMouseEvents(tguiWidget* widget, sfBool ignore)
{
    DOWNCAST(widget->This)->ignoreMouseEvents(ignore != 0);
}

sfBool tguiPicture_isIgnoringMouseEvents(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isIgnoringMouseEvents();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPicture_connect_onDoubleClick(tguiWidget* widget, void (*function)(sfVector2f), const char** error)
{
    try
    {
        DOWNCAST(widget->This)->onDoubleClick.connect([function](const sf::Vector2f& size){ function({size.x, size.y}); });
        *error = nullptr;
    }
    catch (const tgui::Exception& e)
    {
        tguiErrorMessage = e.what();
        *error = tguiErrorMessage.c_str();
    }
}
