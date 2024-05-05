// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/PictureRenderer.h>
#include <CTGUI/RendererStruct.hpp>
#include <CTGUI/TextureStruct.hpp>

#include <TGUI/Renderers/PictureRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::PictureRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiPictureRenderer_create(void)
{
    return new tguiRenderer(new tgui::PictureRenderer);
}

tguiRenderer* tguiPictureRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::PictureRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPictureRenderer_setTexture(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTexture(*value->This);
}

const tguiTexture* tguiPictureRenderer_getTexture(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTexture()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
