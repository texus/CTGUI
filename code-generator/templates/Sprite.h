#ifndef CTGUI_SPRITE_H
#define CTGUI_SPRITE_H

#include <CTGUI/Global.h>

@TGUI_GENERATED_HEAD@

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

// The texture is copied by this function, the caller still keeps ownership of the passed value and thus the caller is still responsible for destroying it.
CTGUI_API tguiSprite* tguiSprite_createFromTexture(tguiTexture* texture);

CTGUI_API void tguiSprite_destroy(tguiSprite* sprite);

CTGUI_API tguiSpriteScalingType tguiSprite_getScalingType(const tguiSprite* sprite);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

@TGUI_GENERATED_BODY@

#endif // CTGUI_SPRITE_H

