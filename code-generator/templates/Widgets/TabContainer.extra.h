CTGUI_API tguiWidget* tguiTabContainer_addTab(tguiWidget* widget, tguiUtf32 name, tguiBool select);
CTGUI_API tguiWidget* tguiTabContainer_insertTab(tguiWidget* widget, size_t index, tguiUtf32 name, tguiBool select);

CTGUI_API int tguiTabContainer_getIndex(const tguiWidget* widget, const tguiWidget* panel);

CTGUI_API tguiWidget* tguiTabContainer_getSelected(const tguiWidget* widget);

CTGUI_API tguiWidget* tguiTabContainer_getPanel(const tguiWidget* widget, int index);
CTGUI_API tguiWidget* tguiTabContainer_getTabs(const tguiWidget* widget);
