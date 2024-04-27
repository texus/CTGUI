// This file is generated, it should not be edited directly.

#ifndef CTGUI_GROUPRENDERER_H
#define CTGUI_GROUPRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiGroupRenderer_create(void);
CTGUI_API tguiRenderer* tguiGroupRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiGroupRenderer_setPadding(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiGroupRenderer_getPadding(const tguiRenderer* renderer);

#endif // CTGUI_GROUPRENDERER_H
