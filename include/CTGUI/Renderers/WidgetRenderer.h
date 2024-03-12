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


#ifndef CTGUI_WIDGET_RENDERER_H
#define CTGUI_WIDGET_RENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiWidgetRenderer_create(void);
CTGUI_API tguiRenderer* tguiWidgetRenderer_copy(const tguiRenderer* other);
CTGUI_API void tguiWidgetRenderer_free(tguiRenderer* renderer);

CTGUI_API void tguiWidgetRenderer_setOpacity(tguiRenderer* renderer, float alpha);
CTGUI_API float tguiWidgetRenderer_getOpacity(const tguiRenderer* renderer);

CTGUI_API void tguiWidgetRenderer_setOpacityDisabled(tguiRenderer* renderer, float alpha);
CTGUI_API float tguiWidgetRenderer_getOpacityDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiWidgetRenderer_setFont(tguiRenderer* renderer, tguiFont* font);
CTGUI_API tguiFont* tguiWidgetRenderer_getFont(const tguiRenderer* renderer);

CTGUI_API void tguiWidgetRenderer_setTextSize(tguiRenderer* renderer, unsigned int size);
CTGUI_API unsigned int tguiWidgetRenderer_getTextSize(const tguiRenderer* renderer);

CTGUI_API void tguiWidgetRenderer_setTransparentTexture(tguiRenderer* renderer, tguiBool ignoreTransparentParts);
CTGUI_API tguiBool tguiWidgetRenderer_getTransparentTexture(tguiRenderer* renderer);

CTGUI_API void tguiWidgetRenderer_setData(tguiRenderer* renderer, tguiRendererData* data);
CTGUI_API tguiRendererData* tguiWidgetRenderer_getData(const tguiRenderer* renderer);

CTGUI_API void tguiWidgetRenderer_setPropertyBool(tguiRenderer* renderer, tguiUtf32 property, tguiBool value);
CTGUI_API void tguiWidgetRenderer_setPropertyFont(tguiRenderer* renderer, tguiUtf32 property, tguiFont* value);
CTGUI_API void tguiWidgetRenderer_setPropertyColor(tguiRenderer* renderer, tguiUtf32 property, tguiColor* value);
CTGUI_API void tguiWidgetRenderer_setPropertyString(tguiRenderer* renderer, tguiUtf32 property, tguiUtf32 value);
CTGUI_API void tguiWidgetRenderer_setPropertyNumber(tguiRenderer* renderer, tguiUtf32 property, float value);
CTGUI_API void tguiWidgetRenderer_setPropertyOutline(tguiRenderer* renderer, tguiUtf32 property, tguiOutline* value);
CTGUI_API void tguiWidgetRenderer_setPropertyTexture(tguiRenderer* renderer, tguiUtf32 property, tguiTexture* value);
CTGUI_API void tguiWidgetRenderer_setPropertyTextStyle(tguiRenderer* renderer, tguiUtf32 property, tguiUint32 value);
CTGUI_API void tguiWidgetRenderer_setPropertyRendererData(tguiRenderer* renderer, tguiUtf32 property, tguiRendererData* value);

CTGUI_API tguiBool tguiWidgetRenderer_hasProperty(const tguiRenderer* renderer, tguiUtf32 property);

CTGUI_API tguiBool tguiWidgetRenderer_getPropertyBool(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiFont* tguiWidgetRenderer_getPropertyFont(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiColor* tguiWidgetRenderer_getPropertyColor(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiUtf32 tguiWidgetRenderer_getPropertyString(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API float tguiWidgetRenderer_getPropertyNumber(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiOutline* tguiWidgetRenderer_getPropertyOutline(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiTexture* tguiWidgetRenderer_getPropertyTexture(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiUint32 tguiWidgetRenderer_getPropertyTextStyle(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiRendererData* tguiWidgetRenderer_getPropertyRendererData(const tguiRenderer* renderer, tguiUtf32 property);

#endif // CTGUI_WIDGET_RENDERER_H

