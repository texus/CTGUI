// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/KnobRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>

#include <TGUI/Renderers/KnobRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::KnobRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiKnobRenderer_create(void)
{
    return new tguiRenderer(new tgui::KnobRenderer);
}

tguiRenderer* tguiKnobRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::KnobRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline)
{
    DOWNCAST(renderer->This)->setBorders(outline->This);
}

tguiOutline* tguiKnobRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiKnobRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setThumbColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setThumbColor(ctgui::toCppColor(color));
}

tguiColor* tguiKnobRenderer_getThumbColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getThumbColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColor(ctgui::toCppColor(color));
}

tguiColor* tguiKnobRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBackground(*texture->This);
}

tguiTexture* tguiKnobRenderer_getTextureBackground(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setTextureForeground(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureForeground(*texture->This);
}

tguiTexture* tguiKnobRenderer_getTextureForeground(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureForeground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setImageRotation(tguiRenderer* renderer, float value)
{
    DOWNCAST(renderer->This)->setImageRotation(value);
}

float tguiKnobRenderer_getImageRotation(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getImageRotation();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
