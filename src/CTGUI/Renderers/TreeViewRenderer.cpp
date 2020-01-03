/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2020 Bruno Van de Velde (vdv_b@tgui.eu)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <CTGUI/Renderers/TreeViewRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/RendererDataStruct.h>
#include <CTGUI/OutlineStruct.h>
#include <CTGUI/ColorConverter.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

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

void tguiTreeViewRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders)
{
    DOWNCAST(renderer->This)->setBorders(borders->This);
}

tguiOutline* tguiTreeViewRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

void tguiTreeViewRenderer_setPadding(tguiRenderer* renderer, tguiOutline* padding)
{
    DOWNCAST(renderer->This)->setPadding(padding->This);
}

tguiOutline* tguiTreeViewRenderer_getPadding(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getPadding());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTreeViewRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

void tguiTreeViewRenderer_setBackgroundColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiTreeViewRenderer_getBackgroundColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColorHover());
}

void tguiTreeViewRenderer_setSelectedBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTreeViewRenderer_getSelectedBackgroundColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedBackgroundColor());
}

void tguiTreeViewRenderer_setSelectedBackgroundColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedBackgroundColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiTreeViewRenderer_getSelectedBackgroundColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTreeViewRenderer_getTextColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColor());
}

void tguiTreeViewRenderer_setTextColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiTreeViewRenderer_getTextColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColorHover());
}

void tguiTreeViewRenderer_setSelectedTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTreeViewRenderer_getSelectedTextColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedTextColor());
}

void tguiTreeViewRenderer_setSelectedTextColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedTextColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiTreeViewRenderer_getSelectedTextColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedTextColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setBorderColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTreeViewRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewRenderer_setTextureBranchExpanded(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBranchExpanded(*texture->This);
}

void tguiTreeViewRenderer_setTextureBranchCollapsed(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBranchCollapsed(*texture->This);
}

void tguiTreeViewRenderer_setTextureLeaf(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureLeaf(*texture->This);
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

void tguiTreeViewRenderer_setScrollbarWidth(tguiRenderer* renderer, float width)
{
    DOWNCAST(renderer->This)->setScrollbarWidth(width);
}

float tguiTreeViewRenderer_getScrollbarWidth(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getScrollbarWidth();
}
