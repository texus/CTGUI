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


#include <CTGUI/Widgets/BoxLayout.h>
#include <CTGUI/WidgetStruct.h>

#include <TGUI/Widgets/BoxLayout.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::BoxLayout>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiBoxLayout_insert(tguiWidget* layout, size_t index, tguiWidget* widget, const sfUint32* widgetName)
{
    return DOWNCAST(layout->This)->insert(index, widget->This, widgetName);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiBoxLayout_addSpace(tguiWidget* layout, float ratio)
{
    DOWNCAST(layout->This)->addSpace(ratio);
}

sfBool tguiBoxLayout_insertSpace(tguiWidget* layout, size_t index, float ratio)
{
    return DOWNCAST(layout->This)->insertSpace(index, ratio);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiBoxLayout_removeAtIndex(tguiWidget* layout, size_t index)
{
    return DOWNCAST(layout->This)->remove(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiBoxLayout_getAtIndex(tguiWidget* layout, size_t index)
{
    tgui::Widget::Ptr widget = DOWNCAST(layout->This)->get(index);
    if (widget)
        return new tguiWidget(widget);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiBoxLayout_setRatio(tguiWidget* layout, tguiWidget* widget, float ratio)
{
    return DOWNCAST(layout->This)->setRatio(widget->This, ratio);
}

sfBool tguiBoxLayout_setRatioAtIndex(tguiWidget* layout, size_t index, float ratio)
{
    return DOWNCAST(layout->This)->setRatio(index, ratio);
}

float tguiBoxLayout_getRatio(tguiWidget* layout, tguiWidget* widget)
{
    return DOWNCAST(layout->This)->getRatio(widget->This);
}

float tguiBoxLayout_getRatioAtIndex(tguiWidget* layout, size_t index)
{
    return DOWNCAST(layout->This)->getRatio(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiBoxLayout_setFixedSize(tguiWidget* layout, tguiWidget* widget, float size)
{
    return DOWNCAST(layout->This)->setFixedSize(widget->This, size);
}

sfBool tguiBoxLayout_setFixedSizeAtIndex(tguiWidget* layout, size_t index, float size)
{
    return DOWNCAST(layout->This)->setFixedSize(index, size);
}

float tguiBoxLayout_getFixedSize(tguiWidget* layout, tguiWidget* widget)
{
    return DOWNCAST(layout->This)->getFixedSize(widget->This);
}

float tguiBoxLayout_getFixedSizeAtIndex(tguiWidget* layout, size_t index)
{
    return DOWNCAST(layout->This)->getFixedSize(index);
}
