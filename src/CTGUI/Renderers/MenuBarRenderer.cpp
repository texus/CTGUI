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


#include <CTGUI/Renderers/MenuBarRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/ColorConverter.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

#include <TGUI/Renderers/MenuBarRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::MenuBarRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiMenuBarRenderer_create(void)
{
    return new tguiRenderer(new tgui::MenuBarRenderer);
}

tguiRenderer* tguiMenuBarRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::MenuBarRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiMenuBarRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

void tguiMenuBarRenderer_setSelectedBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiMenuBarRenderer_getSelectedBackgroundColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiMenuBarRenderer_getTextColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColor());
}

void tguiMenuBarRenderer_setSelectedTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiMenuBarRenderer_getSelectedTextColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedTextColor());
}

void tguiMenuBarRenderer_setTextColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiMenuBarRenderer_getTextColorDisabled(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setTextureBackground(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBackground(*texture->This);
}

void tguiMenuBarRenderer_setTextureItemBackground(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureItemBackground(*texture->This);
}

void tguiMenuBarRenderer_setTextureSelectedItemBackground(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureSelectedItemBackground(*texture->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setDistanceToSide(tguiRenderer* renderer, float distanceToSide)
{
    DOWNCAST(renderer->This)->setDistanceToSide(distanceToSide);
}

float tguiMenuBarRenderer_getDistanceToSide(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getDistanceToSide();
}
