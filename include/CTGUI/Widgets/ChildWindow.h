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


#ifndef CTGUI_CHILD_WINDOW_H
#define CTGUI_CHILD_WINDOW_H

#include <CTGUI/Widget.h>
#include <CTGUI/Alignment.h>

CTGUI_API tguiWidget* tguiChildWindow_create(void);

CTGUI_API void tguiChildWindow_setClientSize(tguiWidget* widget, tguiVector2f size);
CTGUI_API void tguiChildWindow_setClientSizeFromLayout(tguiWidget* widget, tguiLayout2d* layout);
CTGUI_API tguiVector2f tguiChildWindow_getClientSize(const tguiWidget* widget);

CTGUI_API void tguiChildWindow_setMaximumSize(tguiWidget* widget, tguiVector2f maxSize);
CTGUI_API tguiVector2f tguiChildWindow_getMaximumSize(const tguiWidget* widget);

CTGUI_API void tguiChildWindow_setMinimumSize(tguiWidget* widget, tguiVector2f minSize);
CTGUI_API tguiVector2f tguiChildWindow_getMinimumSize(const tguiWidget* widget);

CTGUI_API void tguiChildWindow_setTitle(tguiWidget* widget, tguiUtf32 text);
CTGUI_API tguiUtf32 tguiChildWindow_getTitle(const tguiWidget* widget);

CTGUI_API void tguiChildWindow_setTitleTextSize(tguiWidget* widget, unsigned int textSize);
CTGUI_API unsigned int tguiChildWindow_getTitleTextSize(const tguiWidget* widget);

CTGUI_API void tguiChildWindow_setTitleAlignment(tguiWidget* widget, tguiHorizontalAlignment alignment);
CTGUI_API tguiHorizontalAlignment tguiChildWindow_getTitleAlignment(const tguiWidget* widget);

CTGUI_API void tguiChildWindow_setTitleButtons(tguiWidget* widget, unsigned int buttons);
CTGUI_API unsigned int tguiChildWindow_getTitleButtons(const tguiWidget* widget);

CTGUI_API void tguiChildWindow_setResizable(tguiWidget* widget, tguiBool resizable);
CTGUI_API tguiBool tguiChildWindow_isResizable(const tguiWidget* widget);

CTGUI_API void tguiChildWindow_setKeepInParent(tguiWidget* widget, tguiBool keepInParent);
CTGUI_API tguiBool tguiChildWindow_isKeptInParent(const tguiWidget* widget);

CTGUI_API void tguiChildWindow_setPositionLocked(tguiWidget* widget, tguiBool positionLocked);
CTGUI_API tguiBool tguiChildWindow_isPositionLocked(const tguiWidget* widget);

#endif // CTGUI_CHILD_WINDOW_H

