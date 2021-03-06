/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2020 Bruno Van de Velde (vdv_b@tgui.eu)
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


#ifndef CTGUI_MENU_BAR_H
#define CTGUI_MENU_BAR_H

#include <CTGUI/Config.h>
#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiMenuBar_create(void);

CTGUI_API void tguiMenuBar_addMenu(tguiWidget* widget, const sfUint32* text);
CTGUI_API sfBool tguiMenuBar_addMenuItem(tguiWidget* widget, const sfUint32* menu, const sfUint32* text);
CTGUI_API sfBool tguiMenuBar_addMenuItemToLastMenu(tguiWidget* widget, const sfUint32* text);
CTGUI_API sfBool tguiMenuBar_addMenuItemHierarchy(tguiWidget* widget, const sfUint32** hierarcy, unsigned int hierarchyLength, sfBool createParents);

CTGUI_API sfBool tguiMenuBar_removeMenu(tguiWidget* widget, const sfUint32* menu);
CTGUI_API sfBool tguiMenuBar_removeMenuItem(tguiWidget* widget, const sfUint32* menu, const sfUint32* menuItem);
CTGUI_API sfBool tguiMenuBar_removeMenuItemHierarchy(tguiWidget* widget, const sfUint32** hierarcy, unsigned int hierarchyLength, sfBool removeParentsWhenEmpty);
CTGUI_API void tguiMenuBar_removeAllMenus(tguiWidget* widget);

CTGUI_API sfBool tguiMenuBar_setMenuEnabled(tguiWidget* widget, const sfUint32* text, sfBool enabled);
CTGUI_API sfBool tguiMenuBar_getMenuEnabled(tguiWidget* widget, const sfUint32* text);
CTGUI_API sfBool tguiMenuBar_setMenuItemEnabled(tguiWidget* widget, const sfUint32* menu, const sfUint32* text, sfBool enabled);
CTGUI_API sfBool tguiMenuBar_getMenuItemEnabled(tguiWidget* widget, const sfUint32* menu, const sfUint32* text);
CTGUI_API sfBool tguiMenuBar_setMenuItemEnabledHierarchy(tguiWidget* widget, const sfUint32** hierarcy, unsigned int hierarchyLength, sfBool enabled);
CTGUI_API sfBool tguiMenuBar_getMenuItemEnabledHierarchy(tguiWidget* widget, const sfUint32** hierarcy, unsigned int hierarchyLength);

CTGUI_API void tguiMenuBar_setMinimumSubMenuWidth(tguiWidget* widget, float minimumWidth);
CTGUI_API float tguiMenuBar_getMinimumSubMenuWidth(const tguiWidget* widget);

CTGUI_API void tguiMenuBar_setInvertedMenuDirection(tguiWidget* widget, sfBool invertDirection);
CTGUI_API sfBool tguiMenuBar_getInvertedMenuDirection(const tguiWidget* widget);

CTGUI_API void tguiMenuBar_closeMenu(tguiWidget* widget);

#endif // CTGUI_MENU_BAR_H

