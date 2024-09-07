// This file is generated, it should not be edited directly.

#ifndef CTGUI_SCROLLBARRENDERER_H
#define CTGUI_SCROLLBARRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiScrollbarRenderer_create(void);
CTGUI_API tguiRenderer* tguiScrollbarRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiScrollbarRenderer_setTrackColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiScrollbarRenderer_getTrackColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiScrollbarRenderer_setTrackColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiScrollbarRenderer_getTrackColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiScrollbarRenderer_setThumbColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiScrollbarRenderer_getThumbColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiScrollbarRenderer_setThumbColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiScrollbarRenderer_getThumbColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiScrollbarRenderer_setArrowBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiScrollbarRenderer_getArrowBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiScrollbarRenderer_setArrowBackgroundColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiScrollbarRenderer_getArrowBackgroundColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiScrollbarRenderer_setArrowColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiScrollbarRenderer_getArrowColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiScrollbarRenderer_setArrowColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiScrollbarRenderer_getArrowColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiScrollbarRenderer_setTextureTrack(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiScrollbarRenderer_getTextureTrack(const tguiRenderer* thisRenderer);

CTGUI_API void tguiScrollbarRenderer_setTextureTrackHover(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiScrollbarRenderer_getTextureTrackHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiScrollbarRenderer_setTextureThumb(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiScrollbarRenderer_getTextureThumb(const tguiRenderer* thisRenderer);

CTGUI_API void tguiScrollbarRenderer_setTextureThumbHover(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiScrollbarRenderer_getTextureThumbHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiScrollbarRenderer_setTextureArrowUp(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiScrollbarRenderer_getTextureArrowUp(const tguiRenderer* thisRenderer);

CTGUI_API void tguiScrollbarRenderer_setTextureArrowUpHover(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiScrollbarRenderer_getTextureArrowUpHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiScrollbarRenderer_setTextureArrowDown(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiScrollbarRenderer_getTextureArrowDown(const tguiRenderer* thisRenderer);

CTGUI_API void tguiScrollbarRenderer_setTextureArrowDownHover(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiScrollbarRenderer_getTextureArrowDownHover(const tguiRenderer* thisRenderer);

#endif // CTGUI_SCROLLBARRENDERER_H
