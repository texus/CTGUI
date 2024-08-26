// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/RadioButtonRenderer.h>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/TextureStruct.hpp>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/RadioButtonRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::RadioButtonRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiRadioButtonRenderer_create(void)
{
    return new tguiRenderer(new tgui::RadioButtonRenderer);
}

tguiRenderer* tguiRadioButtonRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::RadioButtonRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextDistanceRatio(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setTextDistanceRatio(value);
}

float tguiRadioButtonRenderer_getTextDistanceRatio(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getTextDistanceRatio();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value)
{
    DOWNCAST(thisRenderer->This)->setBorders(value->This);
}

const tguiOutline* tguiRadioButtonRenderer_getBorders(const tguiRenderer* thisRenderer)
{
    return new tguiOutline(DOWNCAST(thisRenderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setTextColor(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getTextColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextColorHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setTextColorHover(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getTextColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextColorDisabled(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setTextColorDisabled(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getTextColorDisabled(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextColorChecked(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setTextColorChecked(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getTextColorChecked(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColorChecked());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextColorCheckedHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setTextColorCheckedHover(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getTextColorCheckedHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColorCheckedHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextColorCheckedDisabled(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setTextColorCheckedDisabled(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getTextColorCheckedDisabled(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getTextColorCheckedDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColor(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBackgroundColorHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColorHover(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getBackgroundColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBackgroundColorDisabled(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColorDisabled(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getBackgroundColorDisabled(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBackgroundColorChecked(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColorChecked(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getBackgroundColorChecked(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColorChecked());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBackgroundColorCheckedHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColorCheckedHover(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getBackgroundColorCheckedHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColorCheckedHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBackgroundColorCheckedDisabled(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBackgroundColorCheckedDisabled(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getBackgroundColorCheckedDisabled(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBackgroundColorCheckedDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBorderColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBorderColor(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getBorderColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBorderColorHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBorderColorHover(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getBorderColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBorderColorFocused(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBorderColorFocused(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getBorderColorFocused(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColorFocused());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBorderColorDisabled(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBorderColorDisabled(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getBorderColorDisabled(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBorderColorChecked(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBorderColorChecked(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getBorderColorChecked(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColorChecked());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBorderColorCheckedHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBorderColorCheckedHover(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getBorderColorCheckedHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColorCheckedHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBorderColorCheckedFocused(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBorderColorCheckedFocused(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getBorderColorCheckedFocused(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColorCheckedFocused());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setBorderColorCheckedDisabled(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setBorderColorCheckedDisabled(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getBorderColorCheckedDisabled(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getBorderColorCheckedDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setCheckColor(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setCheckColor(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getCheckColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getCheckColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setCheckColorHover(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setCheckColorHover(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getCheckColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getCheckColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setCheckColorDisabled(tguiRenderer* thisRenderer, const tguiColor* value)
{
    DOWNCAST(thisRenderer->This)->setCheckColorDisabled(ctgui::toCppColor(value));
}

const tguiColor* tguiRadioButtonRenderer_getCheckColorDisabled(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getCheckColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextureUnchecked(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureUnchecked(*value->This);
}

const tguiTexture* tguiRadioButtonRenderer_getTextureUnchecked(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureUnchecked()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextureChecked(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureChecked(*value->This);
}

const tguiTexture* tguiRadioButtonRenderer_getTextureChecked(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureChecked()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextureUncheckedHover(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureUncheckedHover(*value->This);
}

const tguiTexture* tguiRadioButtonRenderer_getTextureUncheckedHover(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureUncheckedHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextureCheckedHover(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureCheckedHover(*value->This);
}

const tguiTexture* tguiRadioButtonRenderer_getTextureCheckedHover(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureCheckedHover()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextureUncheckedFocused(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureUncheckedFocused(*value->This);
}

const tguiTexture* tguiRadioButtonRenderer_getTextureUncheckedFocused(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureUncheckedFocused()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextureCheckedFocused(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureCheckedFocused(*value->This);
}

const tguiTexture* tguiRadioButtonRenderer_getTextureCheckedFocused(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureCheckedFocused()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextureUncheckedDisabled(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureUncheckedDisabled(*value->This);
}

const tguiTexture* tguiRadioButtonRenderer_getTextureUncheckedDisabled(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureUncheckedDisabled()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextureCheckedDisabled(tguiRenderer* thisRenderer, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setTextureCheckedDisabled(*value->This);
}

const tguiTexture* tguiRadioButtonRenderer_getTextureCheckedDisabled(const tguiRenderer* thisRenderer)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisRenderer->This)->getTextureCheckedDisabled()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextStyle(tguiRenderer* thisRenderer, tguiUint32 value)
{
    DOWNCAST(thisRenderer->This)->setTextStyle(value);
}

tguiUint32 tguiRadioButtonRenderer_getTextStyle(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getTextStyle();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiRadioButtonRenderer_setTextStyleChecked(tguiRenderer* thisRenderer, tguiUint32 value)
{
    DOWNCAST(thisRenderer->This)->setTextStyleChecked(value);
}

tguiUint32 tguiRadioButtonRenderer_getTextStyleChecked(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getTextStyleChecked();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
