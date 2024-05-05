// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/PanelRenderer.h>
#include <CTGUI/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/TextureStruct.hpp>

#include <TGUI/Renderers/PanelRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::PanelRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiPanelRenderer_create(void)
{
    return new tguiRenderer(new tgui::PanelRenderer);
}

tguiRenderer* tguiPanelRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::PanelRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value)
{
    DOWNCAST(thisRenderer->This)->setBorders(value->This);
}

const tguiOutline* tguiPanelRenderer_getBorders(const tguiRenderer* thisRenderer)
{
    return new tguiOutline(DOWNCAST(thisRenderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelRenderer_setBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColor(ctgui::toCppColor(value));
}

const tguiColor* tguiPanelRenderer_getBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelRenderer_setBorderColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBorderColor(ctgui::toCppColor(value));
}

const tguiColor* tguiPanelRenderer_getBorderColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureBackground(*value->This);
}

const tguiTexture* tguiPanelRenderer_getTextureBackground(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelRenderer_setRoundedBorderRadius(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setRoundedBorderRadius(value);
}

float tguiPanelRenderer_getRoundedBorderRadius(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getRoundedBorderRadius();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
