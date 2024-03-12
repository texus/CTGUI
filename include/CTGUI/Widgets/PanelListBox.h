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


#ifndef CTGUI_PANEL_LIST_BOX_H
#define CTGUI_PANEL_LIST_BOX_H

#include <CTGUI/Widget.h>
#include <CTGUI/Alignment.h>

CTGUI_API tguiWidget* tguiPanelListBox_create(void);

CTGUI_API tguiWidget* tguiPanelListBox_addItem(tguiWidget* widget, tguiUtf32 id);
CTGUI_API tguiWidget* tguiPanelListBox_addItemAtIndex(tguiWidget* widget, tguiUtf32 id, size_t index);

CTGUI_API tguiWidget* tguiPanelListBox_getPanelTemplate(tguiWidget* widget);

CTGUI_API tguiLayout* tguiPanelListBox_getItemsWidth(const tguiWidget* widget);

CTGUI_API void tguiPanelListBox_setItemsHeight(tguiWidget* widget, const tguiLayout* height);
CTGUI_API tguiLayout* tguiPanelListBox_getItemsHeight(const tguiWidget* widget);

CTGUI_API tguiBool tguiPanelListBox_setSelectedItem(tguiWidget* widget, const tguiWidget* panelPtr);
CTGUI_API tguiBool tguiPanelListBox_setSelectedItemById(tguiWidget* widget, tguiUtf32 id);
CTGUI_API tguiBool tguiPanelListBox_setSelectedItemByIndex(tguiWidget* widget, size_t index);
CTGUI_API void tguiPanelListBox_deselectItem(tguiWidget* widget);

CTGUI_API tguiBool tguiPanelListBox_removeItem(tguiWidget* widget, const tguiWidget* panelPtr);
CTGUI_API tguiBool tguiPanelListBox_removeItemById(tguiWidget* widget, tguiUtf32 id);
CTGUI_API tguiBool tguiPanelListBox_removeItemByIndex(tguiWidget* widget, size_t index);
CTGUI_API void tguiPanelListBox_removeAllItems(tguiWidget* widget);

CTGUI_API tguiWidget* tguiPanelListBox_getItemById(const tguiWidget* widget, tguiUtf32 id);
CTGUI_API tguiWidget* tguiPanelListBox_getItemByIndex(const tguiWidget* widget, size_t index);
CTGUI_API int tguiPanelListBox_getIndexById(const tguiWidget* widget, tguiUtf32 id);
CTGUI_API int tguiPanelListBox_getIndexByItem(const tguiWidget* widget, const tguiWidget* panelPtr);
CTGUI_API tguiUtf32 tguiPanelListBox_getIdByIndex(const tguiWidget* widget, size_t index);

CTGUI_API tguiWidget* tguiPanelListBox_getSelectedItem(const tguiWidget* widget);
CTGUI_API tguiUtf32 tguiPanelListBox_getSelectedItemId(const tguiWidget* widget);
CTGUI_API int tguiPanelListBox_getSelectedItemIndex(const tguiWidget* widget);

CTGUI_API size_t tguiPanelListBox_getItemCount(const tguiWidget* widget);
CTGUI_API tguiWidget** tguiPanelListBox_getItems(const tguiWidget* widget, size_t* count); // tguiWidget_free must be called on each element in the returned array, count is set by the function to indicate the array length
CTGUI_API const tguiUtf32* tguiPanelListBox_getItemIds(const tguiWidget* widget, size_t* count); // count is set by the function to indicate length of returned array

CTGUI_API void tguiPanelListBox_setMaximumItems(tguiWidget* widget, size_t maximumItems);
CTGUI_API size_t tguiPanelListBox_getMaximumItems(const tguiWidget* widget);

CTGUI_API tguiBool tguiPanelListBox_contains(const tguiWidget* widget, const tguiWidget* panelPtr);
CTGUI_API tguiBool tguiPanelListBox_containsId(const tguiWidget* widget, tguiUtf32 id);

#endif // CTGUI_PANEL_LIST_BOX_H

