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


#ifndef CTGUI_SCROLLBAR_RENDERER_H
#define CTGUI_SCROLLBAR_RENDERER_H

#include <CTGUI/Config.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Texture.h>

CTGUI_API tguiRenderer* tguiScrollbarRenderer_create(void);
CTGUI_API tguiRenderer* tguiScrollbarRenderer_copy(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setTrackColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiScrollbarRenderer_getTrackColor(const tguiRenderer* renderer);
CTGUI_API void tguiScrollbarRenderer_setTrackColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiScrollbarRenderer_getTrackColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setThumbColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiScrollbarRenderer_getThumbColor(const tguiRenderer* renderer);
CTGUI_API void tguiScrollbarRenderer_setThumbColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiScrollbarRenderer_getThumbColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setArrowBackgroundColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiScrollbarRenderer_getArrowBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiScrollbarRenderer_setArrowBackgroundColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiScrollbarRenderer_getArrowBackgroundColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setArrowColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiScrollbarRenderer_getArrowColor(const tguiRenderer* renderer);
CTGUI_API void tguiScrollbarRenderer_setArrowColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiScrollbarRenderer_getArrowColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setTextureTrack(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiScrollbarRenderer_setTextureTrackHover(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiScrollbarRenderer_setTextureThumb(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiScrollbarRenderer_setTextureThumbHover(tguiRenderer* renderer, sfTexture* texture);

CTGUI_API void tguiScrollbarRenderer_setTextureArrowUp(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiScrollbarRenderer_setTextureArrowUpHover(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiScrollbarRenderer_setTextureArrowDown(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiScrollbarRenderer_setTextureArrowDownHover(tguiRenderer* renderer, sfTexture* texture);

#endif // CTGUI_SCROLLBAR_RENDERER_H

