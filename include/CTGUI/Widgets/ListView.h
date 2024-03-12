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


#ifndef CTGUI_LIST_VIEW_H
#define CTGUI_LIST_VIEW_H

#include <CTGUI/Widget.h>
#include <CTGUI/Alignment.h>
#include <CTGUI/ScrollbarPolicy.h>

CTGUI_API tguiWidget* tguiListView_create(void);

CTGUI_API size_t tguiListView_addColumn(tguiWidget* widget, tguiUtf32 text, float width, tguiHorizontalAlignment columnAlignment);

CTGUI_API void tguiListView_setColumnText(tguiWidget* widget, size_t index, tguiUtf32 text);
CTGUI_API tguiUtf32 tguiListView_getColumnText(tguiWidget* widget, size_t index);

CTGUI_API void tguiListView_setColumnWidth(tguiWidget* widget, size_t index, float width);
CTGUI_API float tguiListView_getColumnWidth(tguiWidget* widget, size_t index);
CTGUI_API float tguiListView_getColumnDesignWidth(tguiWidget* widget, size_t index);

CTGUI_API void tguiListView_setColumnAlignment(tguiWidget* widget, size_t index, tguiHorizontalAlignment columnAlignment);
CTGUI_API tguiHorizontalAlignment tguiListView_getColumnAlignment(tguiWidget* widget, size_t index);

CTGUI_API void tguiListView_setColumnAutoResize(tguiWidget* widget, size_t index, tguiBool autoResize);
CTGUI_API tguiBool tguiListView_getColumnAutoResize(const tguiWidget* widget, size_t index);

CTGUI_API void tguiListView_setColumnExpanded(tguiWidget* widget, size_t index, tguiBool expand);
CTGUI_API tguiBool tguiListView_getColumnExpanded(const tguiWidget* widget, size_t index);

CTGUI_API void tguiListView_removeAllColumns(tguiWidget* widget);

CTGUI_API size_t tguiListView_getColumnCount(const tguiWidget* widget);

CTGUI_API void tguiListView_setHeaderHeight(tguiWidget* widget, float height);
CTGUI_API float tguiListView_getHeaderHeight(tguiWidget* widget);
CTGUI_API float tguiListView_getCurrentHeaderHeight(tguiWidget* widget);

CTGUI_API void tguiListView_setHeaderVisible(tguiWidget* widget, tguiBool showHeader);
CTGUI_API tguiBool tguiListView_getHeaderVisible(tguiWidget* widget);

CTGUI_API size_t tguiListView_addItem(tguiWidget* widget, tguiUtf32 text);
CTGUI_API size_t tguiListView_addItemRow(tguiWidget* widget, const tguiUtf32* item, unsigned int itemLength);

CTGUI_API void tguiListView_insertItem(tguiWidget* widget, size_t index, tguiUtf32 text);
CTGUI_API void tguiListView_insertItemRow(tguiWidget* widget, size_t index, const tguiUtf32* item, unsigned int itemLength);

CTGUI_API tguiBool tguiListView_changeItem(tguiWidget* widget, size_t index, const tguiUtf32* item, unsigned int itemLength);
CTGUI_API tguiBool tguiListView_changeSubItem(tguiWidget* widget, size_t index, size_t column, tguiUtf32 text);

CTGUI_API tguiBool tguiListView_removeItem(tguiWidget* widget, size_t index);
CTGUI_API void tguiListView_removeAllItems(tguiWidget* widget);

CTGUI_API void tguiListView_setSelectedItem(tguiWidget* widget, size_t index);
CTGUI_API void tguiListView_setSelectedItems(tguiWidget* widget, const size_t* indices, unsigned int indicesLength);
CTGUI_API int tguiListView_getSelectedItemIndex(const tguiWidget* widget);
CTGUI_API const size_t* tguiListView_getSelectedItemIndices(const tguiWidget* widget, size_t* count); // count is set by the function to indicate length of returned array
CTGUI_API void tguiListView_deselectItems(tguiWidget* widget);

CTGUI_API void tguiListView_setMultiSelect(tguiWidget* widget, tguiBool multiSelect);
CTGUI_API tguiBool tguiListView_getMultiSelect(const tguiWidget* widget);

