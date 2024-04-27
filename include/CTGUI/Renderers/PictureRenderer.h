// This file is generated, it should not be edited directly.

#ifndef CTGUI_PICTURERENDERER_H
#define CTGUI_PICTURERENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiPictureRenderer_create(void);
CTGUI_API tguiRenderer* tguiPictureRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiPictureRenderer_setTexture(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiPictureRenderer_getTexture(const tguiRenderer* renderer);

#endif // CTGUI_PICTURERENDERER_H
