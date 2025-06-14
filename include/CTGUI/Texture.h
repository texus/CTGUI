// This file is generated, it should not be edited directly.

#ifndef CTGUI_TEXTURE_H
#define CTGUI_TEXTURE_H

#include <CTGUI/Global.h>


CTGUI_API tguiTexture* tguiTexture_createNull(void);
CTGUI_API tguiTexture* tguiTexture_createFromFile(tguiUtf32 filename, tguiUIntRect partRect, tguiUIntRect middleRect);
CTGUI_API tguiTexture* tguiTexture_createFromFileEx(tguiUtf32 filename, tguiUIntRect partRect, tguiUIntRect middleRect, tguiBool smoothing);

CTGUI_API tguiTexture* tguiTexture_createFromMemory(tguiUint8* data, size_t dataSize, tguiUIntRect partRect, tguiUIntRect middleRect);
CTGUI_API tguiTexture* tguiTexture_createFromMemoryEx(tguiUint8* data, size_t dataSize, tguiUIntRect partRect, tguiUIntRect middleRect, tguiBool smoothing);

CTGUI_API tguiTexture* tguiTexture_createFromPixelData(tguiVector2u size, tguiUint8* pixels, tguiUIntRect partRect, tguiUIntRect middleRect);
CTGUI_API tguiTexture* tguiTexture_createFromPixelDataEx(tguiVector2u size, tguiUint8* pixels, tguiUIntRect partRect, tguiUIntRect middleRect, tguiBool smoothing);

CTGUI_API tguiTexture* tguiTexture_createFromBase64(const char* imageAsBase64, tguiUIntRect partRect, tguiUIntRect middleRect);
CTGUI_API tguiTexture* tguiTexture_createFromBase64Ex(const char* imageAsBase64, tguiUIntRect partRect, tguiUIntRect middleRect, tguiBool smoothing);

CTGUI_API void tguiTexture_destroy(tguiTexture* texture);

CTGUI_API void tguiTexture_setColor(tguiTexture* thisTexture, tguiColor value);
CTGUI_API tguiColor tguiTexture_getColor(const tguiTexture* thisTexture);

CTGUI_API void tguiTexture_setMiddleRect(tguiTexture* thisTexture, tguiUIntRect value);
CTGUI_API tguiUIntRect tguiTexture_getMiddleRect(const tguiTexture* thisTexture);

CTGUI_API void tguiTexture_setScaledNineSlice(tguiTexture* thisTexture, tguiBool value);
CTGUI_API tguiBool tguiTexture_getScaledNineSlice(const tguiTexture* thisTexture);

CTGUI_API tguiUtf32 tguiTexture_getId(const tguiTexture* thisTexture);

CTGUI_API tguiVector2u tguiTexture_getImageSize(const tguiTexture* thisTexture);

CTGUI_API tguiUIntRect tguiTexture_getPartRect(const tguiTexture* thisTexture);

CTGUI_API tguiBool tguiTexture_isSmooth(const tguiTexture* thisTexture);

CTGUI_API tguiBool tguiTexture_isTransparentPixel(const tguiTexture* thisTexture, tguiVector2u pos);

CTGUI_API void tguiTexture_setDefaultSmooth(tguiBool smooth);

CTGUI_API tguiBool tguiTexture_getDefaultSmooth(void);

#endif // CTGUI_TEXTURE_H
