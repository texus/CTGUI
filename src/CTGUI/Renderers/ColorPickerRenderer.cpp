// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/ColorPickerRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>

#include <TGUI/Renderers/ColorPickerRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ColorPickerRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiColorPickerRenderer_create(void)
{
    return new tguiRenderer(new tgui::ColorPickerRenderer);
}

tguiRenderer* tguiColorPickerRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::ColorPickerRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiColorPickerRenderer_setButton(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setButton(rendererData->This);
}

tguiRendererData* tguiColorPickerRenderer_getButton(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getButton());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiColorPickerRenderer_setLabel(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setLabel(rendererData->This);
}

tguiRendererData* tguiColorPickerRenderer_getLabel(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getLabel());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiColorPickerRenderer_setSlider(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setSlider(rendererData->This);
}

tguiRendererData* tguiColorPickerRenderer_getSlider(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getSlider());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
