/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2020 Bruno Van de Velde (vdv_b@tgui.eu)
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

#include <CTGUI/Config.h>
#include <CTGUI/Widget.h>
#include <CTGUI/Alignment.h>
#include <CTGUI/ScrollbarPolicy.h>
#include <SFML/Graphics/Texture.h>
#include <stddef.h>

CTGUI_API tguiWidget* tguiListView_create(void);

CTGUI_API size_t tguiListView_addColumn(tguiWidget* widget, const sfUint32* text, float width, tguiHorizontalAlignment columnAlignment);

CTGUI_API void tguiListView_setColumnText(tguiWidget* widget, size_t index, const sfUint32* text);
CTGUI_API const sfUint32* tguiListView_getColumnText(tguiWidget* widget, size_t index);

CTGUI_API void tguiListView_setColumnWidth(tguiWidget* widget, size_t index, float width);
CTGUI_API float tguiListView_getColumnWidth(tguiWidget* widget, size_t index);

CTGUI_API void tguiListView_setColumnAlignment(tguiWidget* widget, size_t index, tguiHorizontalAlignment columnAlignment);
CTGUI_API tguiHorizontalAlignment tguiListView_getColumnAlignment(tguiWidget* widget, size_t index);

CTGUI_API void tguiListView_removeAllColumns(tguiWidget* widget);

CTGUI_API size_t tguiListView_getColumnCount(const tguiWidget* widget);

CTGUI_API void tguiListView_setHeaderHeight(tguiWidget* widget, float height);
CTGUI_API float tguiListView_getHeaderHeight(tguiWidget* widget);
CTGUI_API float tguiListView_getCurrentHeaderHeight(tguiWidget* widget);

CTGUI_API void tguiListView_setHeaderVisible(tguiWidget* widget, sfBool showHeader);
CTGUI_API sfBool tguiListView_getHeaderVisible(tguiWidget* widget);

CTGUI_API size_t tguiListView_addItem(tguiWidget* widget, const sfUint32* text);
CTGUI_API size_t tguiListView_addItemRow(tguiWidget* widget, const sfUint32** item, unsigned int itemLength);

CTGUI_API sfBool tguiListView_changeItem(tguiWidget* widget, size_t index, const sfUint32** item, unsigned int itemLength);
CTGUI_API sfBool tguiListView_changeSubItem(tguiWidget* widget, size_t index, size_t column, const sfUint32* text);

CTGUI_API sfBool tguiListView_removeItem(tguiWidget* widget, size_t index);
CTGUI_API void tguiListView_removeAllItems(tguiWidget* widget);

CTGUI_API void tguiListView_setSelectedItem(tguiWidget* widget, size_t index);
CTGUI_API void tguiListView_setSelectedItems(tguiWidget* widget, const size_t* indices, unsigned int indicesLength);
CTGUI_API int tguiListView_getSelectedItemIndex(const tguiWidget* widget);
CTGUI_API const size_t* tguiListView_getSelectedItemIndices(const tguiWidget* widget, size_t* count);
CTGUI_API void tguiListView_deselectItems(tguiWidget* widget);

CTGUI_API void tguiListView_setMultiSelect(tguiWidget* widget, sfBool multiSelect);
CTGUI_API sfBool tguiListView_getMultiSelect(const tguiWidget* widget);

CTGUI_API void tguiListView_setItemIcon(tguiWidget* widget, size_t index, sfTexture* texture);

CTGUI_API size_t tguiListView_getItemCount(const tguiWidget* widget);

CTGUI_API const sfUint32* tguiListView_getItem(tguiWidget* widget, size_t index);
CTGUI_API const sfUint32* tguiListView_getItemCell(tguiWidget* widget, size_t rowIndex, size_t columnIndex);
CTGUI_API const sfUint32** tguiListView_getItemRow(const tguiWidget* widget, size_t index, size_t* count);
CTGUI_API const sfUint32** tguiListView_getItems(const tguiWidget* widget, size_t* count);

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

CTGUI_API void tguiListView_setAutoScroll(tguiWidget* widget, sfBool autoScroll);
CTGUI_API sfBool tguiListView_getAutoScroll(const tguiWidget* widget);

CTGUI_API void tguiListView_setShowVerticalGridLines(tguiWidget* widget, sfBool showGridLines);
CTGUI_API sfBool tguiListView_getShowVerticalGridLines(const tguiWidget* widget);

CTGUI_API void tguiListView_setShowHorizontalGridLines(tguiWidget* widget, sfBool showGridLines);
CTGUI_API sfBool tguiListView_getShowHorizontalGridLines(const tguiWidget* widget);

CTGUI_API void tguiListView_setExpandLastColumn(tguiWidget* widget, sfBool expand);
CTGUI_API sfBool tguiListView_getExpandLastColumn(const tguiWidget* widget);

CTGUI_API void tguiListView_setVerticalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy);
CTGUI_API tguiScrollbarPolicy tguiListView_getVerticalScrollbarPolicy(const tguiWidget* widget);

CTGUI_API void tguiListView_setHorizontalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy);
CTGUI_API tguiScrollbarPolicy tguiListView_getHorizontalScrollbarPolicy(const tguiWidget* widget);

CTGUI_API void tguiListView_setVerticalScrollbarValue(tguiWidget* widget, unsigned int value);
CTGUI_API unsigned int tguiListView_getVerticalScrollbarValue(const tguiWidget* widget);

CTGUI_API void tguiListView_setHorizontalScrollbarValue(tguiWidget* widget, unsigned int value);
CTGUI_API unsigned int tguiListView_getHorizontalScrollbarValue(const tguiWidget* widget);

CTGUI_API void tguiListView_sort(tguiWidget* widget, size_t index, sfBool (*function)(const sfUint32*, const sfUint32*));

#endif // CTGUI_LIST_VIEW_H

