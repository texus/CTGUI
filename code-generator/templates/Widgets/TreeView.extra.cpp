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

void tguiTreeViewConstNode_destroy(tguiTreeViewConstNode* node)
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
