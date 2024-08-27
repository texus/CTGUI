// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/Grid.h>
#include <CTGUI/WidgetStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>

#include <TGUI/Widgets/Grid.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::Grid>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiGrid_create(void)
{
    return ctgui::addWidgetRef(tgui::Grid::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGrid_setAutoSize(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setAutoSize(value != 0);
}

tguiBool tguiGrid_getAutoSize(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getAutoSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGrid_addWidget(tguiWidget* thisWidget, tguiWidget* widget, size_t row, size_t col, tguiGridAlignment alignment, const tguiOutline* padding)
{
    DOWNCAST(thisWidget->This)->addWidget(widget->This, row, col, static_cast<tgui::Grid::Alignment>(alignment), padding->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGrid_setWidgetCell(tguiWidget* thisWidget, tguiWidget* widget, size_t row, size_t col, tguiGridAlignment alignment, const tguiOutline* padding)
{
    DOWNCAST(thisWidget->This)->setWidgetCell(widget->This, row, col, static_cast<tgui::Grid::Alignment>(alignment), padding->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiGrid_getWidget(const tguiWidget* thisWidget, size_t row, size_t col)
{
    tgui::Widget::Ptr widgetToReturn = DOWNCAST(thisWidget->This)->getWidget(row, col);
    if (widgetToReturn)
        return ctgui::addWidgetRef(widgetToReturn);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGrid_setWidgetAlignment(tguiWidget* thisWidget, tguiWidget* widget, tguiGridAlignment alignment)
{
    DOWNCAST(thisWidget->This)->setWidgetAlignment(widget->This, static_cast<tgui::Grid::Alignment>(alignment));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGrid_setWidgetAlignmentByCell(tguiWidget* thisWidget, size_t row, size_t col, tguiGridAlignment alignment)
{
    DOWNCAST(thisWidget->This)->setWidgetAlignment(row, col, static_cast<tgui::Grid::Alignment>(alignment));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiGridAlignment tguiGrid_getWidgetAlignment(const tguiWidget* thisWidget, tguiWidget* widget)
{
    return static_cast<tguiGridAlignment>(DOWNCAST(thisWidget->This)->getWidgetAlignment(widget->This));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiGridAlignment tguiGrid_getWidgetAlignmentByCell(const tguiWidget* thisWidget, size_t row, size_t col)
{
    return static_cast<tguiGridAlignment>(DOWNCAST(thisWidget->This)->getWidgetAlignment(row, col));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGrid_setWidgetPadding(tguiWidget* thisWidget, tguiWidget* widget, const tguiOutline* padding)
{
    DOWNCAST(thisWidget->This)->setWidgetPadding(widget->This, padding->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGrid_setWidgetPaddingByCell(tguiWidget* thisWidget, size_t row, size_t col, const tguiOutline* padding)
{
    DOWNCAST(thisWidget->This)->setWidgetPadding(row, col, padding->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const tguiOutline* tguiGrid_getWidgetPadding(const tguiWidget* thisWidget, tguiWidget* widget)
{
    return new tguiOutline(DOWNCAST(thisWidget->This)->getWidgetPadding(widget->This));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const tguiOutline* tguiGrid_getWidgetPaddingByCell(const tguiWidget* thisWidget, size_t row, size_t col)
{
    return new tguiOutline(DOWNCAST(thisWidget->This)->getWidgetPadding(row, col));
}

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
