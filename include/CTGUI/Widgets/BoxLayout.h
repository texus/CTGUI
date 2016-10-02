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


#ifndef CTGUI_BOX_LAYOUT_H
#define CTGUI_BOX_LAYOUT_H

#include <CTGUI/Config.h>
#include <CTGUI/Widget.h>
#include <stddef.h>

CTGUI_API sfBool tguiBoxLayout_insert(tguiWidget* layout, size_t index, tguiWidget* widget, const sfUint32* widgetName);

CTGUI_API void tguiBoxLayout_addSpace(tguiWidget* layout, float ratio);

CTGUI_API sfBool tguiBoxLayout_insertSpace(tguiWidget* layout, size_t index, float ratio);

CTGUI_API sfBool tguiBoxLayout_removeAtIndex(tguiWidget* layout, size_t index);

CTGUI_API tguiWidget* tguiBoxLayout_getAtIndex(tguiWidget* layout, size_t index);

CTGUI_API sfBool tguiBoxLayout_setRatio(tguiWidget* layout, tguiWidget* widget, float ratio);
CTGUI_API sfBool tguiBoxLayout_setRatioAtIndex(tguiWidget* layout, size_t index, float ratio);
CTGUI_API float tguiBoxLayout_getRatio(tguiWidget* layout, tguiWidget* widget);
CTGUI_API float tguiBoxLayout_getRatioAtIndex(tguiWidget* layout, size_t index);

CTGUI_API sfBool tguiBoxLayout_setFixedSize(tguiWidget* layout, tguiWidget* widget, float size);
CTGUI_API sfBool tguiBoxLayout_setFixedSizeAtIndex(tguiWidget* layout, size_t index, float size);
CTGUI_API float tguiBoxLayout_getFixedSize(tguiWidget* layout, tguiWidget* widget);
CTGUI_API float tguiBoxLayout_getFixedSizeAtIndex(tguiWidget* layout, size_t index);

#endif // CTGUI_BOX_LAYOUT_H

