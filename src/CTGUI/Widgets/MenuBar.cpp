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

void tguiMenuBar_addMenu(tguiWidget* widget, tguiUtf32 text)
{
    DOWNCAST(widget->This)->addMenu(ctgui::toCppStr(text));
}

tguiBool tguiMenuBar_addMenuItem(tguiWidget* widget, tguiUtf32 menu, tguiUtf32 text)
{
    return DOWNCAST(widget->This)->addMenuItem(ctgui::toCppStr(menu), ctgui::toCppStr(text));
}

tguiBool tguiMenuBar_addMenuItemToLastMenu(tguiWidget* widget, tguiUtf32 text)
{
    return DOWNCAST(widget->This)->addMenuItem(ctgui::toCppStr(text));
}

tguiBool tguiMenuBar_addMenuItemHierarchy(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength, tguiBool createParents)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (unsigned int i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(widget->This)->addMenuItem(std::move(convertedHierarchy), createParents != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiMenuBar_changeMenuItem(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength, tguiUtf32 text)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (unsigned int i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(widget->This)->changeMenuItem(std::move(convertedHierarchy), ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiMenuBar_removeMenu(tguiWidget* widget, tguiUtf32 menu)
{
    return DOWNCAST(widget->This)->removeMenu(ctgui::toCppStr(menu));
}

tguiBool tguiMenuBar_removeMenuItem(tguiWidget* widget, tguiUtf32 menu, tguiUtf32 menuItem)
{
    return DOWNCAST(widget->This)->removeMenuItem(ctgui::toCppStr(menu), ctgui::toCppStr(menuItem));
}

tguiBool tguiMenuBar_removeMenuItemHierarchy(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength, tguiBool removeParentsWhenEmpty)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (unsigned int i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(widget->This)->addMenuItem(convertedHierarchy, removeParentsWhenEmpty != 0);
}

void tguiMenuBar_removeAllMenus(tguiWidget* widget)
{
    DOWNCAST(widget->This)->removeAllMenus();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiMenuBar_setMenuEnabled(tguiWidget* widget, tguiUtf32 menu, tguiBool enabled)
{
    return DOWNCAST(widget->This)->setMenuEnabled(ctgui::toCppStr(menu), enabled != 0);
}

tguiBool tguiMenuBar_getMenuEnabled(tguiWidget* widget, tguiUtf32 menu)
{
    return DOWNCAST(widget->This)->getMenuEnabled(ctgui::toCppStr(menu));
}

tguiBool tguiMenuBar_setMenuItemEnabled(tguiWidget* widget, tguiUtf32 menu, tguiUtf32 menuItem, tguiBool enabled)
{
    return DOWNCAST(widget->This)->setMenuItemEnabled(ctgui::toCppStr(menu), ctgui::toCppStr(menuItem), enabled != 0);
}

tguiBool tguiMenuBar_getMenuItemEnabled(tguiWidget* widget, tguiUtf32 menu, tguiUtf32 menuItem)
{
    return DOWNCAST(widget->This)->getMenuItemEnabled(ctgui::toCppStr(menu), ctgui::toCppStr(menuItem));
}

tguiBool tguiMenuBar_setMenuItemEnabledHierarchy(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength, tguiBool enabled)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (unsigned int i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(widget->This)->setMenuItemEnabled(convertedHierarchy, enabled != 0);
}

tguiBool tguiMenuBar_getMenuItemEnabledHierarchy(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (unsigned int i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(widget->This)->getMenuItemEnabled(convertedHierarchy);
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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBar_setInvertedMenuDirection(tguiWidget* widget, tguiBool invertDirection)
{
    DOWNCAST(widget->This)->setInvertedMenuDirection(invertDirection != 0);
}

tguiBool tguiMenuBar_getInvertedMenuDirection(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getInvertedMenuDirection();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static void convertMenuItem(const tgui::MenuBar::GetMenusElement& cppMenu, tguiMenuBarElement& cMenu)
{
    cMenu.text = cppMenu.text.c_str();
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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBar_closeMenu(tguiWidget* widget)
{
    DOWNCAST(widget->This)->closeMenu();
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
