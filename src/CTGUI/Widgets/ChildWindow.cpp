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


#include <CTGUI/Widgets/ChildWindow.h>
#include <CTGUI/WidgetStruct.hpp>
#include <CTGUI/LayoutStruct.hpp>

#include <TGUI/Widgets/ChildWindow.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ChildWindow>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiChildWindow_create(void)
{
    return ctgui::addWidgetRef(tgui::ChildWindow::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setClientSize(tguiWidget* widget, tguiVector2f size)
{
    DOWNCAST(widget->This)->setClientSize({size.x, size.y});
}

void tguiChildWindow_setClientSizeFromLayout(tguiWidget* widget, tguiLayout2d* layout)
{
    DOWNCAST(widget->This)->setClientSize(layout->This);
}

tguiVector2f tguiChildWindow_getClientSize(const tguiWidget* widget)
{
    const tgui::Vector2f size = DOWNCAST(widget->This)->getClientSize();
    return {size.x, size.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setMaximumSize(tguiWidget* widget, tguiVector2f maxSize)
{
    DOWNCAST(widget->This)->setMaximumSize({maxSize.x, maxSize.y});
}

tguiVector2f tguiChildWindow_getMaximumSize(const tguiWidget* widget)
{
    tgui::Vector2f size = DOWNCAST(widget->This)->getMaximumSize();
    return {size.x, size.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setMinimumSize(tguiWidget* widget, tguiVector2f minSize)
{
    DOWNCAST(widget->This)->setMinimumSize({minSize.x, minSize.y});
}

tguiVector2f tguiChildWindow_getMinimumSize(const tguiWidget* widget)
{
    tgui::Vector2f size = DOWNCAST(widget->This)->getMinimumSize();
    return {size.x, size.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setTitle(tguiWidget* widget, tguiUtf32 text)
{
    DOWNCAST(widget->This)->setTitle(ctgui::toCppStr(text));
}

tguiUtf32 tguiChildWindow_getTitle(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getTitle());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setTitleTextSize(tguiWidget* widget, unsigned int textSize)
{
    DOWNCAST(widget->This)->setTitleTextSize(textSize);
}

unsigned int tguiChildWindow_getTitleTextSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getTitleTextSize();
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

void tguiChildWindow_setResizable(tguiWidget* widget, tguiBool resizable)
{
    DOWNCAST(widget->This)->setResizable(resizable != 0);
}

tguiBool tguiChildWindow_isResizable(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isResizable();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setKeepInParent(tguiWidget* widget, tguiBool keepInParent)
{
    DOWNCAST(widget->This)->setKeepInParent(keepInParent != 0);
}

tguiBool tguiChildWindow_isKeptInParent(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isKeptInParent();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setPositionLocked(tguiWidget* widget, tguiBool positionLocked)
{
    DOWNCAST(widget->This)->setPositionLocked(positionLocked != 0);
}

tguiBool tguiChildWindow_isPositionLocked(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isPositionLocked();
}
