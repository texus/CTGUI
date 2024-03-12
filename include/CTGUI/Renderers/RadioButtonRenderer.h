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


#ifndef CTGUI_RADIO_BUTTON_RENDERER_H
#define CTGUI_RADIO_BUTTON_RENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiRadioButtonRenderer_create(void);
CTGUI_API tguiRenderer* tguiRadioButtonRenderer_copy(const tguiRenderer* renderer);

CTGUI_API void tguiRadioButtonRenderer_setTextDistanceRatio(tguiRenderer* renderer, float ratio);
CTGUI_API float tguiRadioButtonRenderer_getTextDistanceRatio(const tguiRenderer* renderer);

CTGUI_API void tguiRadioButtonRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders);
CTGUI_API tguiOutline* tguiRadioButtonRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiRadioButtonRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setTextColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getTextColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setTextColorDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getTextColorDisabled(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setTextColorChecked(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getTextColorChecked(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setTextColorCheckedHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getTextColorCheckedHover(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setTextColorCheckedDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getTextColorCheckedDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiRadioButtonRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBackgroundColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getBackgroundColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBackgroundColorDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getBackgroundColorDisabled(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBackgroundColorChecked(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getBackgroundColorChecked(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBackgroundColorCheckedHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getBackgroundColorCheckedHover(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBackgroundColorCheckedDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getBackgroundColorCheckedDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiRadioButtonRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getBorderColor(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBorderColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getBorderColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBorderColorFocused(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getBorderColorFocused(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBorderColorDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getBorderColorDisabled(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBorderColorChecked(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getBorderColorChecked(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBorderColorCheckedHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getBorderColorCheckedHover(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBorderColorCheckedFocused(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getBorderColorCheckedFocused(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBorderColorCheckedDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getBorderColorCheckedDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiRadioButtonRenderer_setCheckColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getCheckColor(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setCheckColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getCheckColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setCheckColorDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiRadioButtonRenderer_getCheckColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiRadioButtonRenderer_setTextureUnchecked(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiRadioButtonRenderer_getTextureUnchecked(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setTextureChecked(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiRadioButtonRenderer_getTextureChecked(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setTextureUncheckedHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiRadioButtonRenderer_getTextureUncheckedHover(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setTextureCheckedHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiRadioButtonRenderer_getTextureCheckedHover(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setTextureUncheckedFocused(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiRadioButtonRenderer_getTextureUncheckedFocused(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setTextureCheckedFocused(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiRadioButtonRenderer_getTextureCheckedFocused(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setTextureUncheckedDisabled(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiRadioButtonRenderer_getTextureUncheckedDisabled(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setTextureCheckedDisabled(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiRadioButtonRenderer_getTextureCheckedDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiRadioButtonRenderer_setTextStyle(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiRadioButtonRenderer_getTextStyle(tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setTextStyleChecked(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiRadioButtonRenderer_getTextStyleChecked(tguiRenderer* renderer);

#endif // CTGUI_RADIO_BUTTON_RENDERER_H

