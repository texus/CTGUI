// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/TreeViewRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>

#include <TGUI/Renderers/TreeViewRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::TreeViewRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiTreeViewRenderer_create(void)
{
    return new tguiRenderer(new tgui::TreeViewRenderer);
}

tguiRenderer* tguiTreeViewRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::TreeViewRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline)
{
    DOWNCAST(renderer->This)->setBorders(outline->This);
}

tguiOutline* tguiTreeViewRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setPadding(tguiRenderer* renderer, tguiOutline* outline)
{
    DOWNCAST(renderer->This)->setPadding(outline->This);
}

tguiOutline* tguiTreeViewRenderer_getPadding(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getPadding());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiTreeViewRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setBackgroundColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiTreeViewRenderer_getBackgroundColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setSelectedBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiTreeViewRenderer_getSelectedBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setSelectedBackgroundColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedBackgroundColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiTreeViewRenderer_getSelectedBackgroundColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColor(ctgui::toCppColor(color));
}

tguiColor* tguiTreeViewRenderer_getTextColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setTextColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiTreeViewRenderer_getTextColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setSelectedTextColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedTextColor(ctgui::toCppColor(color));
}

tguiColor* tguiTreeViewRenderer_getSelectedTextColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setSelectedTextColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedTextColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiTreeViewRenderer_getSelectedTextColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedTextColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColor(ctgui::toCppColor(color));
}

tguiColor* tguiTreeViewRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBackground(*texture->This);
}

tguiTexture* tguiTreeViewRenderer_getTextureBackground(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setTextureBranchExpanded(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBranchExpanded(*texture->This);
}

tguiTexture* tguiTreeViewRenderer_getTextureBranchExpanded(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureBranchExpanded()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setTextureBranchCollapsed(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBranchCollapsed(*texture->This);
}

tguiTexture* tguiTreeViewRenderer_getTextureBranchCollapsed(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureBranchCollapsed()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setTextureLeaf(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureLeaf(*texture->This);
}

tguiTexture* tguiTreeViewRenderer_getTextureLeaf(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureLeaf()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setScrollbar(rendererData->This);
}

tguiRendererData* tguiTreeViewRenderer_getScrollbar(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getScrollbar());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setScrollbarWidth(tguiRenderer* renderer, float value)
{
    DOWNCAST(renderer->This)->setScrollbarWidth(value);
}

float tguiTreeViewRenderer_getScrollbarWidth(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getScrollbarWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
