// This file is generated, it should not be edited directly.

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

size_t tguiListView_addColumn(tguiWidget* thisWidget, tguiUtf32 text, float width, tguiHorizontalAlignment columnAlignment)
{
    return DOWNCAST(thisWidget->This)->addColumn(ctgui::toCppStr(text), width, static_cast<tgui::HorizontalAlignment>(columnAlignment));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setColumnText(tguiWidget* thisWidget, size_t index, tguiUtf32 text)
{
    DOWNCAST(thisWidget->This)->setColumnText(index, ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiListView_getColumnText(const tguiWidget* thisWidget, size_t index)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getColumnText(index));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setColumnWidth(tguiWidget* thisWidget, size_t index, float width)
{
    DOWNCAST(thisWidget->This)->setColumnWidth(index, width);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiListView_getColumnWidth(const tguiWidget* thisWidget, size_t index)
{
    return DOWNCAST(thisWidget->This)->getColumnWidth(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiListView_getColumnDesignWidth(const tguiWidget* thisWidget, size_t index)
{
    return DOWNCAST(thisWidget->This)->getColumnDesignWidth(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setColumnAlignment(tguiWidget* thisWidget, size_t index, tguiHorizontalAlignment columnAlignment)
{
    DOWNCAST(thisWidget->This)->setColumnAlignment(index, static_cast<tgui::HorizontalAlignment>(columnAlignment));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiHorizontalAlignment tguiListView_getColumnAlignment(const tguiWidget* thisWidget, size_t index)
{
    return static_cast<tguiHorizontalAlignment>(DOWNCAST(thisWidget->This)->getColumnAlignment(index));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setColumnAutoResize(tguiWidget* thisWidget, size_t index, tguiBool autoResize)
{
    DOWNCAST(thisWidget->This)->setColumnAutoResize(index, autoResize != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListView_getColumnAutoResize(const tguiWidget* thisWidget, size_t index)
{
    return DOWNCAST(thisWidget->This)->getColumnAutoResize(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setColumnExpanded(tguiWidget* thisWidget, size_t index, tguiBool expand)
{
    DOWNCAST(thisWidget->This)->setColumnExpanded(index, expand != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListView_getColumnExpanded(const tguiWidget* thisWidget, size_t index)
{
    return DOWNCAST(thisWidget->This)->getColumnExpanded(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_removeAllColumns(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->removeAllColumns();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiListView_getColumnCount(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getColumnCount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setHeaderVisible(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setHeaderVisible(value != 0);
}

tguiBool tguiListView_getHeaderVisible(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getHeaderVisible();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setHeaderHeight(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setHeaderHeight(value);
}

float tguiListView_getHeaderHeight(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getHeaderHeight();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiListView_getCurrentHeaderHeight(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getCurrentHeaderHeight();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiListView_addItem(tguiWidget* thisWidget, tguiUtf32 text)
{
    return DOWNCAST(thisWidget->This)->addItem(ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiListView_addItemRow(tguiWidget* thisWidget, const tguiUtf32* item, size_t itemLength)
{
    std::vector<tgui::String> convertedItem;
    convertedItem.reserve(itemLength);
    for (size_t i = 0; i < itemLength; ++i)
        convertedItem.push_back(ctgui::toCppStr(item[i]));

    return DOWNCAST(thisWidget->This)->addItem(std::move(convertedItem));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_insertItem(tguiWidget* thisWidget, size_t index, tguiUtf32 text)
{
    DOWNCAST(thisWidget->This)->insertItem(index, ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_insertItemRow(tguiWidget* thisWidget, size_t index, const tguiUtf32* item, size_t itemLength)
{
    std::vector<tgui::String> convertedItem;
    convertedItem.reserve(itemLength);
    for (size_t i = 0; i < itemLength; ++i)
        convertedItem.push_back(ctgui::toCppStr(item[i]));

    DOWNCAST(thisWidget->This)->insertItem(index, std::move(convertedItem));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListView_changeItem(tguiWidget* thisWidget, size_t index, const tguiUtf32* item, size_t itemLength)
{
    std::vector<tgui::String> convertedItem;
    convertedItem.reserve(itemLength);
    for (size_t i = 0; i < itemLength; ++i)
        convertedItem.push_back(ctgui::toCppStr(item[i]));

    return DOWNCAST(thisWidget->This)->changeItem(index, std::move(convertedItem));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListView_changeSubItem(tguiWidget* thisWidget, size_t index, size_t column, tguiUtf32 text)
{
    return DOWNCAST(thisWidget->This)->changeSubItem(index, column, ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListView_removeItem(tguiWidget* thisWidget, size_t index)
{
    return DOWNCAST(thisWidget->This)->removeItem(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_removeAllItems(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->removeAllItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setSelectedItem(tguiWidget* thisWidget, size_t index)
{
    DOWNCAST(thisWidget->This)->setSelectedItem(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setSelectedItems(tguiWidget* thisWidget, const size_t* indices, size_t indicesLength)
{
    std::set<size_t> convertedIndices;
    for (size_t i = 0; i < indicesLength; ++i)
        convertedIndices.insert(indices[i]);

    DOWNCAST(thisWidget->This)->setSelectedItems(std::move(convertedIndices));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int tguiListView_getSelectedItemIndex(tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getSelectedItemIndex();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const size_t* tguiListView_getSelectedItemIndices(const tguiWidget* thisWidget, size_t* returnCount)
{
    const auto& indices = DOWNCAST(thisWidget->This)->getSelectedItemIndices();

    static std::vector<size_t> cIndices;
    cIndices.clear();
    cIndices.reserve(indices.size());
    for (size_t index : indices)
        cIndices.emplace_back(index);

*returnCount = cIndices.size();
return cIndices.data();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_deselectItems(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->deselectItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setMultiSelect(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setMultiSelect(value != 0);
}

tguiBool tguiListView_getMultiSelect(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMultiSelect();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setItemData(tguiWidget* thisWidget, size_t index, void* data)
{
    DOWNCAST(thisWidget->This)->setItemData(index, data);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void* tguiListView_getItemData(const tguiWidget* thisWidget, size_t index)
{
    try
    {
        // User data will be of type void* when it was set in the C binding
        return DOWNCAST(thisWidget->This)->getItemData<void*>(index);
    }
    catch (const std::bad_cast&)
    {
        try
        {
            // User data will be of type tgui::String when it was set by loading the widget from a form
            return const_cast<void*>(static_cast<const void*>(ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getItemData<tgui::String>(index))));
        }
        catch (const std::bad_cast&)
        {
           return nullptr;
        }
    }

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setItemIcon(tguiWidget* thisWidget, size_t index, const tguiTexture* texture)
{
    DOWNCAST(thisWidget->This)->setItemIcon(index, *texture->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiListView_getItemCount(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getItemCount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiListView_getItem(tguiWidget* thisWidget, size_t index)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getItem(index));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiListView_getItemCell(tguiWidget* thisWidget, size_t rowIndex, size_t columnIndex)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getItemCell(rowIndex, columnIndex));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const tguiUtf32* tguiListView_getItemRow(tguiWidget* thisWidget, size_t index, size_t* returnCount)
{
    static std::vector<tgui::String> cppStrings;
    cppStrings = DOWNCAST(thisWidget->This)->getItemRow(index);

    static std::vector<tguiUtf32> cStrings;
    cStrings.clear();
    cStrings.reserve(cppStrings.size());
    for (const auto& item : cppStrings)
        cStrings.emplace_back(reinterpret_cast<tguiUtf32>(item.c_str()));

*returnCount = cStrings.size();
return cStrings.data();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const tguiUtf32* tguiListView_getItems(const tguiWidget* thisWidget, size_t* returnCount)
{
    static std::vector<tgui::String> cppStrings;
    cppStrings = DOWNCAST(thisWidget->This)->getItems();

    static std::vector<tguiUtf32> cStrings;
    cStrings.clear();
    cStrings.reserve(cppStrings.size());
    for (const auto& item : cppStrings)
        cStrings.emplace_back(reinterpret_cast<tguiUtf32>(item.c_str()));

*returnCount = cStrings.size();
return cStrings.data();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setItemHeight(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setItemHeight(value);
}

unsigned int tguiListView_getItemHeight(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getItemHeight();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setHeaderTextSize(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setHeaderTextSize(value);
}

unsigned int tguiListView_getHeaderTextSize(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getHeaderTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setSeparatorWidth(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setSeparatorWidth(value);
}

unsigned int tguiListView_getSeparatorWidth(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getSeparatorWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setHeaderSeparatorHeight(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setHeaderSeparatorHeight(value);
}

unsigned int tguiListView_getHeaderSeparatorHeight(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getHeaderSeparatorHeight();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setGridLinesWidth(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setGridLinesWidth(value);
}

unsigned int tguiListView_getGridLinesWidth(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getGridLinesWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setAutoScroll(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setAutoScroll(value != 0);
}

tguiBool tguiListView_getAutoScroll(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getAutoScroll();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setShowVerticalGridLines(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setShowVerticalGridLines(value != 0);
}

tguiBool tguiListView_getShowVerticalGridLines(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getShowVerticalGridLines();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setShowHorizontalGridLines(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setShowHorizontalGridLines(value != 0);
}

tguiBool tguiListView_getShowHorizontalGridLines(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getShowHorizontalGridLines();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setVerticalScrollbarPolicy(tguiWidget* thisWidget, tguiScrollbarPolicy value)
{
    DOWNCAST(thisWidget->This)->setVerticalScrollbarPolicy(static_cast<tgui::Scrollbar::Policy>(value));
}

tguiScrollbarPolicy tguiListView_getVerticalScrollbarPolicy(const tguiWidget* thisWidget)
{
    return static_cast<tguiScrollbarPolicy>(DOWNCAST(thisWidget->This)->getVerticalScrollbarPolicy());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setHorizontalScrollbarPolicy(tguiWidget* thisWidget, tguiScrollbarPolicy value)
{
    DOWNCAST(thisWidget->This)->setHorizontalScrollbarPolicy(static_cast<tgui::Scrollbar::Policy>(value));
}

tguiScrollbarPolicy tguiListView_getHorizontalScrollbarPolicy(const tguiWidget* thisWidget)
{
    return static_cast<tguiScrollbarPolicy>(DOWNCAST(thisWidget->This)->getHorizontalScrollbarPolicy());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setVerticalScrollbarValue(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setVerticalScrollbarValue(value);
}

unsigned int tguiListView_getVerticalScrollbarValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getVerticalScrollbarValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setHorizontalScrollbarValue(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setHorizontalScrollbarValue(value);
}

unsigned int tguiListView_getHorizontalScrollbarValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getHorizontalScrollbarValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setFixedIconSize(tguiWidget* thisWidget, tguiVector2f value)
{
    DOWNCAST(thisWidget->This)->setFixedIconSize({value.x, value.y});
}

tguiVector2f tguiListView_getFixedIconSize(const tguiWidget* thisWidget)
{
    const tgui::Vector2f value = DOWNCAST(thisWidget->This)->getFixedIconSize();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setResizableColumns(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setResizableColumns(value != 0);
}

tguiBool tguiListView_getResizableColumns(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getResizableColumns();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_sort(tguiWidget* widget, size_t index, tguiBool (*comp)(tguiUtf32, tguiUtf32))
{
    DOWNCAST(widget->This)->sort(index, [&comp](const tgui::String& str1, const tgui::String& str2){
        return comp(reinterpret_cast<tguiUtf32>(str1.c_str()), reinterpret_cast<tguiUtf32>(str2.c_str())) != 0;
    });
}
