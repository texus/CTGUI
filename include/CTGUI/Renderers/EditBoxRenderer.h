// This file is generated, it should not be edited directly.

#ifndef CTGUI_EDITBOXRENDERER_H
#define CTGUI_EDITBOXRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiEditBoxRenderer_create(void);
CTGUI_API tguiRenderer* tguiEditBoxRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiEditBoxRenderer_setBorders(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiEditBoxRenderer_getBorders(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setPadding(tguiRenderer* thisRenderer, const tguiOutline* value);
CTGUI_API const tguiOutline* tguiEditBoxRenderer_getPadding(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setCaretWidth(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiEditBoxRenderer_getCaretWidth(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setTextColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiEditBoxRenderer_getTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setDefaultTextColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiEditBoxRenderer_getDefaultTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setTextColorFocused(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiEditBoxRenderer_getTextColorFocused(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setTextColorDisabled(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiEditBoxRenderer_getTextColorDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setSelectedTextColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiEditBoxRenderer_getSelectedTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setSelectedTextBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiEditBoxRenderer_getSelectedTextBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setBackgroundColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiEditBoxRenderer_getBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setBackgroundColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiEditBoxRenderer_getBackgroundColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setBackgroundColorFocused(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiEditBoxRenderer_getBackgroundColorFocused(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setBackgroundColorDisabled(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiEditBoxRenderer_getBackgroundColorDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setCaretColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiEditBoxRenderer_getCaretColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setCaretColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiEditBoxRenderer_getCaretColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setBorderColor(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiEditBoxRenderer_getBorderColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setBorderColorHover(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiEditBoxRenderer_getBorderColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setBorderColorFocused(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiEditBoxRenderer_getBorderColorFocused(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setBorderColorDisabled(tguiRenderer* thisRenderer, tguiColor value);
CTGUI_API tguiColor tguiEditBoxRenderer_getBorderColorDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setTexture(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiEditBoxRenderer_getTexture(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setTextureHover(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiEditBoxRenderer_getTextureHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setTextureFocused(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiEditBoxRenderer_getTextureFocused(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setTextureDisabled(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiEditBoxRenderer_getTextureDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setTextStyle(tguiRenderer* thisRenderer, tguiUint32 value);
CTGUI_API tguiUint32 tguiEditBoxRenderer_getTextStyle(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setDefaultTextStyle(tguiRenderer* thisRenderer, tguiUint32 value);
CTGUI_API tguiUint32 tguiEditBoxRenderer_getDefaultTextStyle(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setRoundedBorderRadius(tguiRenderer* thisRenderer, float value);
CTGUI_API float tguiEditBoxRenderer_getRoundedBorderRadius(const tguiRenderer* thisRenderer);

#endif // CTGUI_EDITBOXRENDERER_H
