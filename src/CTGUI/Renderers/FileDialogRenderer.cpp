// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/FileDialogRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>

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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialogRenderer_setEditBox(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setEditBox(rendererData->This);
}

tguiRendererData* tguiFileDialogRenderer_getEditBox(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getEditBox());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialogRenderer_setFilenameLabel(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setFilenameLabel(rendererData->This);
}

tguiRendererData* tguiFileDialogRenderer_getFilenameLabel(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getFilenameLabel());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialogRenderer_setFileTypeComboBox(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setFileTypeComboBox(rendererData->This);
}

tguiRendererData* tguiFileDialogRenderer_getFileTypeComboBox(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getFileTypeComboBox());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialogRenderer_setButton(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setButton(rendererData->This);
}

tguiRendererData* tguiFileDialogRenderer_getButton(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getButton());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialogRenderer_setBackButton(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setBackButton(rendererData->This);
}

tguiRendererData* tguiFileDialogRenderer_getBackButton(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getBackButton());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialogRenderer_setForwardButton(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setForwardButton(rendererData->This);
}

tguiRendererData* tguiFileDialogRenderer_getForwardButton(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getForwardButton());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialogRenderer_setUpButton(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setUpButton(rendererData->This);
}

tguiRendererData* tguiFileDialogRenderer_getUpButton(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getUpButton());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialogRenderer_setArrowsOnNavigationButtonsVisible(tguiRenderer* renderer, tguiBool value)
{
    DOWNCAST(renderer->This)->setArrowsOnNavigationButtonsVisible(value != 0);
}

tguiBool tguiFileDialogRenderer_getArrowsOnNavigationButtonsVisible(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getArrowsOnNavigationButtonsVisible();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
