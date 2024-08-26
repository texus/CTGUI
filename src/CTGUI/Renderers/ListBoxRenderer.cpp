// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/ListBoxRenderer.h>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>
#include <CTGUI/TextureStruct.hpp>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/ListBoxRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ListBoxRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiListBoxRenderer_create(void)
{
    return new tguiRenderer(new tgui::ListBoxRenderer);
}

tguiRenderer* tguiListBoxRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::ListBoxRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value)
{
    DOWNCAST(thisRenderer->This)->setBorders(value->This);
}

const tguiOutline* tguiListBoxRenderer_getBorders(const tguiRenderer* thisRenderer)
{
    return new tguiOutline(DOWNCAST(thisRenderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setPadding(tguiRenderer* thisRenderer, const tguiOutline* value)
{
    DOWNCAST(thisRenderer->This)->setPadding(value->This);
}

const tguiOutline* tguiListBoxRenderer_getPadding(const tguiRenderer* thisRenderer)
{
    return new tguiOutline(DOWNCAST(thisRenderer->This)->getPadding());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColor(ctgui::toCppColor(value));
}

const tguiColor* tguiListBoxRenderer_getBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setBackgroundColorHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColorHover(ctgui::toCppColor(value));
}

const tguiColor* tguiListBoxRenderer_getBackgroundColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setSelectedBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setSelectedBackgroundColor(ctgui::toCppColor(value));
}

const tguiColor* tguiListBoxRenderer_getSelectedBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setSelectedBackgroundColorHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setSelectedBackgroundColorHover(ctgui::toCppColor(value));
}

const tguiColor* tguiListBoxRenderer_getSelectedBackgroundColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setTextColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setTextColor(ctgui::toCppColor(value));
}

const tguiColor* tguiListBoxRenderer_getTextColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setTextColorHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setTextColorHover(ctgui::toCppColor(value));
}

const tguiColor* tguiListBoxRenderer_getTextColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setSelectedTextColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setSelectedTextColor(ctgui::toCppColor(value));
}

const tguiColor* tguiListBoxRenderer_getSelectedTextColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setSelectedTextColorHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setSelectedTextColorHover(ctgui::toCppColor(value));
}

const tguiColor* tguiListBoxRenderer_getSelectedTextColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedTextColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setBorderColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBorderColor(ctgui::toCppColor(value));
}

const tguiColor* tguiListBoxRenderer_getBorderColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureBackground(*value->This);
}

const tguiTexture* tguiListBoxRenderer_getTextureBackground(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setTextStyle(tguiRenderer* thisRenderer, tguiUint32 value)
{
    DOWNCAST(thisRenderer->This)->setTextStyle(value);
}

tguiUint32 tguiListBoxRenderer_getTextStyle(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getTextStyle();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setSelectedTextStyle(tguiRenderer* thisRenderer, tguiUint32 value)
{
    DOWNCAST(thisRenderer->This)->setSelectedTextStyle(value);
}

tguiUint32 tguiListBoxRenderer_getSelectedTextStyle(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getSelectedTextStyle();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setScrollbar(tguiRenderer* thisRenderer, const tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setScrollbar(value->This);
}

const tguiRendererData* tguiListBoxRenderer_getScrollbar(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getScrollbar());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setScrollbarWidth(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setScrollbarWidth(value);
}

float tguiListBoxRenderer_getScrollbarWidth(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getScrollbarWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
