// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/SeparatorLineRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>

#include <TGUI/Renderers/SeparatorLineRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::SeparatorLineRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiSeparatorLineRenderer_create(void)
{
    return new tguiRenderer(new tgui::SeparatorLineRenderer);
}

tguiRenderer* tguiSeparatorLineRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::SeparatorLineRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSeparatorLineRenderer_setColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setColor(ctgui::toCppColor(color));
}

tguiColor* tguiSeparatorLineRenderer_getColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
