#include <CTGUI/Theme.h>
#include <CTGUI/RendererStruct.hpp>
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

void tguiTheme_destroy(tguiTheme* theme)
{
    delete theme;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTheme_hasGlobalProperty(const tguiTheme* theme, tguiUtf32 property)
{
    return theme->This->getGlobalProperty(ctgui::toCppStr(property)).getType() != tgui::ObjectConverter::Type::None;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTheme_getGlobalPropertyBool(const tguiTheme* theme, tguiUtf32 property, tguiBool* value)
{
    try
    {
        *value = theme->This->getGlobalProperty(ctgui::toCppStr(property)).getBool();
        return true;
    }
    catch (const tgui::Exception&)
    {
        return false;
    }
}

tguiBool tguiTheme_getGlobalPropertyFont(const tguiTheme* theme, tguiUtf32 property, tguiFont** value)
{
    try
    {
        *value = new tguiFont(std::make_unique<tgui::Font>(theme->This->getGlobalProperty(ctgui::toCppStr(property)).getFont()));
        return true;
    }
    catch (const tgui::Exception&)
    {
        return false;
    }
}

tguiBool tguiTheme_getGlobalPropertyColor(const tguiTheme* theme, tguiUtf32 property, tguiColor* value)
{
    try
    {
        *value = ctgui::fromCppColor(theme->This->getGlobalProperty(ctgui::toCppStr(property)).getColor());
        return true;
    }
    catch (const tgui::Exception&)
    {
        return false;
    }
}

tguiBool tguiTheme_getGlobalPropertyString(const tguiTheme* theme, tguiUtf32 property, tguiUtf32* value)
{
    try
    {
        *value = ctgui::fromCppStr(theme->This->getGlobalProperty(ctgui::toCppStr(property)).getString());
        return true;
    }
    catch (const tgui::Exception&)
    {
        return false;
    }
}

tguiBool tguiTheme_getGlobalPropertyNumber(const tguiTheme* theme, tguiUtf32 property, float* value)
{
    try
    {
        *value = theme->This->getGlobalProperty(ctgui::toCppStr(property)).getNumber();
        return true;
    }
    catch (const tgui::Exception&)
    {
        return false;
    }
}

tguiBool tguiTheme_getGlobalPropertyOutline(const tguiTheme* theme, tguiUtf32 property, tguiOutline** value)
{
    try
    {
        *value = new tguiOutline(theme->This->getGlobalProperty(ctgui::toCppStr(property)).getOutline());
        return true;
    }
    catch (const tgui::Exception&)
    {
        return false;
    }
}

tguiBool tguiTheme_getGlobalPropertyTexture(const tguiTheme* theme, tguiUtf32 property, tguiTexture** value)
{
    try
    {
        *value = new tguiTexture(std::make_unique<tgui::Texture>(theme->This->getGlobalProperty(ctgui::toCppStr(property)).getTexture()));
        return true;
    }
    catch (const tgui::Exception&)
    {
        return false;
    }
}

tguiBool tguiTheme_getGlobalPropertyTextStyle(const tguiTheme* theme, tguiUtf32 property, tguiUint32* value)
{
    try
    {
        *value = static_cast<tguiUint32>(theme->This->getGlobalProperty(ctgui::toCppStr(property)).getTextStyle());
        return true;
    }
    catch (const tgui::Exception&)
    {
        return false;
    }
}

tguiBool tguiTheme_getGlobalPropertyRendererData(const tguiTheme* theme, tguiUtf32 property, tguiRendererData** value)
{
    try
    {
        *value = new tguiRendererData(theme->This->getGlobalProperty(ctgui::toCppStr(property)).getRenderer());
        return true;
    }
    catch (const tgui::Exception&)
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiTheme_getRendererDefaultSubwidget(tguiUtf32 widgetType, tguiUtf32 property)
{
    return ctgui::fromCppStr(tgui::Theme::getRendererDefaultSubwidgets(ctgui::toCppStr(widgetType))[ctgui::toCppStr(property)]);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiTheme_getRendererInheritedGlobalProperty(tguiUtf32 widgetType, tguiUtf32 property)
{
    return ctgui::fromCppStr(tgui::Theme::getRendererInheritedGlobalProperties(ctgui::toCppStr(widgetType))[ctgui::toCppStr(property)]);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

@TGUI_GENERATED_BODY@
