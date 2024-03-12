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


#ifndef CTGUI_TREE_VIEW_H
#define CTGUI_TREE_VIEW_H

#include <CTGUI/Widget.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

CTGUI_API tguiWidget* tguiTreeView_create(void);

CTGUI_API tguiBool tguiTreeView_addItem(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength, tguiBool createParents);
CTGUI_API tguiBool tguiTreeView_changeItem(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength, tguiUtf32 leafText);

CTGUI_API void tguiTreeView_expand(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength);
CTGUI_API void tguiTreeView_collapse(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength);

CTGUI_API void tguiTreeView_expandAll(tguiWidget* widget);
CTGUI_API void tguiTreeView_collapseAll(tguiWidget* widget);

CTGUI_API tguiBool tguiTreeView_selectItem(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength);

CTGUI_API void tguiTreeView_deselectItem(tguiWidget* widget);

CTGUI_API tguiBool tguiTreeView_removeItem(tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength, tguiBool removeParentsWhenEmpty);
CTGUI_API void tguiTreeView_removeAllItems(tguiWidget* widget);

CTGUI_API const tguiUtf32* tguiTreeView_getSelectedItem(const tguiWidget* widget, size_t* count); // count is set by the function to indicate length of returned array

CTGUI_API const tguiTreeViewConstNode* tguiTreeView_getNode(const tguiWidget* widget, const tguiUtf32* hierarchy, unsigned int hierarchyLength); // tguiTreeViewConstNode_free must be called on the returned value
CTGUI_API tguiTreeViewConstNode** tguiTreeView_getNodes(const tguiWidget* widget, size_t* count); // tguiTreeViewConstNode_free must be called on each element in the returned array, count is set by the function to indicate the array length. NULL is returned if the tree view is empty.

CTGUI_API void tguiTreeView_setItemHeight(tguiWidget* widget, unsigned int itemHeight);
CTGUI_API unsigned int tguiTreeView_getItemHeight(const tguiWidget* widget);

CTGUI_API void tguiTreeView_setVerticalScrollbarValue(tguiWidget* widget, unsigned int value);
CTGUI_API unsigned int tguiTreeView_getVerticalScrollbarValue(const tguiWidget* widget);

CTGUI_API void tguiTreeView_setHorizontalScrollbarValue(tguiWidget* widget, unsigned int value);
CTGUI_API unsigned int tguiTreeView_getHorizontalScrollbarValue(const tguiWidget* widget);

#endif // CTGUI_TREE_VIEW_H

