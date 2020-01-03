/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2020 Bruno Van de Velde (vdv_b@tgui.eu)
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


#ifndef CTGUI_CANVAS_H
#define CTGUI_CANVAS_H

#include <CTGUI/Config.h>
#include <CTGUI/Widget.h>
#include <SFML/Graphics/Text.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Shape.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Vertex.h>
#include <SFML/Graphics/VertexArray.h>
#include <SFML/Graphics/RenderStates.h>
#include <SFML/Graphics/PrimitiveType.h>

CTGUI_API tguiWidget* tguiCanvas_create(void);

CTGUI_API void tguiCanvas_clear(tguiWidget* widget, sfColor color);

CTGUI_API void tguiCanvas_drawSprite(tguiWidget* widget, const sfSprite* drawable, const sfRenderStates* states);
CTGUI_API void tguiCanvas_drawText(tguiWidget* widget, const sfText* drawable, const sfRenderStates* states);
CTGUI_API void tguiCanvas_drawShape(tguiWidget* widget, const sfShape* drawable, const sfRenderStates* states);
CTGUI_API void tguiCanvas_drawVertexArray(tguiWidget* widget, const sfVertexArray* drawable, const sfRenderStates* states);
CTGUI_API void tguiCanvas_drawPrimitives(tguiWidget* widget, const sfVertex* vertices, size_t vertexCount, sfPrimitiveType type, const sfRenderStates* states);

CTGUI_API void tguiCanvas_display(tguiWidget* widget);

#endif // CTGUI_CANVAS_H

