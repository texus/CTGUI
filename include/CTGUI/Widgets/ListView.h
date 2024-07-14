// This file is generated, it should not be edited directly.

#ifndef CTGUI_LISTVIEW_H
#define CTGUI_LISTVIEW_H

#include <CTGUI/Widget.h>

#include <CTGUI/Alignment.h>
#include <CTGUI/ScrollbarPolicy.h>

CTGUI_API tguiWidget* tguiListView_create(void);

CTGUI_API size_t tguiListView_addColumn(tguiWidget* thisWidget, tguiUtf32 text, float width, tguiHorizontalAlignment columnAlignment);

CTGUI_API void tguiListView_setColumnText(tguiWidget* thisWidget, size_t index, tguiUtf32 text);

CTGUI_API tguiUtf32 tguiListView_getColumnText(const tguiWidget* thisWidget, size_t index);

CTGUI_API void tguiListView_setColumnWidth(tguiWidget* thisWidget, size_t index, float width);

CTGUI_API float tguiListView_getColumnWidth(const tguiWidget* thisWidget, size_t index);

CTGUI_API float tguiListView_getColumnDesignWidth(const tguiWidget* thisWidget, size_t index);

CTGUI_API void tguiListView_setColumnAlignment(tguiWidget* thisWidget, size_t index, tguiHorizontalAlignment columnAlignment);

CTGUI_API tguiHorizontalAlignment tguiListView_getColumnAlignment(const tguiWidget* thisWidget, size_t index);

CTGUI_API void tguiListView_setColumnAutoResize(tguiWidget* thisWidget, size_t index, tguiBool autoResize);

CTGUI_API tguiBool tguiListView_getColumnAutoResize(const tguiWidget* thisWidget, size_t index);

CTGUI_API void tguiListView_setColumnExpanded(tguiWidget* thisWidget, size_t index, tguiBool expand);

CTGUI_API tguiBool tguiListView_getColumnExpanded(const tguiWidget* thisWidget, size_t index);

CTGUI_API void tguiListView_removeAllColumns(tguiWidget* thisWidget);

CTGUI_API size_t tguiListView_getColumnCount(const tguiWidget* thisWidget);

