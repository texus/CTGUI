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


#include <CTGUI/BackendRenderTarget.h>
#include <CTGUI/BackendRenderTargetStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/WidgetStruct.hpp>
#include <CTGUI/SpriteStruct.hpp>
#include <CTGUI/TextStruct.hpp>
#include <CTGUI/InternalGlobal.hpp>
#include <TGUI/RenderStates.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static tgui::RenderStates convertRenderStates(const tguiRenderStates* cStates)
{
    tgui::RenderStates cppStates;
    cppStates.transform = tgui::Transform({
        cStates->transform.matrix[0], cStates->transform.matrix[1], cStates->transform.matrix[2], cStates->transform.matrix[3],
        cStates->transform.matrix[4], cStates->transform.matrix[5], cStates->transform.matrix[6], cStates->transform.matrix[7],
        cStates->transform.matrix[8], cStates->transform.matrix[9], cStates->transform.matrix[10], cStates->transform.matrix[11],
        cStates->transform.matrix[12], cStates->transform.matrix[13], cStates->transform.matrix[14], cStates->transform.matrix[15]
    });
    return cppStates;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiBackendRenderTarget_drawWidget(tguiBackendRenderTarget* target, const tguiRenderStates* states, tguiWidget* widget)
{
    target->This->drawWidget(convertRenderStates(states), widget->This);
}

void tguiBackendRenderTarget_addClippingLayer(tguiBackendRenderTarget* target, const tguiRenderStates* states, tguiFloatRect rect)
{
    target->This->addClippingLayer(convertRenderStates(states), {rect.left, rect.top, rect.width, rect.height});
}

void tguiBackendRenderTarget_removeClippingLayer(tguiBackendRenderTarget* target)
{
    target->This->removeClippingLayer();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiBackendRenderTarget_drawSprite(tguiBackendRenderTarget* target, const tguiRenderStates* states, const tguiSprite* sprite)
{
    target->This->drawSprite(convertRenderStates(states), sprite->This);
}

void tguiBackendRenderTarget_drawText(tguiBackendRenderTarget* target, const tguiRenderStates* states, const tguiText* text)
{
    target->This->drawText(convertRenderStates(states), text->This);
}

void tguiBackendRenderTarget_drawTriangle(tguiBackendRenderTarget* target, const tguiRenderStates* states, tguiVertex point1, tguiVertex point2, tguiVertex point3)
{
    target->This->drawTriangle(convertRenderStates(states), {{point1.position.x, point1.position.y}, {point1.color.r, point1.color.g, point1.color.b, point1.color.a}, {point1.texCoords.x, point1.texCoords.y}},
                                                            {{point2.position.x, point2.position.y}, {point2.color.r, point2.color.g, point2.color.b, point2.color.a}, {point2.texCoords.x, point2.texCoords.y}},
                                                            {{point3.position.x, point3.position.y}, {point3.color.r, point3.color.g, point3.color.b, point3.color.a}, {point3.texCoords.x, point3.texCoords.y}});
}

void tguiBackendRenderTarget_drawBorders(tguiBackendRenderTarget* target, const tguiRenderStates* states, const tguiOutline* borders, tguiVector2f size, const tguiColor* color)
{
    target->This->drawBorders(convertRenderStates(states), borders->This, {size.x, size.y}, ctgui::toCppColor(color));
}

void tguiBackendRenderTarget_drawFilledRect(tguiBackendRenderTarget* target, const tguiRenderStates* states, tguiVector2f size, const tguiColor* color)
{
    target->This->drawFilledRect(convertRenderStates(states), {size.x, size.y}, ctgui::toCppColor(color));
}

void tguiBackendRenderTarget_drawCircle(tguiBackendRenderTarget* target, const tguiRenderStates* states, float size, const tguiColor* backgroundColor, float borderThickness, const tguiColor* borderColor)
{
    target->This->drawCircle(convertRenderStates(states), size, ctgui::toCppColor(backgroundColor), borderThickness, ctgui::toCppColor(borderColor));
}

void tguiBackendRenderTarget_drawRoundedRectangle(tguiBackendRenderTarget* target, const tguiRenderStates* states, tguiVector2f size, const tguiColor* backgroundColor, float radius, const tguiOutline* borders, const tguiColor* borderColor)
{
    target->This->drawRoundedRectangle(convertRenderStates(states), {size.x, size.y}, ctgui::toCppColor(backgroundColor), radius, borders->This, ctgui::toCppColor(borderColor));
}

void tguiBackendRenderTarget_drawVertexArray(tguiBackendRenderTarget* target, const tguiRenderStates* states, const tguiVertex* vertices, size_t vertexCount, const unsigned int* indices, size_t indexCount)
{
    static_assert(sizeof(tguiVertex) == sizeof(tgui::Vertex), "Size of tguiVertex has to match with tgui::Vertex");
    target->This->drawVertexArray(convertRenderStates(states), reinterpret_cast<const tgui::Vertex*>(vertices), vertexCount, indices, indexCount, nullptr);
}
