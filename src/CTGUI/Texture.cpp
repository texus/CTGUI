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


#include <CTGUI/Texture.h>
#include <CTGUI/TextureStruct.hpp>
#include <CTGUI/InternalGlobal.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiTexture* tguiTexture_createNull(void)
{
    return new tguiTexture(std::make_unique<tgui::Texture>());
}

tguiTexture* tguiTexture_createFromFile(tguiUtf32 filename, tguiUIntRect partRect, tguiUIntRect middleRect)
{
    return tguiTexture_createFromFileEx(filename, partRect, middleRect, tguiTexture_getDefaultSmooth());
}

tguiTexture* tguiTexture_createFromFileEx(tguiUtf32 filename, tguiUIntRect partRect, tguiUIntRect middleRect, tguiBool smoothing)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(
        ctgui::toCppStr(filename),
        tgui::UIntRect{partRect.left, partRect.top, partRect.width, partRect.height},
        tgui::UIntRect{middleRect.left, middleRect.top, middleRect.width, middleRect.height},
        smoothing != 0
    ));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiTexture* tguiTexture_createFromMemory(tguiUint8* data, size_t dataSize, tguiUIntRect partRect, tguiUIntRect middleRect)
{
    return tguiTexture_createFromMemoryEx(data, dataSize, partRect, middleRect, tguiTexture_getDefaultSmooth());
}

tguiTexture* tguiTexture_createFromMemoryEx(tguiUint8* data, size_t dataSize, tguiUIntRect partRect, tguiUIntRect middleRect, tguiBool smoothing)
{
    auto texture = std::make_unique<tgui::Texture>();
    texture->loadFromMemory(
        data,
        dataSize,
        {partRect.left, partRect.top, partRect.width, partRect.height},
        {middleRect.left, middleRect.top, middleRect.width, middleRect.height},
        smoothing != 0);
    return new tguiTexture(std::move(texture));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiTexture* tguiTexture_createFromPixelData(tguiVector2u size, tguiUint8* pixels, tguiUIntRect partRect, tguiUIntRect middleRect)
{
    return tguiTexture_createFromPixelDataEx(size, pixels, partRect, middleRect, tguiTexture_getDefaultSmooth());
}

tguiTexture* tguiTexture_createFromPixelDataEx(tguiVector2u size, tguiUint8* pixels, tguiUIntRect partRect, tguiUIntRect middleRect, tguiBool smoothing)
{
    auto texture = std::make_unique<tgui::Texture>();
    texture->loadFromPixelData(
        {size.x, size.y},
        pixels,
        {partRect.left, partRect.top, partRect.width, partRect.height},
        {middleRect.left, middleRect.top, middleRect.width, middleRect.height},
        smoothing != 0);
    return new tguiTexture(std::move(texture));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiTexture* tguiTexture_createFromBase64(const char* imageAsBase64, tguiUIntRect partRect, tguiUIntRect middleRect)
{
    return tguiTexture_createFromBase64Ex(imageAsBase64, partRect, middleRect, tguiTexture_getDefaultSmooth());
}

tguiTexture* tguiTexture_createFromBase64Ex(const char* imageAsBase64, tguiUIntRect partRect, tguiUIntRect middleRect, tguiBool smoothing)
{
    auto texture = std::make_unique<tgui::Texture>();
    texture->loadFromBase64(
        imageAsBase64,
        {partRect.left, partRect.top, partRect.width, partRect.height},
        {middleRect.left, middleRect.top, middleRect.width, middleRect.height},
        smoothing != 0);
    return new tguiTexture(std::move(texture));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTexture_free(tguiTexture* texture)
{
    delete texture;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiTexture_getId(const tguiTexture* texture)
{
    return ctgui::fromCppStr(texture->This->getId());
}

tguiVector2u tguiTexture_getImageSize(const tguiTexture* texture)
{
    const tgui::Vector2u imageSize = texture->This->getImageSize();
    return {imageSize.x, imageSize.y};
}

tguiUIntRect tguiTexture_getPartRect(const tguiTexture* texture)
{
    const tgui::UIntRect rect = texture->This->getPartRect();
    return {rect.left, rect.top, rect.width, rect.height};
}

tguiBool tguiTexture_isSmooth(const tguiTexture* texture)
{
    return texture->This->isSmooth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTexture_setColor(tguiTexture* texture, tguiColor* color)
{
    texture->This->setColor(ctgui::toCppColor(color));
}

tguiColor* tguiTexture_getColor(const tguiTexture* texture)
{
    return ctgui::fromCppColor(texture->This->getColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTexture_setMiddleRect(tguiTexture* texture, tguiUIntRect middleRect)
{
    texture->This->setMiddleRect({middleRect.left, middleRect.top, middleRect.width, middleRect.height});
}

tguiUIntRect tguiTexture_getMiddleRect(const tguiTexture* texture)
{
    const tgui::UIntRect rect = texture->This->getMiddleRect();
    return {rect.left, rect.top, rect.width, rect.height};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTexture_isTransparentPixel(const tguiTexture* texture, tguiVector2u pos)
{
    return texture->This->isTransparentPixel({pos.x, pos.y});
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTexture_setDefaultSmooth(tguiBool smooth)
{
    tgui::Texture::setDefaultSmooth(smooth != 0);
}

tguiBool tguiTexture_getDefaultSmooth(void)
{
    return tgui::Texture::getDefaultSmooth();
}
