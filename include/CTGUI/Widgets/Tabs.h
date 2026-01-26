// This file is generated, it should not be edited directly.

#ifndef CTGUI_TABS_H
#define CTGUI_TABS_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiTabs_create(void);

CTGUI_API void tguiTabs_setAutoSize(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiTabs_getAutoSize(const tguiWidget* thisWidget);

CTGUI_API void tguiTabs_setTabHeight(tguiWidget* thisWidget, float height);

CTGUI_API void tguiTabs_setMaximumTabWidth(tguiWidget* thisWidget, float value);
CTGUI_API float tguiTabs_getMaximumTabWidth(const tguiWidget* thisWidget);

CTGUI_API void tguiTabs_setMinimumTabWidth(tguiWidget* thisWidget, float value);
CTGUI_API float tguiTabs_getMinimumTabWidth(const tguiWidget* thisWidget);

#endif // CTGUI_TABS_H
