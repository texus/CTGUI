// This file is generated, it should not be edited directly.

#ifndef CTGUI_GRID_H
#define CTGUI_GRID_H

#include <CTGUI/Widget.h>

typedef enum
{
    tguiGridAlignmentCenter,
    tguiGridAlignmentUpperLeft,
    tguiGridAlignmentUp,
    tguiGridAlignmentUpperRight,
    tguiGridAlignmentRight,
    tguiGridAlignmentBottomRight,
    tguiGridAlignmentBottom,
    tguiGridAlignmentBottomLeft,
    tguiGridAlignmentLeft,
} tguiGridAlignment;

CTGUI_API tguiWidget* tguiGrid_create(void);

CTGUI_API void tguiGrid_setAutoSize(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiGrid_getAutoSize(const tguiWidget* thisWidget);

CTGUI_API void tguiGrid_addWidget(tguiWidget* thisWidget, tguiWidget* widget, size_t row, size_t col, tguiGridAlignment alignment, const tguiOutline* padding);

CTGUI_API void tguiGrid_setWidgetCell(tguiWidget* thisWidget, tguiWidget* widget, size_t row, size_t col, tguiGridAlignment alignment, const tguiOutline* padding);

CTGUI_API tguiWidget* tguiGrid_getWidget(const tguiWidget* thisWidget, size_t row, size_t col);

CTGUI_API void tguiGrid_setWidgetAlignment(tguiWidget* thisWidget, tguiWidget* widget, tguiGridAlignment alignment);

CTGUI_API void tguiGrid_setWidgetAlignmentByCell(tguiWidget* thisWidget, size_t row, size_t col, tguiGridAlignment alignment);

CTGUI_API tguiGridAlignment tguiGrid_getWidgetAlignment(const tguiWidget* thisWidget, tguiWidget* widget);

CTGUI_API tguiGridAlignment tguiGrid_getWidgetAlignmentByCell(const tguiWidget* thisWidget, size_t row, size_t col);

CTGUI_API void tguiGrid_setWidgetPadding(tguiWidget* thisWidget, tguiWidget* widget, const tguiOutline* padding);

CTGUI_API void tguiGrid_setWidgetPaddingByCell(tguiWidget* thisWidget, size_t row, size_t col, const tguiOutline* padding);

CTGUI_API const tguiOutline* tguiGrid_getWidgetPadding(const tguiWidget* thisWidget, tguiWidget* widget);

CTGUI_API const tguiOutline* tguiGrid_getWidgetPaddingByCell(const tguiWidget* thisWidget, size_t row, size_t col);

typedef struct
{
    tguiWidget* widget;
    size_t row;
    size_t column;
} tguiGridWidgetLocation;

CTGUI_API void tguiGridWidgetLocation_destroy(tguiGridWidgetLocation* locationList, size_t count); // count must be identical to value retrieved from tguiGrid_getWidgetLocations

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiGridWidgetLocation* tguiGrid_getWidgetLocations(const tguiWidget* grid, size_t* count); // tguiGridWidgetLocation_destroy needs to be called on returned value. NULL is returned if there are no locations. The count is set by the function to indicate length of returned array.

#endif // CTGUI_GRID_H
