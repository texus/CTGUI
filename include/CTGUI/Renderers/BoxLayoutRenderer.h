// This file is generated, it should not be edited directly.

#ifndef CTGUI_BOXLAYOUTRENDERER_H
#define CTGUI_BOXLAYOUTRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiBoxLayoutRenderer_create(void);
CTGUI_API tguiRenderer* tguiBoxLayoutRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiBoxLayoutRenderer_setSpaceBetweenWidgets(tguiRenderer* renderer, float value);
CTGUI_API float tguiBoxLayoutRenderer_getSpaceBetweenWidgets(const tguiRenderer* renderer);

#endif // CTGUI_BOXLAYOUTRENDERER_H
