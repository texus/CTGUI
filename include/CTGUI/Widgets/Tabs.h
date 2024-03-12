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


#ifndef CTGUI_TABS_H
#define CTGUI_TABS_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiTabs_create(void);

CTGUI_API void tguiTabs_setAutoSize(tguiWidget* widget, tguiBool autoSize);
CTGUI_API tguiBool tguiTabs_getAutoSize(const tguiWidget* widget);

CTGUI_API size_t tguiTabs_add(tguiWidget* widget, tguiUtf32 text, tguiBool select);
CTGUI_API void tguiTabs_insert(tguiWidget* widget, size_t index, tguiUtf32 text, tguiBool select);
CTGUI_API tguiUtf32 tguiTabs_getText(const tguiWidget* widget, size_t index);

CTGUI_API tguiBool tguiTabs_changeText(tguiWidget* widget, size_t index, tguiUtf32 text);

CTGUI_API tguiBool tguiTabs_selectByText(tguiWidget* widget, tguiUtf32 text);
CTGUI_API tguiBool tguiTabs_selectByIndex(tguiWidget* widget, size_t index);
CTGUI_API void tguiTabs_deselect(tguiWidget* widget);

CTGUI_API tguiBool tguiTabs_removeByText(tguiWidget* widget, tguiUtf32 text);
CTGUI_API tguiBool tguiTabs_removeByIndex(tguiWidget* widget, size_t index);
CTGUI_API void tguiTabs_removeAll(tguiWidget* widget);

CTGUI_API tguiUtf32 tguiTabs_getSelected(const tguiWidget* widget);
CTGUI_API int tguiTabs_getSelectedIndex(const tguiWidget* widget);

CTGUI_API size_t tguiTabs_getTabsCount(const tguiWidget* widget);

CTGUI_API void tguiTabs_setTabVisible(tguiWidget* widget, size_t index, tguiBool visible);
CTGUI_API tguiBool tguiTabs_getTabVisible(const tguiWidget* widget, size_t index);

CTGUI_API void tguiTabs_setTabEnabled(tguiWidget* widget, size_t index, tguiBool enabled);
CTGUI_API tguiBool tguiTabs_getTabEnabled(const tguiWidget* widget, size_t index);

CTGUI_API void tguiTabs_setMaximumTabWidth(tguiWidget* widget, float maximumTabWidth);
CTGUI_API float tguiTabs_getMaximumTabWidth(const tguiWidget* widget);

CTGUI_API void tguiTabs_setMinimumTabWidth(tguiWidget* widget, float minimumTabWidth);
CTGUI_API float tguiTabs_getMinimumTabWidth(const tguiWidget* widget);

#endif // CTGUI_TABS_H

