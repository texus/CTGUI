// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/ContextMenuRenderer.h>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/ContextMenuRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ContextMenuRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiContextMenuRenderer_create(void)
{
    return new tguiRenderer(new tgui::ContextMenuRenderer);
}

tguiRenderer* tguiContextMenuRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::ContextMenuRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
