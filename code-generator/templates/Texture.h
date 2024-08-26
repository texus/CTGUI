#ifndef CTGUI_TEXTURE_H
#define CTGUI_TEXTURE_H

#include <CTGUI/Global.h>

@TGUI_GENERATED_HEAD@

CTGUI_API tguiTexture* tguiTexture_createNull(void);
CTGUI_API tguiTexture* tguiTexture_createFromFile(tguiUtf32 filename, tguiUIntRect partRect, tguiUIntRect middleRect);
CTGUI_API tguiTexture* tguiTexture_createFromFileEx(tguiUtf32 filename, tguiUIntRect partRect, tguiUIntRect middleRect, tguiBool smoothing);

CTGUI_API tguiTexture* tguiTexture_createFromMemory(tguiUint8* data, size_t dataSize, tguiUIntRect partRect, tguiUIntRect middleRect);
CTGUI_API tguiTexture* tguiTexture_createFromMemoryEx(tguiUint8* data, size_t dataSize, tguiUIntRect partRect, tguiUIntRect middleRect, tguiBool smoothing);

CTGUI_API tguiTexture* tguiTexture_createFromPixelData(tguiVector2u size, tguiUint8* pixels, tguiUIntRect partRect, tguiUIntRect middleRect);
CTGUI_API tguiTexture* tguiTexture_createFromPixelDataEx(tguiVector2u size, tguiUint8* pixels, tguiUIntRect partRect, tguiUIntRect middleRect, tguiBool smoothing);

CTGUI_API tguiTexture* tguiTexture_createFromBase64(const char* imageAsBase64, tguiUIntRect partRect, tguiUIntRect middleRect);
CTGUI_API tguiTexture* tguiTexture_createFromBase64Ex(const char* imageAsBase64, tguiUIntRect partRect, tguiUIntRect middleRect, tguiBool smoothing);

CTGUI_API void tguiTexture_free(tguiTexture* texture);

@TGUI_GENERATED_BODY@

#endif // CTGUI_TEXTURE_H
