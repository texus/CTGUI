// This file is generated, it should not be edited directly.

#include <CTGUI/Text.h>
#include <CTGUI/TextStruct.hpp>
#include <CTGUI/FontStruct.hpp>
#include <CTGUI/InternalGlobal.hpp>

#include <CTGUI/FontStruct.hpp>

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

unsigned int tguiText_findBestTextSize(const tguiFont* font, float height, int fit)
{
    return tgui::Text::findBestTextSize(*font->This, height, fit);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiText_wordWrap(float maxWidth, tguiUtf32 text, const tguiFont* font, unsigned int textSize, tguiBool bold)
{
    return ctgui::fromCppStr(tgui::Text::wordWrap(maxWidth, ctgui::toCppStr(text), *font->This, textSize, bold != 0));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiText_getSize(const tguiText* thisText)
{
    const auto value = thisText->This->getSize();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiText_setPosition(tguiText* thisText, tguiVector2f value)
{
    thisText->This->setPosition({value.x, value.y});
}

tguiVector2f tguiText_getPosition(const tguiText* thisText)
{
    const auto value = thisText->This->getPosition();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiText_setString(tguiText* thisText, tguiUtf32 value)
{
    thisText->This->setString(ctgui::toCppStr(value));
}

tguiUtf32 tguiText_getString(const tguiText* thisText)
{
    return ctgui::fromCppStr(thisText->This->getString());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiText_setCharacterSize(tguiText* thisText, unsigned int value)
{
    thisText->This->setCharacterSize(value);
}

unsigned int tguiText_getCharacterSize(const tguiText* thisText)
{
    return thisText->This->getCharacterSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiText_setColor(tguiText* thisText, const tguiColor* value)
{
    thisText->This->setColor(ctgui::toCppColor(value));
}

const tguiColor* tguiText_getColor(const tguiText* thisText)
{
    return ctgui::fromCppColor(thisText->This->getColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiText_setOpacity(tguiText* thisText, float value)
{
    thisText->This->setOpacity(value);
}

float tguiText_getOpacity(const tguiText* thisText)
{
    return thisText->This->getOpacity();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiText_setFont(tguiText* thisText, const tguiFont* value)
{
    thisText->This->setFont(*value->This);
}

const tguiFont* tguiText_getFont(const tguiText* thisText)
{
    return new tguiFont(std::make_unique<tgui::Font>(thisText->This->getFont()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiText_setStyle(tguiText* thisText, tguiUint32 value)
{
    thisText->This->setStyle(value);
}

tguiUint32 tguiText_getStyle(const tguiText* thisText)
{
    return thisText->This->getStyle();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiText_setOutlineColor(tguiText* thisText, const tguiColor* value)
{
    thisText->This->setOutlineColor(ctgui::toCppColor(value));
}

const tguiColor* tguiText_getOutlineColor(const tguiText* thisText)
{
    return ctgui::fromCppColor(thisText->This->getOutlineColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiText_setOutlineThickness(tguiText* thisText, float value)
{
    thisText->This->setOutlineThickness(value);
}

float tguiText_getOutlineThickness(const tguiText* thisText)
{
    return thisText->This->getOutlineThickness();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiText_findCharacterPos(const tguiText* thisText, size_t index)
{
    const auto value = thisText->This->findCharacterPos(index);
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiText_getExtraHorizontalPadding(const tguiText* thisText)
{
    return thisText->This->getExtraHorizontalPadding();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiText_getExtraHorizontalOffset(const tguiText* thisText)
{
    return thisText->This->getExtraHorizontalOffset();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiText_getLineHeight(const tguiText* thisText)
{
    return thisText->This->getLineHeight();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiText_getLineWidth(const tguiText* thisText)
{
    return thisText->This->getLineWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
