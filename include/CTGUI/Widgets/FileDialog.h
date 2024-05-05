// This file is generated, it should not be edited directly.

#ifndef CTGUI_FILEDIALOG_H
#define CTGUI_FILEDIALOG_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiFileDialog_create(void);

CTGUI_API void tguiFileDialog_setFilename(tguiWidget* thisWidget, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiFileDialog_getFilename(const tguiWidget* thisWidget);

CTGUI_API size_t tguiFileDialog_getFileTypeFiltersIndex(const tguiWidget* thisWidget);

CTGUI_API void tguiFileDialog_setConfirmButtonText(tguiWidget* thisWidget, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiFileDialog_getConfirmButtonText(const tguiWidget* thisWidget);

CTGUI_API void tguiFileDialog_setCancelButtonText(tguiWidget* thisWidget, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiFileDialog_getCancelButtonText(const tguiWidget* thisWidget);

CTGUI_API void tguiFileDialog_setCreateFolderButtonText(tguiWidget* thisWidget, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiFileDialog_getCreateFolderButtonText(const tguiWidget* thisWidget);

CTGUI_API void tguiFileDialog_setFilenameLabelText(tguiWidget* thisWidget, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiFileDialog_getFilenameLabelText(const tguiWidget* thisWidget);

CTGUI_API void tguiFileDialog_setAllowCreateFolder(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiFileDialog_getAllowCreateFolder(const tguiWidget* thisWidget);

CTGUI_API void tguiFileDialog_setFileMustExist(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiFileDialog_getFileMustExist(const tguiWidget* thisWidget);

CTGUI_API void tguiFileDialog_setSelectingDirectory(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiFileDialog_getSelectingDirectory(const tguiWidget* thisWidget);

CTGUI_API void tguiFileDialog_setMultiSelect(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiFileDialog_getMultiSelect(const tguiWidget* thisWidget);

typedef struct tguiFileDialogFilter tguiFileDialogFilter;

CTGUI_API tguiFileDialogFilter* tguiFileDialogFilter_create(tguiUtf32 name);
CTGUI_API void tguiFileDialogFilter_free(tguiFileDialogFilter* filter);

CTGUI_API void tguiFileDialogFilter_addExpression(tguiFileDialogFilter* filter, tguiUtf32 expression);
CTGUI_API const tguiUtf32* tguiFileDialogFilter_getExpressions(const tguiFileDialogFilter* filter, size_t* count); // count is set by the function to indicate length of returned array

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API void tguiFileDialog_setPath(tguiWidget* widget, tguiUtf32 path);
CTGUI_API tguiUtf32 tguiFileDialog_getPath(const tguiWidget* widget);

CTGUI_API const tguiUtf32* tguiFileDialog_getSelectedPaths(const tguiWidget* widget, size_t* count); // count is set by the function to indicate length of returned array

CTGUI_API void tguiFileDialog_setFileTypeFilters(tguiWidget* widget, const tguiFileDialogFilter* filters, size_t filterCount, size_t defaultFilterIndex);
CTGUI_API tguiFileDialogFilter** tguiFileDialog_getFileTypeFilters(const tguiWidget* widget, size_t* count); // tguiFileDialogFilter_free must be called on each element in the returned array, count is set by the function to indicate the array length

CTGUI_API void tguiFileDialog_setListViewColumnCaptions(tguiWidget* widget, tguiUtf32 nameColumnText, tguiUtf32 sizeColumnText, tguiUtf32 modifiedColumnText);
CTGUI_API tguiUtf32 tguiFileDialog_getListViewColumnCaptionsName(const tguiWidget* widget);
CTGUI_API tguiUtf32 tguiFileDialog_getListViewColumnCaptionsSize(const tguiWidget* widget);
CTGUI_API tguiUtf32 tguiFileDialog_getListViewColumnCaptionsModified(const tguiWidget* widget);
#endif // CTGUI_FILEDIALOG_H
