// This file is generated, it should not be edited directly.

#ifndef CTGUI_TABS_H
#define CTGUI_TABS_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiTabs_create(void);

CTGUI_API void tguiTabs_setAutoSize(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiTabs_getAutoSize(const tguiWidget* thisWidget);

CTGUI_API size_t tguiTabs_add(tguiWidget* thisWidget, tguiUtf32 text, tguiBool select);

CTGUI_API void tguiTabs_insert(tguiWidget* thisWidget, size_t index, tguiUtf32 text, tguiBool select);

CTGUI_API tguiUtf32 tguiTabs_getText(tguiWidget* thisWidget, size_t index);

CTGUI_API tguiBool tguiTabs_changeText(tguiWidget* thisWidget, size_t index, tguiUtf32 text);

CTGUI_API void tguiTabs_deselect(tguiWidget* thisWidget);

CTGUI_API void tguiTabs_removeAll(tguiWidget* thisWidget);

CTGUI_API tguiUtf32 tguiTabs_getSelected(tguiWidget* thisWidget);

CTGUI_API int tguiTabs_getSelectedIndex(tguiWidget* thisWidget);

CTGUI_API size_t tguiTabs_getTabsCount(tguiWidget* thisWidget);

CTGUI_API void tguiTabs_setTabVisible(tguiWidget* thisWidget, size_t index, tguiBool visible);

CTGUI_API tguiBool tguiTabs_getTabVisible(tguiWidget* thisWidget, size_t index);

CTGUI_API void tguiTabs_setTabEnabled(tguiWidget* thisWidget, size_t index, tguiBool visible);

CTGUI_API tguiBool tguiTabs_getTabEnabled(tguiWidget* thisWidget, size_t index);

CTGUI_API void tguiTabs_setMaximumTabWidth(tguiWidget* thisWidget, float value);
CTGUI_API float tguiTabs_getMaximumTabWidth(const tguiWidget* thisWidget);

CTGUI_API void tguiTabs_setMinimumTabWidth(tguiWidget* thisWidget, float value);
CTGUI_API float tguiTabs_getMinimumTabWidth(const tguiWidget* thisWidget);

CTGUI_API tguiBool tguiTabs_selectByText(tguiWidget* thisWidget, tguiUtf32 text);

CTGUI_API tguiBool tguiTabs_selectByIndex(tguiWidget* thisWidget, size_t index);

CTGUI_API tguiBool tguiTabs_removeByText(tguiWidget* thisWidget, tguiUtf32 text);

CTGUI_API tguiBool tguiTabs_removeByIndex(tguiWidget* thisWidget, size_t index);

#endif // CTGUI_TABS_H
