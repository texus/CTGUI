// This file is generated, it should not be edited directly.

#ifndef CTGUI_SCROLLBARRENDERER_H
#define CTGUI_SCROLLBARRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiScrollbarRenderer_create(void);
CTGUI_API tguiRenderer* tguiScrollbarRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiScrollbarRenderer_setTrackColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiScrollbarRenderer_getTrackColor(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setTrackColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiScrollbarRenderer_getTrackColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setThumbColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiScrollbarRenderer_getThumbColor(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setThumbColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiScrollbarRenderer_getThumbColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setArrowBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiScrollbarRenderer_getArrowBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setArrowBackgroundColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiScrollbarRenderer_getArrowBackgroundColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setArrowColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiScrollbarRenderer_getArrowColor(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setArrowColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiScrollbarRenderer_getArrowColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setTextureTrack(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiScrollbarRenderer_getTextureTrack(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setTextureTrackHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiScrollbarRenderer_getTextureTrackHover(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setTextureThumb(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiScrollbarRenderer_getTextureThumb(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setTextureThumbHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiScrollbarRenderer_getTextureThumbHover(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setTextureArrowUp(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiScrollbarRenderer_getTextureArrowUp(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setTextureArrowUpHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiScrollbarRenderer_getTextureArrowUpHover(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setTextureArrowDown(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiScrollbarRenderer_getTextureArrowDown(const tguiRenderer* renderer);

CTGUI_API void tguiScrollbarRenderer_setTextureArrowDownHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiScrollbarRenderer_getTextureArrowDownHover(const tguiRenderer* renderer);

#endif // CTGUI_SCROLLBARRENDERER_H
