/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2018 Bruno Van de Velde (vdv_b@tgui.eu)
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


#ifndef CTGUI_SCROLLBAR_H
#define CTGUI_SCROLLBAR_H

#include <CTGUI/Config.h>
#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiScrollbar_create(void);

CTGUI_API void tguiScrollbar_setViewportSize(tguiWidget* widget, unsigned int viewport);
CTGUI_API unsigned int tguiScrollbar_getViewportSize(const tguiWidget* widget);

CTGUI_API void tguiScrollbar_setMaximum(tguiWidget* widget, unsigned int maximum);
CTGUI_API unsigned int tguiScrollbar_getMaximum(const tguiWidget* widget);

CTGUI_API void tguiScrollbar_setValue(tguiWidget* widget, unsigned int value);
CTGUI_API unsigned int tguiScrollbar_getValue(const tguiWidget* widget);

CTGUI_API void tguiScrollbar_setScrollAmount(tguiWidget* widget, unsigned int scrollAmount);
CTGUI_API unsigned int tguiScrollbar_getScrollAmount(const tguiWidget* widget);

CTGUI_API void tguiScrollbar_setAutoHide(tguiWidget* widget, sfBool autoHide);
CTGUI_API sfBool tguiScrollbar_getAutoHide(const tguiWidget* widget);

#endif // CTGUI_SCROLLBAR_H

