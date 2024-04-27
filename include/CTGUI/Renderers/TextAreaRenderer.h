// This file is generated, it should not be edited directly.

#ifndef CTGUI_TEXTAREARENDERER_H
#define CTGUI_TEXTAREARENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiTextAreaRenderer_create(void);
CTGUI_API tguiRenderer* tguiTextAreaRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiTextAreaRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiTextAreaRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setPadding(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiTextAreaRenderer_getPadding(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTextAreaRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTextAreaRenderer_getTextColor(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setDefaultTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTextAreaRenderer_getDefaultTextColor(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setSelectedTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTextAreaRenderer_getSelectedTextColor(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setSelectedTextBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTextAreaRenderer_getSelectedTextBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTextAreaRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setCaretColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiTextAreaRenderer_getCaretColor(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiTextAreaRenderer_getTextureBackground(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setCaretWidth(tguiRenderer* renderer, float value);
CTGUI_API float tguiTextAreaRenderer_getCaretWidth(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiTextAreaRenderer_getScrollbar(const tguiRenderer* renderer);

CTGUI_API void tguiTextAreaRenderer_setScrollbarWidth(tguiRenderer* renderer, float value);
CTGUI_API float tguiTextAreaRenderer_getScrollbarWidth(const tguiRenderer* renderer);

#endif // CTGUI_TEXTAREARENDERER_H
