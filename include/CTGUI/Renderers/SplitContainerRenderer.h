// This file is generated, it should not be edited directly.

#ifndef CTGUI_SPLITCONTAINERRENDERER_H
#define CTGUI_SPLITCONTAINERRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiSplitContainerRenderer_create(void);
CTGUI_API tguiRenderer* tguiSplitContainerRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiSplitContainerRenderer_setSplitterColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiSplitContainerRenderer_getSplitterColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSplitContainerRenderer_setSplitterColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiSplitContainerRenderer_getSplitterColorHover(const tguiRenderer* thisRenderer);

#endif // CTGUI_SPLITCONTAINERRENDERER_H
