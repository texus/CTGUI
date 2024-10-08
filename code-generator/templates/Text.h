#ifndef CTGUI_TEXT_H
#define CTGUI_TEXT_H

#include <CTGUI/Global.h>

@TGUI_GENERATED_HEAD@

CTGUI_API float tguiText_getStaticExtraHorizontalPadding(const tguiFont* font, unsigned int characterSize);
CTGUI_API float tguiText_getStaticExtraHorizontalOffset(const tguiFont* font, unsigned int characterSize);
CTGUI_API float tguiText_getStaticExtraVerticalPadding(unsigned int characterSize);
CTGUI_API float tguiText_getStaticLineHeight(const tguiFont* font, unsigned int characterSize);
CTGUI_API float tguiText_getStaticLineWidth(tguiUtf32 text, const tguiFont* font, unsigned int characterSize, tguiUint32 style);

CTGUI_API tguiText* tguiText_create(void);
CTGUI_API void tguiText_destroy(tguiText* text);

@TGUI_GENERATED_BODY@

#endif // CTGUI_TEXT_H