CTGUI_API void tguiListView_setItemData(tguiWidget* widget, size_t index, void* data);
CTGUI_API void* tguiListView_getItemData(const tguiWidget* widget, size_t index);

CTGUI_API void tguiListView_setItemIcon(tguiWidget* widget, size_t index, tguiTexture* texture);

CTGUI_API size_t tguiListView_getItemCount(const tguiWidget* widget);

CTGUI_API tguiUtf32 tguiListView_getItem(tguiWidget* widget, size_t index);
CTGUI_API tguiUtf32 tguiListView_getItemCell(tguiWidget* widget, size_t rowIndex, size_t columnIndex);
CTGUI_API const tguiUtf32* tguiListView_getItemRow(const tguiWidget* widget, size_t index, size_t* count); // count is set by the function to indicate length of returned array
CTGUI_API const tguiUtf32* tguiListView_getItems(const tguiWidget* widget, size_t* count); // count is set by the function to indicate length of returned array

CTGUI_API void tguiListView_setItemHeight(tguiWidget* widget, unsigned int height);
CTGUI_API unsigned int tguiListView_getItemHeight(const tguiWidget* widget);

CTGUI_API void tguiListView_setHeaderTextSize(tguiWidget* widget, unsigned int size);
CTGUI_API unsigned int tguiListView_getHeaderTextSize(const tguiWidget* widget);

CTGUI_API void tguiListView_setSeparatorWidth(tguiWidget* widget, unsigned int width);
CTGUI_API unsigned int tguiListView_getSeparatorWidth(const tguiWidget* widget);

CTGUI_API void tguiListView_setHeaderSeparatorHeight(tguiWidget* widget, unsigned int height);
CTGUI_API unsigned int tguiListView_getHeaderSeparatorHeight(const tguiWidget* widget);

CTGUI_API void tguiListView_setGridLinesWidth(tguiWidget* widget, unsigned int width);
CTGUI_API unsigned int tguiListView_getGridLinesWidth(const tguiWidget* widget);

CTGUI_API void tguiListView_setAutoScroll(tguiWidget* widget, tguiBool autoScroll);
CTGUI_API tguiBool tguiListView_getAutoScroll(const tguiWidget* widget);

CTGUI_API void tguiListView_setShowVerticalGridLines(tguiWidget* widget, tguiBool showGridLines);
CTGUI_API tguiBool tguiListView_getShowVerticalGridLines(const tguiWidget* widget);

CTGUI_API void tguiListView_setShowHorizontalGridLines(tguiWidget* widget, tguiBool showGridLines);
CTGUI_API tguiBool tguiListView_getShowHorizontalGridLines(const tguiWidget* widget);

CTGUI_API void tguiListView_setVerticalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy);
CTGUI_API tguiScrollbarPolicy tguiListView_getVerticalScrollbarPolicy(const tguiWidget* widget);

CTGUI_API void tguiListView_setHorizontalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy);
CTGUI_API tguiScrollbarPolicy tguiListView_getHorizontalScrollbarPolicy(const tguiWidget* widget);

CTGUI_API void tguiListView_setVerticalScrollbarValue(tguiWidget* widget, unsigned int value);
CTGUI_API unsigned int tguiListView_getVerticalScrollbarValue(const tguiWidget* widget);

CTGUI_API void tguiListView_setHorizontalScrollbarValue(tguiWidget* widget, unsigned int value);
CTGUI_API unsigned int tguiListView_getHorizontalScrollbarValue(const tguiWidget* widget);

CTGUI_API void tguiListView_sort(tguiWidget* widget, size_t index, tguiBool (*function)(tguiUtf32, tguiUtf32));

CTGUI_API void tguiListView_setFixedIconSize(tguiWidget* widget, tguiVector2f iconSize);
CTGUI_API tguiVector2f tguiListView_getFixedIconSize(const tguiWidget* widget);

CTGUI_API void setResizableColumns(tguiWidget* widget, tguiBool resizable);
CTGUI_API tguiBool getResizableColumns(const tguiWidget* widget);

#endif // CTGUI_LIST_VIEW_H

