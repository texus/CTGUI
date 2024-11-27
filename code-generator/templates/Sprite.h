#ifndef CTGUI_SPRITE_H
#define CTGUI_SPRITE_H

#include <CTGUI/Global.h>

@TGUI_GENERATED_HEAD@

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiSprite* tguiSprite_createNull(void);

// The texture is copied by this function, the caller still keeps ownership of the passed value and thus the caller is still responsible for destroying it.
CTGUI_API tguiSprite* tguiSprite_createFromTexture(tguiTexture* texture);

CTGUI_API void tguiSprite_destroy(tguiSprite* sprite);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

@TGUI_GENERATED_BODY@

#endif // CTGUI_SPRITE_H

