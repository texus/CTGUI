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


#include <CTGUI/Widgets/TreeView.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/TreeView.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::TreeView>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static std::vector<tgui::String> convertHierarchy(const tguiUtf32* hierarchy, unsigned int hierarchyLength)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (unsigned int i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.emplace_back(ctgui::toCppStr(hierarchy[i]));

    return convertedHierarchy;
}

static void convertNode(const tgui::TreeView::ConstNode& cppNode, tguiTreeViewConstNode& cNode)
{
    cNode.expanded = cppNode.expanded;
    cNode.text = cppNode.text.c_str();
    cNode.nodesCount = cppNode.nodes.size();
    if (cppNode.nodes.empty())
        cNode.nodes = nullptr;
    else
    {
        cNode.nodes = new tguiTreeViewConstNode[cppNode.nodes.size()];
        for (size_t i = 0; i < cppNode.nodes.size(); ++i)
            convertNode(cppNode.nodes[i], cNode.nodes[i]);
    }
}

static void freeSubNodes(tguiTreeViewConstNode& node)
{
    if (node.nodesCount == 0)
        return;

    for (size_t i = 0; i < node.nodesCount; ++i)
        freeSubNodes(node.nodes[i]);

    delete[] node.nodes;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeViewConstNode_free(tguiTreeViewConstNode* node)
{
    if (!node)
        return;

    freeSubNodes(*node);
    delete node;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiTreeView_create(void)
{
    return ctgui::addWidgetRef(tgui::TreeView::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTreeView_addItem(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength, tguiBool createParents)
{
    return DOWNCAST(widget->This)->addItem(convertHierarchy(hierarchy, hierarchyLength), createParents != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTreeView_changeItem(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength, tguiUtf32 leafText)
{
    return DOWNCAST(widget->This)->changeItem(convertHierarchy(hierarchy, hierarchyLength), ctgui::toCppStr(leafText));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeView_expand(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength)
{
    DOWNCAST(widget->This)->expand(convertHierarchy(hierarchy, hierarchyLength));
}

void tguiTreeView_collapse(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength)
{
    DOWNCAST(widget->This)->collapse(convertHierarchy(hierarchy, hierarchyLength));
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

tguiBool tguiTreeView_selectItem(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength)
{
    return DOWNCAST(widget->This)->selectItem(convertHierarchy(hierarchy, hierarchyLength));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeView_deselectItem(tguiWidget* widget)
{
    DOWNCAST(widget->This)->deselectItem();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTreeView_removeItem(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength, tguiBool removeParentsWhenEmpty)
{
    return DOWNCAST(widget->This)->removeItem(convertHierarchy(hierarchy, hierarchyLength), removeParentsWhenEmpty != 0);
}

void tguiTreeView_removeAllItems(tguiWidget* widget)
{
    DOWNCAST(widget->This)->removeAllItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const tguiUtf32* tguiTreeView_getSelectedItem(const tguiWidget* widget, size_t* count)
{
    static std::vector<tgui::String> cppItems;
    cppItems = DOWNCAST(widget->This)->getSelectedItem();

    static std::vector<tguiUtf32> cItems;
    cItems.clear();
    cItems.reserve(cppItems.size());
    for (const auto& item : cppItems)
        cItems.emplace_back(item.c_str());

    *count = cItems.size();
    return cItems.data();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const tguiTreeViewConstNode* tguiTreeView_getNode(const tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength)
{
    // A copy of the text strings still needs to exist after this function finished
    static tgui::TreeView::ConstNode cppNode;
    cppNode = DOWNCAST(widget->This)->getNode(convertHierarchy(hierarchy, hierarchyLength));

    tguiTreeViewConstNode* cNode = new tguiTreeViewConstNode;
    convertNode(cppNode, *cNode);
    return cNode;
}

tguiTreeViewConstNode** tguiTreeView_getNodes(const tguiWidget* widget, size_t* count)
{
    // A copy of the text strings still needs to exist after this function finished
    static std::vector<tgui::TreeView::ConstNode> cppNodes;
    cppNodes = DOWNCAST(widget->This)->getNodes();

    if (cppNodes.empty())
    {
        *count = 0;
        return nullptr;
    }

    static std::vector<tguiTreeViewConstNode*> cNodes;
    cNodes.resize(cppNodes.size());
    for (size_t i = 0; i < cppNodes.size(); ++i)
    {
        cNodes[i] = new tguiTreeViewConstNode;
        convertNode(cppNodes[i], *cNodes[i]);
    }

    *count = cppNodes.size();
    return cNodes.data();
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

void tguiTreeView_setVerticalScrollbarValue(tguiWidget* widget, unsigned int value)
{
    DOWNCAST(widget->This)->setVerticalScrollbarValue(value);
}

unsigned int tguiTreeView_getVerticalScrollbarValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getVerticalScrollbarValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeView_setHorizontalScrollbarValue(tguiWidget* widget, unsigned int value)
{
    DOWNCAST(widget->This)->setHorizontalScrollbarValue(value);
}

unsigned int tguiTreeView_getHorizontalScrollbarValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getHorizontalScrollbarValue();
}
