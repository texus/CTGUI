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


#ifndef CTGUI_CHILD_WINDOW_H
#define CTGUI_CHILD_WINDOW_H

#include <CTGUI/Config.h>
#include <CTGUI/Widget.h>
#include <CTGUI/Alignment.h>

CTGUI_API tguiWidget* tguiChildWindow_create(void);

CTGUI_API void tguiChildWindow_setMaximumSize(tguiWidget* widget, sfVector2f maxSize);
CTGUI_API sfVector2f tguiChildWindow_getMaximumSize(const tguiWidget* widget);

CTGUI_API void tguiChildWindow_setMinimumSize(tguiWidget* widget, sfVector2f minSize);
CTGUI_API sfVector2f tguiChildWindow_getMinimumSize(const tguiWidget* widget);

CTGUI_API void tguiChildWindow_setTitle(tguiWidget* widget, const sfUint32* text);
CTGUI_API const sfUint32* tguiChildWindow_getTitle(const tguiWidget* widget);

CTGUI_API void tguiChildWindow_setTitleAlignment(tguiWidget* widget, tguiHorizontalAlignment alignment);
CTGUI_API tguiHorizontalAlignment tguiChildWindow_getTitleAlignment(const tguiWidget* widget);

CTGUI_API void tguiChildWindow_setTitleButtons(tguiWidget* widget, unsigned int buttons);
CTGUI_API unsigned int tguiChildWindow_getTitleButtons(const tguiWidget* widget);

CTGUI_API void tguiChildWindow_setResizable(tguiWidget* widget, sfBool resizable);
CTGUI_API sfBool tguiChildWindow_isResizable(const tguiWidget* widget);

CTGUI_API void tguiChildWindow_keepInParent(tguiWidget* widget, sfBool keepInParent);
CTGUI_API sfBool tguiChildWindow_isKeptInParent(const tguiWidget* widget);

CTGUI_API void tguiChildWindow_connect_onMousePress(tguiWidget* widget, void (*function)(), const char** error);
CTGUI_API void tguiChildWindow_connect_onClose(tguiWidget* widget, void (*function)(), const char** error);
CTGUI_API void tguiChildWindow_connect_onMinimize(tguiWidget* widget, void (*function)(), const char** error);
CTGUI_API void tguiChildWindow_connect_onMaximize(tguiWidget* widget, void (*function)(), const char** error);

#endif // CTGUI_CHILD_WINDOW_H

