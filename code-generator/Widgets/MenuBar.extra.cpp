static void freeMenuItem(tguiMenuBarElement& menu)
{
    if (menu.menuItemsCount == 0)
        return;

    for (size_t i = 0; i < menu.menuItemsCount; ++i)
        freeMenuItem(menu.menuItems[i]);

    delete[] menu.menuItems;
}

void tguiMenuBarMenuList_free(tguiMenuBarMenuList* menuList)
{
    if (menuList->menusCount > 0)
    {
        for (size_t i = 0; i < menuList->menusCount; ++i)
            freeMenuItem(menuList->menus[i]);

        delete[] menuList->menus;
    }

    delete menuList;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static void convertMenuItem(const tgui::MenuBar::GetMenusElement& cppMenu, tguiMenuBarElement& cMenu)
{
    cMenu.text = reinterpret_cast<tguiUtf32>(cppMenu.text.c_str());
    cMenu.enabled = cppMenu.enabled;
    cMenu.menuItemsCount = cppMenu.menuItems.size();
    if (cppMenu.menuItems.empty())
        cMenu.menuItems = nullptr;
    else
    {
        cMenu.menuItems = new tguiMenuBarElement[cMenu.menuItemsCount];
        for (size_t i = 0; i < cMenu.menuItemsCount; ++i)
            convertMenuItem(cppMenu.menuItems[i], cMenu.menuItems[i]);
    }
}

tguiMenuBarMenuList* tguiMenuBar_getMenus(tguiWidget* widget)
{
    // A copy of the strings still needs to exist after this function finished
    static std::vector<tgui::MenuBar::GetMenusElement> cppMenus;
    cppMenus = DOWNCAST(widget->This)->getMenus();

    tguiMenuBarMenuList* menuList = new tguiMenuBarMenuList;
    menuList->menusCount = cppMenus.size();
    if (cppMenus.empty())
        menuList->menus = nullptr;
    else
    {
        menuList->menus = new tguiMenuBarElement[menuList->menusCount];
        for (size_t i = 0; i < menuList->menusCount; ++i)
            convertMenuItem(cppMenus[i], menuList->menus[i]);
    }

    return menuList;
}
