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


#ifndef CTGUI_BUTTON_RENDERER_H
#define CTGUI_BUTTON_RENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiButtonRenderer_create(void);
CTGUI_API tguiRenderer* tguiButtonRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiButtonRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders);
CTGUI_API tguiOutline* tguiButtonRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiButtonRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getTextColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextColorFocused(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getTextColorFocused(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextColorDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getTextColorDisabled(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextColorDown(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getTextColorDown(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextColorDownHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getTextColorDownHover(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextColorDownFocused(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getTextColorDownFocused(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextColorDownDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getTextColorDownDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiButtonRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBackgroundColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getBackgroundColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBackgroundColorFocused(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getBackgroundColorFocused(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBackgroundColorDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getBackgroundColorDisabled(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBackgroundColorDown(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getBackgroundColorDown(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBackgroundColorDownHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getBackgroundColorDownHover(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBackgroundColorDownFocused(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getBackgroundColorDownFocused(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBackgroundColorDownDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getBackgroundColorDownDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiButtonRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getBorderColor(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBorderColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getBorderColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBorderColorFocused(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getBorderColorFocused(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBorderColorDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getBorderColorDisabled(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBorderColorDown(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getBorderColorDown(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBorderColorDownHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getBorderColorDownHover(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBorderColorDownFocused(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getBorderColorDownFocused(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBorderColorDownDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getBorderColorDownDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiButtonRenderer_setTexture(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiButtonRenderer_getTexture(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextureHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiButtonRenderer_getTextureHover(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextureFocused(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiButtonRenderer_getTextureFocused(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextureDisabled(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiButtonRenderer_getTextureDisabled(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextureDown(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiButtonRenderer_getTextureDown(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextureDownHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiButtonRenderer_getTextureDownHover(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextureDownFocused(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiButtonRenderer_getTextureDownFocused(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextureDownDisabled(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiButtonRenderer_getTextureDownDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiButtonRenderer_setTextStyle(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiButtonRenderer_getTextStyle(tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextStyleHover(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiButtonRenderer_getTextStyleHover(tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextStyleFocused(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiButtonRenderer_getTextStyleFocused(tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextStyleDisabled(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiButtonRenderer_getTextStyleDisabled(tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextStyleDown(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiButtonRenderer_getTextStyleDown(tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextStyleDownHover(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiButtonRenderer_getTextStyleDownHover(tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextStyleDownFocused(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiButtonRenderer_getTextStyleDownFocused(tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextStyleDownDisabled(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiButtonRenderer_getTextStyleDownDisabled(tguiRenderer* renderer);

CTGUI_API void tguiButtonRenderer_setTextOutlineColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiButtonRenderer_getTextOutlineColor(const tguiRenderer* renderer);

CTGUI_API void tguiButtonRenderer_setTextOutlineThickness(tguiRenderer* renderer, float thickness);
CTGUI_API float tguiButtonRenderer_getTextOutlineThickness(const tguiRenderer* renderer);

CTGUI_API void tguiButtonRenderer_setRoundedBorderRadius(tguiRenderer* renderer, float radius);
CTGUI_API float tguiButtonRenderer_getRoundedBorderRadius(const tguiRenderer* renderer);

#endif // CTGUI_BUTTON_RENDERER_H

