// This file is generated, it should not be edited directly.

#include <CTGUI/Renderers/PanelListBoxRenderer.h>
#include <CTGUI/RendererStruct.hpp>

#include <TGUI/Renderers/PanelListBoxRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::PanelListBoxRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiPanelListBoxRenderer_create(void)
{
    return new tguiRenderer(new tgui::PanelListBoxRenderer);
}

tguiRenderer* tguiPanelListBoxRenderer_copy(const tguiRenderer* thisRenderer)
{
    return new tguiRenderer(new tgui::PanelListBoxRenderer(*DOWNCAST(thisRenderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelListBoxRenderer_setItemsBackgroundColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setItemsBackgroundColor(ctgui::toCppColor(value));
}

tguiColor tguiPanelListBoxRenderer_getItemsBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getItemsBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelListBoxRenderer_setItemsBackgroundColorHover(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setItemsBackgroundColorHover(ctgui::toCppColor(value));
}

tguiColor tguiPanelListBoxRenderer_getItemsBackgroundColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getItemsBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelListBoxRenderer_setSelectedItemsBackgroundColor(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setSelectedItemsBackgroundColor(ctgui::toCppColor(value));
}

tguiColor tguiPanelListBoxRenderer_getSelectedItemsBackgroundColor(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedItemsBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiPanelListBoxRenderer_setSelectedItemsBackgroundColorHover(tguiRenderer* thisRenderer, tguiColor value)
{
    DOWNCAST(thisRenderer->This)->setSelectedItemsBackgroundColorHover(ctgui::toCppColor(value));
}

tguiColor tguiPanelListBoxRenderer_getSelectedItemsBackgroundColorHover(const tguiRenderer* thisRenderer)
{
    return ctgui::fromCppColor(DOWNCAST(thisRenderer->This)->getSelectedItemsBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
