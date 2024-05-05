// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/BoxLayoutRenderer.h>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/BoxLayoutRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::BoxLayoutRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiBoxLayoutRenderer_create(void)
{
    return new tguiRenderer(new tgui::BoxLayoutRenderer);
}

tguiRenderer* tguiBoxLayoutRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::BoxLayoutRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiBoxLayoutRenderer_setSpaceBetweenWidgets(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setSpaceBetweenWidgets(value);
}

float tguiBoxLayoutRenderer_getSpaceBetweenWidgets(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getSpaceBetweenWidgets();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
