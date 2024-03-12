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

void tguiComboBox_setItemsToDisplay(tguiWidget* widget, size_t itemsToDisplay)
{
    DOWNCAST(widget->This)->setItemsToDisplay(itemsToDisplay);
}

size_t tguiComboBox_getItemsToDisplay(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getItemsToDisplay();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiComboBox_addItem(tguiWidget* widget, tguiUtf32 item, tguiUtf32 id)
{
    return DOWNCAST(widget->This)->addItem(ctgui::toCppStr(item), ctgui::toCppStr(id));
}

tguiUtf32 tguiComboBox_getItemById(const tguiWidget* widget, tguiUtf32 id)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getItemById(ctgui::toCppStr(id)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiComboBox_setSelectedItem(tguiWidget* widget, tguiUtf32 item)
{
    return DOWNCAST(widget->This)->setSelectedItem(ctgui::toCppStr(item));
}

tguiBool tguiComboBox_setSelectedItemById(tguiWidget* widget, tguiUtf32 id)
{
    return DOWNCAST(widget->This)->setSelectedItemById(ctgui::toCppStr(id));
}

tguiBool tguiComboBox_setSelectedItemByIndex(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->setSelectedItemByIndex(index);
}

void tguiComboBox_deselectItem(tguiWidget* widget)
{
    DOWNCAST(widget->This)->deselectItem();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiComboBox_removeItem(tguiWidget* widget, tguiUtf32 item)
{
    return DOWNCAST(widget->This)->removeItem(ctgui::toCppStr(item));
}

tguiBool tguiComboBox_removeItemById(tguiWidget* widget, tguiUtf32 id)
{
    return DOWNCAST(widget->This)->removeItemById(ctgui::toCppStr(id));
}

tguiBool tguiComboBox_removeItemByIndex(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->removeItemByIndex(index);
}

void tguiComboBox_removeAllItems(tguiWidget* widget)
{
    DOWNCAST(widget->This)->removeAllItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiComboBox_getSelectedItem(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getSelectedItem());
}

tguiUtf32 tguiComboBox_getSelectedItemId(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getSelectedItemId());
}

int tguiComboBox_getSelectedItemIndex(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getSelectedItemIndex();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiComboBox_changeItem(tguiWidget* widget, tguiUtf32 originalValue, tguiUtf32 newValue)
{
    return DOWNCAST(widget->This)->changeItem(ctgui::toCppStr(originalValue), ctgui::toCppStr(newValue));
}

tguiBool tguiComboBox_changeItemById(tguiWidget* widget, tguiUtf32 id, tguiUtf32 newValue)
{
    return DOWNCAST(widget->This)->changeItemById(ctgui::toCppStr(id), ctgui::toCppStr(newValue));
}

tguiBool tguiComboBox_changeItemByIndex(tguiWidget* widget, size_t index, tguiUtf32 newValue)
{
    return DOWNCAST(widget->This)->changeItemByIndex(index, ctgui::toCppStr(newValue));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiComboBox_getItemCount(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getItemCount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const tguiUtf32* tguiComboBox_getItems(const tguiWidget* widget, size_t* count)
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

const tguiUtf32* tguiComboBox_getItemIds(const tguiWidget* widget, size_t* count)
{
    static std::vector<tgui::String> cppIds;
    cppIds = DOWNCAST(widget->This)->getItemIds();

    static std::vector<tguiUtf32> cIds;
    cIds.clear();
    cIds.reserve(cppIds.size());
    for (const auto& id : cppIds)
        cIds.emplace_back(id.c_str());

    *count = cIds.size();
    return cIds.data();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBox_setMaximumItems(tguiWidget* widget, unsigned int maxItems)
{
    DOWNCAST(widget->This)->setMaximumItems(maxItems);
}

size_t tguiComboBox_getMaximumItems(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMaximumItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBox_setDefaultText(tguiWidget* widget, tguiUtf32 text)
{
    DOWNCAST(widget->This)->setDefaultText(ctgui::toCppStr(text));
}

tguiUtf32 tguiComboBox_getDefaultText(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getDefaultText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBox_setExpandDirection(tguiWidget* widget, tguiExpandDirection expandDirection)
{
    DOWNCAST(widget->This)->setExpandDirection(static_cast<tgui::ComboBox::ExpandDirection>(expandDirection));
}

tguiExpandDirection tguiComboBox_getExpandDirection(const tguiWidget* widget)
{
    return static_cast<tguiExpandDirection>(DOWNCAST(widget->This)->getExpandDirection());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiComboBox_contains(tguiWidget* widget, tguiUtf32 item)
{
    return DOWNCAST(widget->This)->contains(ctgui::toCppStr(item));
}

tguiBool tguiComboBox_containsId(tguiWidget* widget, tguiUtf32 id)
{
    return DOWNCAST(widget->This)->containsId(ctgui::toCppStr(id));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBox_setChangeItemOnScroll(tguiWidget* widget, tguiBool changeOnScroll)
{
    DOWNCAST(widget->This)->setChangeItemOnScroll(changeOnScroll != 0);
}

tguiBool tguiComboBox_getChangeItemOnScroll(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getChangeItemOnScroll();
}
