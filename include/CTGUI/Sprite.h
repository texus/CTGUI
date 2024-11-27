// This file is generated, it should not be edited directly.

#ifndef CTGUI_SPRITE_H
#define CTGUI_SPRITE_H

#include <CTGUI/Global.h>

typedef enum
{
    tguiSpriteScalingTypeNormal,
    tguiSpriteScalingTypeHorizontal,
    tguiSpriteScalingTypeVertical,
    tguiSpriteScalingTypeNineSlice,
} tguiSpriteScalingType;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiSprite* tguiSprite_createNull(void);

// The texture is copied by this function, the caller still keeps ownership of the passed value and thus the caller is still responsible for destroying it.
CTGUI_API tguiSprite* tguiSprite_createFromTexture(tguiTexture* texture);

CTGUI_API void tguiSprite_destroy(tguiSprite* sprite);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiBool tguiSprite_isSet(const tguiSprite* thisSprite);

CTGUI_API void tguiSprite_setTexture(tguiSprite* thisSprite, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiSprite_getTexture(const tguiSprite* thisSprite);

CTGUI_API void tguiSprite_setPosition(tguiSprite* thisSprite, tguiVector2f value);
CTGUI_API tguiVector2f tguiSprite_getPosition(const tguiSprite* thisSprite);

CTGUI_API void tguiSprite_setSize(tguiSprite* thisSprite, tguiVector2f value);
CTGUI_API tguiVector2f tguiSprite_getSize(const tguiSprite* thisSprite);

CTGUI_API void tguiSprite_setOpacity(tguiSprite* thisSprite, float value);
CTGUI_API float tguiSprite_getOpacity(const tguiSprite* thisSprite);

CTGUI_API void tguiSprite_setVisibleRect(tguiSprite* thisSprite, tguiFloatRect value);
CTGUI_API tguiFloatRect tguiSprite_getVisibleRect(const tguiSprite* thisSprite);

CTGUI_API void tguiSprite_setRotation(tguiSprite* thisSprite, float value);
CTGUI_API float tguiSprite_getRotation(const tguiSprite* thisSprite);

CTGUI_API tguiBool tguiSprite_isTransparentPixel(const tguiSprite* thisSprite, tguiVector2f pos);

CTGUI_API tguiSpriteScalingType tguiSprite_getScalingType(const tguiSprite* thisSprite);

#endif // CTGUI_SPRITE_H

