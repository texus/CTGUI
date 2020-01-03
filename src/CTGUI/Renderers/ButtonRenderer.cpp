/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2019 Bruno Van de Velde (vdv_b@tgui.eu)
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
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/OutlineStruct.h>
#include <CTGUI/ColorConverter.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

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

void tguiButtonRenderer_setTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getTextColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColor());
}

void tguiButtonRenderer_setTextColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getTextColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColorHover());
}

void tguiButtonRenderer_setTextColorDown(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorDown({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getTextColorDown(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColorDown());
}

void tguiButtonRenderer_setTextColorFocused(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorFocused({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getTextColorFocused(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColorFocused());
}

void tguiButtonRenderer_setTextColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getTextColorDisabled(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

void tguiButtonRenderer_setBackgroundColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getBackgroundColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColorHover());
}

void tguiButtonRenderer_setBackgroundColorDown(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorDown({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getBackgroundColorDown(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColorDown());
}

void tguiButtonRenderer_setBackgroundColorFocused(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorFocused({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getBackgroundColorFocused(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColorFocused());
}

void tguiButtonRenderer_setBackgroundColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getBackgroundColorDisabled(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setBorderColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColor({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColor());
}

void tguiButtonRenderer_setBorderColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getBorderColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColorHover());
}

void tguiButtonRenderer_setBorderColorDown(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorDown({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getBorderColorDown(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColorDown());
}

void tguiButtonRenderer_setBorderColorFocused(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorFocused({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getBorderColorFocused(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColorFocused());
}

void tguiButtonRenderer_setBorderColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getBorderColorDisabled(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setTexture(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTexture(*texture->This);
}

void tguiButtonRenderer_setTextureHover(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureHover(*texture->This);
}

void tguiButtonRenderer_setTextureDown(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureDown(*texture->This);
}

void tguiButtonRenderer_setTextureFocused(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureFocused(*texture->This);
}

void tguiButtonRenderer_setTextureDisabled(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureDisabled(*texture->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setTextStyle(tguiRenderer* renderer, sfUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyle(style);
}

sfUint32 tguiButtonRenderer_getTextStyle(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyle();
}

void tguiButtonRenderer_setTextStyleHover(tguiRenderer* renderer, sfUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyleHover(style);
}

sfUint32 tguiButtonRenderer_getTextStyleHover(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyleHover();
}

void tguiButtonRenderer_setTextStyleDown(tguiRenderer* renderer, sfUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyleDown(style);
}

sfUint32 tguiButtonRenderer_getTextStyleDown(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyleDown();
}

void tguiButtonRenderer_setTextStyleFocused(tguiRenderer* renderer, sfUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyleFocused(style);
}

sfUint32 tguiButtonRenderer_getTextStyleFocused(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyleFocused();
}

void tguiButtonRenderer_setTextStyleDisabled(tguiRenderer* renderer, sfUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyleDisabled(style);
}

sfUint32 tguiButtonRenderer_getTextStyleDisabled(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyleDisabled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setTextOutlineColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextOutlineColor({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getTextOutlineColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextOutlineColor());
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
