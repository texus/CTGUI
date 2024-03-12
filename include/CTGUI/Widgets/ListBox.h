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


#ifndef CTGUI_LIST_BOX_H
#define CTGUI_LIST_BOX_H

#include <CTGUI/Widget.h>
#include <CTGUI/Alignment.h>

CTGUI_API tguiWidget* tguiListBox_create(void);

CTGUI_API size_t tguiListBox_addItem(tguiWidget* widget, tguiUtf32 item, tguiUtf32 id);
CTGUI_API tguiUtf32 tguiListBox_getItemById(const tguiWidget* widget, tguiUtf32 id);
CTGUI_API tguiUtf32 tguiListBox_getItemByIndex(const tguiWidget* widget, size_t index);
CTGUI_API int tguiListBox_getIndexById(const tguiWidget* widget, tguiUtf32 id);
CTGUI_API tguiUtf32 tguiListBox_getIdByIndex(const tguiWidget* widget, size_t index);

CTGUI_API tguiBool tguiListBox_setSelectedItem(tguiWidget* widget, tguiUtf32 item);
CTGUI_API tguiBool tguiListBox_setSelectedItemById(tguiWidget* widget, tguiUtf32 id);
CTGUI_API tguiBool tguiListBox_setSelectedItemByIndex(tguiWidget* widget, size_t index);
CTGUI_API void tguiListBox_deselectItem(tguiWidget* widget);

CTGUI_API tguiBool tguiListBox_removeItem(tguiWidget* widget, tguiUtf32 item);
CTGUI_API tguiBool tguiListBox_removeItemById(tguiWidget* widget, tguiUtf32 id);
CTGUI_API tguiBool tguiListBox_removeItemByIndex(tguiWidget* widget, size_t index);
CTGUI_API void tguiListBox_removeAllItems(tguiWidget* widget);

CTGUI_API tguiUtf32 tguiListBox_getSelectedItem(const tguiWidget* widget);
CTGUI_API tguiUtf32 tguiListBox_getSelectedItemId(const tguiWidget* widget);
CTGUI_API int tguiListBox_getSelectedItemIndex(const tguiWidget* widget);

CTGUI_API tguiBool tguiListBox_changeItem(tguiWidget* widget, tguiUtf32 originalValue, tguiUtf32 newValue);
CTGUI_API tguiBool tguiListBox_changeItemById(tguiWidget* widget, tguiUtf32 id, tguiUtf32 newValue);
CTGUI_API tguiBool tguiListBox_changeItemByIndex(tguiWidget* widget, size_t index, tguiUtf32 newValue);

CTGUI_API size_t tguiListBox_getItemCount(const tguiWidget* widget);

CTGUI_API const tguiUtf32* tguiListBox_getItems(const tguiWidget* widget, size_t* count); // count is set by the function to indicate length of returned array
CTGUI_API const tguiUtf32* tguiListBox_getItemIds(const tguiWidget* widget, size_t* count); // count is set by the function to indicate length of returned array

CTGUI_API void tguiListBox_setItemData(tguiWidget* widget, size_t index, void* data);
CTGUI_API void* tguiListBox_getItemData(const tguiWidget* widget, size_t index);

CTGUI_API void tguiListBox_setItemHeight(tguiWidget* widget, unsigned int height);
CTGUI_API unsigned int tguiListBox_getItemHeight(const tguiWidget* widget);

CTGUI_API void tguiListBox_setMaximumItems(tguiWidget* widget, size_t maxItems);
CTGUI_API size_t tguiListBox_getMaximumItems(const tguiWidget* widget);

CTGUI_API void tguiListBox_setAutoScroll(tguiWidget* widget, tguiBool autoScroll);
CTGUI_API tguiBool tguiListBox_getAutoScroll(const tguiWidget* widget);

CTGUI_API void tguiListBox_setTextAlignment(tguiWidget* widget, tguiHorizontalAlignment alignment);
CTGUI_API tguiHorizontalAlignment tguiListBox_getTextAlignment(const tguiWidget* widget);

CTGUI_API void tguiListBox_setScrollbarValue(tguiWidget* widget, unsigned int value);
CTGUI_API unsigned int tguiListBox_getScrollbarValue(const tguiWidget* widget);

CTGUI_API tguiBool tguiListBox_contains(tguiWidget* widget, tguiUtf32 item);
CTGUI_API tguiBool tguiListBox_containsId(tguiWidget* widget, tguiUtf32 id);

#endif // CTGUI_LIST_BOX_H

