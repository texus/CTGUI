typedef struct tguiTreeViewConstNode tguiTreeViewConstNode; // Needed because the struct contains a pointer to itself

struct tguiTreeViewConstNode
{
    tguiBool  expanded;
    tguiUtf32 text;
    tguiTreeViewConstNode* nodes;
    size_t nodesCount;
};

CTGUI_API void tguiTreeViewConstNode_free(tguiTreeViewConstNode* node); // Needs to be called on the pointer returned by tguiTreeView_getNode, and on EACH element of the array returned by tguiTreeView_getNodes. Do NOT call this function on the recursive nodes that are found inside the struct.

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API const tguiTreeViewConstNode* tguiTreeView_getNode(const tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength); // tguiTreeViewConstNode_free must be called on the returned value
CTGUI_API tguiTreeViewConstNode** tguiTreeView_getNodes(const tguiWidget* widget, size_t* count); // tguiTreeViewConstNode_free must be called on each element in the returned array, count is set by the function to indicate the array length. NULL is returned if the tree view is empty.
