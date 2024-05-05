// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/ChildWindowRenderer.h>
#include <CTGUI/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>
#include <CTGUI/TextureStruct.hpp>

#include <TGUI/Renderers/ChildWindowRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ChildWindowRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiChildWindowRenderer_create(void)
{
    return new tguiRenderer(new tgui::ChildWindowRenderer);
}

tguiRenderer* tguiChildWindowRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::ChildWindowRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value)
{
    DOWNCAST(thisRenderer->This)->setBorders(value->This);
}

const tguiOutline* tguiChildWindowRenderer_getBorders(const tguiRenderer* thisRenderer)
{
    return new tguiOutline(DOWNCAST(thisRenderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setTitleBarColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setTitleBarColor(ctgui::toCppColor(value));
}

const tguiColor* tguiChildWindowRenderer_getTitleBarColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTitleBarColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setTitleColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setTitleColor(ctgui::toCppColor(value));
}

const tguiColor* tguiChildWindowRenderer_getTitleColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTitleColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColor(ctgui::toCppColor(value));
}

const tguiColor* tguiChildWindowRenderer_getBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setBorderColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBorderColor(ctgui::toCppColor(value));
}

const tguiColor* tguiChildWindowRenderer_getBorderColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setBorderColorFocused(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBorderColorFocused(ctgui::toCppColor(value));
}

const tguiColor* tguiChildWindowRenderer_getBorderColorFocused(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColorFocused());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setBorderBelowTitleBar(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setBorderBelowTitleBar(value);
}

float tguiChildWindowRenderer_getBorderBelowTitleBar(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getBorderBelowTitleBar();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setTitleBarHeight(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setTitleBarHeight(value);
}

float tguiChildWindowRenderer_getTitleBarHeight(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getTitleBarHeight();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setDistanceToSide(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setDistanceToSide(value);
}

float tguiChildWindowRenderer_getDistanceToSide(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getDistanceToSide();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setPaddingBetweenButtons(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setPaddingBetweenButtons(value);
}

float tguiChildWindowRenderer_getPaddingBetweenButtons(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getPaddingBetweenButtons();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setMinimumResizableBorderWidth(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setMinimumResizableBorderWidth(value);
}

float tguiChildWindowRenderer_getMinimumResizableBorderWidth(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getMinimumResizableBorderWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setShowTextOnTitleButtons(tguiRenderer* thisRenderer, tguiBool value)
{
    DOWNCAST(thisRenderer->This)->setShowTextOnTitleButtons(value != 0);
}

tguiBool tguiChildWindowRenderer_getShowTextOnTitleButtons(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getShowTextOnTitleButtons();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setTextureTitleBar(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureTitleBar(*value->This);
}

const tguiTexture* tguiChildWindowRenderer_getTextureTitleBar(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureTitleBar()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureBackground(*value->This);
}

const tguiTexture* tguiChildWindowRenderer_getTextureBackground(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setCloseButton(tguiRenderer* thisRenderer, const tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setCloseButton(value->This);
}

const tguiRendererData* tguiChildWindowRenderer_getCloseButton(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getCloseButton());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setMaximizeButton(tguiRenderer* thisRenderer, const tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setMaximizeButton(value->This);
}

const tguiRendererData* tguiChildWindowRenderer_getMaximizeButton(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getMaximizeButton());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindowRenderer_setMinimizeButton(tguiRenderer* thisRenderer, const tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setMinimizeButton(value->This);
}

const tguiRendererData* tguiChildWindowRenderer_getMinimizeButton(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getMinimizeButton());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
