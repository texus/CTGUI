// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/BoxLayoutRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>

#include <TGUI/Renderers/BoxLayoutRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::BoxLayoutRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiBoxLayoutRenderer_create(void)
{
    return new tguiRenderer(new tgui::BoxLayoutRenderer);
}

tguiRenderer* tguiBoxLayoutRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::BoxLayoutRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiBoxLayoutRenderer_setSpaceBetweenWidgets(tguiRenderer* renderer, float value)
{
    DOWNCAST(renderer->This)->setSpaceBetweenWidgets(value);
}

float tguiBoxLayoutRenderer_getSpaceBetweenWidgets(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getSpaceBetweenWidgets();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
