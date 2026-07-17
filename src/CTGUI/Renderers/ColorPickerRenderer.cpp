// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/ColorPickerRenderer.h>
#include <CTGUI/RendererDataStruct.hpp>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/ColorPickerRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ColorPickerRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiColorPickerRenderer_create(void)
{
    return new tguiRenderer(new tgui::ColorPickerRenderer);
}

tguiRenderer* tguiColorPickerRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::ColorPickerRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiColorPickerRenderer_setButton(tguiRenderer* thisRenderer, tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setButton(value->This);
}

tguiRendererData* tguiColorPickerRenderer_getButton(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getButton());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiColorPickerRenderer_setLabel(tguiRenderer* thisRenderer, tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setLabel(value->This);
}

tguiRendererData* tguiColorPickerRenderer_getLabel(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getLabel());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiColorPickerRenderer_setSlider(tguiRenderer* thisRenderer, tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setSlider(value->This);
}

tguiRendererData* tguiColorPickerRenderer_getSlider(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getSlider());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiColorPickerRenderer_setEditBox(tguiRenderer* thisRenderer, tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setEditBox(value->This);
}

tguiRendererData* tguiColorPickerRenderer_getEditBox(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getEditBox());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
