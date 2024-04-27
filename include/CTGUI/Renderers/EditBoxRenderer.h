// This file is generated, it should not be edited directly.

#ifndef CTGUI_EDITBOXRENDERER_H
#define CTGUI_EDITBOXRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiEditBoxRenderer_create(void);
CTGUI_API tguiRenderer* tguiEditBoxRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiEditBoxRenderer_setBorders(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiEditBoxRenderer_getBorders(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setPadding(tguiRenderer* renderer, tguiOutline* outline);
CTGUI_API tguiOutline* tguiEditBoxRenderer_getPadding(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setCaretWidth(tguiRenderer* renderer, float value);
CTGUI_API float tguiEditBoxRenderer_getCaretWidth(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getTextColor(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setDefaultTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getDefaultTextColor(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setTextColorFocused(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getTextColorFocused(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setTextColorDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getTextColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setSelectedTextColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getSelectedTextColor(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setSelectedTextBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getSelectedTextBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setBackgroundColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getBackgroundColor(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setBackgroundColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getBackgroundColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setBackgroundColorFocused(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getBackgroundColorFocused(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setBackgroundColorDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getBackgroundColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setCaretColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getCaretColor(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setCaretColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getCaretColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setCaretColorFocused(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getCaretColorFocused(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setBorderColor(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getBorderColor(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setBorderColorHover(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getBorderColorHover(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setBorderColorFocused(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getBorderColorFocused(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setBorderColorDisabled(tguiRenderer* renderer, tguiColor* color);
CTGUI_API tguiColor* tguiEditBoxRenderer_getBorderColorDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setTexture(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiEditBoxRenderer_getTexture(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setTextureHover(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiEditBoxRenderer_getTextureHover(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setTextureFocused(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiEditBoxRenderer_getTextureFocused(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setTextureDisabled(tguiRenderer* renderer, tguiTexture* texture);
CTGUI_API tguiTexture* tguiEditBoxRenderer_getTextureDisabled(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setTextStyle(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiEditBoxRenderer_getTextStyle(const tguiRenderer* renderer);

CTGUI_API void tguiEditBoxRenderer_setDefaultTextStyle(tguiRenderer* renderer, tguiUint32 style);
CTGUI_API tguiUint32 tguiEditBoxRenderer_getDefaultTextStyle(const tguiRenderer* renderer);

#endif // CTGUI_EDITBOXRENDERER_H
