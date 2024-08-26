// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/TreeViewRenderer.h>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>
#include <CTGUI/TextureStruct.hpp>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/TreeViewRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::TreeViewRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiTreeViewRenderer_create(void)
{
    return new tguiRenderer(new tgui::TreeViewRenderer);
}

tguiRenderer* tguiTreeViewRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::TreeViewRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value)
{
    DOWNCAST(thisRenderer->This)->setBorders(value->This);
}

const tguiOutline* tguiTreeViewRenderer_getBorders(const tguiRenderer* thisRenderer)
{
    return new tguiOutline(DOWNCAST(thisRenderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setPadding(tguiRenderer* thisRenderer, const tguiOutline* value)
{
    DOWNCAST(thisRenderer->This)->setPadding(value->This);
}

const tguiOutline* tguiTreeViewRenderer_getPadding(const tguiRenderer* thisRenderer)
{
    return new tguiOutline(DOWNCAST(thisRenderer->This)->getPadding());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColor(ctgui::toCppColor(value));
}

const tguiColor* tguiTreeViewRenderer_getBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setBackgroundColorHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColorHover(ctgui::toCppColor(value));
}

const tguiColor* tguiTreeViewRenderer_getBackgroundColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setSelectedBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setSelectedBackgroundColor(ctgui::toCppColor(value));
}

const tguiColor* tguiTreeViewRenderer_getSelectedBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setSelectedBackgroundColorHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setSelectedBackgroundColorHover(ctgui::toCppColor(value));
}

const tguiColor* tguiTreeViewRenderer_getSelectedBackgroundColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setTextColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setTextColor(ctgui::toCppColor(value));
}

const tguiColor* tguiTreeViewRenderer_getTextColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setTextColorHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setTextColorHover(ctgui::toCppColor(value));
}

const tguiColor* tguiTreeViewRenderer_getTextColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setSelectedTextColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setSelectedTextColor(ctgui::toCppColor(value));
}

const tguiColor* tguiTreeViewRenderer_getSelectedTextColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setSelectedTextColorHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setSelectedTextColorHover(ctgui::toCppColor(value));
}

const tguiColor* tguiTreeViewRenderer_getSelectedTextColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedTextColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setBorderColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBorderColor(ctgui::toCppColor(value));
}

const tguiColor* tguiTreeViewRenderer_getBorderColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureBackground(*value->This);
}

const tguiTexture* tguiTreeViewRenderer_getTextureBackground(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setTextureBranchExpanded(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureBranchExpanded(*value->This);
}

const tguiTexture* tguiTreeViewRenderer_getTextureBranchExpanded(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureBranchExpanded()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setTextureBranchCollapsed(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureBranchCollapsed(*value->This);
}

const tguiTexture* tguiTreeViewRenderer_getTextureBranchCollapsed(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureBranchCollapsed()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setTextureLeaf(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureLeaf(*value->This);
}

const tguiTexture* tguiTreeViewRenderer_getTextureLeaf(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureLeaf()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setScrollbar(tguiRenderer* thisRenderer, const tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setScrollbar(value->This);
}

const tguiRendererData* tguiTreeViewRenderer_getScrollbar(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getScrollbar());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setScrollbarWidth(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setScrollbarWidth(value);
}

float tguiTreeViewRenderer_getScrollbarWidth(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getScrollbarWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
