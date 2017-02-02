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


#include <CTGUI/Widgets/MenuBar.h>
#include <CTGUI/WidgetStruct.h>

#include <TGUI/Widgets/MenuBar.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::MenuBar>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiMenuBar_create(void)
{
    return new tguiWidget(tgui::MenuBar::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBar_addMenu(tguiWidget* widget, const sfUint32* text)
{
    DOWNCAST(widget->This)->addMenu(text);
}

sfBool tguiMenuBar_addMenuItem(tguiWidget* widget, const sfUint32* menu, const sfUint32* text)
{
    return DOWNCAST(widget->This)->addMenuItem(menu, text);
}

sfBool tguiMenuBar_addMenuItemToLastMenu(tguiWidget* widget, const sfUint32* text)
{
    return DOWNCAST(widget->This)->addMenuItem(text);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiMenuBar_removeMenu(tguiWidget* widget, const sfUint32* menu)
{
    return DOWNCAST(widget->This)->removeMenu(menu);
}

sfBool tguiMenuBar_removeMenuItem(tguiWidget* widget, const sfUint32* menu, const sfUint32* menuItem)
{
    return DOWNCAST(widget->This)->removeMenuItem(menu, menuItem);
}

void tguiMenuBar_removeAllMenus(tguiWidget* widget)
{
    DOWNCAST(widget->This)->removeAllMenus();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBar_setTextSize(tguiWidget* widget, unsigned int size)
{
    DOWNCAST(widget->This)->setTextSize(size);
}

unsigned int tguiMenuBar_getTextSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBar_setMinimumSubMenuWidth(tguiWidget* widget, float minimumWidth)
{
    DOWNCAST(widget->This)->setMinimumSubMenuWidth(minimumWidth);
}

float tguiMenuBar_getMinimumSubMenuWidth(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMinimumSubMenuWidth();
}
