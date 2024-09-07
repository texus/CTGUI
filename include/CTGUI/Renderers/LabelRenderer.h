// This file is generated, it should not be edited directly.

#ifndef CTGUI_LABELRENDERER_H
#define CTGUI_LABELRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiLabelRenderer_create(void);
CTGUI_API tguiRenderer* tguiLabelRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiLabelRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiLabelRenderer_getBorders(const tguiRenderer* thisRenderer);

CTGUI_API void tguiLabelRenderer_setPadding(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiLabelRenderer_getPadding(const tguiRenderer* thisRenderer);

CTGUI_API void tguiLabelRenderer_setTextColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiLabelRenderer_getTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiLabelRenderer_setTextOutlineColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiLabelRenderer_getTextOutlineColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiLabelRenderer_setTextOutlineThickness(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiLabelRenderer_getTextOutlineThickness(const tguiRenderer* thisRenderer);

CTGUI_API void tguiLabelRenderer_setBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiLabelRenderer_getBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiLabelRenderer_setBorderColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiLabelRenderer_getBorderColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiLabelRenderer_setTextStyle(tguiRenderer* thisRenderer, tguiUint32 value);
CTGUI_API tguiUint32 tguiLabelRenderer_getTextStyle(const tguiRenderer* thisRenderer);

CTGUI_API void tguiLabelRenderer_setScrollbar(tguiRenderer* thisRenderer, const tguiRendererData* value);
CTGUI_API const tguiRendererData* tguiLabelRenderer_getScrollbar(const tguiRenderer* thisRenderer);

CTGUI_API void tguiLabelRenderer_setScrollbarWidth(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiLabelRenderer_getScrollbarWidth(const tguiRenderer* thisRenderer);

CTGUI_API void tguiLabelRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiLabelRenderer_getTextureBackground(const tguiRenderer* thisRenderer);

#endif // CTGUI_LABELRENDERER_H
