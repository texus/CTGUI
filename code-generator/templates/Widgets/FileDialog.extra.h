typedef struct tguiFileDialogFilter tguiFileDialogFilter;

CTGUI_API tguiFileDialogFilter* tguiFileDialogFilter_create(tguiUtf32 name);
CTGUI_API void tguiFileDialogFilter_destroy(tguiFileDialogFilter* filter);

CTGUI_API void tguiFileDialogFilter_addExpression(tguiFileDialogFilter* filter, tguiUtf32 expression);
CTGUI_API const tguiUtf32* tguiFileDialogFilter_getExpressions(const tguiFileDialogFilter* filter, size_t* count); // count is set by the function to indicate length of returned array

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API void tguiFileDialog_setPath(tguiWidget* widget, tguiUtf32 path);
CTGUI_API tguiUtf32 tguiFileDialog_getPath(const tguiWidget* widget);

CTGUI_API const tguiUtf32* tguiFileDialog_getSelectedPaths(const tguiWidget* widget, size_t* count); // count is set by the function to indicate length of returned array

CTGUI_API void tguiFileDialog_setFileTypeFilters(tguiWidget* widget, const tguiFileDialogFilter* filters, size_t filterCount, size_t defaultFilterIndex);
CTGUI_API tguiFileDialogFilter** tguiFileDialog_getFileTypeFilters(const tguiWidget* widget, size_t* count); // tguiFileDialogFilter_destroy must be called on each element in the returned array, count is set by the function to indicate the array length

CTGUI_API void tguiFileDialog_setListViewColumnCaptions(tguiWidget* widget, tguiUtf32 nameColumnText, tguiUtf32 sizeColumnText, tguiUtf32 modifiedColumnText);
CTGUI_API tguiUtf32 tguiFileDialog_getListViewColumnCaptionsName(const tguiWidget* widget);
CTGUI_API tguiUtf32 tguiFileDialog_getListViewColumnCaptionsSize(const tguiWidget* widget);
CTGUI_API tguiUtf32 tguiFileDialog_getListViewColumnCaptionsModified(const tguiWidget* widget);
