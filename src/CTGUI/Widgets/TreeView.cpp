/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2019 Bruno Van de Velde (vdv_b@tgui.eu)
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


#include <CTGUI/Widgets/TreeView.h>
#include <CTGUI/WidgetStruct.h>

#include <TGUI/Widgets/TreeView.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::TreeView>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiTreeView_create(void)
{
    return new tguiWidget(tgui::TreeView::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiTreeView_addItem(tguiWidget* widget, const sfUint32** hierarcy, unsigned int hierarchyLength, sfBool createParents)
{
    std::vector<sf::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (unsigned int i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(hierarcy[i]);

    return DOWNCAST(widget->This)->addItem(convertedHierarchy, createParents != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeView_expand(tguiWidget* widget, const sfUint32** hierarcy, unsigned int hierarchyLength)
{
    std::vector<sf::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (unsigned int i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(hierarcy[i]);

    DOWNCAST(widget->This)->expand(convertedHierarchy);
}

void tguiTreeView_collapse(tguiWidget* widget, const sfUint32** hierarcy, unsigned int hierarchyLength)
{
    std::vector<sf::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (unsigned int i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(hierarcy[i]);

    DOWNCAST(widget->This)->collapse(convertedHierarchy);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeView_expandAll(tguiWidget* widget)
{
    DOWNCAST(widget->This)->expandAll();
}

void tguiTreeView_collapseAll(tguiWidget* widget)
{
    DOWNCAST(widget->This)->collapseAll();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiTreeView_removeItem(tguiWidget* widget, const sfUint32** hierarcy, unsigned int hierarchyLength, sfBool removeParentsWhenEmpty)
{
    std::vector<sf::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (unsigned int i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(hierarcy[i]);

    return DOWNCAST(widget->This)->removeItem(convertedHierarchy, removeParentsWhenEmpty != 0);
}

void tguiTreeView_removeAllItems(tguiWidget* widget)
{
    DOWNCAST(widget->This)->removeAllItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeView_deselectItem(tguiWidget* widget)
{
    DOWNCAST(widget->This)->deselectItem();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeView_setItemHeight(tguiWidget* widget, unsigned int itemHeight)
{
    DOWNCAST(widget->This)->setItemHeight(itemHeight);
}

unsigned int tguiTreeView_getItemHeight(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getItemHeight();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeView_setTextSize(tguiWidget* widget, unsigned int size)
{
    DOWNCAST(widget->This)->setTextSize(size);
}

unsigned int tguiTreeView_getTextSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getTextSize();
}

