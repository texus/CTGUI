#ifndef CTGUI_THEME_H
#define CTGUI_THEME_H

#include <CTGUI/Global.h>

@TGUI_GENERATED_HEAD@

CTGUI_API tguiTheme* tguiTheme_create(void);
CTGUI_API tguiTheme* tguiTheme_copy(const tguiTheme* theme);
CTGUI_API void tguiTheme_free(tguiTheme* theme);

CTGUI_API tguiBool tguiTheme_load(tguiTheme* theme, const char* filename);

CTGUI_API void tguiTheme_replace(tguiTheme* theme, tguiTheme* otherTheme);

CTGUI_API tguiRendererData* tguiTheme_getRenderer(tguiTheme* theme, const char* id);

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

CTGUI_API void tguiTheme_addRendererDefaultSubwidget(tguiUtf32 widgetType, tguiUtf32 property, tguiUtf32 propertyWidgetType);
CTGUI_API tguiUtf32 tguiTheme_getRendererDefaultSubwidget(tguiUtf32 widgetType, tguiUtf32 property);

CTGUI_API void tguiTheme_addRendererInheritedGlobalProperty(tguiUtf32 widgetType, tguiUtf32 property, tguiUtf32 globalProperty);
CTGUI_API tguiUtf32 tguiTheme_getRendererInheritedGlobalProperty(tguiUtf32 widgetType, tguiUtf32 property);

@TGUI_GENERATED_BODY@

#endif // CTGUI_THEME_H

