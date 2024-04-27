// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/MessageBoxRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>

#include <TGUI/Renderers/MessageBoxRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::MessageBoxRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiMessageBoxRenderer_create(void)
{
    return new tguiRenderer(new tgui::MessageBoxRenderer);
}

tguiRenderer* tguiMessageBoxRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::MessageBoxRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMessageBoxRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColor(ctgui::toCppColor(color));
}

tguiColor* tguiMessageBoxRenderer_getTextColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMessageBoxRenderer_setButton(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setButton(rendererData->This);
}

tguiRendererData* tguiMessageBoxRenderer_getButton(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getButton());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
