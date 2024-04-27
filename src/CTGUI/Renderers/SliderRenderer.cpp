// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/SliderRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>

#include <TGUI/Renderers/SliderRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::SliderRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiSliderRenderer_create(void)
{
    return new tguiRenderer(new tgui::SliderRenderer);
}

tguiRenderer* tguiSliderRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::SliderRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline)
{
    DOWNCAST(renderer->This)->setBorders(outline->This);
}

tguiOutline* tguiSliderRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setTrackColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTrackColor(ctgui::toCppColor(color));
}

tguiColor* tguiSliderRenderer_getTrackColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTrackColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setTrackColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTrackColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiSliderRenderer_getTrackColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTrackColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setThumbColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setThumbColor(ctgui::toCppColor(color));
}

tguiColor* tguiSliderRenderer_getThumbColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getThumbColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setThumbColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setThumbColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiSliderRenderer_getThumbColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getThumbColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColor(ctgui::toCppColor(color));
}

tguiColor* tguiSliderRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setBorderColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiSliderRenderer_getBorderColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setTextureTrack(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureTrack(*texture->This);
}

tguiTexture* tguiSliderRenderer_getTextureTrack(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureTrack()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setTextureTrackHover(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureTrackHover(*texture->This);
}

tguiTexture* tguiSliderRenderer_getTextureTrackHover(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureTrackHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setTextureThumb(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureThumb(*texture->This);
}

tguiTexture* tguiSliderRenderer_getTextureThumb(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureThumb()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setTextureThumbHover(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureThumbHover(*texture->This);
}

tguiTexture* tguiSliderRenderer_getTextureThumbHover(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureThumbHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setThumbWithinTrack(tguiRenderer* renderer, tguiBool value)
{
    DOWNCAST(renderer->This)->setThumbWithinTrack(value != 0);
}

tguiBool tguiSliderRenderer_getThumbWithinTrack(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getThumbWithinTrack();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
