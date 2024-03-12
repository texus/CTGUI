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


#ifndef CTGUI_TAB_CONTAINER_H
#define CTGUI_TAB_CONTAINER_H

#include <CTGUI/Widget.h>

typedef enum
{
    tguiTabContainerTabAlignTop = 0,         //!< Tabs are above panels
    tguiTabContainerTabAlignBottom = 1 << 0  //!< Tabs are below panels
} tguiTabContainerTabAlign;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiWidget* tguiTabContainer_create(void);

CTGUI_API tguiRenderer* tguiTabContainer_getTabsRenderer(const tguiWidget* widget);
CTGUI_API tguiRenderer* tguiTabContainer_getTabsSharedRenderer(const tguiWidget* widget);

CTGUI_API void tguiTabContainer_setTansHeight(tguiWidget* widget, float height);
CTGUI_API void tguiTabContainer_setTabsHeightFromLayout(tguiWidget* widget, tguiLayout* layout);

CTGUI_API tguiWidget* tguiTabContainer_addTab(tguiWidget* widget, tguiUtf32 name, tguiBool select);
CTGUI_API tguiWidget* tguiTabContainer_insertTab(tguiWidget* widget, size_t index, tguiUtf32 name, tguiBool select);

CTGUI_API tguiBool tguiTabContainer_removeTabWithName(tguiWidget* widget, tguiUtf32 text);
CTGUI_API tguiBool tguiTabContainer_removeTabWithIndex(tguiWidget* widget, size_t index);

CTGUI_API void tguiTabContainer_select(tguiWidget* widget, size_t index);

CTGUI_API size_t tguiTabContainer_getPanelCount(const tguiWidget* widget);

CTGUI_API int tguiTabContainer_getIndex(const tguiWidget* widget, const tguiWidget* panel);

CTGUI_API tguiWidget* tguiTabContainer_getSelected(const tguiWidget* widget);
CTGUI_API int tguiTabContainer_getSelectedIndex(const tguiWidget* widget);

CTGUI_API tguiWidget* tguiTabContainer_getPanel(const tguiWidget* widget, int index);
CTGUI_API tguiWidget* tguiTabContainer_getTabs(const tguiWidget* widget);
CTGUI_API tguiUtf32 tguiTabContainer_getTabText(const tguiWidget* widget, size_t index);

CTGUI_API tguiBool tguiTabContainer_changeTabText(tguiWidget* widget, size_t index, tguiUtf32 text);

CTGUI_API void tguiTabContainer_setTabAlignment(tguiWidget* widget, tguiTabContainerTabAlign align);
CTGUI_API tguiTabContainerTabAlign tguiTabContainer_getTabAlignment(const tguiWidget* widget);

CTGUI_API void tguiTabContainer_setTabFixedSize(tguiWidget* widget, float fixedSize);
CTGUI_API float tguiTabContainer_getTabFixedSize(const tguiWidget* widget);

#endif // CTGUI_TAB_CONTAINER_H

