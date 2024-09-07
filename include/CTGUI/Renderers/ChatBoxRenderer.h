// This file is generated, it should not be edited directly.

#ifndef CTGUI_CHATBOXRENDERER_H
#define CTGUI_CHATBOXRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiChatBoxRenderer_create(void);
CTGUI_API tguiRenderer* tguiChatBoxRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiChatBoxRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiChatBoxRenderer_getBorders(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChatBoxRenderer_setPadding(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiChatBoxRenderer_getPadding(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChatBoxRenderer_setBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiChatBoxRenderer_getBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChatBoxRenderer_setBorderColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiChatBoxRenderer_getBorderColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChatBoxRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiChatBoxRenderer_getTextureBackground(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChatBoxRenderer_setScrollbar(tguiRenderer* thisRenderer, const tguiRendererData* value);
CTGUI_API const tguiRendererData* tguiChatBoxRenderer_getScrollbar(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChatBoxRenderer_setScrollbarWidth(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiChatBoxRenderer_getScrollbarWidth(const tguiRenderer* thisRenderer);

#endif // CTGUI_CHATBOXRENDERER_H
