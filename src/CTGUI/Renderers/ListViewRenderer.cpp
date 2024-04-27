// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/ListViewRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>

#include <TGUI/Renderers/ListViewRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ListViewRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiListViewRenderer_create(void)
{
    return new tguiRenderer(new tgui::ListViewRenderer);
}

tguiRenderer* tguiListViewRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::ListViewRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline)
{
    DOWNCAST(renderer->This)->setBorders(outline->This);
}

tguiOutline* tguiListViewRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setPadding(tguiRenderer* renderer, tguiOutline* outline)
{
    DOWNCAST(renderer->This)->setPadding(outline->This);
}

tguiOutline* tguiListViewRenderer_getPadding(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getPadding());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiListViewRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setBackgroundColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiListViewRenderer_getBackgroundColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setSelectedBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiListViewRenderer_getSelectedBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setSelectedBackgroundColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedBackgroundColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiListViewRenderer_getSelectedBackgroundColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColor(ctgui::toCppColor(color));
}

tguiColor* tguiListViewRenderer_getTextColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setTextColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiListViewRenderer_getTextColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setSelectedTextColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedTextColor(ctgui::toCppColor(color));
}

tguiColor* tguiListViewRenderer_getSelectedTextColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setSelectedTextColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedTextColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiListViewRenderer_getSelectedTextColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedTextColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setHeaderBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setHeaderBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiListViewRenderer_getHeaderBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getHeaderBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setHeaderTextColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setHeaderTextColor(ctgui::toCppColor(color));
}

tguiColor* tguiListViewRenderer_getHeaderTextColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getHeaderTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColor(ctgui::toCppColor(color));
}

tguiColor* tguiListViewRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setSeparatorColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSeparatorColor(ctgui::toCppColor(color));
}

tguiColor* tguiListViewRenderer_getSeparatorColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSeparatorColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setGridLinesColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setGridLinesColor(ctgui::toCppColor(color));
}

tguiColor* tguiListViewRenderer_getGridLinesColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getGridLinesColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setTextureHeaderBackground(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureHeaderBackground(*texture->This);
}

tguiTexture* tguiListViewRenderer_getTextureHeaderBackground(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureHeaderBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBackground(*texture->This);
}

tguiTexture* tguiListViewRenderer_getTextureBackground(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setScrollbar(rendererData->This);
}

tguiRendererData* tguiListViewRenderer_getScrollbar(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getScrollbar());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setScrollbarWidth(tguiRenderer* renderer, float value)
{
    DOWNCAST(renderer->This)->setScrollbarWidth(value);
}

float tguiListViewRenderer_getScrollbarWidth(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getScrollbarWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
