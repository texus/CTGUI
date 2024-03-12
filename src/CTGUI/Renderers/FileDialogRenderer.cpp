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


#include <CTGUI/Renderers/FileDialogRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>

#include <TGUI/Renderers/FileDialogRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::FileDialogRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiFileDialogRenderer_create(void)
{
    return new tguiRenderer(new tgui::FileDialogRenderer);
}

tguiRenderer* tguiFileDialogRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::FileDialogRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialogRenderer_setListView(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setListView(rendererData->This);
}

tguiRendererData* tguiFileDialogRenderer_getListView(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getListView());
}

void tguiFileDialogRenderer_setEditBox(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setEditBox(rendererData->This);
}

tguiRendererData* tguiFileDialogRenderer_getEditBox(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getEditBox());
}

void tguiFileDialogRenderer_setFilenameLabel(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setFilenameLabel(rendererData->This);
}

tguiRendererData* tguiFileDialogRenderer_getFilenameLabel(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getFilenameLabel());
}

void tguiFileDialogRenderer_setFileTypeComboBox(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setFileTypeComboBox(rendererData->This);
}

tguiRendererData* tguiFileDialogRenderer_getFileTypeComboBox(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getFileTypeComboBox());
}

void tguiFileDialogRenderer_setButton(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setButton(rendererData->This);
}

tguiRendererData* tguiFileDialogRenderer_getButton(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getButton());
}

void tguiFileDialogRenderer_setBackButton(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setBackButton(rendererData->This);
}

tguiRendererData* tguiFileDialogRenderer_getBackButton(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getBackButton());
}

void tguiFileDialogRenderer_setForwardButton(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setForwardButton(rendererData->This);
}

tguiRendererData* tguiFileDialogRenderer_getForwardButton(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getForwardButton());
}

void tguiFileDialogRenderer_setUpButton(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setUpButton(rendererData->This);
}

tguiRendererData* tguiFileDialogRenderer_getUpButton(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getUpButton());
}

void tguiFileDialogRenderer_setArrowsOnNavigationButtonsVisible(tguiRenderer* renderer, tguiBool showArrows)
{
    DOWNCAST(renderer->This)->setArrowsOnNavigationButtonsVisible(showArrows != 0);
}

tguiBool tguiFileDialogRenderer_getArrowsOnNavigationButtonsVisible(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getArrowsOnNavigationButtonsVisible();
}
