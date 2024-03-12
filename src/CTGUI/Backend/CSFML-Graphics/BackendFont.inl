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

#ifndef CTGUI_BACKEND_FONT_CSFML_GRAPHICS_H
#define CTGUI_BACKEND_FONT_CSFML_GRAPHICS_H

#include <CTGUI/Global.h>
#include <TGUI/Backend/Font/BackendFont.hpp>
#include <TGUI/Backend/Window/Backend.hpp>
#include <SFML/Graphics.h>
#include <unordered_set>
#include <cassert>
#include <memory>
#include <map>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace ctgui
{
    class BackendFontCSFMLGraphics : public tgui::BackendFont
    {
    public:
        bool loadFromMemory(std::unique_ptr<std::uint8_t[]> data, std::size_t sizeInBytes) override
        {
            m_textures.clear();
            m_textureVersions.clear();

            m_fileContents = std::move(data);
            m_font = sfFont_createFromMemory(m_fileContents.get(), sizeInBytes);
            return m_font != nullptr;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        bool hasGlyph(char32_t codePoint) const override
        {
            return sfFont_hasGlyph(m_font, codePoint);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        TGUI_NODISCARD tgui::FontGlyph getGlyph(char32_t codePoint, unsigned int characterSize, bool bold, float outlineThickness = 0) override
        {
            const unsigned int scaledTextSize = static_cast<unsigned int>(characterSize * m_fontScale);
            const float scaledOutlineThickness = outlineThickness * m_fontScale;

            // If this is the first time requesting the glyph then mark the texture as outdated
            const auto key = constructGlyphKey(codePoint, scaledTextSize, bold, scaledOutlineThickness);
            if (m_loadedGlyphKeys.emplace(key).second)
                m_textures[scaledTextSize] = nullptr;

            const sfGlyph& glyphSFML = sfFont_getGlyph(m_font, codePoint, scaledTextSize, bold, scaledOutlineThickness);

            tgui::FontGlyph glyph;
            glyph.advance = glyphSFML.advance / m_fontScale;
            glyph.bounds = {glyphSFML.bounds.left / m_fontScale, glyphSFML.bounds.top / m_fontScale, glyphSFML.bounds.width / m_fontScale, glyphSFML.bounds.height / m_fontScale};

            // SFML uses an IntRect, but all values are unsigned
            assert(glyphSFML.textureRect.left >= 0);
            assert(glyphSFML.textureRect.top >= 0);
            assert(glyphSFML.textureRect.width >= 0);
            assert(glyphSFML.textureRect.height >= 0);
            glyph.textureRect = {
                static_cast<unsigned int>(glyphSFML.textureRect.left),
                static_cast<unsigned int>(glyphSFML.textureRect.top),
                static_cast<unsigned int>(glyphSFML.textureRect.width),
                static_cast<unsigned int>(glyphSFML.textureRect.height)};

            return glyph;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        TGUI_NODISCARD float getKerning(char32_t first, char32_t second, unsigned int characterSize, bool bold) override
        {
            if (bold)
                return sfFont_getBoldKerning(m_font, first, second, static_cast<unsigned int>(characterSize * m_fontScale)) / m_fontScale;
            else
                return sfFont_getKerning(m_font, first, second, static_cast<unsigned int>(characterSize * m_fontScale)) / m_fontScale;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        TGUI_NODISCARD float getLineSpacing(unsigned int characterSize) override
        {
            return sfFont_getLineSpacing(m_font, static_cast<unsigned int>(characterSize * m_fontScale)) / m_fontScale;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        TGUI_NODISCARD float getFontHeight(unsigned int characterSize) override
        {
            return getAscent(characterSize) + getDescent(characterSize);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        TGUI_NODISCARD float getAscent(unsigned int characterSize) override
        {
            const unsigned int scaledTextSize = static_cast<unsigned int>(characterSize * m_fontScale);

            // SFML doesn't provide a method to access the ascent of the font.
            // If the font contains a capital e-circumflex glyph then we use its size as our ascent value.
            // Otherwise we will simply assume that the ascent equals the character size, which is what SFML's sf::Text class does.
            // With the built-in DejaVuSans font, ascent should be 15 for a text size of 16.
            if (!sfFont_hasGlyph(m_font, U'\u00CA'))
                return static_cast<float>(scaledTextSize) / m_fontScale;

            const tgui::FontGlyph& glyph = getGlyph(U'\u00CA', scaledTextSize, false, 0);
            return glyph.bounds.height;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        TGUI_NODISCARD float getDescent(unsigned int characterSize) override
        {
            // SFML doesn't provide a method to access the descent of the font.
            // We extract the descent by examining the 'g' glyph, assuming it exists.
            const unsigned int scaledTextSize = static_cast<unsigned int>(characterSize * m_fontScale);
            const tgui::FontGlyph& glyph = getGlyph(U'g', scaledTextSize, false);
            return glyph.bounds.height + glyph.bounds.top;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        TGUI_NODISCARD float getUnderlinePosition(unsigned int characterSize) override
        {
            return sfFont_getUnderlinePosition(m_font, static_cast<unsigned int>(characterSize * m_fontScale)) / m_fontScale;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        TGUI_NODISCARD float getUnderlineThickness(unsigned int characterSize) override
        {
            return sfFont_getUnderlineThickness(m_font, static_cast<unsigned int>(characterSize * m_fontScale)) / m_fontScale;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        TGUI_NODISCARD std::shared_ptr<tgui::BackendTexture> getTexture(unsigned int characterSize, unsigned int& textureVersion) override
        {
            const unsigned int scaledTextSize = static_cast<unsigned int>(characterSize * m_fontScale);

            if (m_textures[scaledTextSize])
            {
                textureVersion = m_textureVersions[scaledTextSize];
                return m_textures[scaledTextSize];
            }

            // Unfortunately we currently need to extract the pixel data from the sf::Font texture, in order to load a
            // texture with TGUI, even if the TGUI texture also uses sf::Texture.
            sfImage* image = sfTexture_copyToImage(sfFont_getTexture(m_font, scaledTextSize));
            const sfVector2u imageSize = sfImage_getSize(image);
            const sfUint8* pixels = sfImage_getPixelsPtr(image);
            auto texture = tgui::getBackend()->getRenderer()->createTexture();
            texture->loadTextureOnly({imageSize.x, imageSize.y}, pixels, m_isSmooth);
            m_textures[scaledTextSize] = texture;
            sfImage_destroy(image);

            textureVersion = ++m_textureVersions[scaledTextSize];
            return texture;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        TGUI_NODISCARD tgui::Vector2u getTextureSize(unsigned int characterSize) override
        {
            const unsigned int scaledTextSize = static_cast<unsigned int>(characterSize * m_fontScale);
            const auto size = sfTexture_getSize(sfFont_getTexture(m_font, scaledTextSize));
            return {size.x, size.y};
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void setSmooth(bool smooth) override
        {
            tgui::BackendFont::setSmooth(smooth);
            for (auto& pair : m_textures)
            {
                auto& texture = pair.second;
                if (texture)
                    texture->setSmooth(m_isSmooth);
            }
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void setFontScale(float scale) override
        {
            if (m_fontScale == scale)
                return;

            tgui::BackendFont::setFontScale(scale);

            // Destroy all textures to force texts to update their glyphs
            m_textures.clear();
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    protected:

        sfFont* m_font = nullptr;
        std::unique_ptr<std::uint8_t[]> m_fileContents;

        std::unordered_set<std::uint64_t> m_loadedGlyphKeys;

        // We keep one texture per character size. Other font backends don't do this, but this is to prevent existing code
        // from breaking since sf::Font does the same.
        std::map<unsigned int, std::shared_ptr<tgui::BackendTexture>> m_textures;
        std::map<unsigned int, unsigned int> m_textureVersions;
    };
}

#endif // CTGUI_BACKEND_FONT_CSFML_GRAPHICS_H
