/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2016 Bruno Van de Velde (vdv_b@tgui.eu)
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

#include <CTGUI/Config.h>
#include <CTGUI/Outline.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Texture.h>

CTGUI_API tguiRenderer* tguiChildWindowRenderer_create(void);
CTGUI_API tguiRenderer* tguiChildWindowRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiChildWindowRenderer_setBorders(tguiRenderer* renderer, tguiOutline borders);
CTGUI_API tguiOutline tguiChildWindowRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setTitleBarColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiChildWindowRenderer_getTitleBarColor(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setTitleColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiChildWindowRenderer_getTitleColor(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiChildWindowRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setBorderColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiChildWindowRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setTitleBarHeight(tguiRenderer* renderer, float height);
CTGUI_API float tguiChildWindowRenderer_getTitleBarHeight(tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setDistanceToSide(tguiRenderer* renderer, float distance);
CTGUI_API float tguiChildWindowRenderer_getDistanceToSide(tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setPaddingBetweenButtons(tguiRenderer* renderer, float padding);
CTGUI_API float tguiChildWindowRenderer_getPaddingBetweenButtons(tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setTextureTitleBar(tguiRenderer* renderer, sfTexture* texture);

CTGUI_API void tguiChildWindowRenderer_setCloseButton(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiChildWindowRenderer_getCloseButton(const tguiRenderer* renderer);
CTGUI_API void tguiChildWindowRenderer_setMaximizeButton(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiChildWindowRenderer_getMaximizeButton(const tguiRenderer* renderer);
CTGUI_API void tguiChildWindowRenderer_setMinimizeButton(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiChildWindowRenderer_getMinimizeButton(const tguiRenderer* renderer);

#endif // CTGUI_CHILD_WINDOW_RENDERER_H

