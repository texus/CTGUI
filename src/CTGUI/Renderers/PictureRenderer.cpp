// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/PictureRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>

#include <TGUI/Renderers/PictureRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::PictureRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiPictureRenderer_create(void)
{
    return new tguiRenderer(new tgui::PictureRenderer);
}

tguiRenderer* tguiPictureRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::PictureRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPictureRenderer_setTexture(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTexture(*texture->This);
}

tguiTexture* tguiPictureRenderer_getTexture(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTexture()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
