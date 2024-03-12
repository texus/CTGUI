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


#include <CTGUI/Widgets/BoxLayoutRatios.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/BoxLayoutRatios.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::BoxLayoutRatios>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiBoxLayoutRatios_add(tguiWidget* layout, tguiWidget* widget, float ratio, tguiUtf32 widgetName)
{
    DOWNCAST(layout->This)->add(widget->This, ratio, ctgui::toCppStr(widgetName));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiBoxLayoutRatios_insert(tguiWidget* layout, size_t index, tguiWidget* widget, float ratio, tguiUtf32 widgetName)
{
    DOWNCAST(layout->This)->insert(index, widget->This, ratio, ctgui::toCppStr(widgetName));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiBoxLayoutRatios_addSpace(tguiWidget* layout, float ratio)
{
    DOWNCAST(layout->This)->addSpace(ratio);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiBoxLayoutRatios_insertSpace(tguiWidget* layout, size_t index, float ratio)
{
    DOWNCAST(layout->This)->insertSpace(index, ratio);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiBoxLayoutRatios_setRatio(tguiWidget* layout, tguiWidget* widget, float ratio)
{
    DOWNCAST(layout->This)->setRatio(widget->This, ratio);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiBoxLayoutRatios_setRatioAtIndex(tguiWidget* layout, size_t index, float ratio)
{
    DOWNCAST(layout->This)->setRatio(index, ratio);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiBoxLayoutRatios_getRatio(tguiWidget* layout, tguiWidget* widget)
{
    return DOWNCAST(layout->This)->getRatio(widget->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiBoxLayoutRatios_getRatioAtIndex(tguiWidget* layout, size_t index)
{
    return DOWNCAST(layout->This)->getRatio(index);
}
