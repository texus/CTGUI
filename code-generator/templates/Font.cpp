#include <CTGUI/Font.h>
#include <CTGUI/FontStruct.hpp>
#include <CTGUI/InternalGlobal.hpp>

@TGUI_GENERATED_HEAD@

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

@TGUI_GENERATED_BODY@
