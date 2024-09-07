#include <CTGUI/Theme.h>
#include <CTGUI/ThemeStruct.hpp>
#include <CTGUI/RendererStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>
#include <CTGUI/TextureStruct.hpp>
#include <CTGUI/OutlineStruct.hpp>
#include <CTGUI/FontStruct.hpp>
#include <CTGUI/InternalGlobal.hpp>

#include <TGUI/Exception.hpp>

@TGUI_GENERATED_HEAD@

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

tguiColor tguiTheme_getGlobalPropertyColor(const tguiTheme* theme, tguiUtf32 property)
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

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

@TGUI_GENERATED_BODY@
