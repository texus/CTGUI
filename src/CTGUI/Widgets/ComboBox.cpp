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


#include <CTGUI/Widgets/ComboBox.h>
#include <CTGUI/WidgetStruct.h>

#include <TGUI/Widgets/ComboBox.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ComboBox>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiComboBox_create(void)
{
    return new tguiWidget(tgui::ComboBox::create());
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

sfBool tguiComboBox_addItem(tguiWidget* widget, const sfUint32* item, const sfUint32* id)
{
    return DOWNCAST(widget->This)->addItem(item, id);
}

const sfUint32* tguiComboBox_getItemById(const tguiWidget* widget, const sfUint32* id)
{
    return returnString(DOWNCAST(widget->This)->getItemById(id));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiComboBox_setSelectedItem(tguiWidget* widget, const sfUint32* item)
{
    return DOWNCAST(widget->This)->setSelectedItem(item);
}

sfBool tguiComboBox_setSelectedItemById(tguiWidget* widget, const sfUint32* id)
{
    return DOWNCAST(widget->This)->setSelectedItemById(id);
}

sfBool tguiComboBox_setSelectedItemByIndex(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->setSelectedItemByIndex(index);
}

void tguiComboBox_deselectItem(tguiWidget* widget)
{
    DOWNCAST(widget->This)->deselectItem();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiComboBox_removeItem(tguiWidget* widget, const sfUint32* item)
{
    return DOWNCAST(widget->This)->removeItem(item);
}

sfBool tguiComboBox_removeItemById(tguiWidget* widget, const sfUint32* id)
{
    return DOWNCAST(widget->This)->removeItemById(id);
}

sfBool tguiComboBox_removeItemByIndex(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->removeItemByIndex(index);
}

void tguiComboBox_removeAllItems(tguiWidget* widget)
{
    DOWNCAST(widget->This)->removeAllItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const sfUint32* tguiComboBox_getSelectedItem(const tguiWidget* widget)
{
    return returnString(DOWNCAST(widget->This)->getSelectedItem());
}

const sfUint32* tguiComboBox_getSelectedItemId(const tguiWidget* widget)
{
    return returnString(DOWNCAST(widget->This)->getSelectedItemId());
}

int tguiComboBox_getSelectedItemIndex(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getSelectedItemIndex();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiComboBox_changeItem(tguiWidget* widget, const sfUint32* originalValue, const sfUint32* newValue)
{
    return DOWNCAST(widget->This)->changeItem(originalValue, newValue);
}

sfBool tguiComboBox_changeItemById(tguiWidget* widget, const sfUint32* id, const sfUint32* newValue)
{
    return DOWNCAST(widget->This)->changeItemById(id, newValue);
}

sfBool tguiComboBox_changeItemByIndex(tguiWidget* widget, size_t index, const sfUint32* newValue)
{
    return DOWNCAST(widget->This)->changeItemByIndex(index, newValue);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiComboBox_getItemCount(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getItemCount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const sfUint32** tguiComboBox_getItems(const tguiWidget* widget, size_t* count)
{
    auto items = DOWNCAST(widget->This)->getItems();

    static std::vector<const sfUint32*> cItems;
    cItems.resize(items.size());

    for (std::size_t i = 0; i < items.size(); ++i)
        cItems[i] = items[i].getData();

    *count = cItems.size();
    return cItems.data();
}

const sfUint32** tguiComboBox_getItemIds(const tguiWidget* widget, size_t* count)
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

void tguiComboBox_setMaximumItems(tguiWidget* widget, unsigned int maxItems)
{
    DOWNCAST(widget->This)->setMaximumItems(maxItems);
}

size_t tguiComboBox_getMaximumItems(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMaximumItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API void tguiComboBox_setDefaultText(tguiWidget* widget, const sfUint32* text)
{
    DOWNCAST(widget->This)->setDefaultText(text);
}

CTGUI_API const sfUint32* tguiComboBox_getDefaultText(const tguiWidget* widget)
{
    return returnString(DOWNCAST(widget->This)->getDefaultText());
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

sfBool tguiComboBox_contains(tguiWidget* widget, const sfUint32* item)
{
    return DOWNCAST(widget->This)->contains(item);
}

sfBool tguiComboBox_containsId(tguiWidget* widget, const sfUint32* id)
{
    return DOWNCAST(widget->This)->containsId(id);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBox_setChangeItemOnScroll(tguiWidget* widget, sfBool changeOnScroll)
{
    DOWNCAST(widget->This)->setChangeItemOnScroll(changeOnScroll != 0);
}

sfBool tguiComboBox_getChangeItemOnScroll(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getChangeItemOnScroll();
}
