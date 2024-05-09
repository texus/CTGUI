typedef struct
{
    tguiWidget* widget;
    size_t row;
    size_t column;
} tguiGridWidgetLocation;

CTGUI_API void tguiGridWidgetLocation_free(tguiGridWidgetLocation* locationList, size_t count); // count must be identical to value retrieved from tguiGrid_getWidgetLocations

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiGridWidgetLocation* tguiGrid_getWidgetLocations(const tguiWidget* grid, size_t* count); // tguiGridWidgetLocation_free needs to be called on returned value. NULL is returned if there are no locations. The count is set by the function to indicate length of returned array.
