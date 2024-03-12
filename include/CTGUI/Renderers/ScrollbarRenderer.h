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


#ifndef CTGUI_SCROLLBAR_RENDERER_H
#define CTGUI_SCROLLBAR_RENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiScrollbarRenderer_create(void);
CTGUI_API tguiRenderer* tguiScrollbarRenderer_copy(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setTrackColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiScrollbarRenderer_getTrackColor(const tguiRenderer* renderer);
CTGUI_API void tguiScrollbarRenderer_setTrackColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiScrollbarRenderer_getTrackColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setThumbColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiScrollbarRenderer_getThumbColor(const tguiRenderer* renderer);
CTGUI_API void tguiScrollbarRenderer_setThumbColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiScrollbarRenderer_getThumbColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setArrowBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiScrollbarRenderer_getArrowBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiScrollbarRenderer_setArrowBackgroundColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiScrollbarRenderer_getArrowBackgroundColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setArrowColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiScrollbarRenderer_getArrowColor(const tguiRenderer* renderer);
CTGUI_API void tguiScrollbarRenderer_setArrowColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiScrollbarRenderer_getArrowColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setTextureTrack(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiScrollbarRenderer_getTextureTrack(const tguiRenderer* renderer);
CTGUI_API void tguiScrollbarRenderer_setTextureTrackHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiScrollbarRenderer_getTextureTrackHover(const tguiRenderer* renderer);
CTGUI_API void tguiScrollbarRenderer_setTextureThumb(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiScrollbarRenderer_getTextureThumb(const tguiRenderer* renderer);
CTGUI_API void tguiScrollbarRenderer_setTextureThumbHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiScrollbarRenderer_getTextureThumbHover(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setTextureArrowUp(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiScrollbarRenderer_getTextureArrowUp(const tguiRenderer* renderer);
CTGUI_API void tguiScrollbarRenderer_setTextureArrowUpHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiScrollbarRenderer_getTextureArrowUpHover(const tguiRenderer* renderer);
CTGUI_API void tguiScrollbarRenderer_setTextureArrowDown(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiScrollbarRenderer_getTextureArrowDown(const tguiRenderer* renderer);
CTGUI_API void tguiScrollbarRenderer_setTextureArrowDownHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiScrollbarRenderer_getTextureArrowDownHover(const tguiRenderer* renderer);

#endif // CTGUI_SCROLLBAR_RENDERER_H

