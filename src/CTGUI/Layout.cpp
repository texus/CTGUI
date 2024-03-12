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


#include <CTGUI/Layout.h>
#include <CTGUI/LayoutStruct.hpp>
#include <CTGUI/WidgetStruct.hpp>
#include <TGUI/Container.hpp>

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

void tguiLayout_free(tguiLayout* layout)
{
    delete layout;
}

void tguiLayout_replaceValue(tguiLayout* layout, const tguiLayout* newLayout)
{
    layout->This.replaceValue(newLayout->This);
}

float tguiLayout_getValue(const tguiLayout* layout)
{
    return layout->This.getValue();
}

tguiBool tguiLayout_isConstant(const tguiLayout* layout)
{
    return layout->This.isConstant();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiLayout2d* tguiLayout2d_create(tguiVector2f constant)
{
    return new tguiLayout2d(constant);
}

tguiLayout2d* tguiLayout2d_createFromLayouts(tguiLayout* x, tguiLayout* y)
{
    return new tguiLayout2d(x, y);
}

tguiLayout2d* tguiLayout2d_createFromString(const char* expression)
{
    return new tguiLayout2d(expression);
}

tguiLayout2d* tguiLayout2d_copy(const tguiLayout2d* layout)
{
    return new tguiLayout2d(*layout);
}

void tguiLayout2d_free(tguiLayout2d* layout)
{
    delete layout;
}

tguiVector2f tguiLayout2d_getValue(const tguiLayout2d* layout)
{
    tgui::Vector2f value = layout->This.getValue();
    return {value.x, value.y};
}

tguiLayout* tguiLayout2d_getX(const tguiLayout2d* layout)
{
    return new tguiLayout(layout->This.x);
}

tguiLayout* tguiLayout2d_getY(const tguiLayout2d* layout)
{
    return new tguiLayout(layout->This.y);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiLayout*   tguiBindPosX(const tguiWidget* widget)
{
    return new tguiLayout(tgui::bindPosX(widget->This));
}

tguiLayout*   tguiBindPosY(const tguiWidget* widget)
{
    return new tguiLayout(tgui::bindPosY(widget->This));
}

tguiLayout*   tguiBindLeft(const tguiWidget* widget)
{
    return new tguiLayout(tgui::bindLeft(widget->This));
}

tguiLayout*   tguiBindTop(const tguiWidget* widget)
{
    return new tguiLayout(tgui::bindTop(widget->This));
}

tguiLayout*   tguiBindWidth(const tguiWidget* widget)
{
    return new tguiLayout(tgui::bindWidth(widget->This));
}

tguiLayout*   tguiBindHeight(const tguiWidget* widget)
{
    return new tguiLayout(tgui::bindHeight(widget->This));
}

tguiLayout*   tguiBindInnerWidth(const tguiWidget* container)
{
    return new tguiLayout(tgui::bindInnerWidth(std::dynamic_pointer_cast<tgui::Container>(container->This)));
}

tguiLayout*   tguiBindInnerHeight(const tguiWidget* container)
{
    return new tguiLayout(tgui::bindInnerHeight(std::dynamic_pointer_cast<tgui::Container>(container->This)));
}

tguiLayout*   tguiBindRight(const tguiWidget* widget)
{
    return new tguiLayout(tgui::bindRight(widget->This));
}

tguiLayout*   tguiBindBottom(const tguiWidget* widget)
{
    return new tguiLayout(tgui::bindBottom(widget->This));
}

tguiLayout2d* tguiBindPosition(const tguiWidget* widget)
{
    return new tguiLayout2d(tgui::bindPosition(widget->This));
}

tguiLayout2d* tguiBindSize(const tguiWidget* widget)
{
    return new tguiLayout2d(tgui::bindSize(widget->This));
}

tguiLayout2d* tguiBindInnerSize(const tguiWidget* container)
{
    return new tguiLayout2d(tgui::bindInnerSize(std::dynamic_pointer_cast<tgui::Container>(container->This)));
}

tguiLayout*   tguiBindMin(const tguiLayout* value1, const tguiLayout* value2)
{
    return new tguiLayout(tgui::bindMin(value1->This, value2->This));
}

tguiLayout*   tguiBindMax(const tguiLayout* value1, const tguiLayout* value2)
{
    return new tguiLayout(tgui::bindMax(value1->This, value2->This));
}
