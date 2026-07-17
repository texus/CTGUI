// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/ComboBoxRenderer.h>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>
#include <CTGUI/TextureStruct.hpp>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/ComboBoxRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ComboBoxRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiComboBoxRenderer_create(void)
{
    return new tguiRenderer(new tgui::ComboBoxRenderer);
}

tguiRenderer* tguiComboBoxRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::ComboBoxRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value)
{
    DOWNCAST(thisRenderer->This)->setBorders(value->This);
}

const tguiOutline* tguiComboBoxRenderer_getBorders(const tguiRenderer* thisRenderer)
{
    return new tguiOutline(DOWNCAST(thisRenderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setPadding(tguiRenderer* thisRenderer, const tguiOutline* value)
{
    DOWNCAST(thisRenderer->This)->setPadding(value->This);
}

const tguiOutline* tguiComboBoxRenderer_getPadding(const tguiRenderer* thisRenderer)
{
    return new tguiOutline(DOWNCAST(thisRenderer->This)->getPadding());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setBackgroundColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColor(ctgui::toCppColor(value));
}

tguiColor tguiComboBoxRenderer_getBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setBackgroundColorDisabled(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColorDisabled(ctgui::toCppColor(value));
}

tguiColor tguiComboBoxRenderer_getBackgroundColorDisabled(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setTextColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setTextColor(ctgui::toCppColor(value));
}

tguiColor tguiComboBoxRenderer_getTextColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setTextColorDisabled(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setTextColorDisabled(ctgui::toCppColor(value));
}

tguiColor tguiComboBoxRenderer_getTextColorDisabled(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setDefaultTextColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setDefaultTextColor(ctgui::toCppColor(value));
}

tguiColor tguiComboBoxRenderer_getDefaultTextColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getDefaultTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setArrowBackgroundColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setArrowBackgroundColor(ctgui::toCppColor(value));
}

tguiColor tguiComboBoxRenderer_getArrowBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getArrowBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setArrowBackgroundColorHover(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setArrowBackgroundColorHover(ctgui::toCppColor(value));
}

tguiColor tguiComboBoxRenderer_getArrowBackgroundColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getArrowBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setArrowBackgroundColorDisabled(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setArrowBackgroundColorDisabled(ctgui::toCppColor(value));
}

tguiColor tguiComboBoxRenderer_getArrowBackgroundColorDisabled(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getArrowBackgroundColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setArrowColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setArrowColor(ctgui::toCppColor(value));
}

tguiColor tguiComboBoxRenderer_getArrowColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getArrowColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setArrowColorHover(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setArrowColorHover(ctgui::toCppColor(value));
}

tguiColor tguiComboBoxRenderer_getArrowColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getArrowColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setArrowColorDisabled(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setArrowColorDisabled(ctgui::toCppColor(value));
}

tguiColor tguiComboBoxRenderer_getArrowColorDisabled(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getArrowColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setBorderColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setBorderColor(ctgui::toCppColor(value));
}

tguiColor tguiComboBoxRenderer_getBorderColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureBackground(*value->This);
}

const tguiTexture* tguiComboBoxRenderer_getTextureBackground(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureBackground()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setTextureBackgroundDisabled(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureBackgroundDisabled(*value->This);
}

const tguiTexture* tguiComboBoxRenderer_getTextureBackgroundDisabled(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureBackgroundDisabled()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setTextureArrow(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureArrow(*value->This);
}

const tguiTexture* tguiComboBoxRenderer_getTextureArrow(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureArrow()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setTextureArrowHover(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureArrowHover(*value->This);
}

const tguiTexture* tguiComboBoxRenderer_getTextureArrowHover(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureArrowHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setTextureArrowDisabled(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureArrowDisabled(*value->This);
}

const tguiTexture* tguiComboBoxRenderer_getTextureArrowDisabled(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureArrowDisabled()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setTextStyle(tguiRenderer* thisRenderer, tguiUint32 value)
{
    DOWNCAST(thisRenderer->This)->setTextStyle(value);
}

tguiUint32 tguiComboBoxRenderer_getTextStyle(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getTextStyle();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setDefaultTextStyle(tguiRenderer* thisRenderer, tguiUint32 value)
{
    DOWNCAST(thisRenderer->This)->setDefaultTextStyle(value);
}

tguiUint32 tguiComboBoxRenderer_getDefaultTextStyle(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getDefaultTextStyle();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setListBox(tguiRenderer* thisRenderer, tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setListBox(value->This);
}

tguiRendererData* tguiComboBoxRenderer_getListBox(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getListBox());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiComboBoxRenderer_setRoundedBorderRadius(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setRoundedBorderRadius(value);
}

float tguiComboBoxRenderer_getRoundedBorderRadius(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getRoundedBorderRadius();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
