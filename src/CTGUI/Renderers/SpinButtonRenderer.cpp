// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/SpinButtonRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>

#include <TGUI/Renderers/SpinButtonRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::SpinButtonRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiSpinButtonRenderer_create(void)
{
    return new tguiRenderer(new tgui::SpinButtonRenderer);
}

tguiRenderer* tguiSpinButtonRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::SpinButtonRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline)
{
    DOWNCAST(renderer->This)->setBorders(outline->This);
}

tguiOutline* tguiSpinButtonRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setBorderBetweenArrows(tguiRenderer* renderer, float value)
{
    DOWNCAST(renderer->This)->setBorderBetweenArrows(value);
}

float tguiSpinButtonRenderer_getBorderBetweenArrows(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getBorderBetweenArrows();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiSpinButtonRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setBackgroundColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiSpinButtonRenderer_getBackgroundColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setArrowColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setArrowColor(ctgui::toCppColor(color));
}

tguiColor* tguiSpinButtonRenderer_getArrowColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getArrowColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setArrowColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setArrowColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiSpinButtonRenderer_getArrowColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getArrowColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColor(ctgui::toCppColor(color));
}

tguiColor* tguiSpinButtonRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setTextureArrowUp(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowUp(*texture->This);
}

tguiTexture* tguiSpinButtonRenderer_getTextureArrowUp(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureArrowUp()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setTextureArrowUpHover(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowUpHover(*texture->This);
}

tguiTexture* tguiSpinButtonRenderer_getTextureArrowUpHover(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureArrowUpHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setTextureArrowDown(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowDown(*texture->This);
}

tguiTexture* tguiSpinButtonRenderer_getTextureArrowDown(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureArrowDown()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setTextureArrowDownHover(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowDownHover(*texture->This);
}

tguiTexture* tguiSpinButtonRenderer_getTextureArrowDownHover(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureArrowDownHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
