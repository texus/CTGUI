tguiWidget* tguiTabContainer_addTab(tguiWidget* widget, tguiUtf32 name, tguiBool select)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->addTab(ctgui::toCppStr(name), select != 0));
}

tguiWidget* tguiTabContainer_insertTab(tguiWidget* widget, size_t index, tguiUtf32 name, tguiBool select)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->insertTab(index, ctgui::toCppStr(name), select != 0));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int tguiTabContainer_getIndex(const tguiWidget* widget, const tguiWidget* panel)
{
    return DOWNCAST(widget->This)->getIndex(panel->This->cast<tgui::Panel>());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiTabContainer_getSelected(const tguiWidget* widget)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->getSelected());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiTabContainer_getPanel(const tguiWidget* widget, int index)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->getPanel(index));
}

tguiWidget* tguiTabContainer_getTabs(const tguiWidget* widget)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->getTabs());
}

