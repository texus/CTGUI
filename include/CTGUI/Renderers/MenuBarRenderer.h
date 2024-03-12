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


#ifndef CTGUI_MENU_BAR_RENDERER_H
#define CTGUI_MENU_BAR_RENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiMenuBarRenderer_create(void);
CTGUI_API tguiRenderer* tguiMenuBarRenderer_copy(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiMenuBarRenderer_getBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiMenuBarRenderer_setSelectedBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiMenuBarRenderer_getSelectedBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiMenuBarRenderer_getTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiMenuBarRenderer_setSelectedTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiMenuBarRenderer_getSelectedTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiMenuBarRenderer_setTextColorDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiMenuBarRenderer_getTextColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setSeparatorColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiMenuBarRenderer_getSeparatorColor(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiMenuBarRenderer_getTextureBackground(const tguiRenderer* renderer);
CTGUI_API void tguiMenuBarRenderer_setTextureItemBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiMenuBarRenderer_getTextureItemBackground(const tguiRenderer* renderer);
CTGUI_API void tguiMenuBarRenderer_setTextureSelectedItemBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiMenuBarRenderer_getTextureSelectedItemBackground(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setDistanceToSide(tguiRenderer* renderer, float distanceToSide);
CTGUI_API float tguiMenuBarRenderer_getDistanceToSide(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setSeparatorThickness(tguiRenderer* renderer, float thickness);
CTGUI_API float tguiMenuBarRenderer_getSeparatorThickness(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setSeparatorVerticalPadding(tguiRenderer* renderer, float padding);
CTGUI_API float tguiMenuBarRenderer_getSeparatorVerticalPadding(const tguiRenderer* renderer);

CTGUI_API void tguiMenuBarRenderer_setSeparatorSidePadding(tguiRenderer* renderer, float padding);
CTGUI_API float tguiMenuBarRenderer_getSeparatorSidePadding(const tguiRenderer* renderer);

#endif // CTGUI_MENU_BAR_RENDERER_H

