// This file is generated, it should not be edited directly.

#ifndef CTGUI_CHILDWINDOWRENDERER_H
#define CTGUI_CHILDWINDOWRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiChildWindowRenderer_create(void);
CTGUI_API tguiRenderer* tguiChildWindowRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiChildWindowRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiChildWindowRenderer_getBorders(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChildWindowRenderer_setClientPadding(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiChildWindowRenderer_getClientPadding(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChildWindowRenderer_setTitleBarColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiChildWindowRenderer_getTitleBarColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChildWindowRenderer_setTitleColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiChildWindowRenderer_getTitleColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChildWindowRenderer_setBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiChildWindowRenderer_getBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChildWindowRenderer_setBorderColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiChildWindowRenderer_getBorderColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChildWindowRenderer_setBorderColorFocused(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiChildWindowRenderer_getBorderColorFocused(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChildWindowRenderer_setBorderBelowTitleBar(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiChildWindowRenderer_getBorderBelowTitleBar(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChildWindowRenderer_setTitleBarHeight(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiChildWindowRenderer_getTitleBarHeight(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChildWindowRenderer_setDistanceToSide(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiChildWindowRenderer_getDistanceToSide(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChildWindowRenderer_setPaddingBetweenButtons(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiChildWindowRenderer_getPaddingBetweenButtons(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChildWindowRenderer_setMinimumResizableBorderWidth(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiChildWindowRenderer_getMinimumResizableBorderWidth(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChildWindowRenderer_setShowTextOnTitleButtons(tguiRenderer* thisRenderer, tguiBool value);
CTGUI_API tguiBool tguiChildWindowRenderer_getShowTextOnTitleButtons(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChildWindowRenderer_setTextureTitleBar(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiChildWindowRenderer_getTextureTitleBar(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChildWindowRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiChildWindowRenderer_getTextureBackground(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChildWindowRenderer_setCloseButton(tguiRenderer* thisRenderer, const tguiRendererData* value);
CTGUI_API const tguiRendererData* tguiChildWindowRenderer_getCloseButton(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChildWindowRenderer_setMaximizeButton(tguiRenderer* thisRenderer, const tguiRendererData* value);
CTGUI_API const tguiRendererData* tguiChildWindowRenderer_getMaximizeButton(const tguiRenderer* thisRenderer);

CTGUI_API void tguiChildWindowRenderer_setMinimizeButton(tguiRenderer* thisRenderer, const tguiRendererData* value);
CTGUI_API const tguiRendererData* tguiChildWindowRenderer_getMinimizeButton(const tguiRenderer* thisRenderer);

#endif // CTGUI_CHILDWINDOWRENDERER_H
