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

#ifndef CTGUI_BACKEND_RENDER_TARGET_CSFML_GRAPHICS_H
#define CTGUI_BACKEND_RENDER_TARGET_CSFML_GRAPHICS_H

#include <CTGUI/Global.h>
#include <TGUI/Backend/Renderer/BackendRenderTarget.hpp>
#include <TGUI/Container.hpp>
#include <SFML/Graphics.h>
#include <cmath>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace ctgui
{
    class BackendRenderTargetCSFMLGraphics : public tgui::BackendRenderTarget
    {
    public:

        BackendRenderTargetCSFMLGraphics(sfRenderWindow* target) :
            m_target(target)
        {
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void setClearColor(const tgui::Color& color) override
        {
            m_clearColor = color;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void clearScreen() override
        {
            sfRenderWindow_clear(m_target, sfColor_fromRGBA(m_clearColor.getRed(), m_clearColor.getGreen(), m_clearColor.getBlue(), m_clearColor.getAlpha()));
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void drawGui(const std::shared_ptr<tgui::RootContainer>& root) override
        {
            if (!m_target || (m_targetSize.x == 0) || (m_targetSize.y == 0) || (m_viewRect.width <= 0) || (m_viewRect.height <= 0))
                return;

            // Change the view
            const sfView* oldView = sfRenderWindow_getView(m_target);
            updateClipping(m_viewRect, m_viewport);

            // Draw the widgets
            root->draw(*this, {});

            // Restore the old view
            sfRenderWindow_setView(m_target, oldView);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void drawVertexArray(const tgui::RenderStates& states, const tgui::Vertex* vertices, std::size_t vertexCount,
                             const unsigned int* indices, std::size_t indexCount, const std::shared_ptr<tgui::BackendTexture>& texture) override
        {
            const tgui::Vector2f textureSize = texture ? tgui::Vector2f{texture->getSize()} : tgui::Vector2f{1,1};
            const std::array<float, 16>& transformMatrix = states.transform.getMatrix();
            sfRenderStates statesSFML = sfRenderStates_default();
            statesSFML.transform = sfTransform_fromMatrix(
                transformMatrix[0], transformMatrix[4], transformMatrix[12],
                transformMatrix[1], transformMatrix[5], transformMatrix[13],
                transformMatrix[3], transformMatrix[7], transformMatrix[15]);

            if (texture)
            {
                TGUI_ASSERT(std::dynamic_pointer_cast<BackendTextureCSFMLGraphics>(texture), "BackendRenderTargetCSFMLGraphics requires textures of type BackendTextureCSFMLGraphics");
                statesSFML.texture = std::static_pointer_cast<BackendTextureCSFMLGraphics>(texture)->getInternalTexture();
            }

            if (indices)
            {
                auto verticesSFML = tgui::MakeUniqueForOverwrite<sfVertex[]>(indexCount);
                for (std::size_t i = 0; i < indexCount; ++i)
                {
                    const tgui::Vertex& vertexTGUI = vertices[indices[i]];
                    sfVertex& vertexSFML = verticesSFML[i];
                    vertexSFML.position.x = vertexTGUI.position.x;
                    vertexSFML.position.y = vertexTGUI.position.y;
                    vertexSFML.color.r = vertexTGUI.color.red;
                    vertexSFML.color.g = vertexTGUI.color.green;
                    vertexSFML.color.b = vertexTGUI.color.blue;
                    vertexSFML.color.a = vertexTGUI.color.alpha;
                    vertexSFML.texCoords.x = vertexTGUI.texCoords.x * textureSize.x;
                    vertexSFML.texCoords.y = vertexTGUI.texCoords.y * textureSize.y;
                }

                sfRenderWindow_drawPrimitives(m_target, verticesSFML.get(), indexCount, sfTriangles, &statesSFML);
            }
            else // There are no indices
            {
                auto verticesSFML = tgui::MakeUniqueForOverwrite<sfVertex[]>(vertexCount);
                for (std::size_t i = 0; i < vertexCount; ++i)
                {
                    const tgui::Vertex& vertexTGUI = vertices[i];
                    sfVertex& vertexSFML = verticesSFML[i];
                    vertexSFML.position.x = vertexTGUI.position.x;
                    vertexSFML.position.y = vertexTGUI.position.y;
                    vertexSFML.color.r = vertexTGUI.color.red;
                    vertexSFML.color.g = vertexTGUI.color.green;
                    vertexSFML.color.b = vertexTGUI.color.blue;
                    vertexSFML.color.a = vertexTGUI.color.alpha;
                    vertexSFML.texCoords.x = vertexTGUI.texCoords.x * textureSize.x;
                    vertexSFML.texCoords.y = vertexTGUI.texCoords.y * textureSize.y;
                }

                sfRenderWindow_drawPrimitives(m_target, verticesSFML.get(), vertexCount, sfTriangles, &statesSFML);
            }
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    protected:

        void updateClipping(tgui::FloatRect clipRect, tgui::FloatRect clipViewport) override
        {
            if ((clipViewport.width > 0) && (clipViewport.height > 0) && (clipRect.width > 0) && (clipRect.height > 0))
            {
                m_pixelsPerPoint = {clipViewport.width / clipRect.width, clipViewport.height / clipRect.height};

                // Rounding clipRect to pixel coordinates is needed to avoid blurry text
                sfView* newView = sfView_createFromRect({std::round(clipRect.left * m_pixelsPerPoint.x) / m_pixelsPerPoint.x,
                                                         std::round(clipRect.top * m_pixelsPerPoint.y) / m_pixelsPerPoint.y,
                                                         std::round(clipRect.width * m_pixelsPerPoint.x) / m_pixelsPerPoint.x,
                                                         std::round(clipRect.height * m_pixelsPerPoint.y) / m_pixelsPerPoint.y});
                sfView_setViewport(newView, {clipViewport.left / m_targetSize.x, clipViewport.top / m_targetSize.y,
                                             clipViewport.width / m_targetSize.x, clipViewport.height / m_targetSize.y});
                sfRenderWindow_setView(m_target, newView);
                sfView_destroy(newView);
            }
            else // Clip the entire window
            {
                m_pixelsPerPoint = {1, 1};

                sfView* clippingView = sfView_createFromRect({0, 0, 0, 0});
                sfView_setViewport(clippingView, {0, 0, 0, 0});
                sfRenderWindow_setView(m_target, clippingView);
                sfView_destroy(clippingView);
            }
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    protected:

        sfRenderWindow* m_target;
        tgui::Color     m_clearColor;
    };
}

#endif // CTGUI_BACKEND_RENDER_TARGET_CSFML_GRAPHICS_H
