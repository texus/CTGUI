/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2018 Bruno Van de Velde (vdv_b@tgui.eu)
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


#ifndef CTGUI_SPIN_BUTTON_RENDERER_H
#define CTGUI_SPIN_BUTTON_RENDERER_H

#include <CTGUI/Config.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Texture.h>

CTGUI_API tguiRenderer* tguiSpinButtonRenderer_create(void);
CTGUI_API tguiRenderer* tguiSpinButtonRenderer_copy(const tguiRenderer* renderer);

CTGUI_API void tguiSpinButtonRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders);
CTGUI_API tguiOutline* tguiSpinButtonRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiSpinButtonRenderer_setSpaceBetweenArrows(tguiRenderer* renderer, float spaceBetweenArrows);
CTGUI_API float tguiSpinButtonRenderer_getSpaceBetweenArrows(const tguiRenderer* renderer);

CTGUI_API void tguiSpinButtonRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiSpinButtonRenderer_getBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiSpinButtonRenderer_setBackgroundColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiSpinButtonRenderer_getBackgroundColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiSpinButtonRenderer_setArrowColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiSpinButtonRenderer_getArrowColor(const tguiRenderer* renderer);
CTGUI_API void tguiSpinButtonRenderer_setArrowColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiSpinButtonRenderer_getArrowColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiSpinButtonRenderer_setBorderColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiSpinButtonRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiSpinButtonRenderer_setTextureArrowUp(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiSpinButtonRenderer_setTextureArrowUpHover(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiSpinButtonRenderer_setTextureArrowDown(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiSpinButtonRenderer_setTextureArrowDownHover(tguiRenderer* renderer, sfTexture* texture);

#endif // CTGUI_SPIN_BUTTON_RENDERER_H

