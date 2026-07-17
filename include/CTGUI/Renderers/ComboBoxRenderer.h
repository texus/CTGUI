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

CTGUI_API void tguiComboBoxRenderer_setBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiComboBoxRenderer_getBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setBackgroundColorDisabled(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiComboBoxRenderer_getBackgroundColorDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setTextColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiComboBoxRenderer_getTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setTextColorDisabled(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiComboBoxRenderer_getTextColorDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setDefaultTextColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiComboBoxRenderer_getDefaultTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setArrowBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiComboBoxRenderer_getArrowBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setArrowBackgroundColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiComboBoxRenderer_getArrowBackgroundColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setArrowBackgroundColorDisabled(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiComboBoxRenderer_getArrowBackgroundColorDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setArrowColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiComboBoxRenderer_getArrowColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setArrowColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiComboBoxRenderer_getArrowColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setArrowColorDisabled(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiComboBoxRenderer_getArrowColorDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setBorderColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiComboBoxRenderer_getBorderColor(const tguiRenderer* thisRenderer);

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

CTGUI_API void tguiComboBoxRenderer_setListBox(tguiRenderer* thisRenderer, tguiRendererData* value);
CTGUI_API tguiRendererData* tguiComboBoxRenderer_getListBox(const tguiRenderer* thisRenderer);

CTGUI_API void tguiComboBoxRenderer_setRoundedBorderRadius(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiComboBoxRenderer_getRoundedBorderRadius(const tguiRenderer* thisRenderer);

#endif // CTGUI_COMBOBOXRENDERER_H
