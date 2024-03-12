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


#include <CTGUI/Renderers/ButtonRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>

#include <TGUI/Renderers/ButtonRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ButtonRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiButtonRenderer_create(void)
{
    return new tguiRenderer(new tgui::ButtonRenderer);
}

tguiRenderer* tguiButtonRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::ButtonRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders)
{
    DOWNCAST(renderer->This)->setBorders(borders->This);
}

tguiOutline* tguiButtonRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColor(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getTextColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColor());
}

void tguiButtonRenderer_setTextColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getTextColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColorHover());
}

void tguiButtonRenderer_setTextColorFocused(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColorFocused(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getTextColorFocused(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColorFocused());
}

void tguiButtonRenderer_setTextColorDisabled(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColorDisabled(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getTextColorDisabled(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColorDisabled());
}

void tguiButtonRenderer_setTextColorDown(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColorDown(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getTextColorDown(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColorDown());
}

void tguiButtonRenderer_setTextColorDownHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColorDownHover(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getTextColorDownHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColorDownHover());
}

void tguiButtonRenderer_setTextColorDownFocused(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColorDownFocused(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getTextColorDownFocused(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColorDownFocused());
}

void tguiButtonRenderer_setTextColorDownDisabled(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColorDownDisabled(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getTextColorDownDisabled(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColorDownDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

void tguiButtonRenderer_setBackgroundColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getBackgroundColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColorHover());
}

void tguiButtonRenderer_setBackgroundColorFocused(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColorFocused(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getBackgroundColorFocused(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColorFocused());
}

void tguiButtonRenderer_setBackgroundColorDisabled(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColorDisabled(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getBackgroundColorDisabled(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColorDisabled());
}

void tguiButtonRenderer_setBackgroundColorDown(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColorDown(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getBackgroundColorDown(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColorDown());
}

void tguiButtonRenderer_setBackgroundColorDownHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColorDownHover(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getBackgroundColorDownHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColorDownHover());
}

void tguiButtonRenderer_setBackgroundColorDownFocused(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColorDownFocused(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getBackgroundColorDownFocused(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColorDownFocused());
}

void tguiButtonRenderer_setBackgroundColorDownDisabled(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColorDownDisabled(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getBackgroundColorDownDisabled(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColorDownDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColor(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColor());
}

void tguiButtonRenderer_setBorderColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getBorderColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColorHover());
}

void tguiButtonRenderer_setBorderColorFocused(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColorFocused(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getBorderColorFocused(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColorFocused());
}

void tguiButtonRenderer_setBorderColorDisabled(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColorDisabled(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getBorderColorDisabled(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColorDisabled());
}

void tguiButtonRenderer_setBorderColorDown(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColorDown(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getBorderColorDown(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColorDown());
}

void tguiButtonRenderer_setBorderColorDownHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColorDownHover(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getBorderColorDownHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColorDownHover());
}

void tguiButtonRenderer_setBorderColorDownFocused(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColorDownFocused(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getBorderColorDownFocused(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColorDownFocused());
}

void tguiButtonRenderer_setBorderColorDownDisabled(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColorDownDisabled(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getBorderColorDownDisabled(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColorDownDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setTexture(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTexture(*texture->This);
}

tguiTexture* tguiButtonRenderer_getTexture(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTexture()));
}

void tguiButtonRenderer_setTextureHover(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureHover(*texture->This);
}

tguiTexture* tguiButtonRenderer_getTextureHover(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureHover()));
}

void tguiButtonRenderer_setTextureFocused(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureFocused(*texture->This);
}

tguiTexture* tguiButtonRenderer_getTextureFocused(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureFocused()));
}

void tguiButtonRenderer_setTextureDisabled(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureDisabled(*texture->This);
}

tguiTexture* tguiButtonRenderer_getTextureDisabled(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureDisabled()));
}

void tguiButtonRenderer_setTextureDown(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureDown(*texture->This);
}

tguiTexture* tguiButtonRenderer_getTextureDown(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureDown()));
}

void tguiButtonRenderer_setTextureDownHover(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureDownHover(*texture->This);
}

tguiTexture* tguiButtonRenderer_getTextureDownHover(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureDownHover()));
}

void tguiButtonRenderer_setTextureDownFocused(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureDownFocused(*texture->This);
}

tguiTexture* tguiButtonRenderer_getTextureDownFocused(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureDownFocused()));
}

void tguiButtonRenderer_setTextureDownDisabled(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureDownDisabled(*texture->This);
}

tguiTexture* tguiButtonRenderer_getTextureDownDisabled(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureDownDisabled()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setTextStyle(tguiRenderer* renderer, tguiUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyle(style);
}

tguiUint32 tguiButtonRenderer_getTextStyle(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyle();
}

void tguiButtonRenderer_setTextStyleHover(tguiRenderer* renderer, tguiUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyleHover(style);
}

tguiUint32 tguiButtonRenderer_getTextStyleHover(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyleHover();
}

void tguiButtonRenderer_setTextStyleFocused(tguiRenderer* renderer, tguiUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyleFocused(style);
}

tguiUint32 tguiButtonRenderer_getTextStyleFocused(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyleFocused();
}

void tguiButtonRenderer_setTextStyleDisabled(tguiRenderer* renderer, tguiUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyleDisabled(style);
}

tguiUint32 tguiButtonRenderer_getTextStyleDisabled(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyleDisabled();
}

void tguiButtonRenderer_setTextStyleDown(tguiRenderer* renderer, tguiUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyleDown(style);
}

tguiUint32 tguiButtonRenderer_getTextStyleDown(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyleDown();
}

void tguiButtonRenderer_setTextStyleDownHover(tguiRenderer* renderer, tguiUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyleDownHover(style);
}

tguiUint32 tguiButtonRenderer_getTextStyleDownHover(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyleDownHover();
}

void tguiButtonRenderer_setTextStyleDownFocused(tguiRenderer* renderer, tguiUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyleDownFocused(style);
}

tguiUint32 tguiButtonRenderer_getTextStyleDownFocused(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyleDownFocused();
}

void tguiButtonRenderer_setTextStyleDownDisabled(tguiRenderer* renderer, tguiUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyleDownDisabled(style);
}

tguiUint32 tguiButtonRenderer_getTextStyleDownDisabled(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyleDownDisabled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setTextOutlineColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextOutlineColor(ctgui::toCppColor(color));
}

tguiColor* tguiButtonRenderer_getTextOutlineColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextOutlineColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setTextOutlineThickness(tguiRenderer* renderer, float thickness)
{
    DOWNCAST(renderer->This)->setTextOutlineThickness(thickness);
}

float tguiButtonRenderer_getTextOutlineThickness(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextOutlineThickness();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setRoundedBorderRadius(tguiRenderer* renderer, float radius)
{
    DOWNCAST(renderer->This)->setRoundedBorderRadius(radius);
}

float tguiButtonRenderer_getRoundedBorderRadius(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getRoundedBorderRadius();
}
