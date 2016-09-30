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


#ifndef CTGUI_LIST_BOX_RENDERER_H
#define CTGUI_LIST_BOX_RENDERER_H

#include <CTGUI/Config.h>
#include <CTGUI/Outline.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Texture.h>

CTGUI_API tguiRenderer* tguiKnobRenderer_create(void);
CTGUI_API tguiRenderer* tguiKnobRenderer_copy(const tguiRenderer* renderer);

CTGUI_API void tguiKnobRenderer_setBorders(tguiRenderer* renderer, tguiOutline borders);
CTGUI_API tguiOutline tguiKnobRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiKnobRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiKnobRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiKnobRenderer_setThumbColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiKnobRenderer_getThumbColor(const tguiRenderer* renderer);

CTGUI_API void tguiKnobRenderer_setBorderColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiKnobRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiKnobRenderer_setTextureBackground(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiKnobRenderer_setTextureForeground(tguiRenderer* renderer, sfTexture* texture);

CTGUI_API void tguiKnobRenderer_setImageRotation(tguiRenderer* renderer, float rotation);
CTGUI_API float tguiKnobRenderer_getImageRotation(const tguiRenderer* renderer);

#endif // CTGUI_LIST_BOX_RENDERER_H

