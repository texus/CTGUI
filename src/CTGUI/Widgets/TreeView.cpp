// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/TreeView.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/TreeView.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::TreeView>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiTreeView_create(void)
{
    return ctgui::addWidgetRef(tgui::TreeView::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeView_setItemHeight(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setItemHeight(value);
}

unsigned int tguiTreeView_getItemHeight(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getItemHeight();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTreeView_addItem(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiBool createParents)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (size_t i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(thisWidget->This)->addItem(std::move(convertedHierarchy), createParents != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTreeView_changeItem(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiUtf32 leafText)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (size_t i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(thisWidget->This)->changeItem(std::move(convertedHierarchy), ctgui::toCppStr(leafText));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeView_expand(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (size_t i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    DOWNCAST(thisWidget->This)->expand(std::move(convertedHierarchy));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeView_collapse(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (size_t i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    DOWNCAST(thisWidget->This)->collapse(std::move(convertedHierarchy));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeView_expandAll(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->expandAll();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeView_collapseAll(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->collapseAll();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeView_deselectItem(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->deselectItem();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTreeView_removeAllItems(tguiWidget* thisWidget)
{
    DOWNCAST(thisWidget->This)->removeAllItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const tguiUtf32* tguiTreeView_getSelectedItem(const tguiWidget* thisWidget, size_t* returnCount)
{
    static std::vector<tgui::String> cppStrings;
    cppStrings = DOWNCAST(thisWidget->This)->getSelectedItem();

    static std::vector<tguiUtf32> cStrings;
    cStrings.clear();
    cStrings.reserve(cppStrings.size());
    for (const auto& item : cppStrings)
        cStrings.emplace_back(reinterpret_cast<tguiUtf32>(item.c_str()));

    *returnCount = cStrings.size();
    return cStrings.data();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const tguiUtf32* tguiTreeView_getHoveredItem(const tguiWidget* thisWidget, size_t* returnCount)
{
    static std::vector<tgui::String> cppStrings;
    cppStrings = DOWNCAST(thisWidget->This)->getHoveredItem();

    static std::vector<tguiUtf32> cStrings;
    cStrings.clear();
    cStrings.reserve(cppStrings.size());
    for (const auto& item : cppStrings)
        cStrings.emplace_back(reinterpret_cast<tguiUtf32>(item.c_str()));

    *returnCount = cStrings.size();
    return cStrings.data();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTreeView_setItemIndexInParent(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, size_t index)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (size_t i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(thisWidget->This)->setItemIndexInParent(std::move(convertedHierarchy), index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int tguiTreeView_getItemIndexInParent(const tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (size_t i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(thisWidget->This)->getItemIndexInParent(std::move(convertedHierarchy));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTreeView_selectItem(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (size_t i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(thisWidget->This)->selectItem(std::move(convertedHierarchy));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTreeView_removeItem(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiBool removeParentsWhenEmpty)
{
    std::vector<tgui::String> convertedHierarchy;
    convertedHierarchy.reserve(hierarchyLength);
    for (size_t i = 0; i < hierarchyLength; ++i)
        convertedHierarchy.push_back(ctgui::toCppStr(hierarchy[i]));

    return DOWNCAST(thisWidget->This)->removeItem(std::move(convertedHierarchy), removeParentsWhenEmpty != 0);
}

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
    cNode.text = reinterpret_cast<tguiUtf32>(cppNode.text.c_str());
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
