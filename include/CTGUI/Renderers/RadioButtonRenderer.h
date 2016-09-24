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


#ifndef CTGUI_RADIO_BUTTON_RENDERER_H
#define CTGUI_RADIO_BUTTON_RENDERER_H

#include <CTGUI/Config.h>
#include <CTGUI/Outline.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Texture.h>

CTGUI_API tguiRenderer* tguiRadioButtonRenderer_create(void);
CTGUI_API tguiRenderer* tguiRadioButtonRenderer_copy(const tguiRenderer* renderer);

CTGUI_API void tguiRadioButtonRenderer_setTextDistanceRatio(tguiRenderer* renderer, float ratio);
CTGUI_API float tguiRadioButtonRenderer_getTextDistanceRatio(const tguiRenderer* renderer);

CTGUI_API void tguiRadioButtonRenderer_setBorders(tguiRenderer* renderer, tguiOutline borders);
CTGUI_API tguiOutline tguiRadioButtonRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiRadioButtonRenderer_setTextColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setTextColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getTextColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setTextColorDisabled(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getTextColorDisabled(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setTextColorChecked(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getTextColorChecked(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setTextColorCheckedHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getTextColorCheckedHover(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setTextColorCheckedDisabled(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getTextColorCheckedDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiRadioButtonRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBackgroundColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getBackgroundColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBackgroundColorDisabled(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getBackgroundColorDisabled(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBackgroundColorChecked(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getBackgroundColorChecked(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBackgroundColorCheckedHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getBackgroundColorCheckedHover(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBackgroundColorCheckedDisabled(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getBackgroundColorCheckedDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiRadioButtonRenderer_setBorderColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getBorderColor(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBorderColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getBorderColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBorderColorDisabled(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getBorderColorDisabled(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBorderColorChecked(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getBorderColorChecked(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBorderColorCheckedHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getBorderColorCheckedHover(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setBorderColorCheckedDisabled(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getBorderColorCheckedDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiRadioButtonRenderer_setCheckColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getCheckColor(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setCheckColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getCheckColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setCheckColorDisabled(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiRadioButtonRenderer_getCheckColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiRadioButtonRenderer_setTextureUnchecked(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiRadioButtonRenderer_setTextureChecked(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiRadioButtonRenderer_setTextureUncheckedHover(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiRadioButtonRenderer_setTextureCheckedHover(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiRadioButtonRenderer_setTextureUncheckedDisabled(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiRadioButtonRenderer_setTextureCheckedDisabled(tguiRenderer* renderer, sfTexture* texture);

CTGUI_API void tguiRadioButtonRenderer_setTextStyle(tguiRenderer* renderer, sfUint32 style);
CTGUI_API sfUint32 tguiRadioButtonRenderer_getTextStyle(tguiRenderer* renderer);
CTGUI_API void tguiRadioButtonRenderer_setTextStyleChecked(tguiRenderer* renderer, sfUint32 style);
CTGUI_API sfUint32 tguiRadioButtonRenderer_getTextStyleChecked(tguiRenderer* renderer);

#endif // CTGUI_RADIO_BUTTON_RENDERER_H

