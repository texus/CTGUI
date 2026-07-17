// This file is generated, it should not be edited directly.

#ifndef CTGUI_THEME_H
#define CTGUI_THEME_H

#include <CTGUI/Global.h>


CTGUI_API tguiTheme* tguiTheme_create(void);
CTGUI_API tguiTheme* tguiTheme_copy(const tguiTheme* theme);
CTGUI_API void tguiTheme_destroy(tguiTheme* theme);

CTGUI_API tguiBool tguiTheme_load(tguiTheme* theme, tguiUtf32 filename);

CTGUI_API tguiBool tguiTheme_hasGlobalProperty(const tguiTheme* theme, tguiUtf32 property);

CTGUI_API tguiBool tguiTheme_getGlobalPropertyBool(const tguiTheme* theme, tguiUtf32 property, tguiBool* value);
CTGUI_API tguiBool tguiTheme_getGlobalPropertyFont(const tguiTheme* theme, tguiUtf32 property, tguiFont** value);
CTGUI_API tguiBool tguiTheme_getGlobalPropertyColor(const tguiTheme* theme, tguiUtf32 property, tguiColor* value);
CTGUI_API tguiBool tguiTheme_getGlobalPropertyString(const tguiTheme* theme, tguiUtf32 property, tguiUtf32* value);
CTGUI_API tguiBool tguiTheme_getGlobalPropertyNumber(const tguiTheme* theme, tguiUtf32 property, float* value);
CTGUI_API tguiBool tguiTheme_getGlobalPropertyOutline(const tguiTheme* theme, tguiUtf32 property, tguiOutline** value);
CTGUI_API tguiBool tguiTheme_getGlobalPropertyTexture(const tguiTheme* theme, tguiUtf32 property, tguiTexture** value);
CTGUI_API tguiBool tguiTheme_getGlobalPropertyTextStyle(const tguiTheme* theme, tguiUtf32 property, tguiUint32* value);
CTGUI_API tguiBool tguiTheme_getGlobalPropertyRendererData(const tguiTheme* theme, tguiUtf32 property, tguiRendererData** value);

CTGUI_API tguiUtf32 tguiTheme_getRendererDefaultSubwidget(tguiUtf32 widgetType, tguiUtf32 property);

CTGUI_API tguiUtf32 tguiTheme_getRendererInheritedGlobalProperty(tguiUtf32 widgetType, tguiUtf32 property);

CTGUI_API void tguiTheme_addRenderer(tguiTheme* thisTheme, tguiUtf32 id, tguiRendererData* renderer);

CTGUI_API tguiBool tguiTheme_removeRenderer(tguiTheme* thisTheme, tguiUtf32 id);

CTGUI_API tguiUtf32 tguiTheme_getPrimary(const tguiTheme* thisTheme);

CTGUI_API void tguiTheme_addRendererInheritanceParent(tguiUtf32 widgetType, tguiUtf32 parentType);

CTGUI_API tguiUtf32 tguiTheme_getRendererInheritanceParent(tguiUtf32 widgetType);

CTGUI_API tguiBool tguiTheme_load(tguiTheme* thisTheme, tguiUtf32 filename);

CTGUI_API void tguiTheme_replace(tguiTheme* thisTheme, tguiTheme* otherTheme);

CTGUI_API void tguiTheme_setDefault(const tguiTheme* defaultTheme);

CTGUI_API tguiTheme* tguiTheme_getDefault(void);

CTGUI_API tguiRendererData* tguiTheme_getRenderer(tguiTheme* thisTheme, tguiUtf32 id);

CTGUI_API void tguiTheme_addRendererDefaultSubwidget(tguiUtf32 widgetType, tguiUtf32 property, tguiUtf32 propertyWidgetType);

CTGUI_API void tguiTheme_addRendererInheritedGlobalProperty(tguiUtf32 widgetType, tguiUtf32 property, tguiUtf32 globalProperty);

#endif // CTGUI_THEME_H

