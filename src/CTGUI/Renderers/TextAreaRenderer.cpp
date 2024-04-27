// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/TextAreaRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>

#include <TGUI/Renderers/TextAreaRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::TextAreaRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiTextAreaRenderer_create(void)
{
    return new tguiRenderer(new tgui::TextAreaRenderer);
}

tguiRenderer* tguiTextAreaRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::TextAreaRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextAreaRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline)
{
    DOWNCAST(renderer->This)->setBorders(outline->This);
}

tguiOutline* tguiTextAreaRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextAreaRenderer_setPadding(tguiRenderer* renderer, tguiOutline* outline)
{
    DOWNCAST(renderer->This)->setPadding(outline->This);
}

tguiOutline* tguiTextAreaRenderer_getPadding(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getPadding());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextAreaRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiTextAreaRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextAreaRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setTextColor(ctgui::toCppColor(color));
}

tguiColor* tguiTextAreaRenderer_getTextColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextAreaRenderer_setDefaultTextColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setDefaultTextColor(ctgui::toCppColor(color));
}

tguiColor* tguiTextAreaRenderer_getDefaultTextColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getDefaultTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextAreaRenderer_setSelectedTextColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedTextColor(ctgui::toCppColor(color));
}

tguiColor* tguiTextAreaRenderer_getSelectedTextColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextAreaRenderer_setSelectedTextBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedTextBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiTextAreaRenderer_getSelectedTextBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedTextBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextAreaRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setBorderColor(ctgui::toCppColor(color));
}

tguiColor* tguiTextAreaRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextAreaRenderer_setCaretColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setCaretColor(ctgui::toCppColor(color));
}

tguiColor* tguiTextAreaRenderer_getCaretColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getCaretColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextAreaRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBackground(*texture->This);
}

tguiTexture* tguiTextAreaRenderer_getTextureBackground(const tguiRenderer* renderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(renderer->This)->getTextureBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextAreaRenderer_setCaretWidth(tguiRenderer* renderer, float value)
{
    DOWNCAST(renderer->This)->setCaretWidth(value);
}

float tguiTextAreaRenderer_getCaretWidth(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getCaretWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextAreaRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData)
{
    DOWNCAST(renderer->This)->setScrollbar(rendererData->This);
}

tguiRendererData* tguiTextAreaRenderer_getScrollbar(const tguiRenderer* renderer)
{
    return new tguiRendererData(DOWNCAST(renderer->This)->getScrollbar());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextAreaRenderer_setScrollbarWidth(tguiRenderer* renderer, float value)
{
    DOWNCAST(renderer->This)->setScrollbarWidth(value);
}

float tguiTextAreaRenderer_getScrollbarWidth(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getScrollbarWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
