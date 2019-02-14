/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2019 Bruno Van de Velde (vdv_b@tgui.eu)
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


#include <CTGUI/Renderers/MessageBoxRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/RendererDataStruct.h>
#include <CTGUI/ColorConverter.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

#include <TGUI/Renderers/MessageBoxRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::MessageBoxRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiMessageBoxRenderer_create(void)
{
    return new tguiRenderer(new tgui::MessageBoxRenderer);
}

tguiRenderer* tguiMessageBoxRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::MessageBoxRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMessageBoxRenderer_setTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiMessageBoxRenderer_getTextColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMessageBoxRenderer_setButton(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setButton(rendererData->This);
}

tguiRendererData* tguiMessageBoxRenderer_getButton(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getButton());
}
