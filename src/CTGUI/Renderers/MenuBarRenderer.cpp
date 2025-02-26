// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/MenuBarRenderer.h>
#include <CTGUI/TextureStruct.hpp>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/MenuBarRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::MenuBarRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiMenuBarRenderer_create(void)
{
    return new tguiRenderer(new tgui::MenuBarRenderer);
}

tguiRenderer* tguiMenuBarRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::MenuBarRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureBackground(*value->This);
}

const tguiTexture* tguiMenuBarRenderer_getTextureBackground(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
