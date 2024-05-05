// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/MenuBarRenderer.h>
#include <CTGUI/RendererStruct.hpp>
#include <CTGUI/TextureStruct.hpp>

#include <TGUI/Renderers/MenuBarRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::MenuBarRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiMenuBarRenderer_create(void)
{
    return new tguiRenderer(new tgui::MenuBarRenderer);
}

tguiRenderer* tguiMenuBarRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::MenuBarRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColor(ctgui::toCppColor(value));
}

const tguiColor* tguiMenuBarRenderer_getBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setSelectedBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setSelectedBackgroundColor(ctgui::toCppColor(value));
}

const tguiColor* tguiMenuBarRenderer_getSelectedBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setTextColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setTextColor(ctgui::toCppColor(value));
}

const tguiColor* tguiMenuBarRenderer_getTextColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setSelectedTextColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setSelectedTextColor(ctgui::toCppColor(value));
}

const tguiColor* tguiMenuBarRenderer_getSelectedTextColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setTextColorDisabled(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setTextColorDisabled(ctgui::toCppColor(value));
}

const tguiColor* tguiMenuBarRenderer_getTextColorDisabled(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setSeparatorColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setSeparatorColor(ctgui::toCppColor(value));
}

const tguiColor* tguiMenuBarRenderer_getSeparatorColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSeparatorColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureBackground(*value->This);
}

const tguiTexture* tguiMenuBarRenderer_getTextureBackground(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setTextureItemBackground(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureItemBackground(*value->This);
}

const tguiTexture* tguiMenuBarRenderer_getTextureItemBackground(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureItemBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setTextureSelectedItemBackground(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureSelectedItemBackground(*value->This);
}

const tguiTexture* tguiMenuBarRenderer_getTextureSelectedItemBackground(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureSelectedItemBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setDistanceToSide(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setDistanceToSide(value);
}

float tguiMenuBarRenderer_getDistanceToSide(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getDistanceToSide();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setSeparatorThickness(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setSeparatorThickness(value);
}

float tguiMenuBarRenderer_getSeparatorThickness(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getSeparatorThickness();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setSeparatorVerticalPadding(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setSeparatorVerticalPadding(value);
}

float tguiMenuBarRenderer_getSeparatorVerticalPadding(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getSeparatorVerticalPadding();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setSeparatorSidePadding(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setSeparatorSidePadding(value);
}

float tguiMenuBarRenderer_getSeparatorSidePadding(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getSeparatorSidePadding();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
