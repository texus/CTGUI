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


#ifndef CTGUI_TEXT_AREA_RENDERER_H
#define CTGUI_TEXT_AREA_RENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiTextAreaRenderer_create(void);
CTGUI_API tguiRenderer* tguiTextAreaRenderer_copy(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders);
CTGUI_API tguiOutline* tguiTextAreaRenderer_getBorders(const tguiRenderer* renderer);
CTGUI_API void tguiTextAreaRenderer_setPadding(tguiRenderer* renderer, tguiOutline* padding);
CTGUI_API tguiOutline* tguiTextAreaRenderer_getPadding(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTextAreaRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTextAreaRenderer_getTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiTextAreaRenderer_setDefaultTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTextAreaRenderer_getDefaultTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiTextAreaRenderer_setSelectedTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTextAreaRenderer_getSelectedTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiTextAreaRenderer_setSelectedTextBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTextAreaRenderer_getSelectedTextBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTextAreaRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setCaretColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTextAreaRenderer_getCaretColor(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiTextAreaRenderer_getTextureBackground(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setCaretWidth(const tguiRenderer* renderer, float width);
CTGUI_API float tguiTextAreaRenderer_getCaretWidth(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiTextAreaRenderer_getScrollbar(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setScrollbarWidth(tguiRenderer* renderer, float width);
CTGUI_API float tguiTextAreaRenderer_getScrollbarWidth(const tguiRenderer* renderer);

#endif // CTGUI_TEXT_AREA_RENDERER_H

