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

CTGUI_API void tguiEditBoxRenderer_setTextColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiEditBoxRenderer_getTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setDefaultTextColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiEditBoxRenderer_getDefaultTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setTextColorFocused(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiEditBoxRenderer_getTextColorFocused(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setTextColorDisabled(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiEditBoxRenderer_getTextColorDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setSelectedTextColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiEditBoxRenderer_getSelectedTextColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setSelectedTextBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiEditBoxRenderer_getSelectedTextBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setBackgroundColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiEditBoxRenderer_getBackgroundColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setBackgroundColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiEditBoxRenderer_getBackgroundColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setBackgroundColorFocused(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiEditBoxRenderer_getBackgroundColorFocused(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setBackgroundColorDisabled(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiEditBoxRenderer_getBackgroundColorDisabled(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setCaretColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiEditBoxRenderer_getCaretColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setCaretColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiEditBoxRenderer_getCaretColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setCaretColorFocused(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiEditBoxRenderer_getCaretColorFocused(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setBorderColor(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiEditBoxRenderer_getBorderColor(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setBorderColorHover(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiEditBoxRenderer_getBorderColorHover(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setBorderColorFocused(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiEditBoxRenderer_getBorderColorFocused(const tguiRenderer* thisRenderer);

CTGUI_API void tguiEditBoxRenderer_setBorderColorDisabled(tguiRenderer* thisRenderer, const tguiColor* value);
CTGUI_API const tguiColor* tguiEditBoxRenderer_getBorderColorDisabled(const tguiRenderer* thisRenderer);

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

#endif // CTGUI_EDITBOXRENDERER_H
