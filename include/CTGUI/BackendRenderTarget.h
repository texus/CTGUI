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


#ifndef CTGUI_BACKEND_RENDER_TARGET_H
#define CTGUI_BACKEND_RENDER_TARGET_H

#include <CTGUI/RenderStates.h>
#include <CTGUI/BackendRenderTarget.h>
#include <CTGUI/Vertex.h>

CTGUI_API void tguiBackendRenderTarget_drawWidget(tguiBackendRenderTarget* target, const tguiRenderStates* states, tguiWidget* widget);

CTGUI_API void tguiBackendRenderTarget_addClippingLayer(tguiBackendRenderTarget* target, const tguiRenderStates* states, tguiFloatRect rect);
CTGUI_API void tguiBackendRenderTarget_removeClippingLayer(tguiBackendRenderTarget* target);

CTGUI_API void tguiBackendRenderTarget_drawBorders(tguiBackendRenderTarget* target, const tguiRenderStates* states, const tguiOutline* borders, tguiVector2f size, const tguiColor* color);
CTGUI_API void tguiBackendRenderTarget_drawFilledRect(tguiBackendRenderTarget* target, const tguiRenderStates* states, tguiVector2f size, const tguiColor* color);

CTGUI_API void tguiBackendRenderTarget_drawSprite(tguiBackendRenderTarget* target, const tguiRenderStates* states, const tguiSprite* sprite);
CTGUI_API void tguiBackendRenderTarget_drawText(tguiBackendRenderTarget* target, const tguiRenderStates* states, const tguiText* text);
CTGUI_API void tguiBackendRenderTarget_drawTriangle(tguiBackendRenderTarget* target, const tguiRenderStates* states, tguiVertex point1, tguiVertex point2, tguiVertex point3);
CTGUI_API void tguiBackendRenderTarget_drawCircle(tguiBackendRenderTarget* target, const tguiRenderStates* states, float size, const tguiColor* backgroundColor, float borderThickness, const tguiColor* borderColor);
CTGUI_API void tguiBackendRenderTarget_drawRoundedRectangle(tguiBackendRenderTarget* target, const tguiRenderStates* states, tguiVector2f size, const tguiColor* backgroundColor, float radius, const tguiOutline* borders, const tguiColor* borderColor);
CTGUI_API void tguiBackendRenderTarget_drawVertexArray(tguiBackendRenderTarget* target, const tguiRenderStates* states, const tguiVertex* vertices, size_t vertexCount, const unsigned int* indices, size_t indexCount);

#endif // CTGUI_BACKEND_RENDER_TARGET_H

