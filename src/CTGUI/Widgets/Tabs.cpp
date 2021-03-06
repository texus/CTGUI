/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2020 Bruno Van de Velde (vdv_b@tgui.eu)
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
#include <CTGUI/WidgetStruct.h>

#include <TGUI/Widgets/Tabs.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::Tabs>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiTabs_create(void)
{
    return new tguiWidget(tgui::Tabs::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabs_setAutoSize(tguiWidget* widget, sfBool autoSize)
{
    DOWNCAST(widget->This)->setAutoSize(autoSize != 0);
}

sfBool tguiTabs_getAutoSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getAutoSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiTabs_add(tguiWidget* widget, const sfUint32* text, sfBool select)
{
    return DOWNCAST(widget->This)->add(text, select != 0);
}

void tguiTabs_insert(tguiWidget* widget, size_t index, const sfUint32* text, sfBool select)
{
    DOWNCAST(widget->This)->insert(index, text, select != 0);
}

const sfUint32* tguiTabs_getText(const tguiWidget* widget, size_t index)
{
    return returnString(DOWNCAST(widget->This)->getText(index));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiTabs_changeText(tguiWidget* widget, size_t index, const sfUint32* text)
{
    return DOWNCAST(widget->This)->changeText(index, text);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiTabs_selectByText(tguiWidget* widget, const sfUint32* text)
{
    return DOWNCAST(widget->This)->select(text);
}

sfBool tguiTabs_selectByIndex(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->select(index);
}

void tguiTabs_deselect(tguiWidget* widget)
{
    DOWNCAST(widget->This)->deselect();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiTabs_removeByText(tguiWidget* widget, const sfUint32* text)
{
    return DOWNCAST(widget->This)->remove(text);
}

sfBool tguiTabs_removeByIndex(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->remove(index);
}

void tguiTabs_removeAll(tguiWidget* widget)
{
    DOWNCAST(widget->This)->removeAll();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const sfUint32* tguiTabs_getSelected(const tguiWidget* widget)
{
    return returnString(DOWNCAST(widget->This)->getSelected());
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

void tguiTabs_setTabVisible(tguiWidget* widget, size_t index, sfBool visible)
{
    DOWNCAST(widget->This)->setTabVisible(index, visible != 0);
}

sfBool tguiTabs_getTabVisible(const tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->getTabVisible(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabs_setTabEnabled(tguiWidget* widget, size_t index, sfBool enabled)
{
    DOWNCAST(widget->This)->setTabEnabled(index, enabled != 0);
}

sfBool tguiTabs_getTabEnabled(const tguiWidget* widget, size_t index)
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
