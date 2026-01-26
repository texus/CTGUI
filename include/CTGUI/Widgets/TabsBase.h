// This file is generated, it should not be edited directly.

#ifndef CTGUI_TABSBASE_H
#define CTGUI_TABSBASE_H

#include <CTGUI/Widget.h>

CTGUI_API size_t tguiTabsBase_add(tguiWidget* thisWidget, tguiUtf32 text, tguiBool select);

CTGUI_API void tguiTabsBase_insert(tguiWidget* thisWidget, size_t index, tguiUtf32 text, tguiBool select);

CTGUI_API tguiUtf32 tguiTabsBase_getText(const tguiWidget* thisWidget, size_t index);

CTGUI_API tguiBool tguiTabsBase_changeText(tguiWidget* thisWidget, size_t index, tguiUtf32 text);

CTGUI_API void tguiTabsBase_deselect(tguiWidget* thisWidget);

CTGUI_API void tguiTabsBase_removeAll(tguiWidget* thisWidget);

CTGUI_API tguiUtf32 tguiTabsBase_getSelected(const tguiWidget* thisWidget);

CTGUI_API int tguiTabsBase_getSelectedIndex(const tguiWidget* thisWidget);

CTGUI_API int tguiTabsBase_getHoveredIndex(const tguiWidget* thisWidget);

CTGUI_API size_t tguiTabsBase_getTabsCount(const tguiWidget* thisWidget);

CTGUI_API void tguiTabsBase_setTabVisible(tguiWidget* thisWidget, size_t index, tguiBool visible);

CTGUI_API tguiBool tguiTabsBase_getTabVisible(const tguiWidget* thisWidget, size_t index);

CTGUI_API void tguiTabsBase_setTabEnabled(tguiWidget* thisWidget, size_t index, tguiBool visible);

CTGUI_API tguiBool tguiTabsBase_getTabEnabled(const tguiWidget* thisWidget, size_t index);

CTGUI_API tguiBool tguiTabsBase_selectByText(tguiWidget* thisWidget, tguiUtf32 text);

CTGUI_API tguiBool tguiTabsBase_selectByIndex(tguiWidget* thisWidget, size_t index);

CTGUI_API tguiBool tguiTabsBase_removeByText(tguiWidget* thisWidget, tguiUtf32 text);

CTGUI_API tguiBool tguiTabsBase_removeByIndex(tguiWidget* thisWidget, size_t index);

#endif // CTGUI_TABSBASE_H
