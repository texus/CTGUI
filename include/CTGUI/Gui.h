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


#ifndef CTGUI_GUI_H
#define CTGUI_GUI_H

#include <CTGUI/Global.h>
#include <CTGUI/Cursor.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API void tguiGui_setAbsoluteViewport(tguiGui* gui, tguiFloatRect viewport);
CTGUI_API void tguiGui_setRelativeViewport(tguiGui* gui, tguiFloatRect viewport);
CTGUI_API tguiFloatRect tguiGui_getViewport(const tguiGui* gui);

CTGUI_API void tguiGui_setAbsoluteView(tguiGui* gui, tguiFloatRect view);
CTGUI_API void tguiGui_setRelativeView(tguiGui* gui, tguiFloatRect view);
CTGUI_API tguiFloatRect tguiGui_getView(const tguiGui* gui);

CTGUI_API void tguiGui_setTabKeyUsageEnabled(tguiGui* gui, tguiBool enabled);
CTGUI_API tguiBool tguiGui_isTabKeyUsageEnabled(tguiGui* gui);

CTGUI_API void tguiGui_draw(tguiGui* gui);

CTGUI_API void tguiGui_setFont(tguiGui* gui, tguiFont* font);
CTGUI_API tguiFont* tguiGui_getFont(const tguiGui* gui);

CTGUI_API void tguiGui_add(tguiGui* gui, tguiWidget* widget, tguiUtf32 widgetName);
CTGUI_API tguiWidget* tguiGui_get(tguiGui* gui, tguiUtf32 widgetName);
CTGUI_API tguiWidget** tguiGui_getWidgets(tguiGui* gui, size_t* count); // tguiWidget_free must be called on each element in the returned array, count is set by the function to indicate the array length
CTGUI_API tguiBool tguiGui_remove(tguiGui* gui, tguiWidget* widget);
CTGUI_API void tguiGui_removeAllWidgets(tguiGui* gui);

CTGUI_API tguiWidget* tguiGui_getFocusedChild(tguiGui* gui);
CTGUI_API tguiWidget* tguiGui_getFocusedLeaf(tguiGui* gui);
CTGUI_API tguiWidget* tguiGui_getWidgetAtPos(tguiGui* gui, tguiVector2f pos, tguiBool recursive);
CTGUI_API tguiWidget* tguiGui_getWidgetBelowMouseCursor(tguiGui* gui, tguiVector2i mousePos, tguiBool recursive);

CTGUI_API tguiBool tguiGui_focusNextWidget(tguiGui* gui, tguiBool recursive);
CTGUI_API tguiBool tguiGui_focusPreviousWidget(tguiGui* gui, tguiBool recursive);

CTGUI_API void tguiGui_unfocusAllWidgets(tguiGui* gui);

CTGUI_API void tguiGui_moveWidgetToFront(tguiGui* gui, tguiWidget* widget);
CTGUI_API void tguiGui_moveWidgetToBack(tguiGui* gui, tguiWidget* widget);
CTGUI_API size_t tguiGui_moveWidgetForward(tguiGui* gui, tguiWidget* widget);
CTGUI_API size_t tguiGui_moveWidgetBackward(tguiGui* gui, tguiWidget* widget);

CTGUI_API tguiBool tguiGui_setWidgetIndex(tguiGui* gui, tguiWidget* widget, size_t index);
CTGUI_API int tguiGui_getWidgetIndex(tguiGui* gui, tguiWidget* widget);

CTGUI_API void tguiGui_setOpacity(tguiGui* gui, float alpha);
CTGUI_API float tguiGui_getOpacity(const tguiGui* gui);

CTGUI_API void tguiGui_setTextSize(tguiGui* gui, unsigned int size);
CTGUI_API unsigned int tguiGui_getTextSize(const tguiGui* gui);

CTGUI_API tguiBool tguiGui_loadWidgetsFromFile(tguiGui* gui, const char* filename, tguiBool replaceExisting);
CTGUI_API tguiBool tguiGui_saveWidgetsToFile(tguiGui* gui, const char* filename);

CTGUI_API void tguiGui_setDrawingUpdatesTime(tguiGui* gui, tguiBool drawUpdatesTime);

CTGUI_API tguiBool tguiGui_updateTime(tguiGui* gui);

CTGUI_API void tguiGui_setOverrideMouseCursor(tguiGui* gui, tguiCursorType type);
CTGUI_API void tguiGui_restoreOverrideMouseCursor(tguiGui* gui);
CTGUI_API void tguiGui_requestMouseCursor(tguiGui* gui, tguiCursorType type);

CTGUI_API tguiVector2f tguiGui_mapPixelToCoords(const tguiGui* gui, tguiVector2i pixel);
CTGUI_API tguiVector2f tguiGui_mapCoordsToPixel(const tguiGui* gui, tguiVector2f coord);

CTGUI_API void tguiGui_setKeyboardNavigationEnabled(tguiGui* gui, tguiBool enabled);
CTGUI_API tguiBool tguiGui_isKeyboardNavigationEnabled(const tguiGui* gui);

CTGUI_API void tguiGui_mainLoop(tguiGui* gui, tguiColor* clearColor);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // CTGUI_GUI_H

