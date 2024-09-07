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
