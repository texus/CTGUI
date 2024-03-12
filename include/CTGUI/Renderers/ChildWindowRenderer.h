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


#ifndef CTGUI_CHILD_WINDOW_RENDERER_H
#define CTGUI_CHILD_WINDOW_RENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiChildWindowRenderer_create(void);
CTGUI_API tguiRenderer* tguiChildWindowRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiChildWindowRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders);
CTGUI_API tguiOutline* tguiChildWindowRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setTitleBarColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiChildWindowRenderer_getTitleBarColor(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setTitleColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiChildWindowRenderer_getTitleColor(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiChildWindowRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiChildWindowRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setBorderColorFocused(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiChildWindowRenderer_getBorderColorFocused(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setBorderBelowTitleBar(tguiRenderer* renderer, float border);
CTGUI_API float tguiChildWindowRenderer_getBorderBelowTitleBar(tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setTitleBarHeight(tguiRenderer* renderer, float height);
CTGUI_API float tguiChildWindowRenderer_getTitleBarHeight(tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setDistanceToSide(tguiRenderer* renderer, float distance);
CTGUI_API float tguiChildWindowRenderer_getDistanceToSide(tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setPaddingBetweenButtons(tguiRenderer* renderer, float padding);
CTGUI_API float tguiChildWindowRenderer_getPaddingBetweenButtons(tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setMinimumResizableBorderWidth(tguiRenderer* renderer, float minimumBorderWidth);
CTGUI_API float tguiChildWindowRenderer_getMinimumResizableBorderWidth(tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setShowTextOnTitleButtons(tguiRenderer* renderer, tguiBool showTitle);
CTGUI_API tguiBool tguiChildWindowRenderer_getShowTextOnTitleButtons(tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setTextureTitleBar(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiChildWindowRenderer_getTextureTitleBar(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiChildWindowRenderer_getTextureBackground(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setCloseButton(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiChildWindowRenderer_getCloseButton(const tguiRenderer* renderer);
CTGUI_API void tguiChildWindowRenderer_setMaximizeButton(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiChildWindowRenderer_getMaximizeButton(const tguiRenderer* renderer);
CTGUI_API void tguiChildWindowRenderer_setMinimizeButton(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiChildWindowRenderer_getMinimizeButton(const tguiRenderer* renderer);

#endif // CTGUI_CHILD_WINDOW_RENDERER_H

