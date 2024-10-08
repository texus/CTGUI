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

CTGUI_API void tguiMenuBarMenuList_destroy(tguiMenuBarMenuList* menuList);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiMenuBarMenuList* tguiMenuBar_getMenus(tguiWidget* widget);  // You must call tguiMenuBarMenuList_destroy on the returned value
