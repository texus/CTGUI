/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2020 Bruno Van de Velde (vdv_b@tgui.eu)
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


#ifndef CTGUI_COMBO_BOX_RENDERER_H
#define CTGUI_COMBO_BOX_RENDERER_H

#include <CTGUI/Config.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Texture.h>

CTGUI_API tguiRenderer* tguiComboBoxRenderer_create(void);
CTGUI_API tguiRenderer* tguiComboBoxRenderer_copy(const tguiRenderer* renderer);

CTGUI_API void tguiComboBoxRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders);
CTGUI_API tguiOutline* tguiComboBoxRenderer_getBorders(const tguiRenderer* renderer);
CTGUI_API void tguiComboBoxRenderer_setPadding(tguiRenderer* renderer, tguiOutline* padding);
CTGUI_API tguiOutline* tguiComboBoxRenderer_getPadding(const tguiRenderer* renderer);

CTGUI_API void tguiComboBoxRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiComboBoxRenderer_getBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiComboBoxRenderer_setBackgroundColorDisabled(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiComboBoxRenderer_getBackgroundColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiComboBoxRenderer_setTextColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiComboBoxRenderer_getTextColor(const tguiRenderer* renderer);
CTGUI_API void tguiComboBoxRenderer_setTextColorDisabled(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiComboBoxRenderer_getTextColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiComboBoxRenderer_setDefaultTextColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiComboBoxRenderer_getDefaultTextColor(const tguiRenderer* renderer);

CTGUI_API void tguiComboBoxRenderer_setArrowBackgroundColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiComboBoxRenderer_getArrowBackgroundColor(const tguiRenderer* renderer);
CTGUI_API void tguiComboBoxRenderer_setArrowBackgroundColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiComboBoxRenderer_getArrowBackgroundColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiComboBoxRenderer_setArrowBackgroundColorDisabled(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiComboBoxRenderer_getArrowBackgroundColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiComboBoxRenderer_setArrowColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiComboBoxRenderer_getArrowColor(const tguiRenderer* renderer);
CTGUI_API void tguiComboBoxRenderer_setArrowColorHover(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiComboBoxRenderer_getArrowColorHover(const tguiRenderer* renderer);
CTGUI_API void tguiComboBoxRenderer_setArrowColorDisabled(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiComboBoxRenderer_getArrowColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiComboBoxRenderer_setBorderColor(tguiRenderer* renderer, sfColor color);
CTGUI_API sfColor tguiComboBoxRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiComboBoxRenderer_setTextureBackground(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiComboBoxRenderer_setTextureBackgroundDisabled(tguiRenderer* renderer, sfTexture* texture);

CTGUI_API void tguiComboBoxRenderer_setTextureArrow(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiComboBoxRenderer_setTextureArrowHover(tguiRenderer* renderer, sfTexture* texture);
CTGUI_API void tguiComboBoxRenderer_setTextureArrowDisabled(tguiRenderer* renderer, sfTexture* texture);

CTGUI_API void tguiComboBoxRenderer_setTextStyle(tguiRenderer* renderer, sfUint32 style);
CTGUI_API sfUint32 tguiComboBoxRenderer_getTextStyle(const tguiRenderer* renderer);

CTGUI_API void tguiComboBoxRenderer_setDefaultTextStyle(tguiRenderer* renderer, sfUint32 style);
CTGUI_API sfUint32 tguiComboBoxRenderer_getDefaultTextStyle(const tguiRenderer* renderer);

CTGUI_API void tguiComboBoxRenderer_setListBox(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiComboBoxRenderer_getListBox(const tguiRenderer* renderer);

#endif // CTGUI_LIST_BOX_RENDERER_H

