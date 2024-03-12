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


#ifndef CTGUI_LABEL_RENDERER_H
#define CTGUI_LABEL_RENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiLabelRenderer_create(void);
CTGUI_API tguiRenderer* tguiLabelRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiLabelRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders);
CTGUI_API tguiOutline* tguiLabelRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setPadding(tguiRenderer* renderer, tguiOutline* padding);
CTGUI_API tguiOutline* tguiLabelRenderer_getPadding(const tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiLabelRenderer_getTextColor(const tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setTextOutlineColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiLabelRenderer_getTextOutlineColor(const tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setTextOutlineThickness(tguiRenderer* renderer, float thickness);
CTGUI_API float tguiLabelRenderer_getTextOutlineThickness(const tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiLabelRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiLabelRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setTextStyle(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiLabelRenderer_getTextStyle(tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiLabelRenderer_getScrollbar(const tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setScrollbarWidth(tguiRenderer* renderer, float width);
CTGUI_API float tguiLabelRenderer_getScrollbarWidth(const tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiLabelRenderer_getTextureBackground(const tguiRenderer* renderer);

#endif // CTGUI_LABEL_RENDERER_H

