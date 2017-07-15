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

#ifndef CTGUI_LAYOUT_STRUCT_H
#define CTGUI_LAYOUT_STRUCT_H

#include <TGUI/Layout.hpp>
#include <SFML/System/Vector2.h>

struct tguiLayout
{
    tgui::Layout This;

    tguiLayout(tgui::Layout layout) : This{std::move(layout)} {}
    tguiLayout(float constant) : This{constant} {}
    tguiLayout(const char* expression) : This{expression} {}
};

struct tguiLayout2d
{
    tgui::Layout2d This;

    tguiLayout2d(tgui::Layout2d layout) : This{std::move(layout)} {}
    tguiLayout2d(sfVector2f constant) : This{constant.x, constant.y} {}
    tguiLayout2d(tguiLayout* x, tguiLayout* y) : This{x->This, y->This} {}
};

#endif // CTGUI_LAYOUT_STRUCT_H
