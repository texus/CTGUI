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


#include <CTGUI/Layout.h>
#include <CTGUI/LayoutStruct.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiLayout* tguiLayout_create(float constant)
{
    return new tguiLayout(constant);
}

tguiLayout* tguiLayout_createFromString(const char* expression)
{
    return new tguiLayout(expression);
}

tguiLayout* tguiLayout_copy(const tguiLayout* layout)
{
    return new tguiLayout(*layout);
}

void tguiLayout_destroy(tguiLayout* layout)
{
    delete layout;
}

float tguiLayout_getValue(const tguiLayout* layout)
{
    return layout->This.getValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiLayout2d* tguiLayout2d_create(sfVector2f constant)
{
    return new tguiLayout2d(constant);
}

tguiLayout2d* tguiLayout2d_createFromLayouts(tguiLayout* x, tguiLayout* y)
{
    return new tguiLayout2d(x, y);
}

tguiLayout2d* tguiLayout2d_copy(const tguiLayout2d* layout)
{
    return new tguiLayout2d(*layout);
}

void tguiLayout2d_destroy(tguiLayout2d* layout)
{
    delete layout;
}

sfVector2f tguiLayout2d_getValue(const tguiLayout2d* layout)
{
    sf::Vector2f value = layout->This.getValue();
    return {value.x, value.y};
}
