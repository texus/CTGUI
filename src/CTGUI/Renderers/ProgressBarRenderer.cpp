// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/ProgressBarRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>

#include <TGUI/Renderers/ProgressBarRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ProgressBarRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiProgressBarRenderer_create(void)
{
    return new tguiRenderer(new tgui::ProgressBarRenderer);
}

tguiRenderer* tguiProgressBarRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::ProgressBarRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline)
{
    DOWNCAST(renderer->This)->setBorders(outline->This);
}

tguiOutline* tguiProgressBarRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColor(ctgui::toCppColor(color));
}

tguiColor* tguiProgressBarRenderer_getTextColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setTextColorFilled(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColorFilled(ctgui::toCppColor(color));
}

tguiColor* tguiProgressBarRenderer_getTextColorFilled(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColorFilled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiProgressBarRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setFillColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setFillColor(ctgui::toCppColor(color));
}

tguiColor* tguiProgressBarRenderer_getFillColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getFillColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColor(ctgui::toCppColor(color));
}

tguiColor* tguiProgressBarRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBackground(*texture->This);
}

tguiTexture* tguiProgressBarRenderer_getTextureBackground(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setTextureFill(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureFill(*texture->This);
}

tguiTexture* tguiProgressBarRenderer_getTextureFill(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureFill()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setTextStyle(tguiRenderer* renderer, tguiUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyle(style);
}

tguiUint32 tguiProgressBarRenderer_getTextStyle(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyle();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setTextOutlineColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextOutlineColor(ctgui::toCppColor(color));
}

tguiColor* tguiProgressBarRenderer_getTextOutlineColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextOutlineColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setTextOutlineThickness(tguiRenderer* renderer, float value)
{
    DOWNCAST(renderer->This)->setTextOutlineThickness(value);
}

float tguiProgressBarRenderer_getTextOutlineThickness(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextOutlineThickness();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
