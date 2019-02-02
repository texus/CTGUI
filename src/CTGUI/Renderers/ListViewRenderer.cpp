/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2018 Bruno Van de Velde (vdv_b@tgui.eu)
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


#include <CTGUI/Renderers/ListViewRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/RendererDataStruct.h>
#include <CTGUI/OutlineStruct.h>
#include <CTGUI/ColorConverter.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

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

void tguiListViewRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders)
{
    DOWNCAST(renderer->This)->setBorders(borders->This);
}

tguiOutline* tguiListViewRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

void tguiListViewRenderer_setPadding(tguiRenderer* renderer, tguiOutline* padding)
{
    DOWNCAST(renderer->This)->setPadding(padding->This);
}

tguiOutline* tguiListViewRenderer_getPadding(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getPadding());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiListViewRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

void tguiListViewRenderer_setBackgroundColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiListViewRenderer_getBackgroundColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColorHover());
}

void tguiListViewRenderer_setSelectedBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiListViewRenderer_getSelectedBackgroundColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedBackgroundColor());
}

void tguiListViewRenderer_setSelectedBackgroundColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedBackgroundColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiListViewRenderer_getSelectedBackgroundColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiListViewRenderer_getTextColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColor());
}

void tguiListViewRenderer_setTextColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiListViewRenderer_getTextColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColorHover());
}

void tguiListViewRenderer_setSelectedTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiListViewRenderer_getSelectedTextColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedTextColor());
}

void tguiListViewRenderer_setSelectedTextColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedTextColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiListViewRenderer_getSelectedTextColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedTextColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setHeaderBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setHeaderBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiListViewRenderer_getHeaderBackgroundColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getHeaderBackgroundColor());
}

void tguiListViewRenderer_setHeaderTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setHeaderTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiListViewRenderer_getHeaderTextColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getHeaderTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setBorderColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColor({color.r, color.g, color.b, color.a});
}

sfColor tguiListViewRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListViewRenderer_setSeparatorColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSeparatorColor({color.r, color.g, color.b, color.a});
}

sfColor tguiListViewRenderer_getSeparatorColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSeparatorColor());
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

void tguiListViewRenderer_setScrollbarWidth(tguiRenderer* renderer, float width)
{
    DOWNCAST(renderer->This)->setScrollbarWidth(width);
}

float tguiListViewRenderer_getScrollbarWidth(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getScrollbarWidth();
}
