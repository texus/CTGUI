// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/ScrollablePanelRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>

#include <TGUI/Renderers/ScrollablePanelRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ScrollablePanelRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiScrollablePanelRenderer_create(void)
{
    return new tguiRenderer(new tgui::ScrollablePanelRenderer);
}

tguiRenderer* tguiScrollablePanelRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::ScrollablePanelRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanelRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setScrollbar(rendererData->This);
}

tguiRendererData* tguiScrollablePanelRenderer_getScrollbar(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getScrollbar());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanelRenderer_setScrollbarWidth(tguiRenderer* renderer, float value)
{
    DOWNCAST(renderer->This)->setScrollbarWidth(value);
}

float tguiScrollablePanelRenderer_getScrollbarWidth(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getScrollbarWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
