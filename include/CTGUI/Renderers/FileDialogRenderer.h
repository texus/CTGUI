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


#ifndef CTGUI_FILE_DIALOG_RENDERER_H
#define CTGUI_FILE_DIALOG_RENDERER_H

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

CTGUI_API void tguiFileDialogRenderer_setArrowsOnNavigationButtonsVisible(tguiRenderer* renderer, tguiBool showArrows);
CTGUI_API tguiBool tguiFileDialogRenderer_getArrowsOnNavigationButtonsVisible(const tguiRenderer* renderer);

#endif // CTGUI_FILE_DIALOG_RENDERER_H

