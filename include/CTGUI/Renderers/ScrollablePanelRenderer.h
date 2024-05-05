// This file is generated, it should not be edited directly.

#ifndef CTGUI_SCROLLABLEPANELRENDERER_H
#define CTGUI_SCROLLABLEPANELRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiScrollablePanelRenderer_create(void);
CTGUI_API tguiRenderer* tguiScrollablePanelRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiScrollablePanelRenderer_setScrollbar(tguiRenderer* thisRenderer, const tguiRendererData* value);
CTGUI_API const tguiRendererData* tguiScrollablePanelRenderer_getScrollbar(const tguiRenderer* thisRenderer);

CTGUI_API void tguiScrollablePanelRenderer_setScrollbarWidth(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiScrollablePanelRenderer_getScrollbarWidth(const tguiRenderer* thisRenderer);

#endif // CTGUI_SCROLLABLEPANELRENDERER_H
