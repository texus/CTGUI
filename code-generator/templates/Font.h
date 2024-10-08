#ifndef CTGUI_FONT_H
#define CTGUI_FONT_H

#include <CTGUI/Global.h>

@TGUI_GENERATED_HEAD@

typedef struct
{
    float         advance;      //!< Offset to move horizontally to the next character
    tguiFloatRect bounds;       //!< Bounding rectangle of the glyph, in coordinates relative to the baseline
    tguiUIntRect  textureRect;  //!< Texture coordinates of the glyph inside the font's texture
} tguiFontGlyph;

CTGUI_API tguiFont* tguiFont_createNull(void);
CTGUI_API tguiFont* tguiFont_createFromFile(tguiUtf32 filename);
CTGUI_API tguiFont* tguiFont_createFromMemory(tguiUint8* data, size_t dataSize);

CTGUI_API void tguiFont_destroy(tguiFont* font);

CTGUI_API tguiFontGlyph tguiFont_getGlyph(const tguiFont* font, tguiChar32 codePoint, unsigned int characterSize, tguiBool bold, float outlineThickness);

@TGUI_GENERATED_BODY@

#endif // CTGUI_FONT_H

