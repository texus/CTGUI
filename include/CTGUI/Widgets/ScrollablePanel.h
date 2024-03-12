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


#ifndef CTGUI_SCROLLABLE_PANEL_H
#define CTGUI_SCROLLABLE_PANEL_H

#include <CTGUI/Widget.h>
#include <CTGUI/ScrollbarPolicy.h>

CTGUI_API tguiWidget* tguiScrollablePanel_create(void);

CTGUI_API void tguiScrollablePanel_setContentSize(tguiWidget* widget, tguiVector2f contentSize);
CTGUI_API tguiVector2f tguiScrollablePanel_getContentSize(const tguiWidget* widget);

CTGUI_API float tguiScrollablePanel_getScrollbarWidth(const tguiWidget* widget);

CTGUI_API void tguiScrollablePanel_setVerticalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy);
CTGUI_API tguiScrollbarPolicy tguiScrollablePanel_getVerticalScrollbarPolicy(const tguiWidget* widget);

CTGUI_API void tguiScrollablePanel_setHorizontalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy);
CTGUI_API tguiScrollbarPolicy tguiScrollablePanel_getHorizontalScrollbarPolicy(const tguiWidget* widget);

CTGUI_API void tguiScrollablePanel_setVerticalScrollAmount(tguiWidget* widget, unsigned int scrollAmount);
CTGUI_API unsigned int tguiScrollablePanel_getVerticalScrollAmount(const tguiWidget* widget);

CTGUI_API void tguiScrollablePanel_setHorizontalScrollAmount(tguiWidget* widget, unsigned int scrollAmount);
CTGUI_API unsigned int tguiScrollablePanel_getHorizontalScrollAmount(const tguiWidget* widget);

CTGUI_API void tguiScrollablePanel_setVerticalScrollbarValue(tguiWidget* widget, unsigned int value);
CTGUI_API unsigned int tguiScrollablePanel_getVerticalScrollbarValue(const tguiWidget* widget);

CTGUI_API void tguiScrollablePanel_setHorizontalScrollbarValue(tguiWidget* widget, unsigned int value);
CTGUI_API unsigned int tguiScrollablePanel_getHorizontalScrollbarValue(const tguiWidget* widget);

CTGUI_API tguiBool tguiScrollablePanel_isVerticalScrollbarShown(const tguiWidget* widget);
CTGUI_API tguiBool tguiScrollablePanel_isHorizontalScrollbarShown(const tguiWidget* widget);

CTGUI_API tguiVector2f tguiScrollablePanel_getContentOffset(const tguiWidget* widget);

#endif // CTGUI_SCROLLABLE_PANEL_H

