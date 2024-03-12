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


#include <CTGUI/Text.h>
#include <CTGUI/TextStruct.hpp>
#include <CTGUI/FontStruct.hpp>
#include <CTGUI/InternalGlobal.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiText_getStaticExtraHorizontalPadding(const tguiFont* font, unsigned int characterSize)
{
    return tgui::Text::getExtraHorizontalPadding(*font->This, characterSize);
}

float tguiText_getStaticExtraHorizontalOffset(const tguiFont* font, unsigned int characterSize)
{
    return tgui::Text::getExtraHorizontalOffset(*font->This, characterSize);
}

float tguiText_getStaticExtraVerticalPadding(unsigned int characterSize)
{
    return tgui::Text::getExtraVerticalPadding(characterSize);
}

float tguiText_getStaticLineHeight(const tguiFont* font, unsigned int characterSize)
{
    return tgui::Text::getLineHeight(*font->This, characterSize);
}

float tguiText_getStaticLineWidth(tguiUtf32 text, const tguiFont* font, unsigned int characterSize, tguiUint32 style)
{
    return tgui::Text::getLineWidth(ctgui::toCppStr(text), *font->This, characterSize, style);
}

unsigned int tguiText_findBestTextSize(const tguiFont* font, float height, int fit)
{
    return tgui::Text::findBestTextSize(*font->This, height, fit);
}

tguiUtf32 tguiText_wordWrap(float maxWidth, tguiUtf32 text, const tguiFont* font, unsigned int textSize, tguiBool bold)
{
    return ctgui::fromCppStr(tgui::Text::wordWrap(maxWidth, ctgui::toCppStr(text), *font->This, textSize, bold != 0));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiText* tguiText_create(void)
{
    return new tguiText();
}

void tguiText_free(tguiText* text)
{
    delete text;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiText_setPosition(tguiText* text, tguiVector2f position)
{
    text->This.setPosition({position.x, position.y});
}

tguiVector2f tguiText_getPosition(const tguiText* text)
{
    const tgui::Vector2f position = text->This.getPosition();
    return {position.x, position.y};
}

tguiVector2f tguiText_getSize(const tguiText* text)
{
    const tgui::Vector2f size = text->This.getSize();
    return {size.x, size.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiText_setString(tguiText* text, tguiUtf32 string)
{
    text->This.setString(ctgui::toCppStr(string));
}

tguiUtf32 tguiText_getString(const tguiText* text)
{
    return ctgui::fromCppStr(text->This.getString());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiText_setCharacterSize(tguiText* text, unsigned int size)
{
    text->This.setCharacterSize(size);
}

unsigned int tguiText_getCharacterSize(const tguiText* text)
{
    return text->This.getCharacterSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiText_setColor(tguiText* text, tguiColor* color)
{
    text->This.setColor(ctgui::toCppColor(color));
}

tguiColor* tguiText_getColor(const tguiText* text)
{
    return ctgui::fromCppColor(text->This.getColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiText_setOpacity(tguiText* text, float opacity)
{
    text->This.setOpacity(opacity);
}

float tguiText_getOpacity(const tguiText* text)
{
    return text->This.getOpacity();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiText_setFont(tguiText* text, tguiFont* font)
{
    text->This.setFont(*font->This);
}

tguiFont* tguiText_getFont(const tguiText* text)
{
    return new tguiFont(std::make_unique<tgui::Font>(text->This.getFont()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiText_setStyle(tguiText* text, tguiUint32 style)
{
    text->This.setStyle(style);
}

tguiUint32 tguiText_getStyle(const tguiText* text)
{
    return text->This.getStyle();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiText_setOutlineColor(tguiText* text, tguiColor* color)
{
    text->This.setOutlineColor(ctgui::toCppColor(color));
}

tguiColor* tguiText_getOutlineColor(const tguiText* text)
{
    return ctgui::fromCppColor(text->This.getOutlineColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiText_setOutlineThickness(tguiText* text, float thickness)
{
    text->This.setOutlineThickness(thickness);
}

float tguiText_getOutlineThickness(const tguiText* text)
{
    return text->This.getOutlineThickness();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiText_findCharacterPos(const tguiText* text, size_t index)
{
    const tgui::Vector2f pos = text->This.findCharacterPos(index);
    return {pos.x, pos.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiText_getExtraHorizontalPadding(const tguiText* text)
{
    return text->This.getExtraHorizontalPadding();
}

float tguiText_getExtraHorizontalOffset(const tguiText* text)
{
    return text->This.getExtraHorizontalOffset();
}

float tguiText_getLineHeight(const tguiText* text)
{
    return text->This.getLineHeight();
}

float tguiText_getLineWidth(const tguiText* text)
{
    return text->This.getLineWidth();
}
