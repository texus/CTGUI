/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2024 Bruno Van de Velde (vdv_b@tgui.eu)
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
#include <CTGUI/Renderers/RendererStruct.hpp>

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

void tguiMenuBarRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiMenuBarRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

void tguiMenuBarRenderer_setSelectedBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiMenuBarRenderer_getSelectedBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColor(ctgui::toCppColor(color));
}

tguiColor* tguiMenuBarRenderer_getTextColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColor());
}

void tguiMenuBarRenderer_setSelectedTextColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedTextColor(ctgui::toCppColor(color));
}

tguiColor* tguiMenuBarRenderer_getSelectedTextColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedTextColor());
}

void tguiMenuBarRenderer_setTextColorDisabled(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColorDisabled(ctgui::toCppColor(color));
}

tguiColor* tguiMenuBarRenderer_getTextColorDisabled(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setSeparatorColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSeparatorColor(ctgui::toCppColor(color));
}

tguiColor* tguiMenuBarRenderer_getSeparatorColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSeparatorColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBackground(*texture->This);
}

tguiTexture* tguiMenuBarRenderer_getTextureBackground(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureBackground()));
}

void tguiMenuBarRenderer_setTextureItemBackground(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureItemBackground(*texture->This);
}

tguiTexture* tguiMenuBarRenderer_getTextureItemBackground(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureItemBackground()));
}

void tguiMenuBarRenderer_setTextureSelectedItemBackground(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureSelectedItemBackground(*texture->This);
}

tguiTexture* tguiMenuBarRenderer_getTextureSelectedItemBackground(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureSelectedItemBackground()));
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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setSeparatorThickness(tguiRenderer* renderer, float thickness)
{
    DOWNCAST(renderer->This)->setSeparatorThickness(thickness);
}

float tguiMenuBarRenderer_getSeparatorThickness(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getSeparatorThickness();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setSeparatorVerticalPadding(tguiRenderer* renderer, float padding)
{
    DOWNCAST(renderer->This)->setSeparatorVerticalPadding(padding);
}

float tguiMenuBarRenderer_getSeparatorVerticalPadding(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getSeparatorVerticalPadding();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMenuBarRenderer_setSeparatorSidePadding(tguiRenderer* renderer, float padding)
{
    DOWNCAST(renderer->This)->setSeparatorSidePadding(padding);
}

float tguiMenuBarRenderer_getSeparatorSidePadding(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getSeparatorSidePadding();
}
