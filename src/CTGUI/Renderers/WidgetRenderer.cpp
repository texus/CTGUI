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


#include <CTGUI/Renderers/WidgetRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>
#include <CTGUI/TextureStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/FontStruct.hpp>

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

void tguiWidgetRenderer_free(tguiRenderer* renderer)
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

void tguiWidgetRenderer_setOpacityDisabled(tguiRenderer* renderer, float alpha)
{
    renderer->This->setOpacityDisabled(alpha);
}

float tguiWidgetRenderer_getOpacityDisabled(const tguiRenderer* renderer)
{
    return renderer->This->getOpacityDisabled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setFont(tguiRenderer* renderer, tguiFont* font)
{
    renderer->This->setFont(*font->This);
}

tguiFont* tguiWidgetRenderer_getFont(const tguiRenderer* renderer)
{
    return new tguiFont(std::make_unique<tgui::Font>(renderer->This->getFont()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setTextSize(tguiRenderer* renderer, unsigned int size)
{
    renderer->This->setTextSize(size);
}

unsigned int tguiWidgetRenderer_getTextSize(const tguiRenderer* renderer)
{
    return renderer->This->getTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setTransparentTexture(tguiRenderer* renderer, tguiBool ignoreTransparentParts)
{
    renderer->This->setTransparentTexture(ignoreTransparentParts != 0);
}

tguiBool tguiWidgetRenderer_getTransparentTexture(tguiRenderer* renderer)
{
    return renderer->This->getTransparentTexture();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setData(tguiRenderer* renderer, tguiRendererData* data)
{
    return renderer->This->setData(data->This);
}

tguiRendererData* tguiWidgetRenderer_getData(const tguiRenderer* renderer)
{
    return new tguiRendererData(renderer->This->getData());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidgetRenderer_setPropertyBool(tguiRenderer* renderer, tguiUtf32 property, tguiBool value)
{
    renderer->This->setProperty(ctgui::toCppStr(property), value != 0);
}

void tguiWidgetRenderer_setPropertyFont(tguiRenderer* renderer, tguiUtf32 property, tguiFont* value)
{
    renderer->This->setProperty(ctgui::toCppStr(property), *value->This);
}

void tguiWidgetRenderer_setPropertyColor(tguiRenderer* renderer, tguiUtf32 property, tguiColor* value)
{
    renderer->This->setProperty(ctgui::toCppStr(property), ctgui::toCppColor(value));
}

void tguiWidgetRenderer_setPropertyString(tguiRenderer* renderer, tguiUtf32 property, tguiUtf32 value)
{
    renderer->This->setProperty(ctgui::toCppStr(property), ctgui::toCppStr(value));
}

void tguiWidgetRenderer_setPropertyNumber(tguiRenderer* renderer, tguiUtf32 property, float value)
{
    renderer->This->setProperty(ctgui::toCppStr(property), value);
}

void tguiWidgetRenderer_setPropertyOutline(tguiRenderer* renderer, tguiUtf32 property, tguiOutline* value)
{
    renderer->This->setProperty(ctgui::toCppStr(property), value->This);
}

void tguiWidgetRenderer_setPropertyTexture(tguiRenderer* renderer, tguiUtf32 property, tguiTexture* value)
{
    renderer->This->setProperty(ctgui::toCppStr(property), *value->This);
}

void tguiWidgetRenderer_setPropertyTextStyle(tguiRenderer* renderer, tguiUtf32 property, tguiUint32 value)
{
    renderer->This->setProperty(ctgui::toCppStr(property), tgui::TextStyles(value));
}

void tguiWidgetRenderer_setPropertyRendererData(tguiRenderer* renderer, tguiUtf32 property, tguiRendererData* value)
{
    return renderer->This->setProperty(ctgui::toCppStr(property), value->This);
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

tguiColor* tguiWidgetRenderer_getPropertyColor(const tguiRenderer* renderer, tguiUtf32 property)
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
