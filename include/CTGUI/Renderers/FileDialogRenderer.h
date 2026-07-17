// This file is generated, it should not be edited directly.

#ifndef CTGUI_FILEDIALOGRENDERER_H
#define CTGUI_FILEDIALOGRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiFileDialogRenderer_create(void);
CTGUI_API tguiRenderer* tguiFileDialogRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiFileDialogRenderer_setListView(tguiRenderer* thisRenderer, tguiRendererData* value);
CTGUI_API tguiRendererData* tguiFileDialogRenderer_getListView(const tguiRenderer* thisRenderer);

CTGUI_API void tguiFileDialogRenderer_setEditBox(tguiRenderer* thisRenderer, tguiRendererData* value);
CTGUI_API tguiRendererData* tguiFileDialogRenderer_getEditBox(const tguiRenderer* thisRenderer);

CTGUI_API void tguiFileDialogRenderer_setFilenameLabel(tguiRenderer* thisRenderer, tguiRendererData* value);
CTGUI_API tguiRendererData* tguiFileDialogRenderer_getFilenameLabel(const tguiRenderer* thisRenderer);

CTGUI_API void tguiFileDialogRenderer_setFileTypeComboBox(tguiRenderer* thisRenderer, tguiRendererData* value);
CTGUI_API tguiRendererData* tguiFileDialogRenderer_getFileTypeComboBox(const tguiRenderer* thisRenderer);

CTGUI_API void tguiFileDialogRenderer_setButton(tguiRenderer* thisRenderer, tguiRendererData* value);
CTGUI_API tguiRendererData* tguiFileDialogRenderer_getButton(const tguiRenderer* thisRenderer);

CTGUI_API void tguiFileDialogRenderer_setBackButton(tguiRenderer* thisRenderer, tguiRendererData* value);
CTGUI_API tguiRendererData* tguiFileDialogRenderer_getBackButton(const tguiRenderer* thisRenderer);

CTGUI_API void tguiFileDialogRenderer_setForwardButton(tguiRenderer* thisRenderer, tguiRendererData* value);
CTGUI_API tguiRendererData* tguiFileDialogRenderer_getForwardButton(const tguiRenderer* thisRenderer);

CTGUI_API void tguiFileDialogRenderer_setUpButton(tguiRenderer* thisRenderer, tguiRendererData* value);
CTGUI_API tguiRendererData* tguiFileDialogRenderer_getUpButton(const tguiRenderer* thisRenderer);

CTGUI_API void tguiFileDialogRenderer_setArrowsOnNavigationButtonsVisible(tguiRenderer* thisRenderer, tguiBool value);
CTGUI_API tguiBool tguiFileDialogRenderer_getArrowsOnNavigationButtonsVisible(const tguiRenderer* thisRenderer);

#endif // CTGUI_FILEDIALOGRENDERER_H
