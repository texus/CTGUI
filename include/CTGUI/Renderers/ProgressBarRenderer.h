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


#ifndef CTGUI_PROGRESS_BAR_RENDERER_H
#define CTGUI_PROGRESS_BAR_RENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiProgressBarRenderer_create(void);
CTGUI_API tguiRenderer* tguiProgressBarRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiProgressBarRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders);
CTGUI_API tguiOutline* tguiProgressBarRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiProgressBarRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiProgressBarRenderer_getTextColor(const tguiRenderer* renderer);

CTGUI_API void tguiProgressBarRenderer_setTextColorFilled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiProgressBarRenderer_getTextColorFilled(const tguiRenderer* renderer);

CTGUI_API void tguiProgressBarRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiProgressBarRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiProgressBarRenderer_setFillColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiProgressBarRenderer_getFillColor(const tguiRenderer* renderer);

CTGUI_API void tguiProgressBarRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiProgressBarRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiProgressBarRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiProgressBarRenderer_getTextureBackground(const tguiRenderer* renderer);
CTGUI_API void tguiProgressBarRenderer_setTextureFill(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiProgressBarRenderer_getTextureFill(const tguiRenderer* renderer);

CTGUI_API void tguiProgressBarRenderer_setTextStyle(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiProgressBarRenderer_getTextStyle(tguiRenderer* renderer);

CTGUI_API void tguiProgressBarRenderer_setTextOutlineColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiProgressBarRenderer_getTextOutlineColor(const tguiRenderer* renderer);

CTGUI_API void tguiProgressBarRenderer_setTextOutlineThickness(tguiRenderer* renderer, float outlineThickness);
CTGUI_API float tguiProgressBarRenderer_getTextOutlineThickness(const tguiRenderer* renderer);

#endif // CTGUI_PROGRESS_BAR_RENDERER_H

