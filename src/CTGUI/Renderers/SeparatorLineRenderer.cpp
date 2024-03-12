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


#include <CTGUI/Renderers/SeparatorLineRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>

#include <TGUI/Renderers/SeparatorLineRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::SeparatorLineRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiSeparatorLineRenderer_create(void)
{
    return new tguiRenderer(new tgui::SeparatorLineRenderer);
}

tguiRenderer* tguiSeparatorLineRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::SeparatorLineRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSeparatorLineRenderer_setColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setColor(ctgui::toCppColor(color));
}

tguiColor* tguiSeparatorLineRenderer_getColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getColor());
}
