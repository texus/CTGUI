// This file is generated, it should not be edited directly.

#ifndef CTGUI_WIDGETRENDERER_H
#define CTGUI_WIDGETRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiWidgetRenderer_create(void);
CTGUI_API tguiRenderer* tguiWidgetRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiWidgetRenderer_setOpacity(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiWidgetRenderer_getOpacity(const tguiRenderer* thisRenderer);

CTGUI_API void tguiWidgetRenderer_setOpacityDisabled(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiWidgetRenderer_getOpacityDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiWidgetRenderer_setFont(tguiRenderer* thisRenderer, const tguiFont* value);
CTGUI_API const tguiFont* tguiWidgetRenderer_getFont(const tguiRenderer* thisRenderer);

CTGUI_API void tguiWidgetRenderer_setTextSize(tguiRenderer* thisRenderer, unsigned int value);
CTGUI_API unsigned int tguiWidgetRenderer_getTextSize(const tguiRenderer* thisRenderer);

CTGUI_API void tguiWidgetRenderer_setTransparentTexture(tguiRenderer* thisRenderer, tguiBool value);
CTGUI_API tguiBool tguiWidgetRenderer_getTransparentTexture(const tguiRenderer* thisRenderer);

CTGUI_API void tguiWidgetRenderer_setData(tguiRenderer* thisRenderer, const tguiRendererData* value);
CTGUI_API const tguiRendererData* tguiWidgetRenderer_getData(const tguiRenderer* thisRenderer);

CTGUI_API void tguiWidgetRenderer_setPropertyBool(tguiRenderer* thisRenderer, tguiUtf32 property, tguiBool value);

CTGUI_API void tguiWidgetRenderer_setPropertyFont(tguiRenderer* thisRenderer, tguiUtf32 property, const tguiFont* value);

CTGUI_API void tguiWidgetRenderer_setPropertyColor(tguiRenderer* thisRenderer, tguiUtf32 property, tguiColor value);

CTGUI_API void tguiWidgetRenderer_setPropertyString(tguiRenderer* thisRenderer, tguiUtf32 property, tguiUtf32 value);

CTGUI_API void tguiWidgetRenderer_setPropertyNumber(tguiRenderer* thisRenderer, tguiUtf32 property, float value);

CTGUI_API void tguiWidgetRenderer_setPropertyOutline(tguiRenderer* thisRenderer, tguiUtf32 property, const tguiOutline* value);

CTGUI_API void tguiWidgetRenderer_setPropertyTexture(tguiRenderer* thisRenderer, tguiUtf32 property, const tguiTexture* value);

CTGUI_API void tguiWidgetRenderer_setPropertyTextStyle(tguiRenderer* thisRenderer, tguiUtf32 property, tguiUint32 value);

CTGUI_API void tguiWidgetRenderer_setPropertyRendererData(tguiRenderer* thisRenderer, tguiUtf32 property, const tguiRendererData* value);

CTGUI_API tguiBool tguiWidgetRenderer_hasProperty(const tguiRenderer* renderer, tguiUtf32 property);

CTGUI_API tguiBool tguiWidgetRenderer_getPropertyBool(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiFont* tguiWidgetRenderer_getPropertyFont(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiColor tguiWidgetRenderer_getPropertyColor(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiUtf32 tguiWidgetRenderer_getPropertyString(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API float tguiWidgetRenderer_getPropertyNumber(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiOutline* tguiWidgetRenderer_getPropertyOutline(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiTexture* tguiWidgetRenderer_getPropertyTexture(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiUint32 tguiWidgetRenderer_getPropertyTextStyle(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiRendererData* tguiWidgetRenderer_getPropertyRendererData(const tguiRenderer* renderer, tguiUtf32 property);

CTGUI_API void tguiWidgetRenderer_free(tguiRenderer* renderer);

#endif // CTGUI_WIDGETRENDERER_H
