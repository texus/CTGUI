/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2026 Bruno Van de Velde (vdv_b@tgui.eu)
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

#ifndef CTGUI_CANVAS_CSFML_GRAPHICS_H
#define CTGUI_CANVAS_CSFML_GRAPHICS_H

#include <CTGUI/Global.h>
#include <CTGUI/WidgetStruct.hpp>
#include <TGUI/Widgets/CanvasBase.hpp>
#include <unordered_map>
#include <memory>
#include <cmath>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace ctgui
{
    constexpr double pi = 3.14159265358979323846;

    class TGUI_API CanvasCSFMLGraphics : public tgui::CanvasBase
    {
    public:

        using Ptr = std::shared_ptr<CanvasCSFMLGraphics>; //!< Shared widget pointer
        using ConstPtr = std::shared_ptr<const CanvasCSFMLGraphics>; //!< Shared constant widget pointer

        static constexpr const char StaticWidgetType[] = "CanvasCSFML"; //!< Type name of the widget

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @internal
        /// @brief Constructor
        /// @param typeName     Type of the widget
        /// @param initRenderer Should the renderer be initialized? Should be true unless a derived class initializes it.
        /// @see create
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        CanvasCSFMLGraphics(const char* typeName = StaticWidgetType, bool initRenderer = true) :
            tgui::CanvasBase{typeName, initRenderer},
#if CTGUI_USE_CSFML_VERSION >= 3
            m_renderTexture{sfRenderTexture_create(sfVector2u{1, 1}, nullptr)}
#else
            m_renderTexture{sfRenderTexture_create(1, 1, sfFalse)}
#endif
        {
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Copy constructor
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        CanvasCSFMLGraphics(const CanvasCSFMLGraphics& copy) :
            tgui::CanvasBase{copy},
#if CTGUI_USE_CSFML_VERSION >= 3
            m_renderTexture{sfRenderTexture_create(sfVector2u{1, 1}, nullptr)},
#else
            m_renderTexture{sfRenderTexture_create(1, 1, sfFalse)},
#endif
            m_customView{copy.m_customView ? sfView_copy(copy.m_customView) : nullptr},
            m_smooth{copy.m_smooth}
        {
            setSize(copy.getSize());
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Move constructor
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        CanvasCSFMLGraphics(CanvasCSFMLGraphics&& copy) noexcept :
            tgui::CanvasBase{std::move(copy)},
            m_renderTexture{copy.m_renderTexture},
            m_customView{copy.m_customView},
            m_smooth{copy.m_smooth}
        {
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Overload of copy assignment operator
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        CanvasCSFMLGraphics& operator= (const CanvasCSFMLGraphics& right)
        {
            if (this != &right)
            {
                tgui::CanvasBase::operator=(right);
                m_customView = right.m_customView ? sfView_copy(right.m_customView) : nullptr;
                m_smooth = right.m_smooth;

                setSize(right.getSize());
            }

            return *this;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Overload of move assignment operator
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        CanvasCSFMLGraphics& operator= (CanvasCSFMLGraphics&& right) noexcept
        {
            if (this != &right)
            {
                tgui::CanvasBase::operator=(std::move(right));
                m_renderTexture = right.m_renderTexture;
                m_customView = right.m_customView;
                m_smooth = right.m_smooth;
            }

            return *this;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new canvas widget
        ///
        /// @param size  Size of the canvas
        ///
        /// @return The new canvas
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TGUI_NODISCARD static CanvasCSFMLGraphics::Ptr create(const tgui::Layout2d& size = {"100%", "100%"})
        {
            auto canvas = std::make_shared<CanvasCSFMLGraphics>();
            canvas->setSize(size);
            return canvas;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Makes a copy of another canvas
        ///
        /// @param canvas  The other canvas
        ///
        /// @return The new canvas
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TGUI_NODISCARD static CanvasCSFMLGraphics::Ptr copy(const ConstPtr& canvas)
        {
            if (canvas)
                return std::static_pointer_cast<CanvasCSFMLGraphics>(canvas->clone());
            else
                return nullptr;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the size of the widget
        ///
        /// @param size  The new size of the widget
        ///
        /// @warning The contents of the canvas needs to be repainted (using clear, draw and display functions) after a resize.
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setSize(const tgui::Layout2d& size) override
        {
            tgui::CanvasBase::setSize(size);
            const tgui::Vector2f newSize = getSize();

            if ((newSize.x > 0) && (newSize.y > 0))
            {
                const tgui::Vector2u newTextureSize{newSize};
                const sfVector2u oldSize = sfRenderTexture_getSize(m_renderTexture);
                if ((oldSize.x != newTextureSize.x) || (oldSize.y != newTextureSize.y))
                {
                    sfRenderTexture_destroy(m_renderTexture);
#if CTGUI_USE_CSFML_VERSION >= 3
                    m_renderTexture = sfRenderTexture_create(sfVector2u{newTextureSize.x, newTextureSize.y}, nullptr);
#else
                    m_renderTexture = sfRenderTexture_create(newTextureSize.x, newTextureSize.y, sfFalse);
#endif
                    if (m_smooth)
                        sfRenderTexture_setSmooth(m_renderTexture, m_smooth);
                }
            }

            if (m_customView)
                sfRenderTexture_setView(m_renderTexture, m_customView);
        }
        using Widget::setSize;

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Change the current active view
        ///
        /// @param view  New view to use
        ///
        /// The view is like a 2D camera, it controls which part of the 2D scene is visible, and how it is viewed in the canvas.
        /// The new view will affect everything that is drawn, until another view is set.
        /// The canvas keeps its own copy of the view, so it is not necessary to keep the original one alive after calling
        /// this function.
        ///
        /// The view set by this function will remain active even after the canvas is resized.
        /// To restore the original view of the target, you can call the resetView() function.
        ///
        /// @see resetView
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setView(const sfView* view)
        {
            if (m_customView)
                sfView_destroy(m_customView);
            m_customView = sfView_copy(view);
            sfRenderTexture_setView(m_renderTexture, view);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Get the view currently in use in the canvas
        ///
        /// @return The view object that is currently used
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TGUI_NODISCARD const sfView* getView() const
        {
            return sfRenderTexture_getView(m_renderTexture);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Changes the current active view back to the default value
        ///
        /// The default view will automatically change when the canvas is resized to keep the view and canvas size the same.
        /// If you want to set a fixed view that doesn't change on resize then you should call the setView function.
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void resetView()
        {
            if (m_customView)
            {
                sfView_destroy(m_customView);
                m_customView = nullptr;
            }
            sfRenderTexture_setView(m_renderTexture, getDefaultView());
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Get the default view of the canvas
        ///
        /// The default view has the same size as the canvas.
        ///
        /// @return The default view of the canvas
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TGUI_NODISCARD const sfView* getDefaultView() const
        {
            return sfRenderTexture_getDefaultView(m_renderTexture);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Get the viewport of the currently applied view, applied to this canvas
        ///
        /// The viewport is defined in the view as a ratio, this function simply applies this ratio to the current dimensions
        /// of the canvas to calculate the pixels rectangle that the viewport actually covers in the canvas.
        ///
        /// @return Viewport rectangle, expressed in pixels
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TGUI_NODISCARD tguiIntRect getViewport() const
        {
            const sfIntRect rect = sfRenderTexture_getViewport(m_renderTexture, sfRenderTexture_getView(m_renderTexture));
#if CTGUI_USE_CSFML_VERSION >= 3
            return {rect.position.x, rect.position.y, rect.size.x, rect.size.y};
#else
            return {rect.left, rect.top, rect.width, rect.height};
#endif
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Converts a point on the canvas to a position within the canvas view
        /// @param point  coordinate of point on top of the canvas
        /// @return The converted point, in "world" coordinates
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TGUI_NODISCARD tguiVector2f mapPixelToCoords(tguiVector2f point) const
        {
            const tgui::Vector2f size = getSize();
            const sfView* view = sfRenderTexture_getView(m_renderTexture);
            const sfFloatRect viewport = sfView_getViewport(view);
            const sfVector2f viewCenter = sfView_getCenter(view);
            const sfVector2f viewSize = sfView_getSize(view);

            const float angle  = sfView_getRotation(view) / 180.f * static_cast<float>(pi);
            const float cosine = std::cos(angle);
            const float sine   = std::sin(angle);
            const float tx     = -viewCenter.x * cosine - viewCenter.y * sine + viewCenter.x;
            const float ty     = viewCenter.x * sine - viewCenter.y * cosine + viewCenter.y;

            const float a = 2.f / viewSize.x;
            const float b = -2.f / viewSize.y;
            const float c = -a * viewCenter.x;
            const float d = -b * viewCenter.y;

            sfTransform transform = sfTransform_fromMatrix(
                a * cosine, a * sine,   a * tx + c,
                -b * sine,  b * cosine, b * ty + d,
                0.f,        0.f,        1.f);

            sfTransform inverseTransform = sfTransform_getInverse(&transform);

#if CTGUI_USE_CSFML_VERSION >= 3
            const sfVector2f normalized = {
                -1 + (2 * (point.x - (viewport.position.x * size.x)) / (viewport.size.x * size.x)),
                1 + (-2 * (point.y - (viewport.position.y * size.y)) / (viewport.size.y * size.y))
            };
#else
            const sfVector2f normalized = {
                -1 + (2 * (point.x - (viewport.left * size.x)) / (viewport.width * size.x)),
                1 + (-2 * (point.y - (viewport.top * size.y)) / (viewport.height * size.y))
            };
#endif

            const sfVector2f coord = sfTransform_transformPoint(&inverseTransform, normalized);
            return {coord.x, coord.y};
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Converts a position within the canvas view to the corresponding point on the canvas
        /// @param coord  position within the canvas view
        /// @return The converted point, relative to the canvas position
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TGUI_NODISCARD tguiVector2f mapCoordsToPixel(tguiVector2f coord) const
        {
            const tgui::Vector2f size = getSize();
            const sfView* view = sfRenderTexture_getView(m_renderTexture);
            const sfFloatRect viewport = sfView_getViewport(view);
            const sfVector2f viewCenter = sfView_getCenter(view);
            const sfVector2f viewSize = sfView_getSize(view);

            const float angle  = sfView_getRotation(view) / 180.f * static_cast<float>(pi);
            const float cosine = std::cos(angle);
            const float sine   = std::sin(angle);
            const float tx     = -viewCenter.x * cosine - viewCenter.y * sine + viewCenter.x;
            const float ty     = viewCenter.x * sine - viewCenter.y * cosine + viewCenter.y;

            const float a = 2.f / viewSize.x;
            const float b = -2.f / viewSize.y;
            const float c = -a * viewCenter.x;
            const float d = -b * viewCenter.y;

            sfTransform transform = sfTransform_fromMatrix(
                a * cosine, a * sine,   a * tx + c,
                -b * sine,  b * cosine, b * ty + d,
                0.f,        0.f,        1.f);

            const sfVector2f normalized = sfTransform_transformPoint(&transform, {coord.x, coord.y});

#if CTGUI_USE_CSFML_VERSION >= 3
            return {(normalized.x + 1) / 2 * (viewport.size.x * size.x) + (viewport.position.x * size.x),
                    (-normalized.y + 1) / 2 * (viewport.size.y * size.y) + (viewport.position.y * size.y)};
#else
            return {(normalized.x + 1) / 2 * (viewport.width * size.x) + (viewport.left * size.x),
                    (-normalized.y + 1) / 2 * (viewport.height * size.y) + (viewport.top * size.y)};
#endif
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Enable or disable texture smoothing
        ///
        /// This parameter is disabled by default.
        ///
        /// @param smooth `true` to enable smoothing, `false` to disable it
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void setSmooth(tguiBool smooth)
        {
            m_smooth = smooth;
            sfRenderTexture_setSmooth(m_renderTexture, smooth);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Tell whether the smooth filtering is enabled or not
        ///
        /// @return `true` if texture smoothing is enabled
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TGUI_NODISCARD tguiBool isSmooth() const
        {
            return sfRenderTexture_isSmooth(m_renderTexture);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Clears the entire canvas with a single color
        ///
        /// This function is usually called once every frame, to clear the previous contents of the canvas.
        ///
        /// @param color Fill color to use to clear the canvas
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void clear(tguiColor color)
        {
            sfRenderTexture_clear(m_renderTexture, {color.r, color.g, color.b, color.a});
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Draws a drawable object to the canvas
        ///
        /// @param object  Object to draw
        /// @param states  Render states to use for drawing
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void draw(const sfSprite* object, const sfRenderStates* states)
        {
            sfRenderTexture_drawSprite(m_renderTexture, object, states);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Draws a drawable object to the canvas
        ///
        /// @param object  Object to draw
        /// @param states  Render states to use for drawing
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void draw(const sfText* object, const sfRenderStates* states)
        {
            sfRenderTexture_drawText(m_renderTexture, object, states);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Draws a drawable object to the canvas
        ///
        /// @param object  Object to draw
        /// @param states  Render states to use for drawing
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void draw(const sfShape* object, const sfRenderStates* states)
        {
            sfRenderTexture_drawShape(m_renderTexture, object, states);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Draws a drawable object to the canvas
        ///
        /// @param object  Object to draw
        /// @param states  Render states to use for drawing
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void draw(const sfCircleShape* object, const sfRenderStates* states)
        {
            sfRenderTexture_drawCircleShape(m_renderTexture, object, states);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Draws a drawable object to the canvas
        ///
        /// @param object  Object to draw
        /// @param states  Render states to use for drawing
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void draw(const sfConvexShape* object, const sfRenderStates* states)
        {
            sfRenderTexture_drawConvexShape(m_renderTexture, object, states);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Draws a drawable object to the canvas
        ///
        /// @param object  Object to draw
        /// @param states  Render states to use for drawing
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void draw(const sfRectangleShape* object, const sfRenderStates* states)
        {
            sfRenderTexture_drawRectangleShape(m_renderTexture, object, states);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Draws a drawable object to the canvas
        ///
        /// @param object  Object to draw
        /// @param states  Render states to use for drawing
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void draw(const sfVertexArray* object, const sfRenderStates* states)
        {
            sfRenderTexture_drawVertexArray(m_renderTexture, object, states);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Draws a drawable object to the canvas
        ///
        /// @param object  Object to draw
        /// @param states  Render states to use for drawing
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void draw(const sfVertexBuffer* object, const sfRenderStates* states)
        {
            sfRenderTexture_drawVertexBuffer(m_renderTexture, object, states);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Draws a drawable object to the canvas
        ///
        /// @param object  Object to draw
        /// @param states  Render states to use for drawing
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void draw(const sfVertex* vertices, size_t vertexCount, sfPrimitiveType type, const sfRenderStates* states)
        {
            sfRenderTexture_drawPrimitives(m_renderTexture, vertices, vertexCount, type, states);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Updates the contents of the canvas
        ///
        /// @warning Calling this function is mandatory at the end of rendering.
        ///          Not calling it may leave the texture in an undefined state.
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void display()
        {
            sfRenderTexture_display(m_renderTexture);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Draw the widget to a render target
        ///
        /// @param target Render target to draw to
        /// @param states Current render states
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        void draw(tgui::BackendRenderTarget& target, tgui::RenderStates states) const override
        {
            TGUI_ASSERT(dynamic_cast<ctgui::BackendRenderTargetCSFMLGraphics*>(&target), "CanvasCSFMLGraphics requires a render target of type BackendRenderTargetCSFMLGraphics");

            const tgui::Vector2f size = getSize();
            const sfTexture* texture = sfRenderTexture_getTexture(m_renderTexture);
            const sfVector2u textureSize2u = sfRenderTexture_getSize(m_renderTexture);
            const sfVector2f textureSize = {static_cast<float>(textureSize2u.x), static_cast<float>(textureSize2u.y)};
            if ((size.x <= 0) || (size.y <= 0) || (textureSize.x == 0) || (textureSize.y == 0))
                return;

            const std::array<float, 16>& transformMatrix = states.transform.getMatrix();
            const tgui::Vertex::Color vertexColor(tgui::Color::applyOpacity(tgui::Color::White, m_opacityCached));

#if CTGUI_USE_CSFML_VERSION >= 3
            sfRenderStates statesSFML = sfRenderStates_default;
            statesSFML.coordinateType = sfCoordinateTypeNormalized;
#else
            sfRenderStates statesSFML = sfRenderStates_default();
#endif
            statesSFML.texture = texture;
            statesSFML.transform = sfTransform_fromMatrix(
                transformMatrix[0], transformMatrix[4], transformMatrix[12],
                transformMatrix[1], transformMatrix[5], transformMatrix[13],
                transformMatrix[3], transformMatrix[7], transformMatrix[15]);

            // We use textureSize instead of size for the vertices coordinates to keep rendering stable when the size is changing and
            // the width and height aren't integer values.
            const sfColor vertexColorSFML{vertexColor.red, vertexColor.green, vertexColor.blue, vertexColor.alpha};
            const std::array<sfVertex, 6> verticesSFML = {{
#if CTGUI_USE_CSFML_VERSION >= 3
                {{0, 0}, vertexColorSFML, {0, 0}},
                {{0, textureSize.y}, vertexColorSFML, {0, 1}},
                {{textureSize.x, 0}, vertexColorSFML, {1, 0}},
                {{textureSize.x, 0}, vertexColorSFML, {1, 0}},
                {{0, textureSize.y}, vertexColorSFML, {0, 1}},
                {{textureSize.x, textureSize.y}, vertexColorSFML, {1, 1}},
#else
                {{0, 0}, vertexColorSFML, {0, 0}},
                {{0, textureSize.y}, vertexColorSFML, {0, textureSize.y}},
                {{textureSize.x, 0}, vertexColorSFML, {textureSize.x, 0}},
                {{textureSize.x, 0}, vertexColorSFML, {textureSize.x, 0}},
                {{0, textureSize.y}, vertexColorSFML, {0, textureSize.y}},
                {{textureSize.x, textureSize.y}, vertexColorSFML, {textureSize.x, textureSize.y}},
#endif
            }};

            sfRenderWindow_drawPrimitives(static_cast<ctgui::BackendRenderTargetCSFMLGraphics&>(target).getTarget(), verticesSFML.data(), verticesSFML.size(), sfTriangles, &statesSFML);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Access the internal render texture that the canvas widget uses to draw on
        ///
        /// @return Reference to the internal render texture
        ///
        /// @warning You are not allowed to change the size or view of the returned render texture.
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TGUI_NODISCARD const sfRenderTexture* getRenderTexture()
        {
            return m_renderTexture;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    protected:

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Makes a copy of the widget
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        TGUI_NODISCARD tgui::Widget::Ptr clone() const override
        {
            return std::make_shared<CanvasCSFMLGraphics>(*this);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    protected:

        sfRenderTexture* m_renderTexture = nullptr;
        sfView* m_customView = nullptr;
        bool m_smooth = false;
    };
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiCanvasCSFML_create(void)
{
    return ctgui::addWidgetRef(ctgui::CanvasCSFMLGraphics::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiCanvasCSFML_setView(tguiWidget* thisCanvas, const sfView* view)
{
    std::static_pointer_cast<ctgui::CanvasCSFMLGraphics>(thisCanvas->This)->setView(view);
}

const sfView* tguiCanvasCSFML_getView(const tguiWidget* thisCanvas) // Returned pointer must be freed with sfView_destroy
{
    return std::static_pointer_cast<ctgui::CanvasCSFMLGraphics>(thisCanvas->This)->getView();
}

void tguiCanvasCSFML_resetView(tguiWidget* thisCanvas)
{
    std::static_pointer_cast<ctgui::CanvasCSFMLGraphics>(thisCanvas->This)->resetView();
}

const sfView* tguiCanvasCSFML_getDefaultView(const tguiWidget* thisCanvas) // Returned pointer must be freed with sfView_destroy
{
    return std::static_pointer_cast<ctgui::CanvasCSFMLGraphics>(thisCanvas->This)->getDefaultView();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiCanvasCSFML_mapPixelToCoords(const tguiWidget* thisCanvas, tguiVector2f pixel)
{
    return std::static_pointer_cast<ctgui::CanvasCSFMLGraphics>(thisCanvas->This)->mapPixelToCoords(pixel);
}

tguiVector2f tguiCanvasCSFML_mapCoordsToPixel(const tguiWidget* thisCanvas, tguiVector2f coord)
{
    return std::static_pointer_cast<ctgui::CanvasCSFMLGraphics>(thisCanvas->This)->mapCoordsToPixel(coord);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiCanvasCSFML_setSmooth(tguiWidget* thisCanvas, tguiBool smooth)
{
    std::static_pointer_cast<ctgui::CanvasCSFMLGraphics>(thisCanvas->This)->setSmooth(smooth);
}

tguiBool tguiCanvasCSFML_isSmooth(const tguiWidget* thisCanvas)
{
    return std::static_pointer_cast<ctgui::CanvasCSFMLGraphics>(thisCanvas->This)->isSmooth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiCanvasCSFML_clear(tguiWidget* thisCanvas, tguiColor color)
{
    std::static_pointer_cast<ctgui::CanvasCSFMLGraphics>(thisCanvas->This)->clear(color);
}

void tguiCanvasCSFML_display(tguiWidget* thisCanvas)
{
    std::static_pointer_cast<ctgui::CanvasCSFMLGraphics>(thisCanvas->This)->display();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiCanvasCSFML_drawSprite(tguiWidget* thisCanvas, const sfSprite* object, const sfRenderStates* states)
{
    std::static_pointer_cast<ctgui::CanvasCSFMLGraphics>(thisCanvas->This)->draw(object, states);
}

void tguiCanvasCSFML_drawText(tguiWidget* thisCanvas, const sfText* object, const sfRenderStates* states)
{
    std::static_pointer_cast<ctgui::CanvasCSFMLGraphics>(thisCanvas->This)->draw(object, states);
}

void tguiCanvasCSFML_drawShape(tguiWidget* thisCanvas, const sfShape* object, const sfRenderStates* states)
{
    std::static_pointer_cast<ctgui::CanvasCSFMLGraphics>(thisCanvas->This)->draw(object, states);
}

void tguiCanvasCSFML_drawCircleShape(tguiWidget* thisCanvas, const sfCircleShape* object, const sfRenderStates* states)
{
    std::static_pointer_cast<ctgui::CanvasCSFMLGraphics>(thisCanvas->This)->draw(object, states);
}

void tguiCanvasCSFML_drawConvexShape(tguiWidget* thisCanvas, const sfConvexShape* object, const sfRenderStates* states)
{
    std::static_pointer_cast<ctgui::CanvasCSFMLGraphics>(thisCanvas->This)->draw(object, states);
}

void tguiCanvasCSFML_drawRectangleShape(tguiWidget* thisCanvas, const sfRectangleShape* object, const sfRenderStates* states)
{
    std::static_pointer_cast<ctgui::CanvasCSFMLGraphics>(thisCanvas->This)->draw(object, states);
}

void tguiCanvasCSFML_drawVertexArray(tguiWidget* thisCanvas, const sfVertexArray* object, const sfRenderStates* states)
{
    std::static_pointer_cast<ctgui::CanvasCSFMLGraphics>(thisCanvas->This)->draw(object, states);
}

void tguiCanvasCSFML_drawVertexBuffer(tguiWidget* thisCanvas, const sfVertexBuffer* object, const sfRenderStates* states)
{
    std::static_pointer_cast<ctgui::CanvasCSFMLGraphics>(thisCanvas->This)->draw(object, states);
}

void tguiCanvasCSFML_drawPrimitives(tguiWidget* thisCanvas,
                                    const sfVertex* vertices, size_t vertexCount,
                                    sfPrimitiveType type, const sfRenderStates* states)
{
    std::static_pointer_cast<ctgui::CanvasCSFMLGraphics>(thisCanvas->This)->draw(vertices, vertexCount, type, states);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // CTGUI_CANVAS_CSFML_GRAPHICS_H
