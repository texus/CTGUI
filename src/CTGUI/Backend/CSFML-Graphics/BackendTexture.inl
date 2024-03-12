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

#ifndef CTGUI_BACKEND_TEXTURE_CSFML_GRAPHICS_H
#define CTGUI_BACKEND_TEXTURE_CSFML_GRAPHICS_H

#include <CTGUI/Global.h>
#include <TGUI/Backend/Renderer/BackendTexture.hpp>
#include <SFML/Graphics.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace ctgui
{
    class BackendTextureCSFMLGraphics : public tgui::BackendTexture
    {
    public:
        void setSmooth(bool smooth) override
        {
            if (m_texture)
                sfTexture_setSmooth(m_texture, smooth);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        bool loadTextureOnly(tgui::Vector2u size, const std::uint8_t* pixels, bool smooth) override
        {
            BackendTexture::loadTextureOnly(size, pixels, smooth);

            if (m_texture)
            {
                const sfVector2u oldSize = sfTexture_getSize(m_texture);
                if ((oldSize.x != size.x) || (oldSize.y != size.y))
                {
                    sfTexture_destroy(m_texture);
                    m_texture = nullptr;
                }
            }

            if (!m_texture)
            {
                m_texture = sfTexture_create(size.x, size.y);
                if (!m_texture)
                    return false;
            }

            if (pixels)
                sfTexture_updateFromPixels(m_texture, pixels, size.x, size.y, 0, 0);

            return true;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        const sfTexture* getInternalTexture()
        {
            return m_texture;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    protected:

        sfTexture* m_texture = nullptr;
    };
}

#endif // CTGUI_BACKEND_TEXTURE_CSFML_GRAPHICS_H
