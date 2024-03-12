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


#include <CTGUI/Rect.h>
#include <TGUI/Rect.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiFloatRect tguiFloatRect_Null = {0, 0, 0, 0};
tguiIntRect tguiIntRect_Null     = {0, 0, 0, 0};
tguiUIntRect tguiUIntRect_Null   = {0, 0, 0, 0};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiFloatRect_contains(const tguiFloatRect* rect, tguiVector2f pos)
{
    return tgui::FloatRect{rect->left, rect->top, rect->width, rect->height}.contains({pos.x, pos.y});
}

tguiBool tguiIntRect_contains(const tguiIntRect* rect, tguiVector2i pos)
{
    return tgui::IntRect{rect->left, rect->top, rect->width, rect->height}.contains({pos.x, pos.y});
}

tguiBool tguiUIntRect_contains(const tguiUIntRect* rect, tguiVector2u pos)
{
    return tgui::UIntRect{rect->left, rect->top, rect->width, rect->height}.contains({pos.x, pos.y});
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiFloatRect_intersects(const tguiFloatRect* rect, const tguiFloatRect* otherRect)
{
    return tgui::FloatRect{rect->left, rect->top, rect->width, rect->height}.intersects(
        tgui::FloatRect{otherRect->left, otherRect->top, otherRect->width, otherRect->height});
}

tguiBool tguiIntRect_intersects(const tguiIntRect* rect, const tguiIntRect* otherRect)
{
    return tgui::IntRect{rect->left, rect->top, rect->width, rect->height}.intersects(
        tgui::IntRect{otherRect->left, otherRect->top, otherRect->width, otherRect->height});
}

tguiBool tguiUIntRect_intersects(const tguiUIntRect* rect, const tguiUIntRect* otherRect)
{
    return tgui::UIntRect{rect->left, rect->top, rect->width, rect->height}.intersects(
        tgui::UIntRect{otherRect->left, otherRect->top, otherRect->width, otherRect->height});
}
