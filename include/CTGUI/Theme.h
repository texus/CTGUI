// This file is generated, it should not be edited directly.

#ifndef CTGUI_THEME_H
#define CTGUI_THEME_H

#include <CTGUI/Global.h>


CTGUI_API tguiTheme* tguiTheme_create(void);
CTGUI_API tguiTheme* tguiTheme_copy(const tguiTheme* theme);
CTGUI_API void tguiTheme_destroy(tguiTheme* theme);

CTGUI_API tguiBool tguiTheme_load(tguiTheme* theme, const char* filename);

CTGUI_API void tguiTheme_replace(tguiTheme* theme, tguiTheme* otherTheme);

CTGUI_API tguiRendererData* tguiTheme_getRenderer(tguiTheme* theme, const char* id);

CTGUI_API void tguiTheme_setDefault(tguiTheme* defaultTheme);
CTGUI_API tguiTheme* tguiTheme_getDefault(void);

CTGUI_API tguiBool tguiTheme_hasGlobalProperty(const tguiTheme* theme, tguiUtf32 property);

CTGUI_API tguiBool tguiTheme_getGlobalPropertyBool(const tguiTheme* theme, tguiUtf32 property);
CTGUI_API tguiFont* tguiTheme_getGlobalPropertyFont(const tguiTheme* theme, tguiUtf32 property);
CTGUI_API tguiColor tguiTheme_getGlobalPropertyColor(const tguiTheme* theme, tguiUtf32 property);
CTGUI_API tguiUtf32 tguiTheme_getGlobalPropertyString(const tguiTheme* theme, tguiUtf32 property);
CTGUI_API float tguiTheme_getGlobalPropertyNumber(const tguiTheme* theme, tguiUtf32 property);
CTGUI_API tguiOutline* tguiTheme_getGlobalPropertyOutline(const tguiTheme* theme, tguiUtf32 property);
CTGUI_API tguiTexture* tguiTheme_getGlobalPropertyTexture(const tguiTheme* theme, tguiUtf32 property);
CTGUI_API tguiUint32 tguiTheme_getGlobalPropertyTextStyle(const tguiTheme* theme, tguiUtf32 property);
CTGUI_API tguiRendererData* tguiTheme_getGlobalPropertyRendererData(const tguiTheme* theme, tguiUtf32 property);

CTGUI_API void tguiTheme_addRendererDefaultSubwidget(tguiUtf32 widgetType, tguiUtf32 property, tguiUtf32 propertyWidgetType);
CTGUI_API tguiUtf32 tguiTheme_getRendererDefaultSubwidget(tguiUtf32 widgetType, tguiUtf32 property);

CTGUI_API void tguiTheme_addRendererInheritedGlobalProperty(tguiUtf32 widgetType, tguiUtf32 property, tguiUtf32 globalProperty);
CTGUI_API tguiUtf32 tguiTheme_getRendererInheritedGlobalProperty(tguiUtf32 widgetType, tguiUtf32 property);

CTGUI_API void tguiTheme_addRenderer(tguiTheme* thisTheme, tguiUtf32 id, const tguiRendererData* renderer);

CTGUI_API tguiBool tguiTheme_removeRenderer(tguiTheme* thisTheme, tguiUtf32 id);

CTGUI_API tguiUtf32 tguiTheme_getPrimary(const tguiTheme* thisTheme);

CTGUI_API void tguiTheme_addRendererInheritanceParent(tguiUtf32 widgetType, tguiUtf32 parentType);

CTGUI_API tguiUtf32 tguiTheme_getRendererInheritanceParent(tguiUtf32 widgetType);

#endif // CTGUI_THEME_H

