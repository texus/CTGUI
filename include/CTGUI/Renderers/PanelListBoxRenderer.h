// This file is generated, it should not be edited directly.

#ifndef CTGUI_PANELLISTBOXRENDERER_H
#define CTGUI_PANELLISTBOXRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiPanelListBoxRenderer_create(void);
CTGUI_API tguiRenderer* tguiPanelListBoxRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiPanelListBoxRenderer_setItemsBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiPanelListBoxRenderer_getItemsBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiPanelListBoxRenderer_setItemsBackgroundColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiPanelListBoxRenderer_getItemsBackgroundColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiPanelListBoxRenderer_setSelectedItemsBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiPanelListBoxRenderer_getSelectedItemsBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiPanelListBoxRenderer_setSelectedItemsBackgroundColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiPanelListBoxRenderer_getSelectedItemsBackgroundColorHover(const tguiRenderer* thisRenderer);

#endif // CTGUI_PANELLISTBOXRENDERER_H
