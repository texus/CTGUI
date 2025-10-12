// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/TabsRenderer.h>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/TextureStruct.hpp>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/TabsRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::TabsRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiTabsRenderer_create(void)
{
    return new tguiRenderer(new tgui::TabsRenderer);
}

tguiRenderer* tguiTabsRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::TabsRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value)
{
    DOWNCAST(thisRenderer->This)->setBorders(value->This);
}

const tguiOutline* tguiTabsRenderer_getBorders(const tguiRenderer* thisRenderer)
{
    return new tguiOutline(DOWNCAST(thisRenderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setBackgroundColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColor(ctgui::toCppColor(value));
}

tguiColor tguiTabsRenderer_getBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setBackgroundColorHover(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColorHover(ctgui::toCppColor(value));
}

tguiColor tguiTabsRenderer_getBackgroundColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setSelectedBackgroundColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setSelectedBackgroundColor(ctgui::toCppColor(value));
}

tguiColor tguiTabsRenderer_getSelectedBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setSelectedBackgroundColorHover(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setSelectedBackgroundColorHover(ctgui::toCppColor(value));
}

tguiColor tguiTabsRenderer_getSelectedBackgroundColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setBackgroundColorDisabled(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColorDisabled(ctgui::toCppColor(value));
}

tguiColor tguiTabsRenderer_getBackgroundColorDisabled(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setTextColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setTextColor(ctgui::toCppColor(value));
}

tguiColor tguiTabsRenderer_getTextColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setTextColorHover(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setTextColorHover(ctgui::toCppColor(value));
}

tguiColor tguiTabsRenderer_getTextColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setSelectedTextColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setSelectedTextColor(ctgui::toCppColor(value));
}

tguiColor tguiTabsRenderer_getSelectedTextColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setSelectedTextColorHover(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setSelectedTextColorHover(ctgui::toCppColor(value));
}

tguiColor tguiTabsRenderer_getSelectedTextColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedTextColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setTextColorDisabled(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setTextColorDisabled(ctgui::toCppColor(value));
}

tguiColor tguiTabsRenderer_getTextColorDisabled(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setBorderColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setBorderColor(ctgui::toCppColor(value));
}

tguiColor tguiTabsRenderer_getBorderColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setBorderColorHover(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setBorderColorHover(ctgui::toCppColor(value));
}

tguiColor tguiTabsRenderer_getBorderColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setSelectedBorderColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setSelectedBorderColor(ctgui::toCppColor(value));
}

tguiColor tguiTabsRenderer_getSelectedBorderColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setSelectedBorderColorHover(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setSelectedBorderColorHover(ctgui::toCppColor(value));
}

tguiColor tguiTabsRenderer_getSelectedBorderColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedBorderColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setTextureTab(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureTab(*value->This);
}

const tguiTexture* tguiTabsRenderer_getTextureTab(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureTab()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setTextureTabHover(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureTabHover(*value->This);
}

const tguiTexture* tguiTabsRenderer_getTextureTabHover(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureTabHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setTextureSelectedTab(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureSelectedTab(*value->This);
}

const tguiTexture* tguiTabsRenderer_getTextureSelectedTab(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureSelectedTab()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setTextureSelectedTabHover(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureSelectedTabHover(*value->This);
}

const tguiTexture* tguiTabsRenderer_getTextureSelectedTabHover(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureSelectedTabHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setTextureDisabledTab(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureDisabledTab(*value->This);
}

const tguiTexture* tguiTabsRenderer_getTextureDisabledTab(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureDisabledTab()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setDistanceToSide(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setDistanceToSide(value);
}

float tguiTabsRenderer_getDistanceToSide(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getDistanceToSide();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setRoundedBorderRadius(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setRoundedBorderRadius(value);
}

float tguiTabsRenderer_getRoundedBorderRadius(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getRoundedBorderRadius();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
