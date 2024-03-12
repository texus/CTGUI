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


#include <CTGUI/Renderers/KnobRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>

#include <TGUI/Renderers/KnobRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::KnobRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiKnobRenderer_create(void)
{
    return new tguiRenderer(new tgui::KnobRenderer);
}

tguiRenderer* tguiKnobRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::KnobRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders)
{
    DOWNCAST(renderer->This)->setBorders(borders->This);
}

tguiOutline* tguiKnobRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiKnobRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setThumbColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setThumbColor(ctgui::toCppColor(color));
}

tguiColor* tguiKnobRenderer_getThumbColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getThumbColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColor(ctgui::toCppColor(color));
}

tguiColor* tguiKnobRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBackground(*texture->This);
}

tguiTexture* tguiKnobRenderer_getTextureBackground(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureBackground()));
}

void tguiKnobRenderer_setTextureForeground(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureForeground(*texture->This);
}

tguiTexture* tguiKnobRenderer_getTextureForeground(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureForeground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiKnobRenderer_setImageRotation(tguiRenderer* renderer, float rotation)
{
    DOWNCAST(renderer->This)->setImageRotation(rotation);
}

float tguiKnobRenderer_getImageRotation(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getImageRotation();
}
