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
