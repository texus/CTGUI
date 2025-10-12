/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2025 Bruno Van de Velde (vdv_b@tgui.eu)
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

#ifndef CTGUI_GUI_CSFML_GRAPHICS_H
#define CTGUI_GUI_CSFML_GRAPHICS_H

#include <CTGUI/Global.h>
#include <CTGUI/Gui.h>

#if !CTGUI_HAS_BACKEND_CSFML_GRAPHICS
    #error "CTGUI wasn't build with the CSFML_GRAPHICS backend"
#endif

#if CTGUI_USE_CSFML_VERSION >= 3
    #include <CSFML/Graphics.h>
#elif CTGUI_USE_CSFML_VERSION == 2
    #include <SFML/Graphics.h>
#else
    #error "CTGUI_USE_CSFML_VERSION wasn't set correctly"
#endif

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiGui* tguiGuiCSFMLGraphics_create(sfRenderWindow* window);
CTGUI_API void tguiGuiCSFMLGraphics_destroy(tguiGui* thisGui);

CTGUI_API tguiBool tguiGuiCSFMLGraphics_handleEvent(tguiGui* thisGui, const sfEvent* event);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiWidget* tguiCanvasCSFML_create(void);

CTGUI_API void tguiCanvasCSFML_setView(tguiWidget* thisCanvas, const sfView* view);
CTGUI_API const sfView* tguiCanvasCSFML_getView(const tguiWidget* thisCanvas); // Returned pointer must be freed with sfView_destroy
CTGUI_API void tguiCanvasCSFML_resetView(tguiWidget* thisCanvas);
CTGUI_API const sfView* tguiCanvasCSFML_getDefaultView(const tguiWidget* thisCanvas); // Returned pointer must be freed with sfView_destroy

CTGUI_API tguiVector2f tguiCanvasCSFML_mapPixelToCoords(const tguiWidget* thisCanvas, tguiVector2f pixel);
CTGUI_API tguiVector2f tguiCanvasCSFML_mapCoordsToPixel(const tguiWidget* thisCanvas, tguiVector2f coord);

CTGUI_API void tguiCanvasCSFML_setSmooth(tguiWidget* thisCanvas, tguiBool smooth);
CTGUI_API tguiBool tguiCanvasCSFML_isSmooth(const tguiWidget* thisCanvas);

CTGUI_API void tguiCanvasCSFML_clear(tguiWidget* thisCanvas, tguiColor color);
CTGUI_API void tguiCanvasCSFML_display(tguiWidget* thisCanvas);

CTGUI_API void tguiCanvasCSFML_drawSprite(tguiWidget* thisCanvas, const sfSprite* object, const sfRenderStates* states);
CTGUI_API void tguiCanvasCSFML_drawText(tguiWidget* thisCanvas, const sfText* object, const sfRenderStates* states);
CTGUI_API void tguiCanvasCSFML_drawShape(tguiWidget* thisCanvas, const sfShape* object, const sfRenderStates* states);
CTGUI_API void tguiCanvasCSFML_drawCircleShape(tguiWidget* thisCanvas, const sfCircleShape* object, const sfRenderStates* states);
CTGUI_API void tguiCanvasCSFML_drawConvexShape(tguiWidget* thisCanvas, const sfConvexShape* object, const sfRenderStates* states);
CTGUI_API void tguiCanvasCSFML_drawRectangleShape(tguiWidget* thisCanvas, const sfRectangleShape* object, const sfRenderStates* states);
CTGUI_API void tguiCanvasCSFML_drawVertexArray(tguiWidget* thisCanvas, const sfVertexArray* object, const sfRenderStates* states);
CTGUI_API void tguiCanvasCSFML_drawVertexBuffer(tguiWidget* thisCanvas, const sfVertexBuffer* object, const sfRenderStates* states);
CTGUI_API void tguiCanvasCSFML_drawVertexBufferRange(tguiWidget* thisCanvas,
                                                              const sfVertexBuffer* object, size_t firstVertex,
                                                              size_t vertexCount, const sfRenderStates* states);
CTGUI_API void tguiCanvasCSFML_drawPrimitives(tguiWidget* thisCanvas,
                                                       const sfVertex* vertices, size_t vertexCount,
                                                       sfPrimitiveType type, const sfRenderStates* states);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // CTGUI_GUI_CSFML_GRAPHICS_H
