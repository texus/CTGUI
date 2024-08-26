// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/RangeSliderRenderer.h>
#include <CTGUI/TextureStruct.hpp>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/RangeSliderRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::RangeSliderRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiRangeSliderRenderer_create(void)
{
    return new tguiRenderer(new tgui::RangeSliderRenderer);
}

tguiRenderer* tguiRangeSliderRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::RangeSliderRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSliderRenderer_setSelectedTrackColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setSelectedTrackColor(ctgui::toCppColor(value));
}

const tguiColor* tguiRangeSliderRenderer_getSelectedTrackColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedTrackColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSliderRenderer_setSelectedTrackColorHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setSelectedTrackColorHover(ctgui::toCppColor(value));
}

const tguiColor* tguiRangeSliderRenderer_getSelectedTrackColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedTrackColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSliderRenderer_setTextureSelectedTrack(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureSelectedTrack(*value->This);
}

const tguiTexture* tguiRangeSliderRenderer_getTextureSelectedTrack(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureSelectedTrack()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSliderRenderer_setTextureSelectedTrackHover(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureSelectedTrackHover(*value->This);
}

const tguiTexture* tguiRangeSliderRenderer_getTextureSelectedTrackHover(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureSelectedTrackHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
