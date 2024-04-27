// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/ListBoxRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>

#include <TGUI/Renderers/ListBoxRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ListBoxRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiListBoxRenderer_create(void)
{
    return new tguiRenderer(new tgui::ListBoxRenderer);
}

tguiRenderer* tguiListBoxRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::ListBoxRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline)
{
    DOWNCAST(renderer->This)->setBorders(outline->This);
}

tguiOutline* tguiListBoxRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setPadding(tguiRenderer* renderer, tguiOutline* outline)
{
    DOWNCAST(renderer->This)->setPadding(outline->This);
}

tguiOutline* tguiListBoxRenderer_getPadding(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getPadding());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiListBoxRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setBackgroundColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiListBoxRenderer_getBackgroundColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setSelectedBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiListBoxRenderer_getSelectedBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setSelectedBackgroundColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedBackgroundColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiListBoxRenderer_getSelectedBackgroundColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColor(ctgui::toCppColor(color));
}

tguiColor* tguiListBoxRenderer_getTextColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setTextColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiListBoxRenderer_getTextColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setSelectedTextColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedTextColor(ctgui::toCppColor(color));
}

tguiColor* tguiListBoxRenderer_getSelectedTextColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setSelectedTextColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedTextColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiListBoxRenderer_getSelectedTextColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedTextColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColor(ctgui::toCppColor(color));
}

tguiColor* tguiListBoxRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBackground(*texture->This);
}

tguiTexture* tguiListBoxRenderer_getTextureBackground(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setTextStyle(tguiRenderer* renderer, tguiUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyle(style);
}

tguiUint32 tguiListBoxRenderer_getTextStyle(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyle();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setSelectedTextStyle(tguiRenderer* renderer, tguiUint32 style)
{
    DOWNCAST(renderer->This)->setSelectedTextStyle(style);
}

tguiUint32 tguiListBoxRenderer_getSelectedTextStyle(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getSelectedTextStyle();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setScrollbar(rendererData->This);
}

tguiRendererData* tguiListBoxRenderer_getScrollbar(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getScrollbar());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListBoxRenderer_setScrollbarWidth(tguiRenderer* renderer, float value)
{
    DOWNCAST(renderer->This)->setScrollbarWidth(value);
}

float tguiListBoxRenderer_getScrollbarWidth(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getScrollbarWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
