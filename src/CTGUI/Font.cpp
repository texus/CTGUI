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


#include <CTGUI/Font.h>
#include <CTGUI/FontStruct.hpp>
#include <CTGUI/InternalGlobal.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFont_setGlobalFont(tguiFont* font)
{
    tgui::Font::setGlobalFont(*font->This);
}

tguiFont* tguiFont_getGlobalFont(void)
{
    return new tguiFont(std::make_unique<tgui::Font>(tgui::Font::getGlobalFont()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiFont* tguiFont_createNull(void)
{
    return new tguiFont(std::make_unique<tgui::Font>());
}

tguiFont* tguiFont_createFromFile(tguiUtf32 filename)
{
    return new tguiFont(std::make_unique<tgui::Font>(ctgui::toCppStr(filename)));
}

tguiFont* tguiFont_createFromMemory(tguiUint8* data, size_t dataSize)
{
    return new tguiFont(std::make_unique<tgui::Font>(data, dataSize));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFont_free(tguiFont* font)
{
    delete font;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiFont_getId(const tguiFont* font)
{
    return ctgui::fromCppStr(font->This->getId());
}

tguiFontGlyph tguiFont_getGlyph(const tguiFont* font, unsigned int characterSize, tguiBool bold, float outlineThickness)
{
    const auto& cppGlyph = font->This->getGlyph(characterSize, bold != 0, outlineThickness);

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

float tguiFont_getKerning(const tguiFont* font, tguiUint32 first, tguiUint32 second, unsigned int characterSize, tguiBool bold)
{
    return font->This->getKerning(static_cast<char32_t>(first), static_cast<char32_t>(second), characterSize, bold != 0);
}

float tguiFont_getLineSpacing(const tguiFont* font, unsigned int characterSize)
{
    return font->This->getLineSpacing(characterSize);
}

float tguiFont_getFontHeight(const tguiFont* font, unsigned int characterSize)
{
    return font->This->getFontHeight(characterSize);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiFont_setSmooth(const tguiFont* font, tguiBool smooth)
{
    return font->This->setSmooth(smooth != 0);
}

tguiBool tguiFont_isSmooth(const tguiFont* font)
{
    return font->This->isSmooth();
}
