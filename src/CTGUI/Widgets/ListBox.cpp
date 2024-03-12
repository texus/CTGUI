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

size_t tguiListBox_addItem(tguiWidget* widget, tguiUtf32 item, tguiUtf32 id)
{
    return DOWNCAST(widget->This)->addItem(ctgui::toCppStr(item), ctgui::toCppStr(id));
}

tguiUtf32 tguiListBox_getItemById(const tguiWidget* widget, tguiUtf32 id)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getItemById(ctgui::toCppStr(id)));
}

tguiUtf32 tguiListBox_getItemByIndex(const tguiWidget* widget, size_t index)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getItemByIndex(index));
}

int tguiListBox_getIndexById(const tguiWidget* widget, tguiUtf32 id)
{
    return DOWNCAST(widget->This)->getIndexById(ctgui::toCppStr(id));
}

tguiUtf32 tguiListBox_getIdByIndex(const tguiWidget* widget, size_t index)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getIdByIndex(index));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListBox_setSelectedItem(tguiWidget* widget, tguiUtf32 item)
{
    return DOWNCAST(widget->This)->setSelectedItem(ctgui::toCppStr(item));
}

tguiBool tguiListBox_setSelectedItemById(tguiWidget* widget, tguiUtf32 id)
{
    return DOWNCAST(widget->This)->setSelectedItemById(ctgui::toCppStr(id));
}

tguiBool tguiListBox_setSelectedItemByIndex(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->setSelectedItemByIndex(index);
}

void tguiListBox_deselectItem(tguiWidget* widget)
{
    DOWNCAST(widget->This)->deselectItem();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListBox_removeItem(tguiWidget* widget, tguiUtf32 item)
{
    return DOWNCAST(widget->This)->removeItem(ctgui::toCppStr(item));
}

tguiBool tguiListBox_removeItemById(tguiWidget* widget, tguiUtf32 id)
{
    return DOWNCAST(widget->This)->removeItemById(ctgui::toCppStr(id));
}

tguiBool tguiListBox_removeItemByIndex(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->removeItemByIndex(index);
}

void tguiListBox_removeAllItems(tguiWidget* widget)
{
    DOWNCAST(widget->This)->removeAllItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiListBox_getSelectedItem(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getSelectedItem());
}

tguiUtf32 tguiListBox_getSelectedItemId(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getSelectedItemId());
}

int tguiListBox_getSelectedItemIndex(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getSelectedItemIndex();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListBox_changeItem(tguiWidget* widget, tguiUtf32 originalValue, tguiUtf32 newValue)
{
    return DOWNCAST(widget->This)->changeItem(ctgui::toCppStr(originalValue), ctgui::toCppStr(newValue));
}

tguiBool tguiListBox_changeItemById(tguiWidget* widget, tguiUtf32 id, tguiUtf32 newValue)
{
    return DOWNCAST(widget->This)->changeItemById(ctgui::toCppStr(id), ctgui::toCppStr(newValue));
}

tguiBool tguiListBox_changeItemByIndex(tguiWidget* widget, size_t index, tguiUtf32 newValue)
{
    return DOWNCAST(widget->This)->changeItemByIndex(index, ctgui::toCppStr(newValue));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiListBox_getItemCount(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getItemCount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const tguiUtf32* tguiListBox_getItems(const tguiWidget* widget, size_t* count)
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

const tguiUtf32* tguiListBox_getItemIds(const tguiWidget* widget, size_t* count)
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

void tguiListBox_setItemData(tguiWidget* widget, size_t index, void* data)
{
    DOWNCAST(widget->This)->setItemData(index, data);
}

void* tguiListBox_getItemData(const tguiWidget* widget, size_t index)
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

void tguiListBox_setItemHeight(tguiWidget* widget, unsigned int height)
{
    DOWNCAST(widget->This)->setItemHeight(height);
}

unsigned int tguiListBox_getItemHeight(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getItemHeight();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBox_setMaximumItems(tguiWidget* widget, size_t maxItems)
{
    DOWNCAST(widget->This)->setMaximumItems(maxItems);
}

size_t tguiListBox_getMaximumItems(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMaximumItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBox_setAutoScroll(tguiWidget* widget, tguiBool autoScroll)
{
    DOWNCAST(widget->This)->setAutoScroll(autoScroll != 0);
}

tguiBool tguiListBox_getAutoScroll(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getAutoScroll();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBox_setTextAlignment(tguiWidget* widget, tguiHorizontalAlignment alignment)
{
    DOWNCAST(widget->This)->setTextAlignment(static_cast<tgui::ListBox::TextAlignment>(alignment));
}

tguiHorizontalAlignment tguiListBox_getTextAlignment(const tguiWidget* widget)
{
    return static_cast<tguiHorizontalAlignment>(DOWNCAST(widget->This)->getTextAlignment());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBox_setScrollbarValue(tguiWidget* widget, unsigned int value)
{
    DOWNCAST(widget->This)->setScrollbarValue(value);
}

unsigned int tguiListBox_getScrollbarValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getScrollbarValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiListBox_contains(tguiWidget* widget, tguiUtf32 item)
{
    return DOWNCAST(widget->This)->contains(ctgui::toCppStr(item));
}

tguiBool tguiListBox_containsId(tguiWidget* widget, tguiUtf32 id)
{
    return DOWNCAST(widget->This)->containsId(ctgui::toCppStr(id));
}
