// This file is generated, it should not be edited directly.

#ifndef CTGUI_SCROLLABLEPANELRENDERER_H
#define CTGUI_SCROLLABLEPANELRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiScrollablePanelRenderer_create(void);
CTGUI_API tguiRenderer* tguiScrollablePanelRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiScrollablePanelRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiScrollablePanelRenderer_getScrollbar(const tguiRenderer* renderer);

CTGUI_API void tguiScrollablePanelRenderer_setScrollbarWidth(tguiRenderer* renderer, float value);
CTGUI_API float tguiScrollablePanelRenderer_getScrollbarWidth(const tguiRenderer* renderer);

#endif // CTGUI_SCROLLABLEPANELRENDERER_H
