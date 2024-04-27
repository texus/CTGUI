// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/PanelListBoxRenderer.h>
#include <CTGUI/Renderers/RendererStruct.hpp>

#include <TGUI/Renderers/PanelListBoxRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::PanelListBoxRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiPanelListBoxRenderer_create(void)
{
    return new tguiRenderer(new tgui::PanelListBoxRenderer);
}

tguiRenderer* tguiPanelListBoxRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::PanelListBoxRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelListBoxRenderer_setItemsBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setItemsBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiPanelListBoxRenderer_getItemsBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getItemsBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelListBoxRenderer_setItemsBackgroundColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setItemsBackgroundColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiPanelListBoxRenderer_getItemsBackgroundColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getItemsBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelListBoxRenderer_setSelectedItemsBackgroundColor(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedItemsBackgroundColor(ctgui::toCppColor(color));
}

tguiColor* tguiPanelListBoxRenderer_getSelectedItemsBackgroundColor(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedItemsBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelListBoxRenderer_setSelectedItemsBackgroundColorHover(tguiRenderer* renderer, tguiColor* color)
{
    DOWNCAST(renderer->This)->setSelectedItemsBackgroundColorHover(ctgui::toCppColor(color));
}

tguiColor* tguiPanelListBoxRenderer_getSelectedItemsBackgroundColorHover(const tguiRenderer* renderer)
{
    return ctgui::fromCppColor(DOWNCAST(renderer->This)->getSelectedItemsBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
