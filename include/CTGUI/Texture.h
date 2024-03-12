/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2024 Bruno Van de Velde (vdv_b@tgui.eu)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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

CTGUI_API void tguiTexture_free(tguiTexture* texture);

CTGUI_API tguiUtf32 tguiTexture_getId(const tguiTexture* texture);
CTGUI_API tguiVector2u tguiTexture_getImageSize(const tguiTexture* texture);
CTGUI_API tguiUIntRect tguiTexture_getPartRect(const tguiTexture* texture);
CTGUI_API tguiBool tguiTexture_isSmooth(const tguiTexture* texture);

CTGUI_API void tguiTexture_setColor(tguiTexture* texture, tguiColor* color);
CTGUI_API tguiColor* tguiTexture_getColor(const tguiTexture* texture);

CTGUI_API void tguiTexture_setMiddleRect(tguiTexture* texture, tguiUIntRect middleRect);
CTGUI_API tguiUIntRect tguiTexture_getMiddleRect(const tguiTexture* texture);

CTGUI_API tguiBool tguiTexture_isTransparentPixel(const tguiTexture* texture, tguiVector2u pos);

CTGUI_API void tguiTexture_setDefaultSmooth(tguiBool smooth);
CTGUI_API tguiBool tguiTexture_getDefaultSmooth(void);

#endif // CTGUI_TEXTURE_H

