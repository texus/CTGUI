// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/MenuBar.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/MenuBar.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::MenuBar>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiMenuBar_create(void)
{
    return ctgui::addWidgetRef(tgui::MenuBar::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBar_addMenu(tguiWidget* thisWidget, tguiUtf32 text)
{
    DOWNCAST(thisWidget->This)->addMenu(ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiMenuBar_addMenuItem(tguiWidget* thisWidget, tguiUtf32 menu, tguiUtf32 text)
{
    return DOWNCAST(thisWidget->This)->addMenuItem(ctgui::toCppStr(menu), ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiMenuBar_addMenuItemToLastMenu(tguiWidget* thisWidget, tguiUtf32 text)
{
    return DOWNCAST(thisWidget->This)->addMenuItem(ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiMenuBar_addMenuItemHierarchy(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiBool createParents)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (size_t i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(thisWidget->This)->addMenuItem(std::move(convertedHierarchy), createParents != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiMenuBar_changeMenuItem(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiUtf32 text)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (size_t i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(thisWidget->This)->changeMenuItem(std::move(convertedHierarchy), ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiMenuBar_removeMenu(tguiWidget* thisWidget, tguiUtf32 menu)
{
    return DOWNCAST(thisWidget->This)->removeMenu(ctgui::toCppStr(menu));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiMenuBar_removeMenuItem(tguiWidget* thisWidget, tguiUtf32 menu, tguiUtf32 menuItem)
{
    return DOWNCAST(thisWidget->This)->removeMenuItem(ctgui::toCppStr(menu), ctgui::toCppStr(menuItem));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiMenuBar_removeMenuItemHierarchy(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiBool removeParentsWhenEmpty)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (size_t i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(thisWidget->This)->removeMenuItem(std::move(convertedHierarchy), removeParentsWhenEmpty != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBar_removeAllMenus(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->removeAllMenus();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiMenuBar_setMenuEnabled(tguiWidget* thisWidget, tguiUtf32 text, tguiBool enabled)
{
    return DOWNCAST(thisWidget->This)->setMenuEnabled(ctgui::toCppStr(text), enabled != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiMenuBar_getMenuEnabled(const tguiWidget* thisWidget, tguiUtf32 text)
{
    return DOWNCAST(thisWidget->This)->getMenuEnabled(ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiMenuBar_setMenuItemEnabled(tguiWidget* thisWidget, tguiUtf32 menu, tguiUtf32 text, tguiBool enabled)
{
    return DOWNCAST(thisWidget->This)->setMenuItemEnabled(ctgui::toCppStr(menu), ctgui::toCppStr(text), enabled != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiMenuBar_getMenuItemEnabled(const tguiWidget* thisWidget, tguiUtf32 menu, tguiUtf32 text)
{
    return DOWNCAST(thisWidget->This)->getMenuItemEnabled(ctgui::toCppStr(menu), ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiMenuBar_setMenuItemEnabledHierarchy(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiBool enabled)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (size_t i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(thisWidget->This)->setMenuItemEnabled(std::move(convertedHierarchy), enabled != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiMenuBar_getMenuItemEnabledHierarchy(const tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (size_t i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(thisWidget->This)->getMenuItemEnabled(std::move(convertedHierarchy));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBar_closeMenu(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->closeMenu();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBar_setMinimumSubMenuWidth(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setMinimumSubMenuWidth(value);
}

float tguiMenuBar_getMinimumSubMenuWidth(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMinimumSubMenuWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBar_setInvertedMenuDirection(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setInvertedMenuDirection(value != 0);
}

tguiBool tguiMenuBar_getInvertedMenuDirection(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getInvertedMenuDirection();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static void freeMenuItem(tguiMenuBarElement& menu)
{
    if (menu.menuItemsCount == 0)
        return;

    for (size_t i = 0; i < menu.menuItemsCount; ++i)
        freeMenuItem(menu.menuItems[i]);

    delete[] menu.menuItems;
}

void tguiMenuBarMenuList_destroy(tguiMenuBarMenuList* menuList)
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

static void convertMenuItem(const tgui::MenuWidgetBase::GetMenusElement& cppMenu, tguiMenuBarElement& cMenu)
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
    static std::vector<tgui::MenuWidgetBase::GetMenusElement> cppMenus;
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
