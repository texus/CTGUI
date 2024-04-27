// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/GroupRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>

#include <TGUI/Renderers/GroupRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::GroupRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiGroupRenderer_create(void)
{
    return new tguiRenderer(new tgui::GroupRenderer);
}

tguiRenderer* tguiGroupRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::GroupRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGroupRenderer_setPadding(tguiRenderer* renderer, tguiOutline* outline)
{
    DOWNCAST(renderer->This)->setPadding(outline->This);
}

tguiOutline* tguiGroupRenderer_getPadding(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getPadding());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
