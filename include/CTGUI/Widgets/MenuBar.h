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


#ifndef CTGUI_MENU_BAR_H
#define CTGUI_MENU_BAR_H

#include <CTGUI/Widget.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct tguiMenuBarElement tguiMenuBarElement; // Needed because the struct contains a pointer to itself

struct tguiMenuBarElement
{
    tguiUtf32 text;
    tguiBool  enabled;
    tguiMenuBarElement* menuItems;
    size_t menuItemsCount;
};

typedef struct
{
    tguiMenuBarElement* menus;
    size_t menusCount;
} tguiMenuBarMenuList;

CTGUI_API void tguiMenuBarMenuList_free(tguiMenuBarMenuList* menuList);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiWidget* tguiMenuBar_create(void);

CTGUI_API void tguiMenuBar_addMenu(tguiWidget* widget, tguiUtf32 text);
CTGUI_API tguiBool tguiMenuBar_addMenuItem(tguiWidget* widget, tguiUtf32 menu, tguiUtf32 text);
CTGUI_API tguiBool tguiMenuBar_addMenuItemToLastMenu(tguiWidget* widget, tguiUtf32 text);
CTGUI_API tguiBool tguiMenuBar_addMenuItemHierarchy(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength, tguiBool createParents);

CTGUI_API tguiBool tguiMenuBar_changeMenuItem(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength, tguiUtf32 text);

CTGUI_API tguiBool tguiMenuBar_removeMenu(tguiWidget* widget, tguiUtf32 menu);
CTGUI_API tguiBool tguiMenuBar_removeMenuItem(tguiWidget* widget, tguiUtf32 menu, tguiUtf32 menuItem);
CTGUI_API tguiBool tguiMenuBar_removeMenuItemHierarchy(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength, tguiBool removeParentsWhenEmpty);
CTGUI_API void tguiMenuBar_removeAllMenus(tguiWidget* widget);

CTGUI_API tguiBool tguiMenuBar_setMenuEnabled(tguiWidget* widget, tguiUtf32 text, tguiBool enabled);
CTGUI_API tguiBool tguiMenuBar_getMenuEnabled(tguiWidget* widget, tguiUtf32 text);
CTGUI_API tguiBool tguiMenuBar_setMenuItemEnabled(tguiWidget* widget, tguiUtf32 menu, tguiUtf32 text, tguiBool enabled);
CTGUI_API tguiBool tguiMenuBar_getMenuItemEnabled(tguiWidget* widget, tguiUtf32 menu, tguiUtf32 text);
CTGUI_API tguiBool tguiMenuBar_setMenuItemEnabledHierarchy(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength, tguiBool enabled);
CTGUI_API tguiBool tguiMenuBar_getMenuItemEnabledHierarchy(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength);

CTGUI_API void tguiMenuBar_setMinimumSubMenuWidth(tguiWidget* widget, float minimumWidth);
CTGUI_API float tguiMenuBar_getMinimumSubMenuWidth(const tguiWidget* widget);

CTGUI_API void tguiMenuBar_setInvertedMenuDirection(tguiWidget* widget, tguiBool invertDirection);
CTGUI_API tguiBool tguiMenuBar_getInvertedMenuDirection(const tguiWidget* widget);

CTGUI_API tguiMenuBarMenuList* tguiMenuBar_getMenus(tguiWidget* widget);  // You must call tguiMenuBarMenuList_free on the returned value

CTGUI_API void tguiMenuBar_closeMenu(tguiWidget* widget);

#endif // CTGUI_MENU_BAR_H

