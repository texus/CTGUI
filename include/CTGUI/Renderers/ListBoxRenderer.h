// This file is generated, it should not be edited directly.

#ifndef CTGUI_LISTBOXRENDERER_H
#define CTGUI_LISTBOXRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiListBoxRenderer_create(void);
CTGUI_API tguiRenderer* tguiListBoxRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiListBoxRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiListBoxRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setPadding(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiListBoxRenderer_getPadding(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListBoxRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setBackgroundColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListBoxRenderer_getBackgroundColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setSelectedBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListBoxRenderer_getSelectedBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setSelectedBackgroundColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListBoxRenderer_getSelectedBackgroundColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListBoxRenderer_getTextColor(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setTextColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListBoxRenderer_getTextColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setSelectedTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListBoxRenderer_getSelectedTextColor(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setSelectedTextColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListBoxRenderer_getSelectedTextColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiListBoxRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiListBoxRenderer_getTextureBackground(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setTextStyle(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiListBoxRenderer_getTextStyle(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setSelectedTextStyle(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiListBoxRenderer_getSelectedTextStyle(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiListBoxRenderer_getScrollbar(const tguiRenderer* renderer);

CTGUI_API void tguiListBoxRenderer_setScrollbarWidth(tguiRenderer* renderer, float value);
CTGUI_API float tguiListBoxRenderer_getScrollbarWidth(const tguiRenderer* renderer);

#endif // CTGUI_LISTBOXRENDERER_H
