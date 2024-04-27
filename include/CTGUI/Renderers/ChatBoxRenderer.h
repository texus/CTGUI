// This file is generated, it should not be edited directly.

#ifndef CTGUI_CHATBOXRENDERER_H
#define CTGUI_CHATBOXRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiChatBoxRenderer_create(void);
CTGUI_API tguiRenderer* tguiChatBoxRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiChatBoxRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiChatBoxRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiChatBoxRenderer_setPadding(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiChatBoxRenderer_getPadding(const tguiRenderer* renderer);

CTGUI_API void tguiChatBoxRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiChatBoxRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiChatBoxRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiChatBoxRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiChatBoxRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiChatBoxRenderer_getTextureBackground(const tguiRenderer* renderer);

CTGUI_API void tguiChatBoxRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiChatBoxRenderer_getScrollbar(const tguiRenderer* renderer);

CTGUI_API void tguiChatBoxRenderer_setScrollbarWidth(tguiRenderer* renderer, float value);
CTGUI_API float tguiChatBoxRenderer_getScrollbarWidth(const tguiRenderer* renderer);

#endif // CTGUI_CHATBOXRENDERER_H
