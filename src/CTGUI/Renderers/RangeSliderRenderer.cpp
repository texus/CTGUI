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


#include <CTGUI/Renderers/RangeSliderRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>

#include <TGUI/Renderers/RangeSliderRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::RangeSliderRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiRangeSliderRenderer_create(void)
{
    return new tguiRenderer(new tgui::RangeSliderRenderer);
}

tguiRenderer* tguiRangeSliderRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::RangeSliderRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSliderRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders)
{
    DOWNCAST(renderer->This)->setBorders(borders->This);
}

tguiOutline* tguiRangeSliderRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSliderRenderer_setTrackColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTrackColor(ctgui::toCppColor(color));
}

tguiColor* tguiRangeSliderRenderer_getTrackColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTrackColor());
}

void tguiRangeSliderRenderer_setTrackColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTrackColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiRangeSliderRenderer_getTrackColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTrackColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSliderRenderer_setSelectedTrackColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedTrackColor(ctgui::toCppColor(color));
}

tguiColor* tguiRangeSliderRenderer_getSelectedTrackColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedTrackColor());
}

void tguiRangeSliderRenderer_setSelectedTrackColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedTrackColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiRangeSliderRenderer_getSelectedTrackColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedTrackColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSliderRenderer_setThumbColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setThumbColor(ctgui::toCppColor(color));
}

tguiColor* tguiRangeSliderRenderer_getThumbColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getThumbColor());
}

void tguiRangeSliderRenderer_setThumbColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setThumbColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiRangeSliderRenderer_getThumbColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getThumbColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSliderRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColor(ctgui::toCppColor(color));
}

tguiColor* tguiRangeSliderRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColor());
}

void tguiRangeSliderRenderer_setBorderColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiRangeSliderRenderer_getBorderColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSliderRenderer_setTextureTrack(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureTrack(*texture->This);
}

tguiTexture* tguiRangeSliderRenderer_getTextureTrack(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureTrack()));
}

void tguiRangeSliderRenderer_setTextureTrackHover(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureTrackHover(*texture->This);
}

tguiTexture* tguiRangeSliderRenderer_getTextureTrackHover(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureTrackHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSliderRenderer_setTextureSelectedTrack(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureSelectedTrack(*texture->This);
}

tguiTexture* tguiRangeSliderRenderer_getTextureSelectedTrack(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureSelectedTrack()));
}

void tguiRangeSliderRenderer_setTextureSelectedTrackHover(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureSelectedTrackHover(*texture->This);
}

tguiTexture* tguiRangeSliderRenderer_getTextureSelectedTrackHover(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureSelectedTrackHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSliderRenderer_setTextureThumb(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureThumb(*texture->This);
}

tguiTexture* tguiRangeSliderRenderer_getTextureThumb(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureThumb()));
}

void tguiRangeSliderRenderer_setTextureThumbHover(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureThumbHover(*texture->This);
}

tguiTexture* tguiRangeSliderRenderer_getTextureThumbHover(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureThumbHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRangeSliderRenderer_setThumbWithinTrack(tguiRenderer* renderer, tguiBool keepThumbInside)
{
    DOWNCAST(renderer->This)->setThumbWithinTrack(keepThumbInside);
}

tguiBool tguiRangeSliderRenderer_getThumbWithinTrack(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getThumbWithinTrack();
}
