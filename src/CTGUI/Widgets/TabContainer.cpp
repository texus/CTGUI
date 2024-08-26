// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/TabContainer.h>
#include <CTGUI/LayoutStruct.hpp>
#include <CTGUI/RendererStruct.hpp>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/TabContainer.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::TabContainer>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiTabContainer_create(void)
{
    return ctgui::addWidgetRef(tgui::TabContainer::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiTabContainer_getTabsRenderer(const tguiWidget* thisWidget)
{
    return new tguiRenderer(DOWNCAST(thisWidget->This)->getTabsRenderer(), false);
}

tguiRenderer* tguiTabContainer_getTabsSharedRenderer(const tguiWidget* thisWidget)
{
    return new tguiRenderer(DOWNCAST(thisWidget->This)->getTabsSharedRenderer(), false);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabContainer_select(tguiWidget* thisWidget, size_t index)
{
    DOWNCAST(thisWidget->This)->select(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiTabContainer_getPanelCount(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getPanelCount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int tguiTabContainer_getSelectedIndex(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getSelectedIndex();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiTabContainer_getTabText(const tguiWidget* thisWidget, size_t index)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getTabText(index));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTabContainer_changeTabText(tguiWidget* thisWidget, size_t index, tguiUtf32 text)
{
    return DOWNCAST(thisWidget->This)->changeTabText(index, ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabContainer_setTabFixedSize(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setTabFixedSize(value);
}

float tguiTabContainer_getTabFixedSize(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getTabFixedSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabContainer_setTabAlignment(tguiWidget* thisWidget, tguiTabContainerTabAlign value)
{
    DOWNCAST(thisWidget->This)->setTabAlignment(static_cast<tgui::TabContainer::TabAlign>(value));
}

tguiTabContainerTabAlign tguiTabContainer_getTabAlignment(const tguiWidget* thisWidget)
{
    return static_cast<tguiTabContainerTabAlign>(DOWNCAST(thisWidget->This)->getTabAlignment());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabContainer_setTabsHeight(tguiWidget* thisWidget, float height)
{
    DOWNCAST(thisWidget->This)->setTabsHeight(height);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabContainer_setTabsHeightFromLayout(tguiWidget* thisWidget, const tguiLayout* layout)
{
    DOWNCAST(thisWidget->This)->setTabsHeight(layout->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTabContainer_removeTabWithName(tguiWidget* thisWidget, tguiUtf32 text)
{
    return DOWNCAST(thisWidget->This)->removeTab(ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTabContainer_removeTabWithIndex(tguiWidget* thisWidget, size_t index)
{
    return DOWNCAST(thisWidget->This)->removeTab(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiTabContainer_addTab(tguiWidget* widget, tguiUtf32 name, tguiBool select)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->addTab(ctgui::toCppStr(name), select != 0));
}

tguiWidget* tguiTabContainer_insertTab(tguiWidget* widget, size_t index, tguiUtf32 name, tguiBool select)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->insertTab(index, ctgui::toCppStr(name), select != 0));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int tguiTabContainer_getIndex(const tguiWidget* widget, const tguiWidget* panel)
{
    return DOWNCAST(widget->This)->getIndex(panel->This->cast<tgui::Panel>());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiTabContainer_getSelected(const tguiWidget* widget)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->getSelected());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiTabContainer_getPanel(const tguiWidget* widget, int index)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->getPanel(index));
}

tguiWidget* tguiTabContainer_getTabs(const tguiWidget* widget)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->getTabs());
}
