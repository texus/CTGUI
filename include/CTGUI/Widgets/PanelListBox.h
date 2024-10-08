// This file is generated, it should not be edited directly.

#ifndef CTGUI_PANELLISTBOX_H
#define CTGUI_PANELLISTBOX_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiPanelListBox_create(void);

CTGUI_API void tguiPanelListBox_deselectItem(tguiWidget* thisWidget);

CTGUI_API void tguiPanelListBox_removeAllItems(tguiWidget* thisWidget);

CTGUI_API tguiBool tguiPanelListBox_setSelectedItemById(tguiWidget* thisWidget, tguiUtf32 id);

CTGUI_API tguiBool tguiPanelListBox_setSelectedItemByIndex(tguiWidget* thisWidget, size_t index);

CTGUI_API tguiBool tguiPanelListBox_removeItemById(tguiWidget* thisWidget, tguiUtf32 id);

CTGUI_API tguiBool tguiPanelListBox_removeItemByIndex(tguiWidget* thisWidget, size_t index);

CTGUI_API tguiUtf32 tguiPanelListBox_getSelectedItemId(const tguiWidget* thisWidget);

CTGUI_API int tguiPanelListBox_getSelectedItemIndex(const tguiWidget* thisWidget);

CTGUI_API int tguiPanelListBox_getHoveredItemIndex(const tguiWidget* thisWidget);

CTGUI_API size_t tguiPanelListBox_getItemCount(const tguiWidget* thisWidget);

CTGUI_API const tguiUtf32* tguiPanelListBox_getItemIds(const tguiWidget* thisWidget, size_t* returnCount);

CTGUI_API void tguiPanelListBox_setMaximumItems(tguiWidget* thisWidget, size_t value);
CTGUI_API size_t tguiPanelListBox_getMaximumItems(const tguiWidget* thisWidget);

CTGUI_API tguiBool tguiPanelListBox_containsId(const tguiWidget* thisWidget, tguiUtf32 id);

CTGUI_API const tguiLayout* tguiPanelListBox_getItemsWidth(const tguiWidget* thisWidget);

CTGUI_API void tguiPanelListBox_setItemsHeight(tguiWidget* thisWidget, const tguiLayout* value);
CTGUI_API const tguiLayout* tguiPanelListBox_getItemsHeight(const tguiWidget* thisWidget);

CTGUI_API tguiWidget* tguiPanelListBox_addItem(tguiWidget* widget, tguiUtf32 id);
CTGUI_API tguiWidget* tguiPanelListBox_addItemAtIndex(tguiWidget* widget, tguiUtf32 id, size_t index);

CTGUI_API tguiWidget* tguiPanelListBox_getPanelTemplate(tguiWidget* widget);

CTGUI_API tguiBool tguiPanelListBox_setSelectedItem(tguiWidget* widget, const tguiWidget* panelPtr);
CTGUI_API tguiWidget* tguiPanelListBox_getSelectedItem(const tguiWidget* widget);

CTGUI_API tguiBool tguiPanelListBox_removeItem(tguiWidget* widget, const tguiWidget* panelPtr);

CTGUI_API tguiWidget* tguiPanelListBox_getItemById(const tguiWidget* widget, tguiUtf32 id);
CTGUI_API tguiWidget* tguiPanelListBox_getItemByIndex(const tguiWidget* widget, size_t index);
CTGUI_API int tguiPanelListBox_getIndexById(const tguiWidget* widget, tguiUtf32 id);
CTGUI_API int tguiPanelListBox_getIndexByItem(const tguiWidget* widget, const tguiWidget* panelPtr);
CTGUI_API tguiUtf32 tguiPanelListBox_getIdByIndex(const tguiWidget* widget, size_t index);

CTGUI_API tguiWidget** tguiPanelListBox_getItems(const tguiWidget* widget, size_t* count); // tguiWidget_destroy must be called on each element in the returned array, count is set by the function to indicate the array length

CTGUI_API tguiBool tguiPanelListBox_contains(const tguiWidget* widget, const tguiWidget* panelPtr);

#endif // CTGUI_PANELLISTBOX_H
