// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/PanelListBox.h>
#include <CTGUI/LayoutStruct.hpp>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/PanelListBox.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::PanelListBox>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiPanelListBox_create(void)
{
    return ctgui::addWidgetRef(tgui::PanelListBox::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelListBox_deselectItem(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->deselectItem();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelListBox_removeAllItems(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->removeAllItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiPanelListBox_setSelectedItemById(tguiWidget* thisWidget, tguiUtf32 id)
{
    return DOWNCAST(thisWidget->This)->setSelectedItemById(ctgui::toCppStr(id));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiPanelListBox_setSelectedItemByIndex(tguiWidget* thisWidget, size_t index)
{
    return DOWNCAST(thisWidget->This)->setSelectedItemByIndex(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiPanelListBox_removeItemById(tguiWidget* thisWidget, tguiUtf32 id)
{
    return DOWNCAST(thisWidget->This)->removeItemById(ctgui::toCppStr(id));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiPanelListBox_removeItemByIndex(tguiWidget* thisWidget, size_t index)
{
    return DOWNCAST(thisWidget->This)->removeItemByIndex(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiPanelListBox_getSelectedItemId(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getSelectedItemId());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int tguiPanelListBox_getSelectedItemIndex(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getSelectedItemIndex();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int tguiPanelListBox_getHoveredItemIndex(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getHoveredItemIndex();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiPanelListBox_getItemCount(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getItemCount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const tguiUtf32* tguiPanelListBox_getItemIds(const tguiWidget* thisWidget, size_t* returnCount)
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

void tguiPanelListBox_setMaximumItems(tguiWidget* thisWidget, size_t value)
{
    DOWNCAST(thisWidget->This)->setMaximumItems(value);
}

size_t tguiPanelListBox_getMaximumItems(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMaximumItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiPanelListBox_containsId(const tguiWidget* thisWidget, tguiUtf32 id)
{
    return DOWNCAST(thisWidget->This)->containsId(ctgui::toCppStr(id));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const tguiLayout* tguiPanelListBox_getItemsWidth(const tguiWidget* thisWidget)
{
    return new tguiLayout(DOWNCAST(thisWidget->This)->getItemsWidth());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelListBox_setItemsHeight(tguiWidget* thisWidget, const tguiLayout* value)
{
    DOWNCAST(thisWidget->This)->setItemsHeight(value->This);
}

const tguiLayout* tguiPanelListBox_getItemsHeight(const tguiWidget* thisWidget)
{
    return new tguiLayout(DOWNCAST(thisWidget->This)->getItemsHeight());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiPanelListBox_addItem(tguiWidget* widget, tguiUtf32 id)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->addItem(ctgui::toCppStr(id)));
}

tguiWidget* tguiPanelListBox_addItemAtIndex(tguiWidget* widget, tguiUtf32 id, size_t index)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->addItem(ctgui::toCppStr(id), static_cast<int>(index)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiPanelListBox_getPanelTemplate(tguiWidget* widget)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->getPanelTemplate());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiPanelListBox_setSelectedItem(tguiWidget* widget, const tguiWidget* panelPtr)
{
    return DOWNCAST(widget->This)->setSelectedItem(panelPtr->This->cast<tgui::Panel>());
}

tguiWidget* tguiPanelListBox_getSelectedItem(const tguiWidget* widget)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->getSelectedItem());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiPanelListBox_removeItem(tguiWidget* widget, const tguiWidget* panelPtr)
{
    return DOWNCAST(widget->This)->removeItem(panelPtr->This->cast<tgui::Panel>());
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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiPanelListBox_contains(const tguiWidget* widget, const tguiWidget* panelPtr)
{
    return DOWNCAST(widget->This)->contains(panelPtr->This->cast<tgui::Panel>());
}
