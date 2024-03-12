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


#ifndef CTGUI_FILE_DIALOG_H
#define CTGUI_FILE_DIALOG_H

#include <CTGUI/Widget.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct tguiFileDialogFilter tguiFileDialogFilter;

CTGUI_API tguiFileDialogFilter* tguiFileDialogFilter_create(tguiUtf32 name);
CTGUI_API void tguiFileDialogFilter_free(tguiFileDialogFilter* filter);

CTGUI_API void tguiFileDialogFilter_addExpression(tguiFileDialogFilter* filter, tguiUtf32 expression);
CTGUI_API const tguiUtf32* tguiFileDialogFilter_getExpressions(const tguiFileDialogFilter* filter, size_t* count); // count is set by the function to indicate length of returned array

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiWidget* tguiFileDialog_create(void);

CTGUI_API const tguiUtf32* tguiFileDialog_getSelectedPaths(const tguiWidget* widget, size_t* count); // count is set by the function to indicate length of returned array

CTGUI_API void tguiFileDialog_setPath(tguiWidget* widget, tguiUtf32 path);
CTGUI_API tguiUtf32 tguiFileDialog_getPath(const tguiWidget* widget);

CTGUI_API void tguiFileDialog_setFilename(tguiWidget* widget, tguiUtf32 filename);
CTGUI_API tguiUtf32 tguiFileDialog_getFilename(const tguiWidget* widget);

CTGUI_API void tguiFileDialog_setFileTypeFilters(tguiWidget* widget, const tguiFileDialogFilter* filters, size_t filterCount, size_t defaultFilterIndex);
CTGUI_API tguiFileDialogFilter** tguiFileDialog_getFileTypeFilters(const tguiWidget* widget, size_t* count); // tguiFileDialogFilter_free must be called on each element in the returned array, count is set by the function to indicate the array length
CTGUI_API size_t tguiFileDialog_getFileTypeFiltersIndex(const tguiWidget* widget);

CTGUI_API void tguiFileDialog_setConfirmButtonText(tguiWidget* widget, tguiUtf32 text);
CTGUI_API tguiUtf32 tguiFileDialog_getConfirmButtonText(const tguiWidget* widget);

CTGUI_API void tguiFileDialog_setCancelButtonText(tguiWidget* widget, tguiUtf32 text);
CTGUI_API tguiUtf32 tguiFileDialog_getCancelButtonText(const tguiWidget* widget);

CTGUI_API void tguiFileDialog_setCreateFolderButtonText(tguiWidget* widget, tguiUtf32 text);
CTGUI_API tguiUtf32 tguiFileDialog_getCreateFolderButtonText(const tguiWidget* widget);

CTGUI_API void tguiFileDialog_setAllowCreateFolder(tguiWidget* widget, tguiBool allowCreateFolder);
CTGUI_API tguiBool tguiFileDialog_getAllowCreateFolder(const tguiWidget* widget);

CTGUI_API void tguiFileDialog_setFilenameLabelText(tguiWidget* widget, tguiUtf32 labelText);
CTGUI_API tguiUtf32 tguiFileDialog_getFilenameLabelText(const tguiWidget* widget);

CTGUI_API void tguiFileDialog_setListViewColumnCaptions(tguiWidget* widget, tguiUtf32 nameColumnText, tguiUtf32 sizeColumnText, tguiUtf32 modifiedColumnText);
CTGUI_API tguiUtf32 tguiFileDialog_getListViewColumnCaptionsName(const tguiWidget* widget);
CTGUI_API tguiUtf32 tguiFileDialog_getListViewColumnCaptionsSize(const tguiWidget* widget);
CTGUI_API tguiUtf32 tguiFileDialog_getListViewColumnCaptionsModified(const tguiWidget* widget);

CTGUI_API void tguiFileDialog_setFileMustExist(tguiWidget* widget, tguiBool enforceExistence);
CTGUI_API tguiBool tguiFileDialog_getFileMustExist(const tguiWidget* widget);

CTGUI_API void tguiFileDialog_setSelectingDirectory(tguiWidget* widget, tguiBool selectDirectories);
CTGUI_API tguiBool tguiFileDialog_getSelectingDirectory(const tguiWidget* widget);

CTGUI_API void tguiFileDialog_setMultiSelect(tguiWidget* widget, tguiBool multiSelect);
CTGUI_API tguiBool tguiFileDialog_getMultiSelect(const tguiWidget* widget);

#endif // CTGUI_FILE_DIALOG_H

