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


#include <CTGUI/Widgets/FileDialog.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/FileDialog.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::FileDialog>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

void tguiFileDialogFilter_free(tguiFileDialogFilter* filter)
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
        cExpressions.push_back(cppExpression.c_str());

    *count = cExpressions.size();
    return cExpressions.data();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiFileDialog_create(void)
{
    return ctgui::addWidgetRef(tgui::FileDialog::create());
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
        cPaths.emplace_back(path.c_str());

    *count = cPaths.size();
    return cPaths.data();
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

void tguiFileDialog_setFilename(tguiWidget* widget, tguiUtf32 filename)
{
    DOWNCAST(widget->This)->setFilename(ctgui::toCppStr(filename));
}

tguiUtf32 tguiFileDialog_getFilename(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getFilename());
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
        tguiFileDialogFilter* cFilter = cFilters.emplace_back(tguiFileDialogFilter_create(cppFilter.first.c_str()));
        for (const auto& cppExpression : cppFilter.second)
            tguiFileDialogFilter_addExpression(cFilter, cppExpression.c_str());
    }

    *count = cFilters.size();
    return cFilters.data();
}

size_t tguiFileDialog_getFileTypeFiltersIndex(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getFileTypeFiltersIndex();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialog_setConfirmButtonText(tguiWidget* widget, tguiUtf32 text)
{
    DOWNCAST(widget->This)->setConfirmButtonText(ctgui::toCppStr(text));
}

tguiUtf32 tguiFileDialog_getConfirmButtonText(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getConfirmButtonText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialog_setCancelButtonText(tguiWidget* widget, tguiUtf32 text)
{
    DOWNCAST(widget->This)->setCancelButtonText(ctgui::toCppStr(text));
}

tguiUtf32 tguiFileDialog_getCancelButtonText(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getCancelButtonText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialog_setCreateFolderButtonText(tguiWidget* widget, tguiUtf32 text)
{
    DOWNCAST(widget->This)->setCreateFolderButtonText(ctgui::toCppStr(text));
}

tguiUtf32 tguiFileDialog_getCreateFolderButtonText(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getCreateFolderButtonText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialog_setAllowCreateFolder(tguiWidget* widget, tguiBool allowCreateFolder)
{
    DOWNCAST(widget->This)->setAllowCreateFolder(allowCreateFolder != 0);
}

tguiBool tguiFileDialog_getAllowCreateFolder(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getAllowCreateFolder();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialog_setFilenameLabelText(tguiWidget* widget, tguiUtf32 labelText)
{
    DOWNCAST(widget->This)->setFilenameLabelText(ctgui::toCppStr(labelText));
}

tguiUtf32 tguiFileDialog_getFilenameLabelText(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getFilenameLabelText());
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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialog_setFileMustExist(tguiWidget* widget, tguiBool enforceExistence)
{
    DOWNCAST(widget->This)->setFileMustExist(enforceExistence != 0);
}

tguiBool tguiFileDialog_getFileMustExist(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getFileMustExist();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialog_setSelectingDirectory(tguiWidget* widget, tguiBool selectDirectories)
{
    DOWNCAST(widget->This)->setSelectingDirectory(selectDirectories != 0);
}

tguiBool tguiFileDialog_getSelectingDirectory(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getSelectingDirectory();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialog_setMultiSelect(tguiWidget* widget, tguiBool multiSelect)
{
    DOWNCAST(widget->This)->setMultiSelect(multiSelect != 0);
}

tguiBool tguiFileDialog_getMultiSelect(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMultiSelect();
}
