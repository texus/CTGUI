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


#ifndef CTGUI_LIST_BOX_H
#define CTGUI_LIST_BOX_H

#include <CTGUI/Config.h>
#include <CTGUI/Widget.h>
#include <stddef.h>

CTGUI_API tguiWidget* tguiListBox_create(void);

CTGUI_API sfBool tguiListBox_addItem(tguiWidget* widget, const sfUint32* item, const sfUint32* id);
CTGUI_API const sfUint32* tguiListBox_getItemById(const tguiWidget* widget, const sfUint32* id);

CTGUI_API sfBool tguiListBox_setSelectedItem(tguiWidget* widget, const sfUint32* item);
CTGUI_API sfBool tguiListBox_setSelectedItemById(tguiWidget* widget, const sfUint32* id);
CTGUI_API sfBool tguiListBox_setSelectedItemByIndex(tguiWidget* widget, size_t index);
CTGUI_API void tguiListBox_deselectItem(tguiWidget* widget);

CTGUI_API sfBool tguiListBox_removeItem(tguiWidget* widget, const sfUint32* item);
CTGUI_API sfBool tguiListBox_removeItemById(tguiWidget* widget, const sfUint32* id);
CTGUI_API sfBool tguiListBox_removeItemByIndex(tguiWidget* widget, size_t index);
CTGUI_API void tguiListBox_removeAllItems(tguiWidget* widget);

CTGUI_API const sfUint32* tguiListBox_getSelectedItem(const tguiWidget* widget);
CTGUI_API const sfUint32* tguiListBox_getSelectedItemId(const tguiWidget* widget);
CTGUI_API int tguiListBox_getSelectedItemIndex(const tguiWidget* widget);

CTGUI_API sfBool tguiListBox_changeItem(tguiWidget* widget, const sfUint32* originalValue, const sfUint32* newValue);
CTGUI_API sfBool tguiListBox_changeItemById(tguiWidget* widget, const sfUint32* id, const sfUint32* newValue);
CTGUI_API sfBool tguiListBox_changeItemByIndex(tguiWidget* widget, size_t index, const sfUint32* newValue);

CTGUI_API size_t tguiListBox_getItemCount(const tguiWidget* widget);

CTGUI_API const sfUint32** tguiListBox_getItems(const tguiWidget* widget, size_t* count);
CTGUI_API const sfUint32** tguiListBox_getItemIds(const tguiWidget* widget, size_t* count);

CTGUI_API void tguiListBox_setItemHeight(tguiWidget* widget, unsigned int height);
CTGUI_API unsigned int tguiListBox_getItemHeight(const tguiWidget* widget);

CTGUI_API void tguiListBox_setTextSize(tguiWidget* widget, unsigned int size);
CTGUI_API unsigned int tguiListBox_getTextSize(const tguiWidget* widget);

CTGUI_API void tguiListBox_setMaximumItems(tguiWidget* widget, size_t maxItems);
CTGUI_API size_t tguiListBox_getMaximumItems(const tguiWidget* widget);

CTGUI_API void tguiListBox_setAutoScroll(tguiWidget* widget, sfBool autoScroll);
CTGUI_API sfBool tguiListBox_getAutoScroll(const tguiWidget* widget);

#endif // CTGUI_LIST_BOX_H

