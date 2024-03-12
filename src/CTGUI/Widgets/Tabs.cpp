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


#include <CTGUI/Widgets/Tabs.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/Tabs.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::Tabs>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiTabs_create(void)
{
    return ctgui::addWidgetRef(tgui::Tabs::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabs_setAutoSize(tguiWidget* widget, tguiBool autoSize)
{
    DOWNCAST(widget->This)->setAutoSize(autoSize != 0);
}

tguiBool tguiTabs_getAutoSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getAutoSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiTabs_add(tguiWidget* widget, tguiUtf32 text, tguiBool select)
{
    return DOWNCAST(widget->This)->add(ctgui::toCppStr(text), select != 0);
}

void tguiTabs_insert(tguiWidget* widget, size_t index, tguiUtf32 text, tguiBool select)
{
    DOWNCAST(widget->This)->insert(index, ctgui::toCppStr(text), select != 0);
}

tguiUtf32 tguiTabs_getText(const tguiWidget* widget, size_t index)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getText(index));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTabs_changeText(tguiWidget* widget, size_t index, tguiUtf32 text)
{
    return DOWNCAST(widget->This)->changeText(index, ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTabs_selectByText(tguiWidget* widget, tguiUtf32 text)
{
    return DOWNCAST(widget->This)->select(ctgui::toCppStr(text));
}

tguiBool tguiTabs_selectByIndex(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->select(index);
}

void tguiTabs_deselect(tguiWidget* widget)
{
    DOWNCAST(widget->This)->deselect();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTabs_removeByText(tguiWidget* widget, tguiUtf32 text)
{
    return DOWNCAST(widget->This)->remove(ctgui::toCppStr(text));
}

tguiBool tguiTabs_removeByIndex(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->remove(index);
}

void tguiTabs_removeAll(tguiWidget* widget)
{
    DOWNCAST(widget->This)->removeAll();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiTabs_getSelected(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getSelected());
}

int tguiTabs_getSelectedIndex(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getSelectedIndex();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiTabs_getTabsCount(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getTabsCount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabs_setTabVisible(tguiWidget* widget, size_t index, tguiBool visible)
{
    DOWNCAST(widget->This)->setTabVisible(index, visible != 0);
}

tguiBool tguiTabs_getTabVisible(const tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->getTabVisible(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabs_setTabEnabled(tguiWidget* widget, size_t index, tguiBool enabled)
{
    DOWNCAST(widget->This)->setTabEnabled(index, enabled != 0);
}

tguiBool tguiTabs_getTabEnabled(const tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->getTabEnabled(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabs_setMaximumTabWidth(tguiWidget* widget, float maximumTabWidth)
{
    DOWNCAST(widget->This)->setMaximumTabWidth(maximumTabWidth);
}

float tguiTabs_getMaximumTabWidth(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMaximumTabWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabs_setMinimumTabWidth(tguiWidget* widget, float minimumTabWidth)
{
    DOWNCAST(widget->This)->setMinimumTabWidth(minimumTabWidth);
}

float tguiTabs_getMinimumTabWidth(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMinimumTabWidth();
}
