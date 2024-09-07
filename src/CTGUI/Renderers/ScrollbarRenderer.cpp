// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/ScrollbarRenderer.h>
#include <CTGUI/TextureStruct.hpp>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/ScrollbarRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ScrollbarRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiScrollbarRenderer_create(void)
{
    return new tguiRenderer(new tgui::ScrollbarRenderer);
}

tguiRenderer* tguiScrollbarRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::ScrollbarRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setTrackColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setTrackColor(ctgui::toCppColor(value));
}

tguiColor tguiScrollbarRenderer_getTrackColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTrackColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setTrackColorHover(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setTrackColorHover(ctgui::toCppColor(value));
}

tguiColor tguiScrollbarRenderer_getTrackColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTrackColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setThumbColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setThumbColor(ctgui::toCppColor(value));
}

tguiColor tguiScrollbarRenderer_getThumbColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getThumbColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setThumbColorHover(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setThumbColorHover(ctgui::toCppColor(value));
}

tguiColor tguiScrollbarRenderer_getThumbColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getThumbColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setArrowBackgroundColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setArrowBackgroundColor(ctgui::toCppColor(value));
}

tguiColor tguiScrollbarRenderer_getArrowBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getArrowBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setArrowBackgroundColorHover(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setArrowBackgroundColorHover(ctgui::toCppColor(value));
}

tguiColor tguiScrollbarRenderer_getArrowBackgroundColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getArrowBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setArrowColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setArrowColor(ctgui::toCppColor(value));
}

tguiColor tguiScrollbarRenderer_getArrowColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getArrowColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setArrowColorHover(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setArrowColorHover(ctgui::toCppColor(value));
}

tguiColor tguiScrollbarRenderer_getArrowColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getArrowColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setTextureTrack(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureTrack(*value->This);
}

const tguiTexture* tguiScrollbarRenderer_getTextureTrack(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureTrack()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setTextureTrackHover(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureTrackHover(*value->This);
}

const tguiTexture* tguiScrollbarRenderer_getTextureTrackHover(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureTrackHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setTextureThumb(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureThumb(*value->This);
}

const tguiTexture* tguiScrollbarRenderer_getTextureThumb(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureThumb()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setTextureThumbHover(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureThumbHover(*value->This);
}

const tguiTexture* tguiScrollbarRenderer_getTextureThumbHover(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureThumbHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setTextureArrowUp(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureArrowUp(*value->This);
}

const tguiTexture* tguiScrollbarRenderer_getTextureArrowUp(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureArrowUp()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setTextureArrowUpHover(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureArrowUpHover(*value->This);
}

const tguiTexture* tguiScrollbarRenderer_getTextureArrowUpHover(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureArrowUpHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setTextureArrowDown(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureArrowDown(*value->This);
}

const tguiTexture* tguiScrollbarRenderer_getTextureArrowDown(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureArrowDown()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setTextureArrowDownHover(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureArrowDownHover(*value->This);
}

const tguiTexture* tguiScrollbarRenderer_getTextureArrowDownHover(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureArrowDownHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
