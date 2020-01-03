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


#include <CTGUI/Widgets/Canvas.h>
#include <CTGUI/WidgetStruct.h>
#include <CTGUI/SFML/Graphics/TextStruct.h>
#include <CTGUI/SFML/Graphics/ShapeStruct.h>
#include <CTGUI/SFML/Graphics/SpriteStruct.h>
#include <CTGUI/SFML/Graphics/VertexArrayStruct.h>
#include <CTGUI/SFML/Graphics/ConvertRenderStates.hpp>

#include <TGUI/Widgets/Canvas.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::Canvas>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiCanvas_create(void)
{
    return new tguiWidget(tgui::Canvas::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiCanvas_clear(tguiWidget* widget, sfColor color)
{
    DOWNCAST(widget->This)->clear({color.r, color.g, color.b, color.a});
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiCanvas_drawSprite(tguiWidget* widget, const sfSprite* drawable, const sfRenderStates* states)
{
    DOWNCAST(widget->This)->draw(drawable->This, convertRenderStates(states));
}

void tguiCanvas_drawText(tguiWidget* widget, const sfText* drawable, const sfRenderStates* states)
{
    DOWNCAST(widget->This)->draw(drawable->This, convertRenderStates(states));
}

void tguiCanvas_drawShape(tguiWidget* widget, const sfShape* drawable, const sfRenderStates* states)
{
    DOWNCAST(widget->This)->draw(drawable->This, convertRenderStates(states));
}

void tguiCanvas_drawVertexArray(tguiWidget* widget, const sfVertexArray* drawable, const sfRenderStates* states)
{
    DOWNCAST(widget->This)->draw(drawable->This, convertRenderStates(states));
}

void tguiCanvas_drawPrimitives(tguiWidget* widget, const sfVertex* vertices, size_t vertexCount, sfPrimitiveType type, const sfRenderStates* states)
{
    DOWNCAST(widget->This)->draw(reinterpret_cast<const sf::Vertex*>(vertices),
                                 vertexCount,
                                 static_cast<sf::PrimitiveType>(type),
                                 convertRenderStates(states));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiCanvas_display(tguiWidget* widget)
{
    DOWNCAST(widget->This)->display();
}
