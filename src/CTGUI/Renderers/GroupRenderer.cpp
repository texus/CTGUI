// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/GroupRenderer.h>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/GroupRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::GroupRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiGroupRenderer_create(void)
{
    return new tguiRenderer(new tgui::GroupRenderer);
}

tguiRenderer* tguiGroupRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::GroupRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGroupRenderer_setPadding(tguiRenderer* thisRenderer, const tguiOutline* value)
{
    DOWNCAST(thisRenderer->This)->setPadding(value->This);
}

const tguiOutline* tguiGroupRenderer_getPadding(const tguiRenderer* thisRenderer)
{
    return new tguiOutline(DOWNCAST(thisRenderer->This)->getPadding());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
