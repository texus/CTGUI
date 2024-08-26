// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/ProgressBarRenderer.h>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/TextureStruct.hpp>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/ProgressBarRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ProgressBarRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiProgressBarRenderer_create(void)
{
    return new tguiRenderer(new tgui::ProgressBarRenderer);
}

tguiRenderer* tguiProgressBarRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::ProgressBarRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value)
{
    DOWNCAST(thisRenderer->This)->setBorders(value->This);
}

const tguiOutline* tguiProgressBarRenderer_getBorders(const tguiRenderer* thisRenderer)
{
    return new tguiOutline(DOWNCAST(thisRenderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setTextColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setTextColor(ctgui::toCppColor(value));
}

const tguiColor* tguiProgressBarRenderer_getTextColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setTextColorFilled(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setTextColorFilled(ctgui::toCppColor(value));
}

const tguiColor* tguiProgressBarRenderer_getTextColorFilled(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColorFilled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColor(ctgui::toCppColor(value));
}

const tguiColor* tguiProgressBarRenderer_getBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setFillColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setFillColor(ctgui::toCppColor(value));
}

const tguiColor* tguiProgressBarRenderer_getFillColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getFillColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setBorderColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBorderColor(ctgui::toCppColor(value));
}

const tguiColor* tguiProgressBarRenderer_getBorderColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureBackground(*value->This);
}

const tguiTexture* tguiProgressBarRenderer_getTextureBackground(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setTextureFill(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureFill(*value->This);
}

const tguiTexture* tguiProgressBarRenderer_getTextureFill(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureFill()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setTextStyle(tguiRenderer* thisRenderer, tguiUint32 value)
{
    DOWNCAST(thisRenderer->This)->setTextStyle(value);
}

tguiUint32 tguiProgressBarRenderer_getTextStyle(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getTextStyle();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setTextOutlineColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setTextOutlineColor(ctgui::toCppColor(value));
}

const tguiColor* tguiProgressBarRenderer_getTextOutlineColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextOutlineColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setTextOutlineThickness(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setTextOutlineThickness(value);
}

float tguiProgressBarRenderer_getTextOutlineThickness(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getTextOutlineThickness();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
