// This file is generated, it should not be edited directly.

#ifndef CTGUI_SPINBUTTONRENDERER_H
#define CTGUI_SPINBUTTONRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiSpinButtonRenderer_create(void);
CTGUI_API tguiRenderer* tguiSpinButtonRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiSpinButtonRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiSpinButtonRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiSpinButtonRenderer_setBorderBetweenArrows(tguiRenderer* renderer, float value);
CTGUI_API float tguiSpinButtonRenderer_getBorderBetweenArrows(const tguiRenderer* renderer);

CTGUI_API void tguiSpinButtonRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiSpinButtonRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiSpinButtonRenderer_setBackgroundColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiSpinButtonRenderer_getBackgroundColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiSpinButtonRenderer_setArrowColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiSpinButtonRenderer_getArrowColor(const tguiRenderer* renderer);

CTGUI_API void tguiSpinButtonRenderer_setArrowColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiSpinButtonRenderer_getArrowColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiSpinButtonRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiSpinButtonRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiSpinButtonRenderer_setTextureArrowUp(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiSpinButtonRenderer_getTextureArrowUp(const tguiRenderer* renderer);

CTGUI_API void tguiSpinButtonRenderer_setTextureArrowUpHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiSpinButtonRenderer_getTextureArrowUpHover(const tguiRenderer* renderer);

CTGUI_API void tguiSpinButtonRenderer_setTextureArrowDown(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiSpinButtonRenderer_getTextureArrowDown(const tguiRenderer* renderer);

CTGUI_API void tguiSpinButtonRenderer_setTextureArrowDownHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiSpinButtonRenderer_getTextureArrowDownHover(const tguiRenderer* renderer);

#endif // CTGUI_SPINBUTTONRENDERER_H