CTGUI_API void tguiListView_setHeaderVisible(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiListView_getHeaderVisible(const tguiWidget* thisWidget);

CTGUI_API void tguiListView_setHeaderHeight(tguiWidget* thisWidget, float value);
CTGUI_API float tguiListView_getHeaderHeight(const tguiWidget* thisWidget);

CTGUI_API float tguiListView_getCurrentHeaderHeight(const tguiWidget* thisWidget);

CTGUI_API size_t tguiListView_addItem(tguiWidget* thisWidget, tguiUtf32 text);

CTGUI_API size_t tguiListView_addItemRow(tguiWidget* thisWidget, const tguiUtf32* item, size_t itemLength);

CTGUI_API void tguiListView_insertItem(tguiWidget* thisWidget, size_t index, tguiUtf32 text);

CTGUI_API void tguiListView_insertItemRow(tguiWidget* thisWidget, size_t index, const tguiUtf32* item, size_t itemLength);

CTGUI_API tguiBool tguiListView_changeItem(tguiWidget* thisWidget, size_t index, const tguiUtf32* item, size_t itemLength);

CTGUI_API tguiBool tguiListView_changeSubItem(tguiWidget* thisWidget, size_t index, size_t column, tguiUtf32 text);

CTGUI_API tguiBool tguiListView_removeItem(tguiWidget* thisWidget, size_t index);

CTGUI_API void tguiListView_removeAllItems(tguiWidget* thisWidget);

CTGUI_API void tguiListView_setSelectedItem(tguiWidget* thisWidget, size_t index);

CTGUI_API void tguiListView_setSelectedItems(tguiWidget* thisWidget, const size_t* indices, size_t indicesLength);

CTGUI_API int tguiListView_getSelectedItemIndex(const tguiWidget* thisWidget);

CTGUI_API const size_t* tguiListView_getSelectedItemIndices(const tguiWidget* thisWidget, size_t* returnCount);

CTGUI_API void tguiListView_deselectItems(tguiWidget* thisWidget);

CTGUI_API void tguiListView_setMultiSelect(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiListView_getMultiSelect(const tguiWidget* thisWidget);

CTGUI_API void tguiListView_setItemData(tguiWidget* thisWidget, size_t index, void* data);

CTGUI_API void* tguiListView_getItemData(const tguiWidget* thisWidget, size_t index);

CTGUI_API void tguiListView_setItemIcon(tguiWidget* thisWidget, size_t index, const tguiTexture* texture);

CTGUI_API size_t tguiListView_getItemCount(const tguiWidget* thisWidget);

CTGUI_API tguiUtf32 tguiListView_getItem(const tguiWidget* thisWidget, size_t index);

CTGUI_API tguiUtf32 tguiListView_getItemCell(const tguiWidget* thisWidget, size_t rowIndex, size_t columnIndex);

CTGUI_API const tguiUtf32* tguiListView_getItemRow(const tguiWidget* thisWidget, size_t index, size_t* returnCount);

CTGUI_API const tguiUtf32* tguiListView_getItems(const tguiWidget* thisWidget, size_t* returnCount);

CTGUI_API unsigned int tguiListView_getVerticalScrollbarMaxValue(const tguiWidget* thisWidget);

CTGUI_API unsigned int tguiListView_getHorizontalScrollbarMaxValue(const tguiWidget* thisWidget);

CTGUI_API void tguiListView_setItemHeight(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiListView_getItemHeight(const tguiWidget* thisWidget);

CTGUI_API void tguiListView_setHeaderTextSize(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiListView_getHeaderTextSize(const tguiWidget* thisWidget);

CTGUI_API void tguiListView_setSeparatorWidth(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiListView_getSeparatorWidth(const tguiWidget* thisWidget);

CTGUI_API void tguiListView_setHeaderSeparatorHeight(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiListView_getHeaderSeparatorHeight(const tguiWidget* thisWidget);

CTGUI_API void tguiListView_setGridLinesWidth(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiListView_getGridLinesWidth(const tguiWidget* thisWidget);

CTGUI_API void tguiListView_setAutoScroll(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiListView_getAutoScroll(const tguiWidget* thisWidget);

CTGUI_API void tguiListView_setShowVerticalGridLines(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiListView_getShowVerticalGridLines(const tguiWidget* thisWidget);

CTGUI_API void tguiListView_setShowHorizontalGridLines(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiListView_getShowHorizontalGridLines(const tguiWidget* thisWidget);

CTGUI_API void tguiListView_setVerticalScrollbarPolicy(tguiWidget* thisWidget, tguiScrollbarPolicy value);
CTGUI_API tguiScrollbarPolicy tguiListView_getVerticalScrollbarPolicy(const tguiWidget* thisWidget);

CTGUI_API void tguiListView_setHorizontalScrollbarPolicy(tguiWidget* thisWidget, tguiScrollbarPolicy value);
CTGUI_API tguiScrollbarPolicy tguiListView_getHorizontalScrollbarPolicy(const tguiWidget* thisWidget);

CTGUI_API void tguiListView_setVerticalScrollbarValue(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiListView_getVerticalScrollbarValue(const tguiWidget* thisWidget);

CTGUI_API void tguiListView_setHorizontalScrollbarValue(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiListView_getHorizontalScrollbarValue(const tguiWidget* thisWidget);

CTGUI_API void tguiListView_setFixedIconSize(tguiWidget* thisWidget, tguiVector2f value);
CTGUI_API tguiVector2f tguiListView_getFixedIconSize(const tguiWidget* thisWidget);

CTGUI_API void tguiListView_setResizableColumns(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiListView_getResizableColumns(const tguiWidget* thisWidget);

CTGUI_API void tguiListView_sort(tguiWidget* widget, size_t index, tguiBool (*function)(tguiUtf32, tguiUtf32));

#endif // CTGUI_LISTVIEW_H
