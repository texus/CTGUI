// This file is generated, it should not be edited directly.

#ifndef CTGUI_COMBOBOXRENDERER_H
#define CTGUI_COMBOBOXRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiComboBoxRenderer_create(void);
CTGUI_API tguiRenderer* tguiComboBoxRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiComboBoxRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiComboBoxRenderer_getBorders(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setPadding(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiComboBoxRenderer_getPadding(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiComboBoxRenderer_getBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setBackgroundColorDisabled(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiComboBoxRenderer_getBackgroundColorDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setTextColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiComboBoxRenderer_getTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setTextColorDisabled(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiComboBoxRenderer_getTextColorDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setDefaultTextColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiComboBoxRenderer_getDefaultTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setArrowBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiComboBoxRenderer_getArrowBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setArrowBackgroundColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiComboBoxRenderer_getArrowBackgroundColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setArrowBackgroundColorDisabled(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiComboBoxRenderer_getArrowBackgroundColorDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setArrowColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiComboBoxRenderer_getArrowColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setArrowColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiComboBoxRenderer_getArrowColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setArrowColorDisabled(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiComboBoxRenderer_getArrowColorDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setBorderColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiComboBoxRenderer_getBorderColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiComboBoxRenderer_getTextureBackground(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setTextureBackgroundDisabled(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiComboBoxRenderer_getTextureBackgroundDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setTextureArrow(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiComboBoxRenderer_getTextureArrow(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setTextureArrowHover(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiComboBoxRenderer_getTextureArrowHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setTextureArrowDisabled(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiComboBoxRenderer_getTextureArrowDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setTextStyle(tguiRenderer* thisRenderer, tguiUint32 value);
CTGUI_API tguiUint32 tguiComboBoxRenderer_getTextStyle(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setDefaultTextStyle(tguiRenderer* thisRenderer, tguiUint32 value);
CTGUI_API tguiUint32 tguiComboBoxRenderer_getDefaultTextStyle(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setListBox(tguiRenderer* thisRenderer, const tguiRendererData* value);
CTGUI_API const tguiRendererData* tguiComboBoxRenderer_getListBox(const tguiRenderer* thisRenderer);

#endif // CTGUI_COMBOBOXRENDERER_H
