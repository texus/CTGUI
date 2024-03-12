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


#ifndef CTGUI_COMBO_BOX_H
#define CTGUI_COMBO_BOX_H

#include <CTGUI/Widget.h>

typedef enum
{
	tguiExpandDirectionDown,
	tguiExpandDirectionUp,
	tguiExpandDirectionAutomatic
} tguiExpandDirection;

CTGUI_API tguiWidget* tguiComboBox_create(void);

CTGUI_API void tguiComboBox_setItemsToDisplay(tguiWidget* widget, size_t itemsToDisplay);
CTGUI_API size_t tguiComboBox_getItemsToDisplay(const tguiWidget* widget);

CTGUI_API tguiBool tguiComboBox_addItem(tguiWidget* widget, tguiUtf32 item, tguiUtf32 id);
CTGUI_API tguiUtf32 tguiComboBox_getItemById(const tguiWidget* widget, tguiUtf32 id);

CTGUI_API tguiBool tguiComboBox_setSelectedItem(tguiWidget* widget, tguiUtf32 item);
CTGUI_API tguiBool tguiComboBox_setSelectedItemById(tguiWidget* widget, tguiUtf32 id);
CTGUI_API tguiBool tguiComboBox_setSelectedItemByIndex(tguiWidget* widget, size_t index);
CTGUI_API void tguiComboBox_deselectItem(tguiWidget* widget);

CTGUI_API tguiBool tguiComboBox_removeItem(tguiWidget* widget, tguiUtf32 item);
CTGUI_API tguiBool tguiComboBox_removeItemById(tguiWidget* widget, tguiUtf32 id);
CTGUI_API tguiBool tguiComboBox_removeItemByIndex(tguiWidget* widget, size_t index);
CTGUI_API void tguiComboBox_removeAllItems(tguiWidget* widget);

CTGUI_API tguiUtf32 tguiComboBox_getSelectedItem(const tguiWidget* widget);
CTGUI_API tguiUtf32 tguiComboBox_getSelectedItemId(const tguiWidget* widget);
CTGUI_API int tguiComboBox_getSelectedItemIndex(const tguiWidget* widget);

CTGUI_API tguiBool tguiComboBox_changeItem(tguiWidget* widget, tguiUtf32 originalValue, tguiUtf32 newValue);
CTGUI_API tguiBool tguiComboBox_changeItemById(tguiWidget* widget, tguiUtf32 id, tguiUtf32 newValue);
CTGUI_API tguiBool tguiComboBox_changeItemByIndex(tguiWidget* widget, size_t index, tguiUtf32 newValue);

CTGUI_API size_t tguiComboBox_getItemCount(const tguiWidget* widget);

CTGUI_API const tguiUtf32* tguiComboBox_getItems(const tguiWidget* widget, size_t* count); // count is set by the function to indicate length of returned array
CTGUI_API const tguiUtf32* tguiComboBox_getItemIds(const tguiWidget* widget, size_t* count); // count is set by the function to indicate length of returned array

CTGUI_API void tguiComboBox_setMaximumItems(tguiWidget* widget, unsigned int maxItems);
CTGUI_API size_t tguiComboBox_getMaximumItems(const tguiWidget* widget);

CTGUI_API void tguiComboBox_setDefaultText(tguiWidget* widget, tguiUtf32 text);
CTGUI_API tguiUtf32 tguiComboBox_getDefaultText(const tguiWidget* widget);

CTGUI_API void tguiComboBox_setExpandDirection(tguiWidget* widget, tguiExpandDirection expandDirection);
CTGUI_API tguiExpandDirection tguiComboBox_getExpandDirection(const tguiWidget* widget);

CTGUI_API tguiBool tguiComboBox_contains(tguiWidget* widget, tguiUtf32 item);
CTGUI_API tguiBool tguiComboBox_containsId(tguiWidget* widget, tguiUtf32 id);

CTGUI_API void tguiComboBox_setChangeItemOnScroll(tguiWidget* widget, tguiBool changeOnScroll);
CTGUI_API tguiBool tguiComboBox_getChangeItemOnScroll(const tguiWidget* widget);

#endif // CTGUI_COMBO_BOX_H

