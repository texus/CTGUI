// This file is generated, it should not be edited directly.

#ifndef CTGUI_TABCONTAINER_H
#define CTGUI_TABCONTAINER_H

#include <CTGUI/Widget.h>

typedef enum
{
    tguiTabContainerTabAlignTop,
    tguiTabContainerTabAlignBottom,
} tguiTabContainerTabAlign;

CTGUI_API tguiWidget* tguiTabContainer_create(void);

CTGUI_API tguiRenderer* tguiTabContainer_getTabsRenderer(const tguiWidget* thisWidget);
CTGUI_API tguiRenderer* tguiTabContainer_getTabsSharedRenderer(const tguiWidget* thisWidget);

CTGUI_API void tguiTabContainer_select(tguiWidget* thisWidget, size_t index);

CTGUI_API size_t tguiTabContainer_getPanelCount(const tguiWidget* thisWidget);

CTGUI_API int tguiTabContainer_getSelectedIndex(const tguiWidget* thisWidget);

CTGUI_API tguiUtf32 tguiTabContainer_getTabText(const tguiWidget* thisWidget, size_t index);

CTGUI_API tguiBool tguiTabContainer_changeTabText(tguiWidget* thisWidget, size_t index, tguiUtf32 text);

CTGUI_API void tguiTabContainer_setTabFixedSize(tguiWidget* thisWidget, float value);
CTGUI_API float tguiTabContainer_getTabFixedSize(const tguiWidget* thisWidget);

CTGUI_API void tguiTabContainer_setTabAlignment(tguiWidget* thisWidget, tguiTabContainerTabAlign value);
CTGUI_API tguiTabContainerTabAlign tguiTabContainer_getTabAlignment(const tguiWidget* thisWidget);

CTGUI_API void tguiTabContainer_setTabsHeight(tguiWidget* thisWidget, float height);

CTGUI_API void tguiTabContainer_setTabsHeightFromLayout(tguiWidget* thisWidget, const tguiLayout* layout);

CTGUI_API tguiBool tguiTabContainer_removeTabWithName(tguiWidget* thisWidget, tguiUtf32 text);

CTGUI_API tguiBool tguiTabContainer_removeTabWithIndex(tguiWidget* thisWidget, size_t index);

CTGUI_API tguiWidget* tguiTabContainer_addTab(tguiWidget* widget, tguiUtf32 name, tguiBool select);
CTGUI_API tguiWidget* tguiTabContainer_insertTab(tguiWidget* widget, size_t index, tguiUtf32 name, tguiBool select);

CTGUI_API int tguiTabContainer_getIndex(const tguiWidget* widget, const tguiWidget* panel);

CTGUI_API tguiWidget* tguiTabContainer_getSelected(const tguiWidget* widget);

CTGUI_API tguiWidget* tguiTabContainer_getPanel(const tguiWidget* widget, int index);
CTGUI_API tguiWidget* tguiTabContainer_getTabs(const tguiWidget* widget);

#endif // CTGUI_TABCONTAINER_H
