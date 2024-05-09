// This file is generated, it should not be edited directly.

#ifndef CTGUI_MENUBAR_H
#define CTGUI_MENUBAR_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiMenuBar_create(void);

CTGUI_API void tguiMenuBar_addMenu(tguiWidget* thisWidget, tguiUtf32 text);

CTGUI_API tguiBool tguiMenuBar_addMenuItem(tguiWidget* thisWidget, tguiUtf32 menu, tguiUtf32 text);

CTGUI_API tguiBool tguiMenuBar_addMenuItemToLastMenu(tguiWidget* thisWidget, tguiUtf32 text);

CTGUI_API tguiBool tguiMenuBar_addMenuItemHierarchy(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiBool createParents);

CTGUI_API tguiBool tguiMenuBar_changeMenuItem(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiUtf32 text);

CTGUI_API tguiBool tguiMenuBar_removeMenu(tguiWidget* thisWidget, tguiUtf32 menu);

CTGUI_API tguiBool tguiMenuBar_removeMenuItem(tguiWidget* thisWidget, tguiUtf32 menu, tguiUtf32 menuItem);

CTGUI_API tguiBool tguiMenuBar_removeMenuItemHierarchy(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiBool removeParentsWhenEmpty);

CTGUI_API void tguiMenuBar_removeAllMenus(tguiWidget* thisWidget);

CTGUI_API tguiBool tguiMenuBar_setMenuEnabled(tguiWidget* thisWidget, tguiUtf32 text, tguiBool enabled);

CTGUI_API tguiBool tguiMenuBar_getMenuEnabled(const tguiWidget* thisWidget, tguiUtf32 text);

CTGUI_API tguiBool tguiMenuBar_setMenuItemEnabled(tguiWidget* thisWidget, tguiUtf32 menu, tguiUtf32 text, tguiBool enabled);

CTGUI_API tguiBool tguiMenuBar_getMenuItemEnabled(const tguiWidget* thisWidget, tguiUtf32 menu, tguiUtf32 text);

CTGUI_API tguiBool tguiMenuBar_setMenuItemEnabledHierarchy(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiBool enabled);

CTGUI_API tguiBool tguiMenuBar_getMenuItemEnabledHierarchy(const tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength);

CTGUI_API void tguiMenuBar_closeMenu(tguiWidget* thisWidget);

CTGUI_API void tguiMenuBar_setMinimumSubMenuWidth(tguiWidget* thisWidget, float value);
CTGUI_API float tguiMenuBar_getMinimumSubMenuWidth(const tguiWidget* thisWidget);

CTGUI_API void tguiMenuBar_setInvertedMenuDirection(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiMenuBar_getInvertedMenuDirection(const tguiWidget* thisWidget);

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

CTGUI_API tguiMenuBarMenuList* tguiMenuBar_getMenus(tguiWidget* widget);  // You must call tguiMenuBarMenuList_free on the returned value
#endif // CTGUI_MENUBAR_H
