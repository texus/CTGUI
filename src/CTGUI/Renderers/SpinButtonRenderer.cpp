// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/SpinButtonRenderer.h>
#include <CTGUI/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/TextureStruct.hpp>

#include <TGUI/Renderers/SpinButtonRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::SpinButtonRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiSpinButtonRenderer_create(void)
{
    return new tguiRenderer(new tgui::SpinButtonRenderer);
}

tguiRenderer* tguiSpinButtonRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::SpinButtonRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value)
{
    DOWNCAST(thisRenderer->This)->setBorders(value->This);
}

const tguiOutline* tguiSpinButtonRenderer_getBorders(const tguiRenderer* thisRenderer)
{
    return new tguiOutline(DOWNCAST(thisRenderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setBorderBetweenArrows(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setBorderBetweenArrows(value);
}

float tguiSpinButtonRenderer_getBorderBetweenArrows(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getBorderBetweenArrows();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColor(ctgui::toCppColor(value));
}

const tguiColor* tguiSpinButtonRenderer_getBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setBackgroundColorHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColorHover(ctgui::toCppColor(value));
}

const tguiColor* tguiSpinButtonRenderer_getBackgroundColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setArrowColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setArrowColor(ctgui::toCppColor(value));
}

const tguiColor* tguiSpinButtonRenderer_getArrowColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getArrowColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setArrowColorHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setArrowColorHover(ctgui::toCppColor(value));
}

const tguiColor* tguiSpinButtonRenderer_getArrowColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getArrowColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setBorderColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBorderColor(ctgui::toCppColor(value));
}

const tguiColor* tguiSpinButtonRenderer_getBorderColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setTextureArrowUp(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureArrowUp(*value->This);
}

const tguiTexture* tguiSpinButtonRenderer_getTextureArrowUp(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureArrowUp()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setTextureArrowUpHover(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureArrowUpHover(*value->This);
}

const tguiTexture* tguiSpinButtonRenderer_getTextureArrowUpHover(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureArrowUpHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setTextureArrowDown(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureArrowDown(*value->This);
}

const tguiTexture* tguiSpinButtonRenderer_getTextureArrowDown(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureArrowDown()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setTextureArrowDownHover(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureArrowDownHover(*value->This);
}

const tguiTexture* tguiSpinButtonRenderer_getTextureArrowDownHover(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureArrowDownHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
