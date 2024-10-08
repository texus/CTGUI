// This file is generated, it should not be edited directly.

#ifndef CTGUI_TREEVIEW_H
#define CTGUI_TREEVIEW_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiTreeView_create(void);

CTGUI_API void tguiTreeView_setItemHeight(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiTreeView_getItemHeight(const tguiWidget* thisWidget);

CTGUI_API tguiBool tguiTreeView_addItem(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiBool createParents);

CTGUI_API tguiBool tguiTreeView_changeItem(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiUtf32 leafText);

CTGUI_API void tguiTreeView_expand(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength);

CTGUI_API void tguiTreeView_collapse(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength);

CTGUI_API void tguiTreeView_expandAll(tguiWidget* thisWidget);

CTGUI_API void tguiTreeView_collapseAll(tguiWidget* thisWidget);

CTGUI_API void tguiTreeView_deselectItem(tguiWidget* thisWidget);

CTGUI_API void tguiTreeView_removeAllItems(tguiWidget* thisWidget);

CTGUI_API const tguiUtf32* tguiTreeView_getSelectedItem(const tguiWidget* thisWidget, size_t* returnCount);

CTGUI_API const tguiUtf32* tguiTreeView_getHoveredItem(const tguiWidget* thisWidget, size_t* returnCount);

CTGUI_API tguiBool tguiTreeView_setItemIndexInParent(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, size_t index);

CTGUI_API int tguiTreeView_getItemIndexInParent(const tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength);

CTGUI_API tguiBool tguiTreeView_selectItem(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength);

CTGUI_API tguiBool tguiTreeView_removeItem(tguiWidget* thisWidget, const tguiUtf32* hierarchy, size_t hierarchyLength, tguiBool removeParentsWhenEmpty);

typedef struct tguiTreeViewConstNode tguiTreeViewConstNode; // Needed because the struct contains a pointer to itself

struct tguiTreeViewConstNode
{
    tguiBool  expanded;
    tguiUtf32 text;
    tguiTreeViewConstNode* nodes;
    size_t nodesCount;
};

CTGUI_API void tguiTreeViewConstNode_destroy(tguiTreeViewConstNode* node); // Needs to be called on the pointer returned by tguiTreeView_getNode, and on EACH element of the array returned by tguiTreeView_getNodes. Do NOT call this function on the recursive nodes that are found inside the struct.

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API const tguiTreeViewConstNode* tguiTreeView_getNode(const tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength); // tguiTreeViewConstNode_destroy must be called on the returned value
CTGUI_API tguiTreeViewConstNode** tguiTreeView_getNodes(const tguiWidget* widget, size_t* count); // tguiTreeViewConstNode_destroy must be called on each element in the returned array, count is set by the function to indicate the array length. NULL is returned if the tree view is empty.

#endif // CTGUI_TREEVIEW_H
