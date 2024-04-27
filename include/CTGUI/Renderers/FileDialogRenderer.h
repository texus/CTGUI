// This file is generated, it should not be edited directly.

#ifndef CTGUI_FILEDIALOGRENDERER_H
#define CTGUI_FILEDIALOGRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiFileDialogRenderer_create(void);
CTGUI_API tguiRenderer* tguiFileDialogRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiFileDialogRenderer_setListView(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiFileDialogRenderer_getListView(const tguiRenderer* renderer);

CTGUI_API void tguiFileDialogRenderer_setEditBox(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiFileDialogRenderer_getEditBox(const tguiRenderer* renderer);

CTGUI_API void tguiFileDialogRenderer_setFilenameLabel(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiFileDialogRenderer_getFilenameLabel(const tguiRenderer* renderer);

CTGUI_API void tguiFileDialogRenderer_setFileTypeComboBox(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiFileDialogRenderer_getFileTypeComboBox(const tguiRenderer* renderer);

CTGUI_API void tguiFileDialogRenderer_setButton(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiFileDialogRenderer_getButton(const tguiRenderer* renderer);

CTGUI_API void tguiFileDialogRenderer_setBackButton(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiFileDialogRenderer_getBackButton(const tguiRenderer* renderer);

CTGUI_API void tguiFileDialogRenderer_setForwardButton(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiFileDialogRenderer_getForwardButton(const tguiRenderer* renderer);

CTGUI_API void tguiFileDialogRenderer_setUpButton(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiFileDialogRenderer_getUpButton(const tguiRenderer* renderer);

CTGUI_API void tguiFileDialogRenderer_setArrowsOnNavigationButtonsVisible(tguiRenderer* renderer, tguiBool value);
CTGUI_API tguiBool tguiFileDialogRenderer_getArrowsOnNavigationButtonsVisible(const tguiRenderer* renderer);

#endif // CTGUI_FILEDIALOGRENDERER_H
