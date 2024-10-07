// This file is generated, it should not be edited directly.

#ifndef CTGUI_LISTBOX_H
#define CTGUI_LISTBOX_H

#include <CTGUI/Widget.h>

#include <CTGUI/Alignment.h>

CTGUI_API tguiWidget* tguiListBox_create(void);

CTGUI_API size_t tguiListBox_addItem(tguiWidget* thisWidget, tguiUtf32 item, tguiUtf32 id);

CTGUI_API tguiUtf32 tguiListBox_getItemById(const tguiWidget* thisWidget, tguiUtf32 id);

CTGUI_API tguiUtf32 tguiListBox_getItemByIndex(const tguiWidget* thisWidget, size_t index);

CTGUI_API int tguiListBox_getIndexById(const tguiWidget* thisWidget, tguiUtf32 id);

CTGUI_API tguiUtf32 tguiListBox_getIdByIndex(const tguiWidget* thisWidget, size_t index);

CTGUI_API tguiBool tguiListBox_setSelectedItem(tguiWidget* thisWidget, tguiUtf32 item);

CTGUI_API tguiBool tguiListBox_setSelectedItemById(tguiWidget* thisWidget, tguiUtf32 id);

CTGUI_API tguiBool tguiListBox_setSelectedItemByIndex(tguiWidget* thisWidget, size_t index);

CTGUI_API void tguiListBox_deselectItem(tguiWidget* thisWidget);

CTGUI_API tguiBool tguiListBox_removeItem(tguiWidget* thisWidget, tguiUtf32 item);

CTGUI_API tguiBool tguiListBox_removeItemById(tguiWidget* thisWidget, tguiUtf32 id);

CTGUI_API tguiBool tguiListBox_removeItemByIndex(tguiWidget* thisWidget, size_t index);

CTGUI_API void tguiListBox_removeAllItems(tguiWidget* thisWidget);

CTGUI_API tguiUtf32 tguiListBox_getSelectedItem(const tguiWidget* thisWidget);

CTGUI_API tguiUtf32 tguiListBox_getSelectedItemId(const tguiWidget* thisWidget);

CTGUI_API int tguiListBox_getSelectedItemIndex(const tguiWidget* thisWidget);

CTGUI_API int tguiListBox_getHoveredItemIndex(const tguiWidget* thisWidget);

CTGUI_API tguiBool tguiListBox_changeItem(tguiWidget* thisWidget, tguiUtf32 originalValue, tguiUtf32 newValue);

CTGUI_API tguiBool tguiListBox_changeItemById(tguiWidget* thisWidget, tguiUtf32 id, tguiUtf32 newValue);

CTGUI_API tguiBool tguiListBox_changeItemByIndex(tguiWidget* thisWidget, size_t index, tguiUtf32 newValue);

CTGUI_API size_t tguiListBox_getItemCount(const tguiWidget* thisWidget);

CTGUI_API const tguiUtf32* tguiListBox_getItems(const tguiWidget* thisWidget, size_t* returnCount);

CTGUI_API const tguiUtf32* tguiListBox_getItemIds(const tguiWidget* thisWidget, size_t* returnCount);

CTGUI_API void tguiListBox_setItemData(tguiWidget* thisWidget, size_t index, tguiUtf32 data);

CTGUI_API tguiUtf32 tguiListBox_getItemData(const tguiWidget* thisWidget, size_t index);

CTGUI_API void tguiListBox_setItemHeight(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiListBox_getItemHeight(const tguiWidget* thisWidget);

CTGUI_API void tguiListBox_setMaximumItems(tguiWidget* thisWidget, size_t value);
CTGUI_API size_t tguiListBox_getMaximumItems(const tguiWidget* thisWidget);

CTGUI_API void tguiListBox_setAutoScroll(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiListBox_getAutoScroll(const tguiWidget* thisWidget);

CTGUI_API void tguiListBox_setTextAlignment(tguiWidget* thisWidget, tguiHorizontalAlignment value);
CTGUI_API tguiHorizontalAlignment tguiListBox_getTextAlignment(const tguiWidget* thisWidget);

CTGUI_API tguiBool tguiListBox_contains(const tguiWidget* thisWidget, tguiUtf32 item);

CTGUI_API tguiBool tguiListBox_containsId(const tguiWidget* thisWidget, tguiUtf32 id);

#endif // CTGUI_LISTBOX_H
