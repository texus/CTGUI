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
