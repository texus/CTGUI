// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/ListBox.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/ListBox.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ListBox>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiListBox_create(void)
{
    return ctgui::addWidgetRef(tgui::ListBox::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiListBox_addItem(tguiWidget* thisWidget, tguiUtf32 item, tguiUtf32 id)
{
    return DOWNCAST(thisWidget->This)->addItem(ctgui::toCppStr(item), ctgui::toCppStr(id));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiListBox_getItemById(const tguiWidget* thisWidget, tguiUtf32 id)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getItemById(ctgui::toCppStr(id)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiListBox_getItemByIndex(const tguiWidget* thisWidget, size_t index)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getItemByIndex(index));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int tguiListBox_getIndexById(const tguiWidget* thisWidget, tguiUtf32 id)
{
    return DOWNCAST(thisWidget->This)->getIndexById(ctgui::toCppStr(id));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiListBox_getIdByIndex(const tguiWidget* thisWidget, size_t index)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getIdByIndex(index));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListBox_setSelectedItem(tguiWidget* thisWidget, tguiUtf32 item)
{
    return DOWNCAST(thisWidget->This)->setSelectedItem(ctgui::toCppStr(item));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListBox_setSelectedItemById(tguiWidget* thisWidget, tguiUtf32 id)
{
    return DOWNCAST(thisWidget->This)->setSelectedItemById(ctgui::toCppStr(id));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListBox_setSelectedItemByIndex(tguiWidget* thisWidget, size_t index)
{
    return DOWNCAST(thisWidget->This)->setSelectedItemByIndex(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBox_deselectItem(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->deselectItem();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListBox_removeItem(tguiWidget* thisWidget, tguiUtf32 item)
{
    return DOWNCAST(thisWidget->This)->removeItem(ctgui::toCppStr(item));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListBox_removeItemById(tguiWidget* thisWidget, tguiUtf32 id)
{
    return DOWNCAST(thisWidget->This)->removeItemById(ctgui::toCppStr(id));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListBox_removeItemByIndex(tguiWidget* thisWidget, size_t index)
{
    return DOWNCAST(thisWidget->This)->removeItemByIndex(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBox_removeAllItems(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->removeAllItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiListBox_getSelectedItem(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getSelectedItem());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiListBox_getSelectedItemId(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getSelectedItemId());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int tguiListBox_getSelectedItemIndex(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getSelectedItemIndex();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int tguiListBox_getHoveredItemIndex(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getHoveredItemIndex();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListBox_changeItem(tguiWidget* thisWidget, tguiUtf32 originalValue, tguiUtf32 newValue)
{
    return DOWNCAST(thisWidget->This)->changeItem(ctgui::toCppStr(originalValue), ctgui::toCppStr(newValue));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListBox_changeItemById(tguiWidget* thisWidget, tguiUtf32 id, tguiUtf32 newValue)
{
    return DOWNCAST(thisWidget->This)->changeItemById(ctgui::toCppStr(id), ctgui::toCppStr(newValue));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListBox_changeItemByIndex(tguiWidget* thisWidget, size_t index, tguiUtf32 newValue)
{
    return DOWNCAST(thisWidget->This)->changeItemByIndex(index, ctgui::toCppStr(newValue));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiListBox_getItemCount(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getItemCount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const tguiUtf32* tguiListBox_getItems(const tguiWidget* thisWidget, size_t* returnCount)
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

const tguiUtf32* tguiListBox_getItemIds(const tguiWidget* thisWidget, size_t* returnCount)
{
    static std::vector<tgui::String> cppStrings;
    cppStrings = DOWNCAST(thisWidget->This)->getItemIds();

    static std::vector<tguiUtf32> cStrings;
    cStrings.clear();
    cStrings.reserve(cppStrings.size());
    for (const auto& item : cppStrings)
        cStrings.emplace_back(reinterpret_cast<tguiUtf32>(item.c_str()));

    *returnCount = cStrings.size();
    return cStrings.data();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBox_setItemData(tguiWidget* thisWidget, size_t index, void* data)
{
    DOWNCAST(thisWidget->This)->setItemData(index, data);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void* tguiListBox_getItemData(const tguiWidget* thisWidget, size_t index)
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

void tguiListBox_setItemHeight(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setItemHeight(value);
}

unsigned int tguiListBox_getItemHeight(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getItemHeight();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBox_setMaximumItems(tguiWidget* thisWidget, size_t value)
{
    DOWNCAST(thisWidget->This)->setMaximumItems(value);
}

size_t tguiListBox_getMaximumItems(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMaximumItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBox_setAutoScroll(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setAutoScroll(value != 0);
}

tguiBool tguiListBox_getAutoScroll(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getAutoScroll();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBox_setTextAlignment(tguiWidget* thisWidget, tguiHorizontalAlignment value)
{
    DOWNCAST(thisWidget->This)->setTextAlignment(static_cast<tgui::HorizontalAlignment>(value));
}

tguiHorizontalAlignment tguiListBox_getTextAlignment(const tguiWidget* thisWidget)
{
    return static_cast<tguiHorizontalAlignment>(DOWNCAST(thisWidget->This)->getTextAlignment());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListBox_contains(const tguiWidget* thisWidget, tguiUtf32 item)
{
    return DOWNCAST(thisWidget->This)->contains(ctgui::toCppStr(item));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListBox_containsId(const tguiWidget* thisWidget, tguiUtf32 id)
{
    return DOWNCAST(thisWidget->This)->containsId(ctgui::toCppStr(id));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
