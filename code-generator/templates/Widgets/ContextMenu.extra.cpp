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
