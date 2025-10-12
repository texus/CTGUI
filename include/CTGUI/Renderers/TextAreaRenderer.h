// This file is generated, it should not be edited directly.

#ifndef CTGUI_TEXTAREARENDERER_H
#define CTGUI_TEXTAREARENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiTextAreaRenderer_create(void);
CTGUI_API tguiRenderer* tguiTextAreaRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiTextAreaRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiTextAreaRenderer_getBorders(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTextAreaRenderer_setPadding(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiTextAreaRenderer_getPadding(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTextAreaRenderer_setBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiTextAreaRenderer_getBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTextAreaRenderer_setTextColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiTextAreaRenderer_getTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTextAreaRenderer_setDefaultTextColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiTextAreaRenderer_getDefaultTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTextAreaRenderer_setSelectedTextColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiTextAreaRenderer_getSelectedTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTextAreaRenderer_setSelectedTextBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiTextAreaRenderer_getSelectedTextBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTextAreaRenderer_setBorderColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiTextAreaRenderer_getBorderColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTextAreaRenderer_setCaretColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiTextAreaRenderer_getCaretColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTextAreaRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiTextAreaRenderer_getTextureBackground(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTextAreaRenderer_setCaretWidth(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiTextAreaRenderer_getCaretWidth(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTextAreaRenderer_setScrollbar(tguiRenderer* thisRenderer, const tguiRendererData* value);
CTGUI_API const tguiRendererData* tguiTextAreaRenderer_getScrollbar(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTextAreaRenderer_setScrollbarWidth(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiTextAreaRenderer_getScrollbarWidth(const tguiRenderer* thisRenderer);

CTGUI_API void tguiTextAreaRenderer_setRoundedBorderRadius(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiTextAreaRenderer_getRoundedBorderRadius(const tguiRenderer* thisRenderer);

#endif // CTGUI_TEXTAREARENDERER_H
