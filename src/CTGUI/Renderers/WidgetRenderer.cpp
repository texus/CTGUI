/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2016 Bruno Van de Velde (vdv_b@tgui.eu)
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


#include <CTGUI/RendererDataStruct.h>
#include <CTGUI/Renderers/WidgetRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/SFML/Graphics/FontStruct.h>

#include <TGUI/Renderers/WidgetRenderer.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiWidgetRenderer_create(void)
{
    return new tguiRenderer(new tgui::WidgetRenderer);
}

tguiRenderer* tguiWidgetRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::WidgetRenderer(*renderer->This));
}

void tguiWidgetRenderer_destroy(tguiRenderer* renderer)
{
    if (renderer->AllocatedInWrapper)
        delete renderer->This;

    delete renderer;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setOpacity(tguiRenderer* renderer, float alpha)
{
    renderer->This->setOpacity(alpha);
}

float tguiWidgetRenderer_getOpacity(const tguiRenderer* renderer)
{
    return renderer->This->getOpacity();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setFont(tguiRenderer* renderer, sfFont* font)
{
    renderer->This->setFont(font->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRendererData* tguiWidgetRenderer_getData(const tguiRenderer* renderer)
{
    return new tguiRendererData(renderer->This->getData());
}
