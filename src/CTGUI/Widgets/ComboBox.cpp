// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/ComboBox.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/ComboBox.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ComboBox>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiComboBox_create(void)
{
    return ctgui::addWidgetRef(tgui::ComboBox::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBox_setItemsToDisplay(tguiWidget* thisWidget, size_t value)
{
    DOWNCAST(thisWidget->This)->setItemsToDisplay(value);
}

size_t tguiComboBox_getItemsToDisplay(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getItemsToDisplay();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiComboBox_addItem(tguiWidget* thisWidget, tguiUtf32 item, tguiUtf32 id)
{
    return DOWNCAST(thisWidget->This)->addItem(ctgui::toCppStr(item), ctgui::toCppStr(id));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiComboBox_getItemById(const tguiWidget* thisWidget, tguiUtf32 id)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getItemById(ctgui::toCppStr(id)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const tguiUtf32* tguiComboBox_getItems(const tguiWidget* thisWidget, size_t* returnCount)
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

const tguiUtf32* tguiComboBox_getItemIds(const tguiWidget* thisWidget, size_t* returnCount)
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

tguiBool tguiComboBox_setSelectedItem(tguiWidget* thisWidget, tguiUtf32 item)
{
    return DOWNCAST(thisWidget->This)->setSelectedItem(ctgui::toCppStr(item));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiComboBox_setSelectedItemById(tguiWidget* thisWidget, tguiUtf32 item)
{
    return DOWNCAST(thisWidget->This)->setSelectedItemById(ctgui::toCppStr(item));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiComboBox_setSelectedItemByIndex(tguiWidget* thisWidget, size_t index)
{
    return DOWNCAST(thisWidget->This)->setSelectedItemByIndex(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBox_deselectItem(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->deselectItem();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiComboBox_removeItem(tguiWidget* thisWidget, tguiUtf32 item)
{
    return DOWNCAST(thisWidget->This)->removeItem(ctgui::toCppStr(item));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiComboBox_removeItemById(tguiWidget* thisWidget, tguiUtf32 id)
{
    return DOWNCAST(thisWidget->This)->removeItemById(ctgui::toCppStr(id));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiComboBox_removeItemByIndex(tguiWidget* thisWidget, size_t index)
{
    return DOWNCAST(thisWidget->This)->removeItemByIndex(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBox_removeAllItems(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->removeAllItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiComboBox_getSelectedItem(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getSelectedItem());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiComboBox_getSelectedItemId(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getSelectedItemId());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int tguiComboBox_getSelectedItemIndex(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getSelectedItemIndex();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiComboBox_changeItem(tguiWidget* thisWidget, tguiUtf32 originalValue, tguiUtf32 newValue)
{
    return DOWNCAST(thisWidget->This)->changeItem(ctgui::toCppStr(originalValue), ctgui::toCppStr(newValue));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiComboBox_changeItemById(tguiWidget* thisWidget, tguiUtf32 id, tguiUtf32 newValue)
{
    return DOWNCAST(thisWidget->This)->changeItemById(ctgui::toCppStr(id), ctgui::toCppStr(newValue));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiComboBox_changeItemByIndex(tguiWidget* thisWidget, size_t index, tguiUtf32 newValue)
{
    return DOWNCAST(thisWidget->This)->changeItemByIndex(index, ctgui::toCppStr(newValue));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiComboBox_getItemCount(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getItemCount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBox_setItemData(tguiWidget* thisWidget, size_t index, void* data)
{
    DOWNCAST(thisWidget->This)->setItemData(index, data);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void* tguiComboBox_getItemData(const tguiWidget* thisWidget, size_t index)
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

void tguiComboBox_setMaximumItems(tguiWidget* thisWidget, size_t value)
{
    DOWNCAST(thisWidget->This)->setMaximumItems(value);
}

size_t tguiComboBox_getMaximumItems(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMaximumItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBox_setDefaultText(tguiWidget* thisWidget, tguiUtf32 value)
{
    DOWNCAST(thisWidget->This)->setDefaultText(ctgui::toCppStr(value));
}

tguiUtf32 tguiComboBox_getDefaultText(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getDefaultText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBox_setExpandDirection(tguiWidget* thisWidget, tguiComboBoxExpandDirection value)
{
    DOWNCAST(thisWidget->This)->setExpandDirection(static_cast<tgui::ComboBox::ExpandDirection>(value));
}

tguiComboBoxExpandDirection tguiComboBox_getExpandDirection(const tguiWidget* thisWidget)
{
    return static_cast<tguiComboBoxExpandDirection>(DOWNCAST(thisWidget->This)->getExpandDirection());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBox_setChangeItemOnScroll(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setChangeItemOnScroll(value != 0);
}

tguiBool tguiComboBox_getChangeItemOnScroll(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getChangeItemOnScroll();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiComboBox_contains(const tguiWidget* thisWidget, tguiUtf32 item)
{
    return DOWNCAST(thisWidget->This)->contains(ctgui::toCppStr(item));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiComboBox_containsId(const tguiWidget* thisWidget, tguiUtf32 id)
{
    return DOWNCAST(thisWidget->This)->containsId(ctgui::toCppStr(id));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
