// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/SplitContainerRenderer.h>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/SplitContainerRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::SplitContainerRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiSplitContainerRenderer_create(void)
{
    return new tguiRenderer(new tgui::SplitContainerRenderer);
}

tguiRenderer* tguiSplitContainerRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::SplitContainerRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSplitContainerRenderer_setSplitterColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setSplitterColor(ctgui::toCppColor(value));
}

const tguiColor* tguiSplitContainerRenderer_getSplitterColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSplitterColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSplitContainerRenderer_setSplitterColorHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setSplitterColorHover(ctgui::toCppColor(value));
}

const tguiColor* tguiSplitContainerRenderer_getSplitterColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSplitterColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
