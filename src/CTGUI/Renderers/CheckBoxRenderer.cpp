// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/CheckBoxRenderer.h>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/CheckBoxRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::CheckBoxRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiCheckBoxRenderer_create(void)
{
    return new tguiRenderer(new tgui::CheckBoxRenderer);
}

tguiRenderer* tguiCheckBoxRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::CheckBoxRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
