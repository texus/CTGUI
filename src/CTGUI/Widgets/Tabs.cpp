/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2016 Bruno Van de Velde (vdv_b@tgui.eu)
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

size_t tguiTabs_add(tguiWidget* widget, const sfUint32* text, sfBool select)
{
    return DOWNCAST(widget->This)->add(text, select);
}

void tguiTabs_insert(tguiWidget* widget, size_t index, const sfUint32* text, sfBool select)
{
    DOWNCAST(widget->This)->insert(index, text, select);
}

const sfUint32* tguiTabs_getText(const tguiWidget* widget, size_t index)
{
    static sf::String text;
    text = DOWNCAST(widget->This)->getText(index);
    return text.getData();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabs_selectByText(tguiWidget* widget, const sfUint32* text)
{
    DOWNCAST(widget->This)->select(text);
}

void tguiTabs_selectByIndex(tguiWidget* widget, size_t index)
{
    DOWNCAST(widget->This)->select(index);
}

void tguiTabs_deselect(tguiWidget* widget)
{
    DOWNCAST(widget->This)->deselect();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabs_removeByText(tguiWidget* widget, const sfUint32* text)
{
    DOWNCAST(widget->This)->remove(text);
}

void tguiTabs_removeByIndex(tguiWidget* widget, size_t index)
{
    DOWNCAST(widget->This)->remove(index);
}

void tguiTabs_removeAll(tguiWidget* widget)
{
    DOWNCAST(widget->This)->removeAll();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const sfUint32* tguiTabs_getSelected(const tguiWidget* widget)
{
    static sf::String text;
    text = DOWNCAST(widget->This)->getSelected();
    return text.getData();
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

void tguiTabs_setTextSize(tguiWidget* widget, unsigned int textSize)
{
    DOWNCAST(widget->This)->setTextSize(textSize);
}

unsigned int tguiTabs_getTextSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabs_setTabHeight(tguiWidget* widget, float tabHeight)
{
    DOWNCAST(widget->This)->setTabHeight(tabHeight);
}

float tguiTabs_getTabHeight(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getTabHeight();
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
