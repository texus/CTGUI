// This file is generated, it should not be edited directly.

#ifndef CTGUI_MESSAGEBOXRENDERER_H
#define CTGUI_MESSAGEBOXRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiMessageBoxRenderer_create(void);
CTGUI_API tguiRenderer* tguiMessageBoxRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiMessageBoxRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiMessageBoxRenderer_getTextColor(const tguiRenderer* renderer);

CTGUI_API void tguiMessageBoxRenderer_setButton(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiMessageBoxRenderer_getButton(const tguiRenderer* renderer);

#endif // CTGUI_MESSAGEBOXRENDERER_H
