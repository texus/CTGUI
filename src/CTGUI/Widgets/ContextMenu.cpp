// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/ContextMenu.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/ContextMenu.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ContextMenu>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiContextMenu_create(void)
{
    return ctgui::addWidgetRef(tgui::ContextMenu::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContextMenu_isMenuOpen(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->isMenuOpen();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiContextMenu_openMenu(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->openMenu();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiContextMenu_openMenuAtPos(tguiWidget* thisWidget, tguiVector2f position)
{
    DOWNCAST(thisWidget->This)->openMenu({position.x, position.y});
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiContextMenu_openMenuAtMouseCursor(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->openMenuAtMouseCursor();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiContextMenu_closeMenu(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->closeMenu();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiContextMenu_addMenuItem(tguiWidget* thisWidget, tguiUtf32 text)
{
    DOWNCAST(thisWidget->This)->addMenuItem(ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContextMenu_addMenuItemHierarchy(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiBool createParents)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (size_t i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(thisWidget->This)->addMenuItem(std::move(convertedHierarchy), createParents != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContextMenu_changeMenuItem(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiUtf32 text)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (size_t i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(thisWidget->This)->changeMenuItem(std::move(convertedHierarchy), ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiContextMenu_removeAllMenuItems(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->removeAllMenuItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContextMenu_removeMenuItem(tguiWidget* thisWidget, tguiUtf32 menuItem)
{
    return DOWNCAST(thisWidget->This)->removeMenuItem(ctgui::toCppStr(menuItem));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContextMenu_removeMenuItemHierarchy(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiBool removeParentsWhenEmpty)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (size_t i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(thisWidget->This)->removeMenuItem(std::move(convertedHierarchy), removeParentsWhenEmpty != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContextMenu_removeSubMenuItems(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (size_t i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(thisWidget->This)->removeSubMenuItems(std::move(convertedHierarchy));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContextMenu_setMenuItemEnabled(tguiWidget* thisWidget, tguiUtf32 menuItem, tguiBool enabled)
{
    return DOWNCAST(thisWidget->This)->setMenuItemEnabled(ctgui::toCppStr(menuItem), enabled != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContextMenu_getMenuItemEnabled(const tguiWidget* thisWidget, tguiUtf32 menuItem)
{
    return DOWNCAST(thisWidget->This)->getMenuItemEnabled(ctgui::toCppStr(menuItem));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContextMenu_setMenuItemEnabledHierarchy(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiBool enabled)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (size_t i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(thisWidget->This)->setMenuItemEnabled(std::move(convertedHierarchy), enabled != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContextMenu_getMenuItemEnabledHierarchy(const tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (size_t i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(thisWidget->This)->getMenuItemEnabled(std::move(convertedHierarchy));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiContextMenu_setItemHeight(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setItemHeight(value);
}

float tguiContextMenu_getItemHeight(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getItemHeight();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiContextMenu_setMinimumMenuWidth(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setMinimumMenuWidth(value);
}

float tguiContextMenu_getMinimumMenuWidth(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMinimumMenuWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static void freeMenuItem(tguiContextMenuElement& menu)
{
    if (menu.menuItemsCount == 0)
        return;

    for (size_t i = 0; i < menu.menuItemsCount; ++i)
        freeMenuItem(menu.menuItems[i]);

    delete[] menu.menuItems;
}

void tguiContextMenuItemList_destroy(tguiContextMenuItemList* menuItemList)
{
    if (menuItemList->menuItemsCount > 0)
    {
        for (size_t i = 0; i < menuItemList->menuItemsCount; ++i)
            freeMenuItem(menuItemList->menuItems[i]);

        delete[] menuItemList->menuItems;
    }

    delete menuItemList;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static void convertMenuItem(const tgui::MenuWidgetBase::GetMenusElement& cppMenu, tguiContextMenuElement& cMenu)
{
    cMenu.text = reinterpret_cast<tguiUtf32>(cppMenu.text.c_str());
    cMenu.enabled = cppMenu.enabled;
    cMenu.menuItemsCount = cppMenu.menuItems.size();
    if (cppMenu.menuItems.empty())
        cMenu.menuItems = nullptr;
    else
    {
        cMenu.menuItems = new tguiContextMenuElement[cMenu.menuItemsCount];
        for (size_t i = 0; i < cMenu.menuItemsCount; ++i)
            convertMenuItem(cppMenu.menuItems[i], cMenu.menuItems[i]);
    }
}

tguiContextMenuItemList* tguiContextMenu_getMenuItems(tguiWidget* widget)
{
    // A copy of the strings still needs to exist after this function finished
    static std::vector<tgui::MenuWidgetBase::GetMenusElement> cppMenuItems;
    cppMenuItems = DOWNCAST(widget->This)->getMenuItems();

    tguiContextMenuItemList* menuItemsList = new tguiContextMenuItemList;
    menuItemsList->menuItemsCount = cppMenuItems.size();
    if (cppMenuItems.empty())
        menuItemsList->menuItems = nullptr;
    else
    {
        menuItemsList->menuItems = new tguiContextMenuElement[menuItemsList->menuItemsCount];
        for (size_t i = 0; i < menuItemsList->menuItemsCount; ++i)
            convertMenuItem(cppMenuItems[i], menuItemsList->menuItems[i]);
    }

    return menuItemsList;
}
