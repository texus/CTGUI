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


#include <CTGUI/Renderers/SliderRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>

#include <TGUI/Renderers/SliderRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::SliderRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiSliderRenderer_create(void)
{
    return new tguiRenderer(new tgui::SliderRenderer);
}

tguiRenderer* tguiSliderRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::SliderRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders)
{
    DOWNCAST(renderer->This)->setBorders(borders->This);
}

tguiOutline* tguiSliderRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setTrackColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTrackColor(ctgui::toCppColor(color));
}

tguiColor* tguiSliderRenderer_getTrackColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTrackColor());
}

void tguiSliderRenderer_setTrackColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTrackColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiSliderRenderer_getTrackColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTrackColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setThumbColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setThumbColor(ctgui::toCppColor(color));
}

tguiColor* tguiSliderRenderer_getThumbColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getThumbColor());
}

void tguiSliderRenderer_setThumbColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setThumbColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiSliderRenderer_getThumbColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getThumbColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColor(ctgui::toCppColor(color));
}

tguiColor* tguiSliderRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColor());
}

void tguiSliderRenderer_setBorderColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiSliderRenderer_getBorderColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setTextureTrack(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureTrack(*texture->This);
}

tguiTexture* tguiSliderRenderer_getTextureTrack(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureTrack()));
}

void tguiSliderRenderer_setTextureTrackHover(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureTrackHover(*texture->This);
}

tguiTexture* tguiSliderRenderer_getTextureTrackHover(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureTrackHover()));
}

void tguiSliderRenderer_setTextureThumb(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureThumb(*texture->This);
}

tguiTexture* tguiSliderRenderer_getTextureThumb(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureThumb()));
}

void tguiSliderRenderer_setTextureThumbHover(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureThumbHover(*texture->This);
}

tguiTexture* tguiSliderRenderer_getTextureThumbHover(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureThumbHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSliderRenderer_setThumbWithinTrack(tguiRenderer* renderer, tguiBool keepThumbInside)
{
    DOWNCAST(renderer->This)->setThumbWithinTrack(keepThumbInside != 0);
}

tguiBool tguiSliderRenderer_getThumbWithinTrack(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getThumbWithinTrack();
}
