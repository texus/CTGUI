// This file is generated, it should not be edited directly.

#ifndef CTGUI_MESSAGEBOXRENDERER_H
#define CTGUI_MESSAGEBOXRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiMessageBoxRenderer_create(void);
CTGUI_API tguiRenderer* tguiMessageBoxRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiMessageBoxRenderer_setTextColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiMessageBoxRenderer_getTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiMessageBoxRenderer_setButton(tguiRenderer* thisRenderer, tguiRendererData* value);
CTGUI_API tguiRendererData* tguiMessageBoxRenderer_getButton(const tguiRenderer* thisRenderer);

#endif // CTGUI_MESSAGEBOXRENDERER_H
