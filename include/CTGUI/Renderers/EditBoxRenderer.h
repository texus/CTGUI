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


#ifndef CTGUI_EDIT_BOX_RENDERER_H
#define CTGUI_EDIT_BOX_RENDERER_H

#include <CTGUI/Config.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Texture.h>

CTGUI_API tguiRenderer* tguiEditBoxRenderer_create(void);
CTGUI_API tguiRenderer* tguiEditBoxRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiEditBoxRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders);
CTGUI_API tguiOutline* tguiEditBoxRenderer_getBorders(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setPadding(tguiRenderer* renderer, tguiOutline* padding);
CTGUI_API tguiOutline* tguiEditBoxRenderer_getPadding(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setCaretWidth(tguiRenderer* renderer, float width);
CTGUI_API float tguiEditBoxRenderer_getCaretWidth(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setTextColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiEditBoxRenderer_getTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setDefaultTextColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiEditBoxRenderer_getDefaultTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setTextColorDisabled(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiEditBoxRenderer_getTextColorDisabled(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setSelectedTextColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiEditBoxRenderer_getSelectedTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setSelectedTextBackgroundColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiEditBoxRenderer_getSelectedTextBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiEditBoxRenderer_getBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setBackgroundColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiEditBoxRenderer_getBackgroundColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setBackgroundColorDisabled(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiEditBoxRenderer_getBackgroundColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setCaretColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiEditBoxRenderer_getCaretColor(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setCaretColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiEditBoxRenderer_getCaretColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setCaretColorDisabled(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiEditBoxRenderer_getCaretColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setBorderColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiEditBoxRenderer_getBorderColor(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setBorderColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiEditBoxRenderer_getBorderColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setBorderColorDisabled(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiEditBoxRenderer_getBorderColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setTexture(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiEditBoxRenderer_setTextureHover(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiEditBoxRenderer_setTextureDisabled(tguiRenderer* renderer, sfTexture* texture);

CTGUI_API void tguiEditBoxRenderer_setTextStyle(tguiRenderer* renderer, sfUint32 style);
CTGUI_API sfUint32 tguiEditBoxRenderer_getTextStyle(tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setDefaultTextStyle(tguiRenderer* renderer, sfUint32 style);
CTGUI_API sfUint32 tguiEditBoxRenderer_getDefaultTextStyle(tguiRenderer* renderer);

#endif // CTGUI_EDIT_BOX_RENDERER_H

