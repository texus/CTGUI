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


#include <CTGUI/Theme.h>
#include <CTGUI/ThemeStruct.hpp>
#include <CTGUI/Renderers/RendererStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>
#include <CTGUI/TextureStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/FontStruct.hpp>
#include <CTGUI/InternalGlobal.hpp>

#include <TGUI/Exception.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiTheme* tguiTheme_create(void)
{
    return new tguiTheme(tgui::Theme::create());
}

tguiTheme* tguiTheme_copy(const tguiTheme* theme)
{
    return new tguiTheme(std::make_shared<tgui::Theme>(*theme->This));
}

void tguiTheme_free(tguiTheme* theme)
{
    delete theme;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTheme_load(tguiTheme* theme, const char* filename)
{
    try
    {
        theme->This->load(filename);
        return true;
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTheme_replace(tguiTheme* theme, tguiTheme* otherTheme)
{
    theme->This->replace(*otherTheme->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRendererData* tguiTheme_getRenderer(tguiTheme* theme, const char* id)
{
    try
    {
        std::shared_ptr<tgui::RendererData> data = theme->This->getRenderer(id);
        return new tguiRendererData(data);
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return nullptr;
    }
}

void tguiTheme_addRenderer(tguiTheme* theme, const char* id, tguiRendererData* renderer)
{
    theme->This->addRenderer(id, renderer->This);
}

tguiBool tguiTheme_removeRenderer(tguiTheme* theme, const char* id)
{
    return theme->This->removeRenderer(id);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiTheme_getPrimary(const tguiTheme* theme)
{
    return ctgui::fromCppStr(theme->This->getPrimary());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTheme_setDefault(tguiTheme* defaultTheme)
{
    tgui::Theme::setDefault(defaultTheme->This);
}

tguiTheme* tguiTheme_getDefault(void)
{
    return new tguiTheme{tgui::Theme::getDefault()};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTheme_hasGlobalProperty(const tguiTheme* theme, tguiUtf32 property)
{
    return theme->This->getGlobalProperty(ctgui::toCppStr(property)).getType() != tgui::ObjectConverter::Type::None;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTheme_getGlobalPropertyBool(const tguiTheme* theme, tguiUtf32 property)
{
    return theme->This->getGlobalProperty(ctgui::toCppStr(property)).getBool();
}

tguiFont* tguiTheme_getGlobalPropertyFont(const tguiTheme* theme, tguiUtf32 property)
{
    return new tguiFont(std::make_unique<tgui::Font>(theme->This->getGlobalProperty(ctgui::toCppStr(property)).getFont()));
}

tguiColor* tguiTheme_getGlobalPropertyColor(const tguiTheme* theme, tguiUtf32 property)
{
    return ctgui::fromCppColor(theme->This->getGlobalProperty(ctgui::toCppStr(property)).getColor());
}

tguiUtf32 tguiTheme_getGlobalPropertyString(const tguiTheme* theme, tguiUtf32 property)
{
    return ctgui::fromCppStr(theme->This->getGlobalProperty(ctgui::toCppStr(property)).getString());
}

float tguiTheme_getGlobalPropertyNumber(const tguiTheme* theme, tguiUtf32 property)
{
    return theme->This->getGlobalProperty(ctgui::toCppStr(property)).getNumber();
}

tguiOutline* tguiTheme_getGlobalPropertyOutline(const tguiTheme* theme, tguiUtf32 property)
{
    return new tguiOutline(theme->This->getGlobalProperty(ctgui::toCppStr(property)).getOutline());
}

tguiTexture* tguiTheme_getGlobalPropertyTexture(const tguiTheme* theme, tguiUtf32 property)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(theme->This->getGlobalProperty(ctgui::toCppStr(property)).getTexture()));
}

tguiUint32 tguiTheme_getGlobalPropertyTextStyle(const tguiTheme* theme, tguiUtf32 property)
{
    return static_cast<tguiUint32>(theme->This->getGlobalProperty(ctgui::toCppStr(property)).getTextStyle());
}

tguiRendererData* tguiTheme_getGlobalPropertyRendererData(const tguiTheme* theme, tguiUtf32 property)
{
    return new tguiRendererData(theme->This->getGlobalProperty(ctgui::toCppStr(property)).getRenderer());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTheme_addRendererInheritanceParent(tguiUtf32 widgetType, tguiUtf32 parentType)
{
    tgui::Theme::addRendererInheritanceParent(ctgui::toCppStr(widgetType), ctgui::toCppStr(parentType));
}

tguiUtf32 tguiTheme_getRendererInheritanceParent(tguiUtf32 widgetType)
{
    return ctgui::fromCppStr(tgui::Theme::getRendererInheritanceParent(ctgui::toCppStr(widgetType)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTheme_addRendererDefaultSubwidget(tguiUtf32 widgetType, tguiUtf32 property, tguiUtf32 propertyWidgetType)
{
    tgui::Theme::addRendererDefaultSubwidget(ctgui::toCppStr(widgetType), ctgui::toCppStr(property), ctgui::toCppStr(propertyWidgetType));
}

tguiUtf32 tguiTheme_getRendererDefaultSubwidget(tguiUtf32 widgetType, tguiUtf32 property)
{
    return ctgui::fromCppStr(tgui::Theme::getRendererDefaultSubwidgets(ctgui::toCppStr(widgetType))[ctgui::toCppStr(property)]);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTheme_addRendererInheritedGlobalProperty(tguiUtf32 widgetType, tguiUtf32 property, tguiUtf32 globalProperty)
{
    tgui::Theme::addRendererInheritedGlobalProperty(ctgui::toCppStr(widgetType), ctgui::toCppStr(property), ctgui::toCppStr(globalProperty));
}

tguiUtf32 tguiTheme_getRendererInheritedGlobalProperty(tguiUtf32 widgetType, tguiUtf32 property)
{
    return ctgui::fromCppStr(tgui::Theme::getRendererInheritedGlobalProperties(ctgui::toCppStr(widgetType))[ctgui::toCppStr(property)]);
}
