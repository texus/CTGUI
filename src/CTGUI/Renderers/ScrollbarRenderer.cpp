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


#include <CTGUI/Renderers/ScrollbarRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>

#include <TGUI/Renderers/ScrollbarRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ScrollbarRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiScrollbarRenderer_create(void)
{
    return new tguiRenderer(new tgui::ScrollbarRenderer);
}

tguiRenderer* tguiScrollbarRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::ScrollbarRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setTrackColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTrackColor(ctgui::toCppColor(color));
}

tguiColor* tguiScrollbarRenderer_getTrackColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTrackColor());
}

void tguiScrollbarRenderer_setTrackColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTrackColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiScrollbarRenderer_getTrackColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTrackColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setThumbColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setThumbColor(ctgui::toCppColor(color));
}

tguiColor* tguiScrollbarRenderer_getThumbColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getThumbColor());
}

void tguiScrollbarRenderer_setThumbColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setThumbColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiScrollbarRenderer_getThumbColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getThumbColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setArrowBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setArrowBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiScrollbarRenderer_getArrowBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getArrowBackgroundColor());
}

void tguiScrollbarRenderer_setArrowBackgroundColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setArrowBackgroundColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiScrollbarRenderer_getArrowBackgroundColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getArrowBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setArrowColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setArrowColor(ctgui::toCppColor(color));
}

tguiColor* tguiScrollbarRenderer_getArrowColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getArrowColor());
}

void tguiScrollbarRenderer_setArrowColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setArrowColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiScrollbarRenderer_getArrowColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getArrowColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollbarRenderer_setTextureTrack(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureTrack(*texture->This);
}

tguiTexture* tguiScrollbarRenderer_getTextureTrack(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureTrack()));
}

void tguiScrollbarRenderer_setTextureTrackHover(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureTrackHover(*texture->This);
}

tguiTexture* tguiScrollbarRenderer_getTextureTrackHover(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureTrackHover()));
}

void tguiScrollbarRenderer_setTextureThumb(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureThumb(*texture->This);
}

tguiTexture* tguiScrollbarRenderer_getTextureThumb(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureThumb()));
}

void tguiScrollbarRenderer_setTextureThumbHover(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureThumbHover(*texture->This);
}

tguiTexture* tguiScrollbarRenderer_getTextureThumbHover(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureThumbHover()));
}

void tguiScrollbarRenderer_setTextureArrowUp(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowUp(*texture->This);
}

tguiTexture* tguiScrollbarRenderer_getTextureArrowUp(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureArrowUp()));
}

void tguiScrollbarRenderer_setTextureArrowUpHover(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowUpHover(*texture->This);
}

tguiTexture* tguiScrollbarRenderer_getTextureArrowUpHover(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureArrowUpHover()));
}

void tguiScrollbarRenderer_setTextureArrowDown(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowDown(*texture->This);
}

tguiTexture* tguiScrollbarRenderer_getTextureArrowDown(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureArrowDown()));
}

void tguiScrollbarRenderer_setTextureArrowDownHover(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowDownHover(*texture->This);
}

tguiTexture* tguiScrollbarRenderer_getTextureArrowDownHover(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureArrowDownHover()));
}
