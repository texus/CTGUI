/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2018 Bruno Van de Velde (vdv_b@tgui.eu)
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
#include <CTGUI/WidgetStruct.h>

#include <TGUI/Widgets/ListBox.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ListBox>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiListBox_create(void)
{
    return new tguiWidget(tgui::ListBox::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiListBox_addItem(tguiWidget* widget, const sfUint32* item, const sfUint32* id)
{
    return DOWNCAST(widget->This)->addItem(item, id);
}

const sfUint32* tguiListBox_getItemById(const tguiWidget* widget, const sfUint32* id)
{
    static sf::String item;
    item = DOWNCAST(widget->This)->getItemById(id);
    return item.getData();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiListBox_setSelectedItem(tguiWidget* widget, const sfUint32* item)
{
    return DOWNCAST(widget->This)->setSelectedItem(item);
}

sfBool tguiListBox_setSelectedItemById(tguiWidget* widget, const sfUint32* id)
{
    return DOWNCAST(widget->This)->setSelectedItemById(id);
}

sfBool tguiListBox_setSelectedItemByIndex(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->setSelectedItemByIndex(index);
}

void tguiListBox_deselectItem(tguiWidget* widget)
{
    DOWNCAST(widget->This)->deselectItem();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiListBox_removeItem(tguiWidget* widget, const sfUint32* item)
{
    return DOWNCAST(widget->This)->removeItem(item);
}

sfBool tguiListBox_removeItemById(tguiWidget* widget, const sfUint32* id)
{
    return DOWNCAST(widget->This)->removeItemById(id);
}

sfBool tguiListBox_removeItemByIndex(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->removeItemByIndex(index);
}

void tguiListBox_removeAllItems(tguiWidget* widget)
{
    DOWNCAST(widget->This)->removeAllItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const sfUint32* tguiListBox_getSelectedItem(const tguiWidget* widget)
{
    static sf::String item;
    item = DOWNCAST(widget->This)->getSelectedItem();
    return item.getData();
}

const sfUint32* tguiListBox_getSelectedItemId(const tguiWidget* widget)
{
    static sf::String id;
    id = DOWNCAST(widget->This)->getSelectedItemId();
    return id.getData();
}

int tguiListBox_getSelectedItemIndex(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getSelectedItemIndex();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiListBox_changeItem(tguiWidget* widget, const sfUint32* originalValue, const sfUint32* newValue)
{
    return DOWNCAST(widget->This)->changeItem(originalValue, newValue);
}

sfBool tguiListBox_changeItemById(tguiWidget* widget, const sfUint32* id, const sfUint32* newValue)
{
    return DOWNCAST(widget->This)->changeItemById(id, newValue);
}

sfBool tguiListBox_changeItemByIndex(tguiWidget* widget, size_t index, const sfUint32* newValue)
{
    return DOWNCAST(widget->This)->changeItemByIndex(index, newValue);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiListBox_getItemCount(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getItemCount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const sfUint32** tguiListBox_getItems(const tguiWidget* widget, size_t* count)
{
    auto items = DOWNCAST(widget->This)->getItems();

    static std::vector<const sfUint32*> cItems;
    cItems.resize(items.size());

    for (std::size_t i = 0; i < items.size(); ++i)
        cItems[i] = items[i].getData();

    *count = cItems.size();
    return cItems.data();
}

const sfUint32** tguiListBox_getItemIds(const tguiWidget* widget, size_t* count)
{
    auto ids = DOWNCAST(widget->This)->getItemIds();

    static std::vector<const sfUint32*> cIds;
    cIds.resize(ids.size());

    for (std::size_t i = 0; i < ids.size(); ++i)
        cIds[i] = ids[i].getData();

    *count = cIds.size();
    return cIds.data();
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

void tguiListBox_setTextSize(tguiWidget* widget, unsigned int size)
{
    DOWNCAST(widget->This)->setTextSize(size);
}

unsigned int tguiListBox_getTextSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getTextSize();
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

void tguiListBox_setAutoScroll(tguiWidget* widget, sfBool autoScroll)
{
    DOWNCAST(widget->This)->setAutoScroll(autoScroll != 0);
}

sfBool tguiListBox_getAutoScroll(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getAutoScroll();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiListBox_contains(tguiWidget* widget, const sfUint32* item)
{
    return DOWNCAST(widget->This)->contains(item);
}

sfBool tguiListBox_containsId(tguiWidget* widget, const sfUint32* id)
{
    return DOWNCAST(widget->This)->containsId(id);
}
