// This file is generated, it should not be edited directly.

#ifndef CTGUI_GROUPRENDERER_H
#define CTGUI_GROUPRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiGroupRenderer_create(void);
CTGUI_API tguiRenderer* tguiGroupRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiGroupRenderer_setPadding(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiGroupRenderer_getPadding(const tguiRenderer* thisRenderer);

#endif // CTGUI_GROUPRENDERER_H
