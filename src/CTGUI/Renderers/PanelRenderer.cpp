// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/PanelRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>

#include <TGUI/Renderers/PanelRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::PanelRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiPanelRenderer_create(void)
{
    return new tguiRenderer(new tgui::PanelRenderer);
}

tguiRenderer* tguiPanelRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::PanelRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline)
{
    DOWNCAST(renderer->This)->setBorders(outline->This);
}

tguiOutline* tguiPanelRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiPanelRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColor(ctgui::toCppColor(color));
}

tguiColor* tguiPanelRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBackground(*texture->This);
}

tguiTexture* tguiPanelRenderer_getTextureBackground(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelRenderer_setRoundedBorderRadius(tguiRenderer* renderer, float value)
{
    DOWNCAST(renderer->This)->setRoundedBorderRadius(value);
}

float tguiPanelRenderer_getRoundedBorderRadius(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getRoundedBorderRadius();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
