// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/FileDialogRenderer.h>
#include <CTGUI/RendererDataStruct.hpp>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/FileDialogRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::FileDialogRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiFileDialogRenderer_create(void)
{
    return new tguiRenderer(new tgui::FileDialogRenderer);
}

tguiRenderer* tguiFileDialogRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::FileDialogRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialogRenderer_setListView(tguiRenderer* thisRenderer, const tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setListView(value->This);
}

const tguiRendererData* tguiFileDialogRenderer_getListView(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getListView());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialogRenderer_setEditBox(tguiRenderer* thisRenderer, const tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setEditBox(value->This);
}

const tguiRendererData* tguiFileDialogRenderer_getEditBox(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getEditBox());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialogRenderer_setFilenameLabel(tguiRenderer* thisRenderer, const tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setFilenameLabel(value->This);
}

const tguiRendererData* tguiFileDialogRenderer_getFilenameLabel(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getFilenameLabel());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialogRenderer_setFileTypeComboBox(tguiRenderer* thisRenderer, const tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setFileTypeComboBox(value->This);
}

const tguiRendererData* tguiFileDialogRenderer_getFileTypeComboBox(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getFileTypeComboBox());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialogRenderer_setButton(tguiRenderer* thisRenderer, const tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setButton(value->This);
}

const tguiRendererData* tguiFileDialogRenderer_getButton(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getButton());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialogRenderer_setBackButton(tguiRenderer* thisRenderer, const tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setBackButton(value->This);
}

const tguiRendererData* tguiFileDialogRenderer_getBackButton(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getBackButton());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialogRenderer_setForwardButton(tguiRenderer* thisRenderer, const tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setForwardButton(value->This);
}

const tguiRendererData* tguiFileDialogRenderer_getForwardButton(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getForwardButton());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialogRenderer_setUpButton(tguiRenderer* thisRenderer, const tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setUpButton(value->This);
}

const tguiRendererData* tguiFileDialogRenderer_getUpButton(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getUpButton());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFileDialogRenderer_setArrowsOnNavigationButtonsVisible(tguiRenderer* thisRenderer, tguiBool value)
{
    DOWNCAST(thisRenderer->This)->setArrowsOnNavigationButtonsVisible(value != 0);
}

tguiBool tguiFileDialogRenderer_getArrowsOnNavigationButtonsVisible(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getArrowsOnNavigationButtonsVisible();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
