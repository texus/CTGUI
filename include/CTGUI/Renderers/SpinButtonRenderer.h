// This file is generated, it should not be edited directly.

#ifndef CTGUI_SPINBUTTONRENDERER_H
#define CTGUI_SPINBUTTONRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiSpinButtonRenderer_create(void);
CTGUI_API tguiRenderer* tguiSpinButtonRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiSpinButtonRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiSpinButtonRenderer_getBorders(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSpinButtonRenderer_setBorderBetweenArrows(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiSpinButtonRenderer_getBorderBetweenArrows(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSpinButtonRenderer_setBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiSpinButtonRenderer_getBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSpinButtonRenderer_setBackgroundColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiSpinButtonRenderer_getBackgroundColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSpinButtonRenderer_setArrowColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiSpinButtonRenderer_getArrowColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSpinButtonRenderer_setArrowColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiSpinButtonRenderer_getArrowColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSpinButtonRenderer_setBorderColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiSpinButtonRenderer_getBorderColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSpinButtonRenderer_setTextureArrowUp(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiSpinButtonRenderer_getTextureArrowUp(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSpinButtonRenderer_setTextureArrowUpHover(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiSpinButtonRenderer_getTextureArrowUpHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSpinButtonRenderer_setTextureArrowDown(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiSpinButtonRenderer_getTextureArrowDown(const tguiRenderer* thisRenderer);

CTGUI_API void tguiSpinButtonRenderer_setTextureArrowDownHover(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiSpinButtonRenderer_getTextureArrowDownHover(const tguiRenderer* thisRenderer);

#endif // CTGUI_SPINBUTTONRENDERER_H
