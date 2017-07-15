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


#include <CTGUI/Widgets/Grid.h>
#include <CTGUI/WidgetStruct.h>
#include <CTGUI/OutlineStruct.h>

#include <TGUI/Widgets/Grid.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::Grid>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiGrid_create(void)
{
    return new tguiWidget(tgui::Grid::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGrid_addWidget(tguiWidget* grid, tguiWidget* widget, size_t row, size_t col, tguiOutline* borders, tguiAlignment alignment)
{
    DOWNCAST(grid->This)->addWidget(widget->This, row, col, borders->This, static_cast<tgui::Grid::Alignment>(alignment));
}

tguiWidget* tguiGrid_getWidget(tguiWidget* grid, size_t row, size_t col)
{
    tgui::Widget::Ptr widget = DOWNCAST(grid->This)->getWidget(row, col);
    if (widget)
        return new tguiWidget(widget);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGrid_setWidgetBorders(tguiWidget* grid, tguiWidget* widget, tguiOutline* borders)
{
    DOWNCAST(grid->This)->setWidgetBorders(widget->This, borders->This);
}

void tguiGrid_setWidgetBordersByCell(tguiWidget* grid, size_t row, size_t col, tguiOutline* borders)
{
    DOWNCAST(grid->This)->setWidgetBorders(row, col, borders->This);
}

tguiOutline* tguiGrid_getWidgetBorders(tguiWidget* grid, tguiWidget* widget)
{
    return new tguiOutline(DOWNCAST(grid->This)->getWidgetBorders(widget->This));
}

tguiOutline* tguiGrid_getWidgetBordersByCell(tguiWidget* grid, size_t row, size_t col)
{
    return new tguiOutline(DOWNCAST(grid->This)->getWidgetBorders(row, col));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGrid_setWidgetAlignment(tguiWidget* grid, tguiWidget* widget, tguiAlignment alignment)
{
    DOWNCAST(grid->This)->setWidgetAlignment(widget->This, static_cast<tgui::Grid::Alignment>(alignment));
}

void tguiGrid_setWidgetAlignmentByCell(tguiWidget* grid, size_t row, size_t col, tguiAlignment alignment)
{
    DOWNCAST(grid->This)->setWidgetAlignment(row, col, static_cast<tgui::Grid::Alignment>(alignment));
}

tguiAlignment tguiGrid_getWidgetAlignment(tguiWidget* grid, tguiWidget* widget)
{
    return static_cast<tguiAlignment>(DOWNCAST(grid->This)->getWidgetAlignment(widget->This));
}

tguiAlignment tguiGrid_getWidgetAlignmentByCell(tguiWidget* grid, size_t row, size_t col)
{
    return static_cast<tguiAlignment>(DOWNCAST(grid->This)->getWidgetAlignment(row, col));
}
