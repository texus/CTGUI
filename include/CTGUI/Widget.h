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


#ifndef CTGUI_WIDGET_H
#define CTGUI_WIDGET_H

#include <CTGUI/Config.h>
#include <SFML/System/Vector2.h>

CTGUI_API void tguiWidget_setPosition(tguiWidget* widget, sfVector2f position);
CTGUI_API sfVector2f tguiWidget_getPosition(const tguiWidget* widget);

CTGUI_API void tguiWidget_setSize(tguiWidget* widget, sfVector2f size);
CTGUI_API sfVector2f tguiWidget_getSize(const tguiWidget* widget);
CTGUI_API sfVector2f tguiWidget_getFullSize(const tguiWidget* widget);

CTGUI_API void tguiWidget_show(tguiWidget* widget);
CTGUI_API void tguiWidget_hide(tguiWidget* widget);
CTGUI_API sfBool tguiWidget_isVisible(const tguiWidget* widget);

#endif // CTGUI_WIDGET_H

