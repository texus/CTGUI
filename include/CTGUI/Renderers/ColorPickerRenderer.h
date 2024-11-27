// This file is generated, it should not be edited directly.

#ifndef CTGUI_COLORPICKERRENDERER_H
#define CTGUI_COLORPICKERRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiColorPickerRenderer_create(void);
CTGUI_API tguiRenderer* tguiColorPickerRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiColorPickerRenderer_setButton(tguiRenderer* thisRenderer, const tguiRendererData* value);
CTGUI_API const tguiRendererData* tguiColorPickerRenderer_getButton(const tguiRenderer* thisRenderer);

CTGUI_API void tguiColorPickerRenderer_setLabel(tguiRenderer* thisRenderer, const tguiRendererData* value);
CTGUI_API const tguiRendererData* tguiColorPickerRenderer_getLabel(const tguiRenderer* thisRenderer);

CTGUI_API void tguiColorPickerRenderer_setSlider(tguiRenderer* thisRenderer, const tguiRendererData* value);
CTGUI_API const tguiRendererData* tguiColorPickerRenderer_getSlider(const tguiRenderer* thisRenderer);

CTGUI_API void tguiColorPickerRenderer_setEditBox(tguiRenderer* thisRenderer, const tguiRendererData* value);
CTGUI_API const tguiRendererData* tguiColorPickerRenderer_getEditBox(const tguiRenderer* thisRenderer);

#endif // CTGUI_COLORPICKERRENDERER_H
