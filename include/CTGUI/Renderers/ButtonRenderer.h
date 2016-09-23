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


#ifndef CTGUI_BUTTON_RENDERER_H
#define CTGUI_BUTTON_RENDERER_H

#include <CTGUI/Config.h>
#include <CTGUI/Outline.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Texture.h>

CTGUI_API tguiRenderer* tguiButtonRenderer_create(void);
CTGUI_API tguiRenderer* tguiButtonRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiButtonRenderer_setBorders(tguiRenderer* renderer, tguiOutline borders);
CTGUI_API tguiOutline tguiButtonRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiButtonRenderer_setTextColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiButtonRenderer_getTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiButtonRenderer_getTextColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextColorDown(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiButtonRenderer_getTextColorDown(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextColorDisabled(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiButtonRenderer_getTextColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiButtonRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiButtonRenderer_getBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBackgroundColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiButtonRenderer_getBackgroundColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBackgroundColorDown(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiButtonRenderer_getBackgroundColorDown(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBackgroundColorDisabled(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiButtonRenderer_getBackgroundColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiButtonRenderer_setBorderColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiButtonRenderer_getBorderColor(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBorderColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiButtonRenderer_getBorderColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBorderColorDown(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiButtonRenderer_getBorderColorDown(const tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setBorderColorDisabled(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiButtonRenderer_getBorderColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiButtonRenderer_setTexture(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiButtonRenderer_setTextureHover(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiButtonRenderer_setTextureDown(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiButtonRenderer_setTextureDisabled(tguiRenderer* renderer, sfTexture* texture);

CTGUI_API void tguiButtonRenderer_setTextStyle(tguiRenderer* renderer, sfUint32 style);
CTGUI_API sfUint32 tguiButtonRenderer_getTextStyle(tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextStyleHover(tguiRenderer* renderer, sfUint32 style);
CTGUI_API sfUint32 tguiButtonRenderer_getTextStyleHover(tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextStyleDown(tguiRenderer* renderer, sfUint32 style);
CTGUI_API sfUint32 tguiButtonRenderer_getTextStyleDown(tguiRenderer* renderer);
CTGUI_API void tguiButtonRenderer_setTextStyleDisabled(tguiRenderer* renderer, sfUint32 style);
CTGUI_API sfUint32 tguiButtonRenderer_getTextStyleDisabled(tguiRenderer* renderer);

#endif // CTGUI_BUTTON_RENDERER_H

