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


#ifndef CTGUI_EDIT_BOX_RENDERER_H
#define CTGUI_EDIT_BOX_RENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiEditBoxRenderer_create(void);
CTGUI_API tguiRenderer* tguiEditBoxRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiEditBoxRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders);
CTGUI_API tguiOutline* tguiEditBoxRenderer_getBorders(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setPadding(tguiRenderer* renderer, tguiOutline* padding);
CTGUI_API tguiOutline* tguiEditBoxRenderer_getPadding(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setCaretWidth(tguiRenderer* renderer, float width);
CTGUI_API float tguiEditBoxRenderer_getCaretWidth(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setDefaultTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getDefaultTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setTextColorFocused(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getTextColorFocused(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setTextColorDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getTextColorDisabled(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setSelectedTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getSelectedTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setSelectedTextBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getSelectedTextBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setBackgroundColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getBackgroundColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setBackgroundColorFocused(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getBackgroundColorFocused(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setBackgroundColorDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getBackgroundColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setCaretColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getCaretColor(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setCaretColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getCaretColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setCaretColorFocused(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getCaretColorFocused(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getBorderColor(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setBorderColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getBorderColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setBorderColorFocused(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getBorderColorFocused(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setBorderColorDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getBorderColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setTexture(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiEditBoxRenderer_getTexture(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setTextureHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiEditBoxRenderer_getTextureHover(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setTextureFocused(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiEditBoxRenderer_getTextureFocused(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setTextureDisabled(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiEditBoxRenderer_getTextureDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setTextStyle(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiEditBoxRenderer_getTextStyle(const tguiRenderer* renderer);
CTGUI_API void tguiEditBoxRenderer_setDefaultTextStyle(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiEditBoxRenderer_getDefaultTextStyle(const tguiRenderer* renderer);

#endif // CTGUI_EDIT_BOX_RENDERER_H

