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


#ifndef CTGUI_THEME_H
#define CTGUI_THEME_H

#include <CTGUI/Global.h>

CTGUI_API tguiTheme* tguiTheme_create(void);
CTGUI_API tguiTheme* tguiTheme_copy(const tguiTheme* theme);
CTGUI_API void tguiTheme_free(tguiTheme* theme);

CTGUI_API tguiBool tguiTheme_load(tguiTheme* theme, const char* filename);

CTGUI_API void tguiTheme_replace(tguiTheme* theme, tguiTheme* otherTheme);

CTGUI_API tguiRendererData* tguiTheme_getRenderer(tguiTheme* theme, const char* id);
CTGUI_API void tguiTheme_addRenderer(tguiTheme* theme, const char* id, tguiRendererData* renderer);
CTGUI_API tguiBool tguiTheme_removeRenderer(tguiTheme* theme, const char* id);

CTGUI_API tguiUtf32 tguiTheme_getPrimary(const tguiTheme* theme);

CTGUI_API void tguiTheme_setDefault(tguiTheme* defaultTheme);
CTGUI_API tguiTheme* tguiTheme_getDefault(void);

CTGUI_API tguiBool tguiTheme_hasGlobalProperty(const tguiTheme* theme, tguiUtf32 property);

CTGUI_API tguiBool tguiTheme_getGlobalPropertyBool(const tguiTheme* theme, tguiUtf32 property);
CTGUI_API tguiFont* tguiTheme_getGlobalPropertyFont(const tguiTheme* theme, tguiUtf32 property);
CTGUI_API tguiColor* tguiTheme_getGlobalPropertyColor(const tguiTheme* theme, tguiUtf32 property);
CTGUI_API tguiUtf32 tguiTheme_getGlobalPropertyString(const tguiTheme* theme, tguiUtf32 property);
CTGUI_API float tguiTheme_getGlobalPropertyNumber(const tguiTheme* theme, tguiUtf32 property);
CTGUI_API tguiOutline* tguiTheme_getGlobalPropertyOutline(const tguiTheme* theme, tguiUtf32 property);
CTGUI_API tguiTexture* tguiTheme_getGlobalPropertyTexture(const tguiTheme* theme, tguiUtf32 property);
CTGUI_API tguiUint32 tguiTheme_getGlobalPropertyTextStyle(const tguiTheme* theme, tguiUtf32 property);
CTGUI_API tguiRendererData* tguiTheme_getGlobalPropertyRendererData(const tguiTheme* theme, tguiUtf32 property);

CTGUI_API void tguiTheme_addRendererInheritanceParent(tguiUtf32 widgetType, tguiUtf32 parentType);
CTGUI_API tguiUtf32 tguiTheme_getRendererInheritanceParent(tguiUtf32 widgetType);

CTGUI_API void tguiTheme_addRendererDefaultSubwidget(tguiUtf32 widgetType, tguiUtf32 property, tguiUtf32 propertyWidgetType);
CTGUI_API tguiUtf32 tguiTheme_getRendererDefaultSubwidget(tguiUtf32 widgetType, tguiUtf32 property);

CTGUI_API void tguiTheme_addRendererInheritedGlobalProperty(tguiUtf32 widgetType, tguiUtf32 property, tguiUtf32 globalProperty);
CTGUI_API tguiUtf32 tguiTheme_getRendererInheritedGlobalProperty(tguiUtf32 widgetType, tguiUtf32 property);

#endif // CTGUI_THEME_H

