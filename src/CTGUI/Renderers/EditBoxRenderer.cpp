/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2016 Bruno Van de Velde (vdv_b@tgui.eu)
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


#include <CTGUI/Renderers/EditBoxRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/ColorConverter.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

#include <TGUI/Renderers/EditBoxRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::EditBoxRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiEditBoxRenderer_create(void)
{
    return new tguiRenderer(new tgui::EditBoxRenderer);
}

tguiRenderer* tguiEditBoxRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::EditBoxRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBoxRenderer_setBorders(tguiRenderer* renderer, tguiOutline borders)
{
    DOWNCAST(renderer->This)->setBorders({borders.left, borders.top, borders.right, borders.bottom});
}

tguiOutline tguiEditBoxRenderer_getBorders(const tguiRenderer* renderer)
{
    tgui::Borders borders = DOWNCAST(renderer->This)->getBorders();
    return {borders.left, borders.top, borders.right, borders.bottom};
}

void tguiEditBoxRenderer_setPadding(tguiRenderer* renderer, tguiOutline padding)
{
    DOWNCAST(renderer->This)->setPadding({padding.left, padding.top, padding.right, padding.bottom});
}

tguiOutline tguiEditBoxRenderer_getPadding(const tguiRenderer* renderer)
{
    tgui::Padding padding = DOWNCAST(renderer->This)->getPadding();
    return {padding.left, padding.top, padding.right, padding.bottom};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBoxRenderer_setCaretWidth(const tguiRenderer* renderer, float width)
{
    DOWNCAST(renderer->This)->setCaretWidth(width);
}

float tguiEditBoxRenderer_getCaretWidth(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getCaretWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBoxRenderer_setTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiEditBoxRenderer_getTextColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColor());
}

void tguiEditBoxRenderer_setDefaultTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setDefaultTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiEditBoxRenderer_getDefaultTextColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getDefaultTextColor());
}

void tguiEditBoxRenderer_setTextColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiEditBoxRenderer_getTextColorDisabled(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColorDisabled());
}

void tguiEditBoxRenderer_setSelectedTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiEditBoxRenderer_getSelectedTextColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedTextColor());
}

void tguiEditBoxRenderer_setSelectedTextBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedTextBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiEditBoxRenderer_getSelectedTextBackgroundColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedTextBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBoxRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiEditBoxRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

void tguiEditBoxRenderer_setBackgroundColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiEditBoxRenderer_getBackgroundColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColorHover());
}

void tguiEditBoxRenderer_setBackgroundColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiEditBoxRenderer_getBackgroundColorDisabled(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBoxRenderer_setCaretColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setCaretColor({color.r, color.g, color.b, color.a});
}

sfColor tguiEditBoxRenderer_getCaretColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getCaretColor());
}

void tguiEditBoxRenderer_setCaretColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setCaretColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiEditBoxRenderer_getCaretColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getCaretColorHover());
}

void tguiEditBoxRenderer_setCaretColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setCaretColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiEditBoxRenderer_getCaretColorDisabled(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getCaretColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBoxRenderer_setBorderColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColor({color.r, color.g, color.b, color.a});
}

sfColor tguiEditBoxRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColor());
}

void tguiEditBoxRenderer_setBorderColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiEditBoxRenderer_getBorderColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColorHover());
}

void tguiEditBoxRenderer_setBorderColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiEditBoxRenderer_getBorderColorDisabled(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBoxRenderer_setTexture(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTexture(*texture->This);
}

void tguiEditBoxRenderer_setTextureHover(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureHover(*texture->This);
}

void tguiEditBoxRenderer_setTextureDisabled(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureDisabled(*texture->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBoxRenderer_setTextStyle(tguiRenderer* renderer, sfUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyle(style);
}

sfUint32 tguiEditBoxRenderer_getTextStyle(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyle();
}

void tguiEditBoxRenderer_setDefaultTextStyle(tguiRenderer* renderer, sfUint32 style)
{
    DOWNCAST(renderer->This)->setDefaultTextStyle(style);
}

sfUint32 tguiEditBoxRenderer_getTextStyleDisabled(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getDefaultTextStyle();
}
