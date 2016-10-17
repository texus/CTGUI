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


#include <CTGUI/Widgets/ChildWindow.h>
#include <CTGUI/WidgetStruct.h>

#include <TGUI/Widgets/ChildWindow.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ChildWindow>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiChildWindow_create(void)
{
    return new tguiWidget(tgui::ChildWindow::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setMaximumSize(tguiWidget* widget, sfVector2f maxSize)
{
    DOWNCAST(widget->This)->setMaximumSize({maxSize.x, maxSize.y});
}

sfVector2f tguiChildWindow_getMaximumSize(const tguiWidget* widget)
{
    sf::Vector2f size = DOWNCAST(widget->This)->getMaximumSize();
    return {size.x, size.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setMinimumSize(tguiWidget* widget, sfVector2f minSize)
{
    DOWNCAST(widget->This)->setMinimumSize({minSize.x, minSize.y});
}

sfVector2f tguiChildWindow_getMinimumSize(const tguiWidget* widget)
{
    sf::Vector2f size = DOWNCAST(widget->This)->getMinimumSize();
    return {size.x, size.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setTitle(tguiWidget* widget, const sfUint32* text)
{
    DOWNCAST(widget->This)->setTitle(text);
}

const sfUint32* tguiChildWindow_getTitle(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getTitle().getData();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setTitleAlignment(tguiWidget* widget, tguiHorizontalAlignment alignment)
{
    DOWNCAST(widget->This)->setTitleAlignment(static_cast<tgui::ChildWindow::TitleAlignment>(alignment));
}

tguiHorizontalAlignment tguiChildWindow_getTitleAlignment(const tguiWidget* widget)
{
    return static_cast<tguiHorizontalAlignment>(DOWNCAST(widget->This)->getTitleAlignment());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setTitleButtons(tguiWidget* widget, unsigned int buttons)
{
    DOWNCAST(widget->This)->setTitleButtons(buttons);
}

unsigned int tguiChildWindow_getTitleButtons(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getTitleButtons();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setResizable(tguiWidget* widget, sfBool resizable)
{
    DOWNCAST(widget->This)->setResizable(resizable != 0);
}

sfBool tguiChildWindow_isResizable(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isResizable();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_keepInParent(tguiWidget* widget, sfBool keepInParent)
{
    DOWNCAST(widget->This)->keepInParent(keepInParent != 0);
}

sfBool tguiChildWindow_isKeptInParent(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isKeptInParent();
}
