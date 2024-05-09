CTGUI_API tguiWidget* tguiPanelListBox_addItem(tguiWidget* widget, tguiUtf32 id);
CTGUI_API tguiWidget* tguiPanelListBox_addItemAtIndex(tguiWidget* widget, tguiUtf32 id, size_t index);

CTGUI_API tguiWidget* tguiPanelListBox_getPanelTemplate(tguiWidget* widget);

CTGUI_API tguiBool tguiPanelListBox_setSelectedItem(tguiWidget* widget, const tguiWidget* panelPtr);
CTGUI_API tguiWidget* tguiPanelListBox_getSelectedItem(const tguiWidget* widget);

CTGUI_API tguiBool tguiPanelListBox_removeItem(tguiWidget* widget, const tguiWidget* panelPtr);

CTGUI_API tguiWidget* tguiPanelListBox_getItemById(const tguiWidget* widget, tguiUtf32 id);
CTGUI_API tguiWidget* tguiPanelListBox_getItemByIndex(const tguiWidget* widget, size_t index);
CTGUI_API int tguiPanelListBox_getIndexById(const tguiWidget* widget, tguiUtf32 id);
CTGUI_API int tguiPanelListBox_getIndexByItem(const tguiWidget* widget, const tguiWidget* panelPtr);
CTGUI_API tguiUtf32 tguiPanelListBox_getIdByIndex(const tguiWidget* widget, size_t index);

CTGUI_API tguiWidget** tguiPanelListBox_getItems(const tguiWidget* widget, size_t* count); // tguiWidget_free must be called on each element in the returned array, count is set by the function to indicate the array length

CTGUI_API tguiBool tguiPanelListBox_contains(const tguiWidget* widget, const tguiWidget* panelPtr);
