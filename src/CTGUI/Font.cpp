// This file is generated, it should not be edited directly.

#include <CTGUI/Font.h>
#include <CTGUI/FontStruct.hpp>
#include <CTGUI/InternalGlobal.hpp>

#include <CTGUI/FontStruct.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiFont* tguiFont_createNull(void)
{
    return new tguiFont(std::make_unique<tgui::Font>());
}

tguiFont* tguiFont_createFromFile(tguiUtf32 filename)
{
    try
    {
        return new tguiFont(std::make_unique<tgui::Font>(ctgui::toCppStr(filename)));
    }
    catch (const tgui::Exception &e)
    {
        ctgui::tguiErrorMessage = e.what();
        return nullptr;
    }
}

tguiFont* tguiFont_createFromMemory(tguiUint8* data, size_t dataSize)
{
    try
    {
        return new tguiFont(std::make_unique<tgui::Font>(data, dataSize));
    }
    catch (const tgui::Exception &e)
    {
        ctgui::tguiErrorMessage = e.what();
        return nullptr;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFont_destroy(tguiFont* font)
{
    delete font;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiFontGlyph tguiFont_getGlyph(const tguiFont* font, tguiChar32 codePoint, unsigned int characterSize, tguiBool bold, float outlineThickness)
{
    const auto& cppGlyph = font->This->getGlyph(codePoint, characterSize, bold != 0, outlineThickness);

    tguiFontGlyph glyph;
    glyph.advance = cppGlyph.advance;
    glyph.bounds.left = cppGlyph.bounds.left;
    glyph.bounds.top = cppGlyph.bounds.top;
    glyph.bounds.width = cppGlyph.bounds.width;
    glyph.bounds.height = cppGlyph.bounds.height;
    glyph.textureRect.left = cppGlyph.textureRect.left;
    glyph.textureRect.top = cppGlyph.textureRect.top;
    glyph.textureRect.width = cppGlyph.textureRect.width;
    glyph.textureRect.height = cppGlyph.textureRect.height;
    return glyph;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFont_setGlobalFont(const tguiFont* value)
{
    tgui::Font::setGlobalFont(*value->This);
}

const tguiFont* tguiFont_getGlobalFont(void)
{
    return new tguiFont(std::make_unique<tgui::Font>(tgui::Font::getGlobalFont()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiFont_getId(const tguiFont* thisFont)
{
    return ctgui::fromCppStr(thisFont->This->getId());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiFont_getKerning(const tguiFont* thisFont, tguiChar32 first, tguiChar32 second, unsigned int characterSize, tguiBool bold)
{
    return thisFont->This->getKerning(first, second, characterSize, bold != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiFont_getLineSpacing(const tguiFont* thisFont, unsigned int characterSize)
{
    return thisFont->This->getLineSpacing(characterSize);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiFont_getFontHeight(const tguiFont* thisFont, unsigned int characterSize)
{
    return thisFont->This->getFontHeight(characterSize);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFont_setSmooth(tguiFont* thisFont, tguiBool value)
{
    thisFont->This->setSmooth(value != 0);
}

tguiBool tguiFont_isSmooth(const tguiFont* thisFont)
{
    return thisFont->This->isSmooth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
