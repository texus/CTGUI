// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/MenuWidgetBaseRenderer.h>
#include <CTGUI/TextureStruct.hpp>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/MenuWidgetBaseRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::MenuWidgetBaseRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiMenuWidgetBaseRenderer_create(void)
{
    return new tguiRenderer(new tgui::MenuWidgetBaseRenderer);
}

tguiRenderer* tguiMenuWidgetBaseRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::MenuWidgetBaseRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuWidgetBaseRenderer_setBackgroundColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColor(ctgui::toCppColor(value));
}

tguiColor tguiMenuWidgetBaseRenderer_getBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuWidgetBaseRenderer_setSelectedBackgroundColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setSelectedBackgroundColor(ctgui::toCppColor(value));
}

tguiColor tguiMenuWidgetBaseRenderer_getSelectedBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuWidgetBaseRenderer_setTextColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setTextColor(ctgui::toCppColor(value));
}

tguiColor tguiMenuWidgetBaseRenderer_getTextColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuWidgetBaseRenderer_setSelectedTextColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setSelectedTextColor(ctgui::toCppColor(value));
}

tguiColor tguiMenuWidgetBaseRenderer_getSelectedTextColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuWidgetBaseRenderer_setTextColorDisabled(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setTextColorDisabled(ctgui::toCppColor(value));
}

tguiColor tguiMenuWidgetBaseRenderer_getTextColorDisabled(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuWidgetBaseRenderer_setSeparatorColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setSeparatorColor(ctgui::toCppColor(value));
}

tguiColor tguiMenuWidgetBaseRenderer_getSeparatorColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSeparatorColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuWidgetBaseRenderer_setTextureItemBackground(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureItemBackground(*value->This);
}

const tguiTexture* tguiMenuWidgetBaseRenderer_getTextureItemBackground(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureItemBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuWidgetBaseRenderer_setTextureSelectedItemBackground(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureSelectedItemBackground(*value->This);
}

const tguiTexture* tguiMenuWidgetBaseRenderer_getTextureSelectedItemBackground(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureSelectedItemBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuWidgetBaseRenderer_setDistanceToSide(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setDistanceToSide(value);
}

float tguiMenuWidgetBaseRenderer_getDistanceToSide(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getDistanceToSide();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuWidgetBaseRenderer_setSeparatorThickness(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setSeparatorThickness(value);
}

float tguiMenuWidgetBaseRenderer_getSeparatorThickness(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getSeparatorThickness();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuWidgetBaseRenderer_setSeparatorVerticalPadding(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setSeparatorVerticalPadding(value);
}

float tguiMenuWidgetBaseRenderer_getSeparatorVerticalPadding(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getSeparatorVerticalPadding();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuWidgetBaseRenderer_setSeparatorSidePadding(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setSeparatorSidePadding(value);
}

float tguiMenuWidgetBaseRenderer_getSeparatorSidePadding(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getSeparatorSidePadding();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
