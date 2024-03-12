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


#ifndef CTGUI_SPRITE_H
#define CTGUI_SPRITE_H

#include <CTGUI/Global.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef enum
{
    tguiSpriteScalingTypeNormal,     //!< The image is not split and scaled normally
    tguiSpriteScalingTypeHorizontal, //!< Image is split in Left, Middle and Right parts. Left and Right keep ratio, Middle gets stretched
    tguiSpriteScalingTypeVertical,   //!< Image is split in Top, Middle and Bottom parts. Top and Bottom keep ratio, Middle gets stretched
    tguiSpriteScalingTypeNineSlice   //!< Image is split in 9 parts. Corners keep size, sides are stretched in one direction, middle is stretched in both directions
} tguiSpriteScalingType;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiSprite* tguiSprite_createNull(void);

// The texture is copied by this function, the caller still keeps ownership of the passed value and thus the caller is still responsible for freeing it.
CTGUI_API tguiSprite* tguiSprite_createFromTexture(tguiTexture* texture);

CTGUI_API void tguiSprite_free(tguiSprite* sprite);

// The texture is copied by this function, the caller still keeps ownership of the passed value and thus the caller is still responsible for freeing it.
CTGUI_API void tguiSprite_setTexture(tguiSprite* sprite, tguiTexture* texture);

CTGUI_API tguiBool tguiSprite_isSet(const tguiSprite* sprite);

CTGUI_API void tguiSprite_setSize(tguiSprite* sprite, tguiVector2f size);
CTGUI_API tguiVector2f tguiSprite_getSize(const tguiSprite* sprite);

CTGUI_API void tguiSprite_setOpacity(tguiSprite* sprite, float opacity);
CTGUI_API float tguiSprite_getOpacity(const tguiSprite* sprite);

CTGUI_API void tguiSprite_setVisibleRect(tguiSprite* sprite, tguiFloatRect visibleRect);
CTGUI_API tguiFloatRect tguiSprite_getVisibleRect(const tguiSprite* sprite);

CTGUI_API void tguiSprite_setPosition(tguiSprite* sprite, tguiVector2f position);
CTGUI_API tguiVector2f tguiSprite_getPosition(const tguiSprite* sprite);

CTGUI_API void tguiSprite_setRotation(tguiSprite* sprite, float angle);
CTGUI_API float tguiSprite_getRotation(const tguiSprite* sprite);

CTGUI_API tguiBool tguiSprite_isTransparentPixel(const tguiSprite* sprite, tguiVector2f pos);

CTGUI_API tguiSpriteScalingType tguiSprite_getScalingType(const tguiSprite* sprite);

#endif // CTGUI_SPRITE_H

