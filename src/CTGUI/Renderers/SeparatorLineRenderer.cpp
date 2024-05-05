// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/SeparatorLineRenderer.h>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/SeparatorLineRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::SeparatorLineRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiSeparatorLineRenderer_create(void)
{
    return new tguiRenderer(new tgui::SeparatorLineRenderer);
}

tguiRenderer* tguiSeparatorLineRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::SeparatorLineRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSeparatorLineRenderer_setColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setColor(ctgui::toCppColor(value));
}

const tguiColor* tguiSeparatorLineRenderer_getColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
