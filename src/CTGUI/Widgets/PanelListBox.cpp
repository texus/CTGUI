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


#include <CTGUI/Widgets/PanelListBox.h>
#include <CTGUI/WidgetStruct.hpp>
#include <CTGUI/LayoutStruct.hpp>

#include <TGUI/Widgets/PanelListBox.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::PanelListBox>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiPanelListBox_create(void)
{
    return ctgui::addWidgetRef(tgui::PanelListBox::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiPanelListBox_addItem(tguiWidget* widget, tguiUtf32 id)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->addItem(ctgui::toCppStr(id)));
}

tguiWidget* tguiPanelListBox_addItemAtIndex(tguiWidget* widget, tguiUtf32 id, size_t index)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->addItem(ctgui::toCppStr(id), index));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiPanelListBox_getPanelTemplate(tguiWidget* widget)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->getPanelTemplate());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiLayout* tguiPanelListBox_getItemsWidth(const tguiWidget* widget)
{
    return new tguiLayout(DOWNCAST(widget->This)->getItemsWidth());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelListBox_setItemsHeight(tguiWidget* widget, const tguiLayout* height)
{
    DOWNCAST(widget->This)->setItemsHeight(height->This);
}

tguiLayout* tguiPanelListBox_getItemsHeight(const tguiWidget* widget)
{
    return new tguiLayout(DOWNCAST(widget->This)->getItemsHeight());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiPanelListBox_setSelectedItem(tguiWidget* widget, const tguiWidget* panelPtr)
{
    return DOWNCAST(widget->This)->setSelectedItem(panelPtr->This->cast<tgui::Panel>());
}

tguiBool tguiPanelListBox_setSelectedItemById(tguiWidget* widget, tguiUtf32 id)
{
    return DOWNCAST(widget->This)->setSelectedItemById(ctgui::toCppStr(id));
}

tguiBool tguiPanelListBox_setSelectedItemByIndex(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->setSelectedItemByIndex(index);
}

void tguiPanelListBox_deselectItem(tguiWidget* widget)
{
    DOWNCAST(widget->This)->deselectItem();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiPanelListBox_removeItem(tguiWidget* widget, const tguiWidget* panelPtr)
{
    return DOWNCAST(widget->This)->removeItem(panelPtr->This->cast<tgui::Panel>());
}

tguiBool tguiPanelListBox_removeItemById(tguiWidget* widget, tguiUtf32 id)
{
    return DOWNCAST(widget->This)->removeItemById(ctgui::toCppStr(id));
}

tguiBool tguiPanelListBox_removeItemByIndex(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->removeItemByIndex(index);
}

void tguiPanelListBox_removeAllItems(tguiWidget* widget)
{
    return DOWNCAST(widget->This)->removeAllItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiPanelListBox_getItemById(const tguiWidget* widget, tguiUtf32 id)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->getItemById(ctgui::toCppStr(id)));
}

tguiWidget* tguiPanelListBox_getItemByIndex(const tguiWidget* widget, size_t index)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->getItemByIndex(index));
}

int tguiPanelListBox_getIndexById(const tguiWidget* widget, tguiUtf32 id)
{
    return DOWNCAST(widget->This)->getIndexById(ctgui::toCppStr(id));
}

int tguiPanelListBox_getIndexByItem(const tguiWidget* widget, const tguiWidget* panelPtr)

{
    return DOWNCAST(widget->This)->getIndexByItem(panelPtr->This->cast<tgui::Panel>());
}

tguiUtf32 tguiPanelListBox_getIdByIndex(const tguiWidget* widget, size_t index)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getIdByIndex(index));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiPanelListBox_getSelectedItem(const tguiWidget* widget)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->getSelectedItem());
}

tguiUtf32 tguiPanelListBox_getSelectedItemId(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getSelectedItemId());
}

int tguiPanelListBox_getSelectedItemIndex(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getSelectedItemIndex();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiPanelListBox_getItemCount(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getItemCount();
}

tguiWidget** tguiPanelListBox_getItems(const tguiWidget* widget, size_t* count)
{
    const auto& cppPanels = DOWNCAST(widget->This)->getItems();

    static std::vector<tguiWidget*> cPanels;
    cPanels.clear();
    cPanels.reserve(cppPanels.size());
    for (const auto& cppPanel : cppPanels)
        cPanels.emplace_back(ctgui::addWidgetRef(cppPanel));

    *count = cPanels.size();
    return cPanels.data();
}

const tguiUtf32* tguiPanelListBox_getItemIds(const tguiWidget* widget, size_t* count)
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

void tguiPanelListBox_setMaximumItems(tguiWidget* widget, size_t maximumItems)
{
    DOWNCAST(widget->This)->setMaximumItems(maximumItems);
}

size_t tguiPanelListBox_getMaximumItems(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMaximumItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiPanelListBox_contains(const tguiWidget* widget, const tguiWidget* panelPtr)
{
    return DOWNCAST(widget->This)->contains(panelPtr->This->cast<tgui::Panel>());
}

tguiBool tguiPanelListBox_containsId(const tguiWidget* widget, tguiUtf32 id)
{
    return DOWNCAST(widget->This)->containsId(ctgui::toCppStr(id));
}
