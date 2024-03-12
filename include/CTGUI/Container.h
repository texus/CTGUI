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


#ifndef CTGUI_CONTAINER_H
#define CTGUI_CONTAINER_H

#include <CTGUI/Global.h>

CTGUI_API void tguiContainer_add(tguiWidget* container, tguiWidget* widget, tguiUtf32 widgetName);
CTGUI_API tguiWidget* tguiContainer_get(tguiWidget* container, tguiUtf32 widgetName);
CTGUI_API tguiWidget** tguiContainer_getWidgets(tguiWidget* container, size_t* count); // tguiWidget_free must be called on each element in the returned array, count is set by the function to indicate the array length
CTGUI_API tguiBool tguiContainer_remove(tguiWidget* container, tguiWidget* widget);
CTGUI_API void tguiContainer_removeAllWidgets(tguiWidget* container);

CTGUI_API void tguiContainer_moveWidgetToFront(tguiWidget* container, tguiWidget* widget);
CTGUI_API void tguiContainer_moveWidgetToBack(tguiWidget* container, tguiWidget* widget);
CTGUI_API size_t tguiContainer_moveWidgetForward(tguiWidget* container, tguiWidget* widget);
CTGUI_API size_t tguiContainer_moveWidgetBackward(tguiWidget* container, tguiWidget* widget);

CTGUI_API tguiBool tguiContainer_setWidgetIndex(tguiWidget* container, tguiWidget* widget, size_t index);
CTGUI_API int tguiContainer_getWidgetIndex(tguiWidget* container, tguiWidget* widget);

CTGUI_API tguiWidget* tguiContainer_getFocusedChild(tguiWidget* container);
CTGUI_API tguiWidget* tguiContainer_getFocusedLeaf(tguiWidget* container);
CTGUI_API tguiWidget* tguiContainer_getWidgetAtPos(tguiWidget* container, tguiVector2f pos, tguiBool recursive);

CTGUI_API tguiBool tguiContainer_focusNextWidget(tguiWidget* container, tguiBool recursive);
CTGUI_API tguiBool tguiContainer_focusPreviousWidget(tguiWidget* container, tguiBool recursive);

CTGUI_API tguiVector2f tguiContainer_getInnerSize(tguiWidget* container);
CTGUI_API tguiVector2f tguiContainer_getChildWidgetsOffset(tguiWidget* container);

CTGUI_API tguiBool tguiContainer_loadWidgetsFromFile(tguiWidget* container, const char* filename, tguiBool replaceExisting);
CTGUI_API tguiBool tguiContainer_saveWidgetsToFile(tguiWidget* container, const char* filename);

#endif // CTGUI_CONTAINER_H

