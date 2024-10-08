struct tguiFileDialogFilter
{
    tgui::String name;
    std::vector<tgui::String> expressions;
};

tguiFileDialogFilter* tguiFileDialogFilter_create(tguiUtf32 name)
{
    auto filter = new tguiFileDialogFilter;
    filter->name = ctgui::toCppStr(name);
    return filter;
}

void tguiFileDialogFilter_destroy(tguiFileDialogFilter* filter)
{
    delete filter;
}

void tguiFileDialogFilter_addExpression(tguiFileDialogFilter* filter, tguiUtf32 expression)
{
    filter->expressions.push_back(ctgui::toCppStr(expression));
}

const tguiUtf32* tguiFileDialogFilter_getExpressions(const tguiFileDialogFilter* filter, size_t* count)
{
    static std::vector<tguiUtf32> cExpressions;

    cExpressions.clear();
    for (const auto& cppExpression : filter->expressions)
        cExpressions.push_back(reinterpret_cast<tguiUtf32>(cppExpression.c_str()));

    *count = cExpressions.size();
    return cExpressions.data();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialog_setPath(tguiWidget* widget, tguiUtf32 path)
{
    DOWNCAST(widget->This)->setPath(ctgui::toCppStr(path));
}

tguiUtf32 tguiFileDialog_getPath(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getPath().asString());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const tguiUtf32* tguiFileDialog_getSelectedPaths(const tguiWidget* widget, size_t* count)
{
    const std::vector<tgui::Filesystem::Path>& cppPaths = DOWNCAST(widget->This)->getSelectedPaths();

    static std::vector<tgui::String> cppPathStrings;
    cppPathStrings.clear();
    for (const auto& cppPath : cppPaths)
        cppPathStrings.push_back(cppPath.asString());

    static std::vector<tguiUtf32> cPaths;
    cPaths.clear();
    for (const auto& path : cppPathStrings)
        cPaths.emplace_back(reinterpret_cast<tguiUtf32>(path.c_str()));

    *count = cPaths.size();
    return cPaths.data();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialog_setFileTypeFilters(tguiWidget* widget, const tguiFileDialogFilter* filters, size_t filterCount, size_t defaultFilterIndex)
{
    std::vector<std::pair<tgui::String, std::vector<tgui::String>>> cppFilters;
    for (size_t i = 0; i < filterCount; ++i)
        cppFilters.emplace_back(std::make_pair(filters[i].name, filters[i].expressions));

    DOWNCAST(widget->This)->setFileTypeFilters(cppFilters, defaultFilterIndex);
}

tguiFileDialogFilter** tguiFileDialog_getFileTypeFilters(const tguiWidget* widget, size_t* count)
{
    const std::vector<std::pair<tgui::String, std::vector<tgui::String>>>& cppFilters = DOWNCAST(widget->This)->getFileTypeFilters();

    static std::vector<tguiFileDialogFilter*> cFilters;
    cFilters.clear();
    for (const auto& cppFilter : cppFilters)
    {
        tguiFileDialogFilter* cFilter = cFilters.emplace_back(tguiFileDialogFilter_create(reinterpret_cast<tguiUtf32>(cppFilter.first.c_str())));
        for (const auto& cppExpression : cppFilter.second)
            tguiFileDialogFilter_addExpression(cFilter, reinterpret_cast<tguiUtf32>(cppExpression.c_str()));
    }

    *count = cFilters.size();
    return cFilters.data();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialog_setListViewColumnCaptions(tguiWidget* widget, tguiUtf32 nameColumnText, tguiUtf32 sizeColumnText, tguiUtf32 modifiedColumnText)
{
    DOWNCAST(widget->This)->setListViewColumnCaptions(ctgui::toCppStr(nameColumnText), ctgui::toCppStr(sizeColumnText), ctgui::toCppStr(modifiedColumnText));
}

tguiUtf32 tguiFileDialog_getListViewColumnCaptionsName(const tguiWidget* widget)
{
    return ctgui::fromCppStr(std::get<0>(DOWNCAST(widget->This)->getListViewColumnCaptions()));
}

tguiUtf32 tguiFileDialog_getListViewColumnCaptionsSize(const tguiWidget* widget)
{
    return ctgui::fromCppStr(std::get<1>(DOWNCAST(widget->This)->getListViewColumnCaptions()));
}

tguiUtf32 tguiFileDialog_getListViewColumnCaptionsModified(const tguiWidget* widget)
{
    return ctgui::fromCppStr(std::get<2>(DOWNCAST(widget->This)->getListViewColumnCaptions()));
}
