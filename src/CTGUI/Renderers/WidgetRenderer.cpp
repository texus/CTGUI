// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/WidgetRenderer.h>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>
#include <CTGUI/TextureStruct.hpp>
#include <CTGUI/FontStruct.hpp>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/WidgetRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::WidgetRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiWidgetRenderer_create(void)
{
    return new tguiRenderer(new tgui::WidgetRenderer);
}

tguiRenderer* tguiWidgetRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::WidgetRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setOpacity(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setOpacity(value);
}

float tguiWidgetRenderer_getOpacity(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getOpacity();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setOpacityDisabled(tguiRenderer* thisRenderer, float value)
{
    DOWNCAST(thisRenderer->This)->setOpacityDisabled(value);
}

float tguiWidgetRenderer_getOpacityDisabled(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getOpacityDisabled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setFont(tguiRenderer* thisRenderer, const tguiFont* value)
{
    DOWNCAST(thisRenderer->This)->setFont(*value->This);
}

const tguiFont* tguiWidgetRenderer_getFont(const tguiRenderer* thisRenderer)
{
    return new tguiFont(std::make_unique<tgui::Font>(DOWNCAST(thisRenderer->This)->getFont()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setTextSize(tguiRenderer* thisRenderer, unsigned int value)
{
    DOWNCAST(thisRenderer->This)->setTextSize(value);
}

unsigned int tguiWidgetRenderer_getTextSize(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setTransparentTexture(tguiRenderer* thisRenderer, tguiBool value)
{
    DOWNCAST(thisRenderer->This)->setTransparentTexture(value != 0);
}

tguiBool tguiWidgetRenderer_getTransparentTexture(const tguiRenderer* thisRenderer)
{
    return DOWNCAST(thisRenderer->This)->getTransparentTexture();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setData(tguiRenderer* thisRenderer, const tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setData(value->This);
}

const tguiRendererData* tguiWidgetRenderer_getData(const tguiRenderer* thisRenderer)
{
    return new tguiRendererData(DOWNCAST(thisRenderer->This)->getData());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setPropertyBool(tguiRenderer* thisRenderer, tguiUtf32 property, tguiBool value)
{
    DOWNCAST(thisRenderer->This)->setProperty(ctgui::toCppStr(property), value != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setPropertyFont(tguiRenderer* thisRenderer, tguiUtf32 property, const tguiFont* value)
{
    DOWNCAST(thisRenderer->This)->setProperty(ctgui::toCppStr(property), *value->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setPropertyColor(tguiRenderer* thisRenderer, tguiUtf32 property, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setProperty(ctgui::toCppStr(property), ctgui::toCppColor(value));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setPropertyString(tguiRenderer* thisRenderer, tguiUtf32 property, tguiUtf32 value)
{
    DOWNCAST(thisRenderer->This)->setProperty(ctgui::toCppStr(property), ctgui::toCppStr(value));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setPropertyNumber(tguiRenderer* thisRenderer, tguiUtf32 property, float value)
{
    DOWNCAST(thisRenderer->This)->setProperty(ctgui::toCppStr(property), value);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setPropertyOutline(tguiRenderer* thisRenderer, tguiUtf32 property, const tguiOutline* value)
{
    DOWNCAST(thisRenderer->This)->setProperty(ctgui::toCppStr(property), value->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setPropertyTexture(tguiRenderer* thisRenderer, tguiUtf32 property, const tguiTexture* value)
{
    DOWNCAST(thisRenderer->This)->setProperty(ctgui::toCppStr(property), *value->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setPropertyTextStyle(tguiRenderer* thisRenderer, tguiUtf32 property, tguiUint32 value)
{
    DOWNCAST(thisRenderer->This)->setProperty(ctgui::toCppStr(property), value);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setPropertyRendererData(tguiRenderer* thisRenderer, tguiUtf32 property, const tguiRendererData* value)
{
    DOWNCAST(thisRenderer->This)->setProperty(ctgui::toCppStr(property), value->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiWidgetRenderer_hasProperty(const tguiRenderer* renderer, tguiUtf32 property)
{
    return renderer->This->getProperty(ctgui::toCppStr(property)).getType() != tgui::ObjectConverter::Type::None;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiWidgetRenderer_getPropertyBool(const tguiRenderer* renderer, tguiUtf32 property)
{
    return renderer->This->getProperty(ctgui::toCppStr(property)).getBool();
}

tguiFont* tguiWidgetRenderer_getPropertyFont(const tguiRenderer* renderer, tguiUtf32 property)
{
    return new tguiFont(std::make_unique<tgui::Font>(renderer->This->getProperty(ctgui::toCppStr(property)).getFont()));
}

tguiColor tguiWidgetRenderer_getPropertyColor(const tguiRenderer* renderer, tguiUtf32 property)
{
    return ctgui::fromCppColor(renderer->This->getProperty(ctgui::toCppStr(property)).getColor());
}

tguiUtf32 tguiWidgetRenderer_getPropertyString(const tguiRenderer* renderer, tguiUtf32 property)
{
    return ctgui::fromCppStr(renderer->This->getProperty(ctgui::toCppStr(property)).getString());
}

float tguiWidgetRenderer_getPropertyNumber(const tguiRenderer* renderer, tguiUtf32 property)
{
    return renderer->This->getProperty(ctgui::toCppStr(property)).getNumber();
}

tguiOutline* tguiWidgetRenderer_getPropertyOutline(const tguiRenderer* renderer, tguiUtf32 property)
{
    return new tguiOutline(renderer->This->getProperty(ctgui::toCppStr(property)).getOutline());
}

tguiTexture* tguiWidgetRenderer_getPropertyTexture(const tguiRenderer* renderer, tguiUtf32 property)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(renderer->This->getProperty(ctgui::toCppStr(property)).getTexture()));
}

tguiUint32 tguiWidgetRenderer_getPropertyTextStyle(const tguiRenderer* renderer, tguiUtf32 property)
{
    return static_cast<tguiUint32>(renderer->This->getProperty(ctgui::toCppStr(property)).getTextStyle());
}

tguiRendererData* tguiWidgetRenderer_getPropertyRendererData(const tguiRenderer* renderer, tguiUtf32 property)
{
    return new tguiRendererData(renderer->This->getProperty(ctgui::toCppStr(property)).getRenderer());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_free(tguiRenderer* renderer)
{
    if (renderer->AllocatedInWrapper)
        delete renderer->This;

    delete renderer;
}
