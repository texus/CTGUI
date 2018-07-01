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


#include <CTGUI/Renderers/TextBoxRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/RendererDataStruct.h>
#include <CTGUI/OutlineStruct.h>
#include <CTGUI/ColorConverter.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

#include <TGUI/Renderers/TextBoxRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::TextBoxRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiTextBoxRenderer_create(void)
{
    return new tguiRenderer(new tgui::TextBoxRenderer);
}

tguiRenderer* tguiTextBoxRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::TextBoxRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBoxRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders)
{
    DOWNCAST(renderer->This)->setBorders(borders->This);
}

tguiOutline* tguiTextBoxRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

void tguiTextBoxRenderer_setPadding(tguiRenderer* renderer, tguiOutline* padding)
{
    DOWNCAST(renderer->This)->setPadding(padding->This);
}

tguiOutline* tguiTextBoxRenderer_getPadding(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getPadding());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBoxRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTextBoxRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBoxRenderer_setTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTextBoxRenderer_getTextColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColor());
}

void tguiTextBoxRenderer_setSelectedTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTextBoxRenderer_getSelectedTextColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedTextColor());
}

void tguiTextBoxRenderer_setSelectedTextBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedTextBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTextBoxRenderer_getSelectedTextBackgroundColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedTextBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBoxRenderer_setBorderColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTextBoxRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBoxRenderer_setCaretColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setCaretColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTextBoxRenderer_getCaretColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getCaretColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBoxRenderer_setTextureBackground(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBackground(*texture->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBoxRenderer_setCaretWidth(const tguiRenderer* renderer, float width)
{
    DOWNCAST(renderer->This)->setCaretWidth(width);
}

float tguiTextBoxRenderer_getCaretWidth(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getCaretWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBoxRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setScrollbar(rendererData->This);
}

tguiRendererData* tguiTextBoxRenderer_getScrollbar(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getScrollbar());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBoxRenderer_setScrollbarWidth(tguiRenderer* renderer, float width)
{
    DOWNCAST(renderer->This)->setScrollbarWidth(width);
}

float tguiTextBoxRenderer_getScrollbarWidth(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getScrollbarWidth();
}
