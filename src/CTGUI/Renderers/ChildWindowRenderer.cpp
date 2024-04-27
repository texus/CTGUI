// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/ChildWindowRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>

#include <TGUI/Renderers/ChildWindowRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ChildWindowRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiChildWindowRenderer_create(void)
{
    return new tguiRenderer(new tgui::ChildWindowRenderer);
}

tguiRenderer* tguiChildWindowRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::ChildWindowRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline)
{
    DOWNCAST(renderer->This)->setBorders(outline->This);
}

tguiOutline* tguiChildWindowRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setTitleBarColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTitleBarColor(ctgui::toCppColor(color));
}

tguiColor* tguiChildWindowRenderer_getTitleBarColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTitleBarColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setTitleColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTitleColor(ctgui::toCppColor(color));
}

tguiColor* tguiChildWindowRenderer_getTitleColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTitleColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiChildWindowRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColor(ctgui::toCppColor(color));
}

tguiColor* tguiChildWindowRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setBorderColorFocused(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColorFocused(ctgui::toCppColor(color));
}

tguiColor* tguiChildWindowRenderer_getBorderColorFocused(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColorFocused());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setBorderBelowTitleBar(tguiRenderer* renderer, float value)
{
    DOWNCAST(renderer->This)->setBorderBelowTitleBar(value);
}

float tguiChildWindowRenderer_getBorderBelowTitleBar(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getBorderBelowTitleBar();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setTitleBarHeight(tguiRenderer* renderer, float value)
{
    DOWNCAST(renderer->This)->setTitleBarHeight(value);
}

float tguiChildWindowRenderer_getTitleBarHeight(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTitleBarHeight();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setDistanceToSide(tguiRenderer* renderer, float value)
{
    DOWNCAST(renderer->This)->setDistanceToSide(value);
}

float tguiChildWindowRenderer_getDistanceToSide(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getDistanceToSide();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setPaddingBetweenButtons(tguiRenderer* renderer, float value)
{
    DOWNCAST(renderer->This)->setPaddingBetweenButtons(value);
}

float tguiChildWindowRenderer_getPaddingBetweenButtons(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getPaddingBetweenButtons();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setMinimumResizableBorderWidth(tguiRenderer* renderer, float value)
{
    DOWNCAST(renderer->This)->setMinimumResizableBorderWidth(value);
}

float tguiChildWindowRenderer_getMinimumResizableBorderWidth(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getMinimumResizableBorderWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setShowTextOnTitleButtons(tguiRenderer* renderer, tguiBool value)
{
    DOWNCAST(renderer->This)->setShowTextOnTitleButtons(value != 0);
}

tguiBool tguiChildWindowRenderer_getShowTextOnTitleButtons(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getShowTextOnTitleButtons();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setTextureTitleBar(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureTitleBar(*texture->This);
}

tguiTexture* tguiChildWindowRenderer_getTextureTitleBar(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureTitleBar()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBackground(*texture->This);
}

tguiTexture* tguiChildWindowRenderer_getTextureBackground(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setCloseButton(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setCloseButton(rendererData->This);
}

tguiRendererData* tguiChildWindowRenderer_getCloseButton(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getCloseButton());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setMaximizeButton(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setMaximizeButton(rendererData->This);
}

tguiRendererData* tguiChildWindowRenderer_getMaximizeButton(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getMaximizeButton());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setMinimizeButton(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setMinimizeButton(rendererData->This);
}

tguiRendererData* tguiChildWindowRenderer_getMinimizeButton(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getMinimizeButton());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
