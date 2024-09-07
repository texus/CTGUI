// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/KnobRenderer.h>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/TextureStruct.hpp>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/KnobRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::KnobRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiKnobRenderer_create(void)
{
    return new tguiRenderer(new tgui::KnobRenderer);
}

tguiRenderer* tguiKnobRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::KnobRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value)
{
    DOWNCAST(thisRenderer->This)->setBorders(value->This);
}

const tguiOutline* tguiKnobRenderer_getBorders(const tguiRenderer* thisRenderer)
{
    return new tguiOutline(DOWNCAST(thisRenderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setBackgroundColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColor(ctgui::toCppColor(value));
}

tguiColor tguiKnobRenderer_getBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setThumbColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setThumbColor(ctgui::toCppColor(value));
}

tguiColor tguiKnobRenderer_getThumbColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getThumbColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setBorderColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setBorderColor(ctgui::toCppColor(value));
}

tguiColor tguiKnobRenderer_getBorderColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureBackground(*value->This);
}

const tguiTexture* tguiKnobRenderer_getTextureBackground(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setTextureForeground(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureForeground(*value->This);
}

const tguiTexture* tguiKnobRenderer_getTextureForeground(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureForeground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setImageRotation(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setImageRotation(value);
}

float tguiKnobRenderer_getImageRotation(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getImageRotation();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
