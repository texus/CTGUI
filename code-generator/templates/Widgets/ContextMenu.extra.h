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
