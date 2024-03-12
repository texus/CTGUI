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


#include <CTGUI/Widgets/TabContainer.h>
#include <CTGUI/WidgetStruct.hpp>
#include <CTGUI/LayoutStruct.hpp>
#include <CTGUI/Renderers/RendererStruct.hpp>

#include <TGUI/Widgets/TabContainer.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::TabContainer>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiTabContainer_create(void)
{
    return ctgui::addWidgetRef(tgui::TabContainer::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiTabContainer_getTabsRenderer(const tguiWidget* widget)
{
    return new tguiRenderer(DOWNCAST(widget->This)->getTabsRenderer(), false);
}

tguiRenderer* tguiTabContainer_getTabsSharedRenderer(const tguiWidget* widget)
{
    return new tguiRenderer(DOWNCAST(widget->This)->getTabsSharedRenderer(), false);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabContainer_setTabsHeight(tguiWidget* widget, float height)
{
    DOWNCAST(widget->This)->setTabsHeight(height);
}

void tguiTabContainer_setTabsHeightFromLayout(tguiWidget* widget, tguiLayout* layout)
{
    DOWNCAST(widget->This)->setTabsHeight(layout->This);
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

tguiBool tguiTabContainer_removeTabWithName(tguiWidget* widget, tguiUtf32 text)
{
    return DOWNCAST(widget->This)->removeTab(ctgui::toCppStr(text));
}

tguiBool tguiTabContainer_removeTabWithIndex(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->removeTab(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabContainer_select(tguiWidget* widget, size_t index)
{
    DOWNCAST(widget->This)->select(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiTabContainer_getPanelCount(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getPanelCount();
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

int tguiTabContainer_getSelectedIndex(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getSelectedIndex();
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

tguiUtf32 tguiTabContainer_getTabText(const tguiWidget* widget, size_t index)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getTabText(index));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTabContainer_changeTabText(tguiWidget* widget, size_t index, tguiUtf32 text)
{
    return DOWNCAST(widget->This)->changeTabText(index, ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabContainer_setTabAlignment(tguiWidget* widget, tguiTabContainerTabAlign align)
{
    DOWNCAST(widget->This)->setTabAlignment(static_cast<tgui::TabContainer::TabAlign>(align));
}

tguiTabContainerTabAlign tguiTabContainer_getTabAlignment(const tguiWidget* widget)
{
    return static_cast<tguiTabContainerTabAlign>(DOWNCAST(widget->This)->getTabAlignment());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabContainer_setTabFixedSize(tguiWidget* widget, float fixedSize)
{
    DOWNCAST(widget->This)->setTabFixedSize(fixedSize);
}

float tguiTabContainer_getTabFixedSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getTabFixedSize();
}
