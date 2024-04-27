// This file is generated, it should not be edited directly.

#ifndef CTGUI_LABELRENDERER_H
#define CTGUI_LABELRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiLabelRenderer_create(void);
CTGUI_API tguiRenderer* tguiLabelRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiLabelRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiLabelRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setPadding(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiLabelRenderer_getPadding(const tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiLabelRenderer_getTextColor(const tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setTextOutlineColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiLabelRenderer_getTextOutlineColor(const tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setTextOutlineThickness(tguiRenderer* renderer, float value);
CTGUI_API float tguiLabelRenderer_getTextOutlineThickness(const tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiLabelRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiLabelRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setTextStyle(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiLabelRenderer_getTextStyle(const tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setScrollbar(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiLabelRenderer_getScrollbar(const tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setScrollbarWidth(tguiRenderer* renderer, float value);
CTGUI_API float tguiLabelRenderer_getScrollbarWidth(const tguiRenderer* renderer);

CTGUI_API void tguiLabelRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiLabelRenderer_getTextureBackground(const tguiRenderer* renderer);

#endif // CTGUI_LABELRENDERER_H
