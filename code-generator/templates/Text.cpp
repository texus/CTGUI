#include <CTGUI/Text.h>
#include <CTGUI/TextStruct.hpp>
#include <CTGUI/FontStruct.hpp>
#include <CTGUI/InternalGlobal.hpp>

@TGUI_GENERATED_HEAD@

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

@TGUI_GENERATED_BODY@
