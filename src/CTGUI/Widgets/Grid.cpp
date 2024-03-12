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


#include <CTGUI/Widgets/Grid.h>
#include <CTGUI/WidgetStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>

#include <TGUI/Widgets/Grid.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::Grid>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGridWidgetLocation_free(tguiGridWidgetLocation* locationList, size_t count)
{
    if (!locationList)
        return;

    for (size_t i = 0; i < count; ++i)
        ctgui::removeWidgetRef(locationList[i].widget->This);

    delete[] locationList;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiGrid_create(void)
{
    return ctgui::addWidgetRef(tgui::Grid::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGrid_setAutoSize(tguiWidget* widget, tguiBool autoSize)
{
    DOWNCAST(widget->This)->setAutoSize(autoSize != 0);
}

tguiBool tguiGrid_getAutoSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getAutoSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGrid_addWidget(tguiWidget* grid, tguiWidget* widget, size_t row, size_t col, tguiAlignment alignment, tguiOutline* padding)
{
    DOWNCAST(grid->This)->addWidget(widget->This, row, col, static_cast<tgui::Grid::Alignment>(alignment), padding->This);
}

void tguiGrid_setWidgetCell(tguiWidget* grid, tguiWidget* widget, size_t row, size_t col, tguiAlignment alignment, tguiOutline* padding)
{
    DOWNCAST(grid->This)->setWidgetCell(widget->This, row, col, static_cast<tgui::Grid::Alignment>(alignment), padding->This);
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

tguiGridWidgetLocation* tguiGrid_getWidgetLocations(const tguiWidget* grid, size_t* count)
{
    const auto& cppLocations = DOWNCAST(grid->This)->getWidgetLocations();
    if (cppLocations.empty())
    {
        *count = 0;
        return nullptr;
    }

    tguiGridWidgetLocation* cLocations = new tguiGridWidgetLocation[cppLocations.size()];
    size_t index = 0;
    for (const auto& pair : cppLocations)
    {
        const tgui::Widget::Ptr& cppWidget = pair.first;
        cLocations[index].widget = ctgui::addWidgetRef(cppWidget);
        cLocations[index].row = pair.second.first;
        cLocations[index].column = pair.second.second;
        ++index;
    }

    *count = cppLocations.size();
    return cLocations;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGrid_setWidgetPadding(tguiWidget* grid, tguiWidget* widget, tguiOutline* padding)
{
    DOWNCAST(grid->This)->setWidgetPadding(widget->This, padding->This);
}

void tguiGrid_setWidgetPaddingByCell(tguiWidget* grid, size_t row, size_t col, tguiOutline* padding)
{
    DOWNCAST(grid->This)->setWidgetPadding(row, col, padding->This);
}

tguiOutline* tguiGrid_getWidgetPadding(tguiWidget* grid, tguiWidget* widget)
{
    return new tguiOutline(DOWNCAST(grid->This)->getWidgetPadding(widget->This));
}

tguiOutline* tguiGrid_getWidgetPaddingByCell(tguiWidget* grid, size_t row, size_t col)
{
    return new tguiOutline(DOWNCAST(grid->This)->getWidgetPadding(row, col));
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
