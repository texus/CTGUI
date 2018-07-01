/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2018 Bruno Van de Velde (vdv_b@tgui.eu)
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


#include <CTGUI/Renderers/ScrollablePanelRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/RendererDataStruct.h>
#include <CTGUI/OutlineStruct.h>
#include <CTGUI/ColorConverter.h>

#include <TGUI/Renderers/ScrollablePanelRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ScrollablePanelRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiScrollablePanelRenderer_create(void)
{
    return new tguiRenderer(new tgui::ScrollablePanelRenderer);
}

tguiRenderer* tguiScrollablePanelRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::ScrollablePanelRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanelRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setScrollbar(rendererData->This);
}

tguiRendererData* tguiScrollablePanelRenderer_getScrollbar(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getScrollbar());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanelRenderer_setScrollbarWidth(tguiRenderer* renderer, float width)
{
    DOWNCAST(renderer->This)->setScrollbarWidth(width);
}

float tguiScrollablePanelRenderer_getScrollbarWidth(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getScrollbarWidth();
}
