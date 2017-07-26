/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2016 Bruno Van de Velde (vdv_b@tgui.eu)
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

#include <CTGUI/Config.h>
#include <CTGUI/Widget.h>
#include <stddef.h>

CTGUI_API tguiWidget* tguiTabs_create(void);

CTGUI_API void tguiTabs_setAutoSize(tguiWidget* widget, sfBool autoSize);
CTGUI_API sfBool tguiTabs_getAutoSize(const tguiWidget* widget);

CTGUI_API size_t tguiTabs_add(tguiWidget* widget, const sfUint32* text, sfBool select);
CTGUI_API void tguiTabs_insert(tguiWidget* widget, size_t index, const sfUint32* text, sfBool select);
CTGUI_API const sfUint32* tguiTabs_getText(const tguiWidget* widget, size_t index);

CTGUI_API sfBool tguiTabs_changeText(tguiWidget* widget, size_t index, const sfUint32* text);

CTGUI_API void tguiTabs_selectByText(tguiWidget* widget, const sfUint32* text);
CTGUI_API void tguiTabs_selectByIndex(tguiWidget* widget, size_t index);
CTGUI_API void tguiTabs_deselect(tguiWidget* widget);

CTGUI_API void tguiTabs_removeByText(tguiWidget* widget, const sfUint32* text);
CTGUI_API void tguiTabs_removeByIndex(tguiWidget* widget, size_t index);
CTGUI_API void tguiTabs_removeAll(tguiWidget* widget);

CTGUI_API const sfUint32* tguiTabs_getSelected(const tguiWidget* widget);
CTGUI_API int tguiTabs_getSelectedIndex(const tguiWidget* widget);

CTGUI_API size_t tguiTabs_getTabsCount(const tguiWidget* widget);

CTGUI_API void tguiTabs_setTextSize(tguiWidget* widget, unsigned int textSize);
CTGUI_API unsigned int tguiTabs_getTextSize(const tguiWidget* widget);

CTGUI_API void tguiTabs_setMaximumTabWidth(tguiWidget* widget, float maximumTabWidth);
CTGUI_API float tguiTabs_getMaximumTabWidth(const tguiWidget* widget);

CTGUI_API void tguiTabs_setMinimumTabWidth(tguiWidget* widget, float minimumTabWidth);
CTGUI_API float tguiTabs_getMinimumTabWidth(const tguiWidget* widget);

CTGUI_API void tguiTabs_connect_onTabSelect(tguiWidget* widget, void (*function)(const sfUint32*), const char** error);

#endif // CTGUI_TABS_H

