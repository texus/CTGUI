// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/ScrollablePanelRenderer.h>
#include <CTGUI/RendererDataStruct.hpp>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/ScrollablePanelRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ScrollablePanelRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiScrollablePanelRenderer_create(void)
{
    return new tguiRenderer(new tgui::ScrollablePanelRenderer);
}

tguiRenderer* tguiScrollablePanelRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::ScrollablePanelRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanelRenderer_setScrollbar(tguiRenderer* thisRenderer, const tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setScrollbar(value->This);
}

const tguiRendererData* tguiScrollablePanelRenderer_getScrollbar(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getScrollbar());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanelRenderer_setScrollbarWidth(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setScrollbarWidth(value);
}

float tguiScrollablePanelRenderer_getScrollbarWidth(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getScrollbarWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
