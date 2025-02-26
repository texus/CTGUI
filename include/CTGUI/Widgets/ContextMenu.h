// This file is generated, it should not be edited directly.

#ifndef CTGUI_CONTEXTMENU_H
#define CTGUI_CONTEXTMENU_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiContextMenu_create(void);

CTGUI_API tguiBool tguiContextMenu_isMenuOpen(const tguiWidget* thisWidget);

CTGUI_API void tguiContextMenu_openMenu(tguiWidget* thisWidget);

CTGUI_API void tguiContextMenu_openMenuAtPos(tguiWidget* thisWidget, tguiVector2f position);

CTGUI_API void tguiContextMenu_openMenuAtMouseCursor(tguiWidget* thisWidget);

CTGUI_API void tguiContextMenu_closeMenu(tguiWidget* thisWidget);

CTGUI_API void tguiContextMenu_addMenuItem(tguiWidget* thisWidget, tguiUtf32 text);

CTGUI_API tguiBool tguiContextMenu_addMenuItemHierarchy(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiBool createParents);

CTGUI_API tguiBool tguiContextMenu_changeMenuItem(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiUtf32 text);

CTGUI_API void tguiContextMenu_removeAllMenuItems(tguiWidget* thisWidget);

CTGUI_API tguiBool tguiContextMenu_removeMenuItem(tguiWidget* thisWidget, tguiUtf32 menuItem);

CTGUI_API tguiBool tguiContextMenu_removeMenuItemHierarchy(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiBool removeParentsWhenEmpty);

CTGUI_API tguiBool tguiContextMenu_removeSubMenuItems(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength);

CTGUI_API tguiBool tguiContextMenu_setMenuItemEnabled(tguiWidget* thisWidget, tguiUtf32 menuItem, tguiBool enabled);

CTGUI_API tguiBool tguiContextMenu_getMenuItemEnabled(const tguiWidget* thisWidget, tguiUtf32 menuItem);

CTGUI_API tguiBool tguiContextMenu_setMenuItemEnabledHierarchy(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiBool enabled);

CTGUI_API tguiBool tguiContextMenu_getMenuItemEnabledHierarchy(const tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength);

CTGUI_API void tguiContextMenu_setItemHeight(tguiWidget* thisWidget, float value);
CTGUI_API float tguiContextMenu_getItemHeight(const tguiWidget* thisWidget);

CTGUI_API void tguiContextMenu_setMinimumMenuWidth(tguiWidget* thisWidget, float value);
CTGUI_API float tguiContextMenu_getMinimumMenuWidth(const tguiWidget* thisWidget);

typedef struct tguiContextMenuElement tguiContextMenuElement; // Needed because the struct contains a pointer to itself

struct tguiContextMenuElement
{
    tguiUtf32 text;
    tguiBool  enabled;
    tguiContextMenuElement* menuItems;
    size_t menuItemsCount;
};

typedef struct
{
    tguiContextMenuElement* menuItems;
    size_t menuItemsCount;
} tguiContextMenuItemList;

CTGUI_API void tguiContextMenuItemList_destroy(tguiContextMenuItemList* menuItemList);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiContextMenuItemList* tguiContextMenu_getMenuItems(tguiWidget* widget);  // You must call tguiContextMenuItemList_destroy on the returned value

#endif // CTGUI_CONTEXTMENU_H
