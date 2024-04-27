// This file is generated, it should not be edited directly.

#ifndef CTGUI_COLORPICKERRENDERER_H
#define CTGUI_COLORPICKERRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiColorPickerRenderer_create(void);
CTGUI_API tguiRenderer* tguiColorPickerRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiColorPickerRenderer_setButton(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiColorPickerRenderer_getButton(const tguiRenderer* renderer);

CTGUI_API void tguiColorPickerRenderer_setLabel(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiColorPickerRenderer_getLabel(const tguiRenderer* renderer);

CTGUI_API void tguiColorPickerRenderer_setSlider(tguiRenderer* renderer, tguiRendererData* rendererData);
CTGUI_API tguiRendererData* tguiColorPickerRenderer_getSlider(const tguiRenderer* renderer);

#endif // CTGUI_COLORPICKERRENDERER_H
