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


#include <CTGUI/Widgets/ListView.h>
#include <CTGUI/WidgetStruct.hpp>
#include <CTGUI/TextureStruct.hpp>

#include <TGUI/Widgets/ListView.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ListView>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiListView_create(void)
{
    return ctgui::addWidgetRef(tgui::ListView::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiListView_addColumn(tguiWidget* widget, tguiUtf32 text, float width, tguiHorizontalAlignment columnAlignment)
{
    return DOWNCAST(widget->This)->addColumn(ctgui::toCppStr(text), width, static_cast<tgui::ListView::ColumnAlignment>(columnAlignment));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setColumnText(tguiWidget* widget, size_t index, tguiUtf32 text)
{
    DOWNCAST(widget->This)->setColumnText(index, ctgui::toCppStr(text));
}

tguiUtf32 tguiListView_getColumnText(tguiWidget* widget, size_t index)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getColumnText(index));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setColumnWidth(tguiWidget* widget, size_t index, float width)
{
    DOWNCAST(widget->This)->setColumnWidth(index, width);
}

float tguiListView_getColumnWidth(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->getColumnWidth(index);
}

float tguiListView_getColumnDesignWidth(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->getColumnDesignWidth(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setColumnAlignment(tguiWidget* widget, size_t index, tguiHorizontalAlignment columnAlignment)
{
    DOWNCAST(widget->This)->setColumnAlignment(index, static_cast<tgui::ListView::ColumnAlignment>(columnAlignment));
}

tguiHorizontalAlignment tguiListView_getColumnAlignment(tguiWidget* widget, size_t index)
{
    return static_cast<tguiHorizontalAlignment>(DOWNCAST(widget->This)->getColumnAlignment(index));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setColumnAutoResize(tguiWidget* widget, size_t index, tguiBool autoResize)
{
    DOWNCAST(widget->This)->setColumnAutoResize(index, autoResize != 0);
}

tguiBool tguiListView_getColumnAutoResize(const tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->getColumnAutoResize(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setColumnExpanded(tguiWidget* widget, size_t index, tguiBool expand)
{
    DOWNCAST(widget->This)->setColumnExpanded(index, expand != 0);
}

tguiBool tguiListView_getColumnExpanded(const tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->getColumnExpanded(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_removeAllColumns(tguiWidget* widget)
{
    DOWNCAST(widget->This)->removeAllColumns();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiListView_getColumnCount(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getColumnCount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setHeaderHeight(tguiWidget* widget, float height)
{
    DOWNCAST(widget->This)->setHeaderHeight(height);
}

float tguiListView_getHeaderHeight(tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getHeaderHeight();
}

float tguiListView_getCurrentHeaderHeight(tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getCurrentHeaderHeight();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setHeaderVisible(tguiWidget* widget, tguiBool showHeader)
{
    DOWNCAST(widget->This)->setHeaderVisible(showHeader != 0);
}

tguiBool tguiListView_getHeaderVisible(tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getHeaderVisible();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiListView_addItem(tguiWidget* widget, tguiUtf32 text)
{
    return DOWNCAST(widget->This)->addItem(ctgui::toCppStr(text));
}

size_t tguiListView_addItemRow(tguiWidget* widget, const tguiUtf32* item, unsigned int itemLength)
{
    std::vector<tgui::String> convertedItem;
    convertedItem.reserve(itemLength);
    for (unsigned int i = 0; i < itemLength; ++i)
        convertedItem.push_back(ctgui::toCppStr(item[i]));

    return DOWNCAST(widget->This)->addItem(std::move(convertedItem));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_insertItem(tguiWidget* widget, size_t index, tguiUtf32 text)
{
    DOWNCAST(widget->This)->insertItem(index, ctgui::toCppStr(text));
}

void tguiListView_insertItemRow(tguiWidget* widget, size_t index, const tguiUtf32* item, unsigned int itemLength)
{
    std::vector<tgui::String> convertedItem;
    convertedItem.reserve(itemLength);
    for (unsigned int i = 0; i < itemLength; ++i)
        convertedItem.push_back(ctgui::toCppStr(item[i]));

    DOWNCAST(widget->This)->insertItem(index, std::move(convertedItem));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListView_changeItem(tguiWidget* widget, size_t index, const tguiUtf32* item, unsigned int itemLength)
{
    std::vector<tgui::String> convertedItem;
    convertedItem.reserve(itemLength);
    for (unsigned int i = 0; i < itemLength; ++i)
        convertedItem.push_back(ctgui::toCppStr(item[i]));

    return DOWNCAST(widget->This)->changeItem(index, std::move(convertedItem));
}

tguiBool tguiListView_changeSubItem(tguiWidget* widget, size_t index, size_t column, tguiUtf32 text)
{
    return DOWNCAST(widget->This)->changeSubItem(index, column, ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListView_removeItem(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->removeItem(index);
}

void tguiListView_removeAllItems(tguiWidget* widget)
{
    DOWNCAST(widget->This)->removeAllItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setSelectedItem(tguiWidget* widget, size_t index)
{
    DOWNCAST(widget->This)->setSelectedItem(index);
}

void tguiListView_setSelectedItems(tguiWidget* widget, const size_t* indices, unsigned int indicesLength)
{
    std::set<size_t> convertedIndices;
    for (unsigned int i = 0; i < indicesLength; ++i)
        convertedIndices.insert(indices[i]);

    return DOWNCAST(widget->This)->setSelectedItems(std::move(convertedIndices));
}

int tguiListView_getSelectedItemIndex(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getSelectedItemIndex();
}

const size_t* tguiListView_getSelectedItemIndices(const tguiWidget* widget, size_t* count)
{
    const auto& indices = DOWNCAST(widget->This)->getSelectedItemIndices();

    static std::vector<size_t> cIndices;
    cIndices.reserve(indices.size());
    for (size_t index : indices)
        cIndices.push_back(index);

    *count = cIndices.size();
    return cIndices.data();
}

void tguiListView_deselectItems(tguiWidget* widget)
{
    DOWNCAST(widget->This)->deselectItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setMultiSelect(tguiWidget* widget, tguiBool multiSelect)
{
    DOWNCAST(widget->This)->setMultiSelect(multiSelect != 0);
}

tguiBool tguiListView_getMultiSelect(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMultiSelect();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setItemData(tguiWidget* widget, size_t index, void* data)
{
    DOWNCAST(widget->This)->setItemData(index, data);
}

void* tguiListView_getItemData(const tguiWidget* widget, size_t index)
{
    try
    {
        return DOWNCAST(widget->This)->getItemData<void*>(index);
    }
    catch (const std::bad_cast&)
    {
        return nullptr;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setItemIcon(tguiWidget* widget, size_t index, tguiTexture* texture)
{
    DOWNCAST(widget->This)->setItemIcon(index, *texture->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiListView_getItemCount(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getItemCount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiListView_getItem(tguiWidget* widget, size_t index)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getItem(index));
}

tguiUtf32 tguiListView_getItemCell(tguiWidget* widget, size_t rowIndex, size_t columnIndex)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getItemCell(rowIndex, columnIndex));
}

const tguiUtf32* tguiListView_getItemRow(const tguiWidget* widget, size_t index, size_t* count)
{
    static std::vector<tgui::String> cppItems;
    cppItems = DOWNCAST(widget->This)->getItemRow(index);

    static std::vector<tguiUtf32> cItems;
    cItems.clear();
    cItems.reserve(cppItems.size());
    for (const auto& item : cppItems)
        cItems.emplace_back(item.c_str());

    *count = cItems.size();
    return cItems.data();
}

const tguiUtf32* tguiListView_getItems(const tguiWidget* widget, size_t* count)
{
    static std::vector<tgui::String> cppItems;
    cppItems = DOWNCAST(widget->This)->getItems();

    static std::vector<tguiUtf32> cItems;
    cItems.clear();
    cItems.reserve(cppItems.size());
    for (const auto& item : cppItems)
        cItems.emplace_back(item.c_str());

    *count = cItems.size();
    return cItems.data();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setItemHeight(tguiWidget* widget, unsigned int height)
{
    DOWNCAST(widget->This)->setItemHeight(height);
}

unsigned int tguiListView_getItemHeight(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getItemHeight();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setHeaderTextSize(tguiWidget* widget, unsigned int size)
{
    DOWNCAST(widget->This)->setHeaderTextSize(size);
}

unsigned int tguiListView_getHeaderTextSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getHeaderTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setSeparatorWidth(tguiWidget* widget, unsigned int width)
{
    DOWNCAST(widget->This)->setSeparatorWidth(width);
}

unsigned int tguiListView_getSeparatorWidth(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getSeparatorWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setHeaderSeparatorHeight(tguiWidget* widget, unsigned int height)
{
    DOWNCAST(widget->This)->setHeaderSeparatorHeight(height);
}

unsigned int tguiListView_getHeaderSeparatorHeight(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getHeaderSeparatorHeight();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setGridLinesWidth(tguiWidget* widget, unsigned int width)
{
    DOWNCAST(widget->This)->setGridLinesWidth(width);
}

unsigned int tguiListView_getGridLinesWidth(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getGridLinesWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setAutoScroll(tguiWidget* widget, tguiBool autoScroll)
{
    DOWNCAST(widget->This)->setAutoScroll(autoScroll != 0);
}

tguiBool tguiListView_getAutoScroll(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getAutoScroll();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setShowVerticalGridLines(tguiWidget* widget, tguiBool showGridLines)
{
    DOWNCAST(widget->This)->setShowVerticalGridLines(showGridLines != 0);
}

tguiBool tguiListView_getShowVerticalGridLines(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getShowVerticalGridLines();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setShowHorizontalGridLines(tguiWidget* widget, tguiBool showGridLines)
{
    DOWNCAST(widget->This)->setShowHorizontalGridLines(showGridLines != 0);
}

tguiBool tguiListView_getShowHorizontalGridLines(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getShowHorizontalGridLines();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setVerticalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy)
{
    DOWNCAST(widget->This)->setVerticalScrollbarPolicy(static_cast<tgui::Scrollbar::Policy>(policy));
}

tguiScrollbarPolicy tguiListView_getVerticalScrollbarPolicy(const tguiWidget* widget)
{
    return static_cast<tguiScrollbarPolicy>(DOWNCAST(widget->This)->getVerticalScrollbarPolicy());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setHorizontalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy)
{
    DOWNCAST(widget->This)->setHorizontalScrollbarPolicy(static_cast<tgui::Scrollbar::Policy>(policy));
}

tguiScrollbarPolicy tguiListView_getHorizontalScrollbarPolicy(const tguiWidget* widget)
{
    return static_cast<tguiScrollbarPolicy>(DOWNCAST(widget->This)->getHorizontalScrollbarPolicy());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setVerticalScrollbarValue(tguiWidget* widget, unsigned int value)
{
    DOWNCAST(widget->This)->setVerticalScrollbarValue(value);
}

unsigned int tguiListView_getVerticalScrollbarValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getVerticalScrollbarValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setHorizontalScrollbarValue(tguiWidget* widget, unsigned int value)
{
    DOWNCAST(widget->This)->setHorizontalScrollbarValue(value);
}

unsigned int tguiListView_getHorizontalScrollbarValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getHorizontalScrollbarValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_sort(tguiWidget* widget, size_t index, tguiBool (*comp)(tguiUtf32, tguiUtf32))
{
    DOWNCAST(widget->This)->sort(index, [&comp](const tgui::String& str1, const tgui::String& str2){
        return comp(reinterpret_cast<tguiUtf32>(str1.c_str()), reinterpret_cast<tguiUtf32>(str2.c_str())) != 0;
    });
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setFixedIconSize(tguiWidget* widget, tguiVector2f iconSize)
{
    DOWNCAST(widget->This)->setFixedIconSize({iconSize.x, iconSize.y});
}

tguiVector2f tguiListView_getFixedIconSize(const tguiWidget* widget)
{
    const tgui::Vector2f iconSize = DOWNCAST(widget->This)->getFixedIconSize();
    return {iconSize.x, iconSize.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setResizableColumns(tguiWidget* widget, tguiBool autoScroll)
{
    DOWNCAST(widget->This)->setResizableColumns(autoScroll != 0);
}

tguiBool tguiListView_getResizableColumns(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getResizableColumns();
}
