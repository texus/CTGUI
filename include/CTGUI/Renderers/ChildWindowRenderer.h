// This file is generated, it should not be edited directly.

#ifndef CTGUI_CHILDWINDOWRENDERER_H
#define CTGUI_CHILDWINDOWRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiChildWindowRenderer_create(void);
CTGUI_API tguiRenderer* tguiChildWindowRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiChildWindowRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiChildWindowRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setTitleBarColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiChildWindowRenderer_getTitleBarColor(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setTitleColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiChildWindowRenderer_getTitleColor(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiChildWindowRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiChildWindowRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setBorderColorFocused(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiChildWindowRenderer_getBorderColorFocused(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setBorderBelowTitleBar(tguiRenderer* renderer, float value);
CTGUI_API float tguiChildWindowRenderer_getBorderBelowTitleBar(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setTitleBarHeight(tguiRenderer* renderer, float value);
CTGUI_API float tguiChildWindowRenderer_getTitleBarHeight(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setDistanceToSide(tguiRenderer* renderer, float value);
CTGUI_API float tguiChildWindowRenderer_getDistanceToSide(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setPaddingBetweenButtons(tguiRenderer* renderer, float value);
CTGUI_API float tguiChildWindowRenderer_getPaddingBetweenButtons(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setMinimumResizableBorderWidth(tguiRenderer* renderer, float value);
CTGUI_API float tguiChildWindowRenderer_getMinimumResizableBorderWidth(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setShowTextOnTitleButtons(tguiRenderer* renderer, tguiBool value);
CTGUI_API tguiBool tguiChildWindowRenderer_getShowTextOnTitleButtons(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setTextureTitleBar(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiChildWindowRenderer_getTextureTitleBar(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setTextureBackground(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiChildWindowRenderer_getTextureBackground(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setCloseButton(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiChildWindowRenderer_getCloseButton(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setMaximizeButton(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiChildWindowRenderer_getMaximizeButton(const tguiRenderer* renderer);

CTGUI_API void tguiChildWindowRenderer_setMinimizeButton(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiChildWindowRenderer_getMinimizeButton(const tguiRenderer* renderer);

#endif // CTGUI_CHILDWINDOWRENDERER_H
