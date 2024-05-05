// This file is generated, it should not be edited directly.

#ifndef CTGUI_COMBOBOX_H
#define CTGUI_COMBOBOX_H

#include <CTGUI/Widget.h>

typedef enum
{
    tguiComboBoxExpandDirectionDown,
    tguiComboBoxExpandDirectionUp,
    tguiComboBoxExpandDirectionAutomatic,
} tguiComboBoxExpandDirection;

CTGUI_API tguiWidget* tguiComboBox_create(void);

CTGUI_API void tguiComboBox_setItemsToDisplay(tguiWidget* thisWidget, size_t value);
CTGUI_API size_t tguiComboBox_getItemsToDisplay(const tguiWidget* thisWidget);

CTGUI_API size_t tguiComboBox_addItem(tguiWidget* thisWidget, tguiUtf32 item, tguiUtf32 id);

CTGUI_API tguiUtf32 tguiComboBox_getItemById(const tguiWidget* thisWidget, tguiUtf32 id);

CTGUI_API const tguiUtf32* tguiComboBox_getItems(tguiWidget* thisWidget, size_t* returnCount);

CTGUI_API const tguiUtf32* tguiComboBox_getItemIds(tguiWidget* thisWidget, size_t* returnCount);

CTGUI_API tguiBool tguiComboBox_setSelectedItem(tguiWidget* thisWidget, tguiUtf32 item);

CTGUI_API tguiBool tguiComboBox_setSelectedItemById(tguiWidget* thisWidget, tguiUtf32 item);

CTGUI_API tguiBool tguiComboBox_setSelectedItemByIndex(tguiWidget* thisWidget, size_t index);

CTGUI_API void tguiComboBox_deselectItem(tguiWidget* thisWidget);

CTGUI_API tguiBool tguiComboBox_removeItem(tguiWidget* thisWidget, tguiUtf32 item);

CTGUI_API tguiBool tguiComboBox_removeItemById(tguiWidget* thisWidget, tguiUtf32 id);

CTGUI_API tguiBool tguiComboBox_removeItemByIndex(tguiWidget* thisWidget, size_t index);

CTGUI_API void tguiComboBox_removeAllItems(tguiWidget* thisWidget);

CTGUI_API tguiUtf32 tguiComboBox_getSelectedItem(const tguiWidget* thisWidget);

CTGUI_API tguiUtf32 tguiComboBox_getSelectedItemId(const tguiWidget* thisWidget);

CTGUI_API int tguiComboBox_getSelectedItemIndex(const tguiWidget* thisWidget);

CTGUI_API tguiBool tguiComboBox_changeItem(tguiWidget* thisWidget, tguiUtf32 originalValue, tguiUtf32 newValue);

CTGUI_API tguiBool tguiComboBox_changeItemById(tguiWidget* thisWidget, tguiUtf32 id, tguiUtf32 newValue);

CTGUI_API tguiBool tguiComboBox_changeItemByIndex(tguiWidget* thisWidget, size_t index, tguiUtf32 newValue);

CTGUI_API size_t tguiComboBox_getItemCount(const tguiWidget* thisWidget);

CTGUI_API void tguiComboBox_setMaximumItems(tguiWidget* thisWidget, size_t value);
CTGUI_API size_t tguiComboBox_getMaximumItems(const tguiWidget* thisWidget);

CTGUI_API void tguiComboBox_setDefaultText(tguiWidget* thisWidget, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiComboBox_getDefaultText(const tguiWidget* thisWidget);

CTGUI_API void tguiComboBox_setExpandDirection(tguiWidget* thisWidget, tguiComboBoxExpandDirection value);
CTGUI_API tguiComboBoxExpandDirection tguiComboBox_getExpandDirection(const tguiWidget* thisWidget);

CTGUI_API void tguiComboBox_setChangeItemOnScroll(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiComboBox_getChangeItemOnScroll(const tguiWidget* thisWidget);

CTGUI_API tguiBool tguiComboBox_contains(const tguiWidget* thisWidget, tguiUtf32 item);

CTGUI_API tguiBool tguiComboBox_containsId(const tguiWidget* thisWidget, tguiUtf32 id);

#endif // CTGUI_COMBOBOX_H
