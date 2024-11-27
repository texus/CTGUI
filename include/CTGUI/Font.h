// This file is generated, it should not be edited directly.

#ifndef CTGUI_FONT_H
#define CTGUI_FONT_H

#include <CTGUI/Global.h>


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

CTGUI_API void tguiFont_setGlobalFont(const tguiFont* value);
CTGUI_API const tguiFont* tguiFont_getGlobalFont(void);

CTGUI_API tguiUtf32 tguiFont_getId(const tguiFont* thisFont);

CTGUI_API float tguiFont_getKerning(const tguiFont* thisFont, tguiChar32 first, tguiChar32 second, unsigned int characterSize, tguiBool bold);

CTGUI_API float tguiFont_getLineSpacing(const tguiFont* thisFont, unsigned int characterSize);

CTGUI_API float tguiFont_getFontHeight(const tguiFont* thisFont, unsigned int characterSize);

CTGUI_API void tguiFont_setSmooth(tguiFont* thisFont, tguiBool value);
CTGUI_API tguiBool tguiFont_isSmooth(const tguiFont* thisFont);

#endif // CTGUI_FONT_H

