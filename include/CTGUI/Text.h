// This file is generated, it should not be edited directly.

#ifndef CTGUI_TEXT_H
#define CTGUI_TEXT_H

#include <CTGUI/Global.h>


CTGUI_API float tguiText_getStaticExtraHorizontalPadding(const tguiFont* font, unsigned int characterSize);
CTGUI_API float tguiText_getStaticExtraHorizontalOffset(const tguiFont* font, unsigned int characterSize);
CTGUI_API float tguiText_getStaticExtraVerticalPadding(unsigned int characterSize);
CTGUI_API float tguiText_getStaticLineHeight(const tguiFont* font, unsigned int characterSize);
CTGUI_API float tguiText_getStaticLineWidth(tguiUtf32 text, const tguiFont* font, unsigned int characterSize, tguiUint32 style);

CTGUI_API tguiText* tguiText_create(void);
CTGUI_API void tguiText_destroy(tguiText* text);

CTGUI_API unsigned int tguiText_findBestTextSize(const tguiFont* font, float height, int fit);

CTGUI_API tguiUtf32 tguiText_wordWrap(float maxWidth, tguiUtf32 text, const tguiFont* font, unsigned int textSize, tguiBool bold);

CTGUI_API tguiVector2f tguiText_getSize(const tguiText* thisText);

CTGUI_API void tguiText_setPosition(tguiText* thisText, tguiVector2f value);
CTGUI_API tguiVector2f tguiText_getPosition(const tguiText* thisText);

CTGUI_API void tguiText_setString(tguiText* thisText, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiText_getString(const tguiText* thisText);

CTGUI_API void tguiText_setCharacterSize(tguiText* thisText, unsigned int value);
CTGUI_API unsigned int tguiText_getCharacterSize(const tguiText* thisText);

CTGUI_API void tguiText_setColor(tguiText* thisText, tguiColor value);
CTGUI_API tguiColor tguiText_getColor(const tguiText* thisText);

CTGUI_API void tguiText_setOpacity(tguiText* thisText, float value);
CTGUI_API float tguiText_getOpacity(const tguiText* thisText);

CTGUI_API void tguiText_setFont(tguiText* thisText, const tguiFont* value);
CTGUI_API const tguiFont* tguiText_getFont(const tguiText* thisText);

CTGUI_API void tguiText_setStyle(tguiText* thisText, tguiUint32 value);
CTGUI_API tguiUint32 tguiText_getStyle(const tguiText* thisText);

CTGUI_API void tguiText_setOutlineColor(tguiText* thisText, tguiColor value);
CTGUI_API tguiColor tguiText_getOutlineColor(const tguiText* thisText);

CTGUI_API void tguiText_setOutlineThickness(tguiText* thisText, float value);
CTGUI_API float tguiText_getOutlineThickness(const tguiText* thisText);

CTGUI_API tguiVector2f tguiText_findCharacterPos(const tguiText* thisText, size_t index);

CTGUI_API float tguiText_getExtraHorizontalPadding(const tguiText* thisText);

CTGUI_API float tguiText_getExtraHorizontalOffset(const tguiText* thisText);

CTGUI_API float tguiText_getLineHeight(const tguiText* thisText);

CTGUI_API float tguiText_getLineWidth(const tguiText* thisText);

#endif // CTGUI_TEXT_H

