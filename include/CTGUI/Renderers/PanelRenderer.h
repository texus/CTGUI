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


#ifndef CTGUI_PANEL_RENDERER_H
#define CTGUI_PANEL_RENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiPanelRenderer_create(void);
CTGUI_API tguiRenderer* tguiPanelRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiPanelRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders);
CTGUI_API tguiOutline* tguiPanelRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiPanelRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiPanelRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiPanelRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiPanelRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiPanelRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiPanelRenderer_getTextureBackground(const tguiRenderer* renderer);

CTGUI_API void tguiPanelRenderer_setRoundedBorderRadius(tguiRenderer* renderer, float radius);
CTGUI_API float tguiPanelRenderer_getRoundedBorderRadius(const tguiRenderer* renderer);

#endif // CTGUI_LABEL_RENDERER_H

