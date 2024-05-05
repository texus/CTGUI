// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/SliderRenderer.h>
#include <CTGUI/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/TextureStruct.hpp>

#include <TGUI/Renderers/SliderRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::SliderRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiSliderRenderer_create(void)
{
    return new tguiRenderer(new tgui::SliderRenderer);
}

tguiRenderer* tguiSliderRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::SliderRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value)
{
    DOWNCAST(thisRenderer->This)->setBorders(value->This);
}

const tguiOutline* tguiSliderRenderer_getBorders(const tguiRenderer* thisRenderer)
{
    return new tguiOutline(DOWNCAST(thisRenderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setTrackColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setTrackColor(ctgui::toCppColor(value));
}

const tguiColor* tguiSliderRenderer_getTrackColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTrackColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setTrackColorHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setTrackColorHover(ctgui::toCppColor(value));
}

const tguiColor* tguiSliderRenderer_getTrackColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTrackColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setThumbColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setThumbColor(ctgui::toCppColor(value));
}

const tguiColor* tguiSliderRenderer_getThumbColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getThumbColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setThumbColorHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setThumbColorHover(ctgui::toCppColor(value));
}

const tguiColor* tguiSliderRenderer_getThumbColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getThumbColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setBorderColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBorderColor(ctgui::toCppColor(value));
}

const tguiColor* tguiSliderRenderer_getBorderColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setBorderColorHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBorderColorHover(ctgui::toCppColor(value));
}

const tguiColor* tguiSliderRenderer_getBorderColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setTextureTrack(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureTrack(*value->This);
}

const tguiTexture* tguiSliderRenderer_getTextureTrack(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureTrack()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setTextureTrackHover(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureTrackHover(*value->This);
}

const tguiTexture* tguiSliderRenderer_getTextureTrackHover(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureTrackHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setTextureThumb(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureThumb(*value->This);
}

const tguiTexture* tguiSliderRenderer_getTextureThumb(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureThumb()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setTextureThumbHover(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureThumbHover(*value->This);
}

const tguiTexture* tguiSliderRenderer_getTextureThumbHover(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureThumbHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setThumbWithinTrack(tguiRenderer* thisRenderer, tguiBool value)
{
    DOWNCAST(thisRenderer->This)->setThumbWithinTrack(value != 0);
}

tguiBool tguiSliderRenderer_getThumbWithinTrack(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getThumbWithinTrack();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
