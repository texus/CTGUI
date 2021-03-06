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


#include <CTGUI/Renderers/ChatBoxRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/RendererDataStruct.h>
#include <CTGUI/OutlineStruct.h>
#include <CTGUI/ColorConverter.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

#include <TGUI/Renderers/ChatBoxRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ChatBoxRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiChatBoxRenderer_create(void)
{
    return new tguiRenderer(new tgui::ChatBoxRenderer);
}

tguiRenderer* tguiChatBoxRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::ChatBoxRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBoxRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders)
{
    DOWNCAST(renderer->This)->setBorders(borders->This);
}

tguiOutline* tguiChatBoxRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

void tguiChatBoxRenderer_setPadding(tguiRenderer* renderer, tguiOutline* padding)
{
    DOWNCAST(renderer->This)->setPadding(padding->This);
}

tguiOutline* tguiChatBoxRenderer_getPadding(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getPadding());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBoxRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiChatBoxRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBoxRenderer_setBorderColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColor({color.r, color.g, color.b, color.a});
}

sfColor tguiChatBoxRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBoxRenderer_setTextureBackground(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBackground(*texture->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBoxRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setScrollbar(rendererData->This);
}

tguiRendererData* tguiChatBoxRenderer_getScrollbar(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getScrollbar());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChatBoxRenderer_setScrollbarWidth(tguiRenderer* renderer, float width)
{
    DOWNCAST(renderer->This)->setScrollbarWidth(width);
}

float tguiChatBoxRenderer_getScrollbarWidth(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getScrollbarWidth();
}
