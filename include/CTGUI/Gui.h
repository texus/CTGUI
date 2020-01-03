/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2020 Bruno Van de Velde (vdv_b@tgui.eu)
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

#include <CTGUI/Config.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/RenderTexture.h>
#include <SFML/Window/Event.h>

CTGUI_API tguiGui* tguiGui_create(void);
CTGUI_API tguiGui* tguiGui_createFromTargetRenderWindow(sfRenderWindow* target);
CTGUI_API tguiGui* tguiGui_createFromTargetRenderTexture(sfRenderTexture* target);
CTGUI_API void tguiGui_destroy(tguiGui* gui);

CTGUI_API void tguiGui_setTargetRenderWindow(tguiGui* gui, sfRenderWindow* target);
CTGUI_API void tguiGui_setTargetRenderTexture(tguiGui* gui, sfRenderTexture* target);

CTGUI_API void tguiGui_setView(tguiGui* gui, const sfView* view);
CTGUI_API const sfView* tguiGui_getView(const tguiGui* gui);

CTGUI_API void tguiGui_handleEvent(tguiGui* gui, sfEvent event);

CTGUI_API void tguiGui_add(tguiGui* gui, tguiWidget* widget, const sfUint32* widgetName);
CTGUI_API tguiWidget* tguiGui_get(tguiGui* gui, const sfUint32* widgetName);
CTGUI_API tguiWidget** tguiGui_getWidgets(tguiGui* gui, size_t* count);
CTGUI_API const sfUint32** tguiGui_getWidgetNames(tguiGui* gui, size_t* count);
CTGUI_API void tguiGui_remove(tguiGui* gui, tguiWidget* widget);
CTGUI_API void tguiGui_removeAllWidgets(tguiGui* gui);

CTGUI_API void tguiGui_setTabKeyUsageEnabled(tguiGui* gui, sfBool enabled);
CTGUI_API sfBool tguiGui_isTabKeyUsageEnabled(tguiGui* gui);

CTGUI_API void tguiGui_draw(tguiGui* gui);

CTGUI_API void tguiGui_setFont(tguiGui* gui, sfFont* font);

CTGUI_API void tguiGui_setOpacity(tguiGui* gui, float alpha);
CTGUI_API float tguiGui_getOpacity(const tguiGui* gui);

CTGUI_API sfBool tguiGui_loadWidgetsFromFile(tguiGui* gui, const char* filename);
CTGUI_API sfBool tguiGui_saveWidgetsToFile(tguiGui* gui, const char* filename);

#endif // CTGUI_GUI_H

