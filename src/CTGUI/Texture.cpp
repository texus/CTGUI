// This file is generated, it should not be edited directly.

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

void tguiTexture_setColor(tguiTexture* thisTexture, tguiColor value)
{
    thisTexture->This->setColor(ctgui::toCppColor(value));
}

tguiColor tguiTexture_getColor(const tguiTexture* thisTexture)
{
    return ctgui::fromCppColor(thisTexture->This->getColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTexture_setMiddleRect(tguiTexture* thisTexture, tguiUIntRect value)
{
    thisTexture->This->setMiddleRect({value.left, value.top, value.width, value.height});
}

tguiUIntRect tguiTexture_getMiddleRect(const tguiTexture* thisTexture)
{
    const auto rect = thisTexture->This->getMiddleRect();
    return {rect.getPosition().x, rect.getPosition().y, rect.getSize().x, rect.getSize().y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiTexture_getId(const tguiTexture* thisTexture)
{
    return ctgui::fromCppStr(thisTexture->This->getId());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2u tguiTexture_getImageSize(const tguiTexture* thisTexture)
{
    const auto value = thisTexture->This->getImageSize();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUIntRect tguiTexture_getPartRect(const tguiTexture* thisTexture)
{
    const auto rect = thisTexture->This->getPartRect();
    return {rect.getPosition().x, rect.getPosition().y, rect.getSize().x, rect.getSize().y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTexture_isSmooth(const tguiTexture* thisTexture)
{
    return thisTexture->This->isSmooth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTexture_isTransparentPixel(const tguiTexture* thisTexture, tguiVector2u pos)
{
    return thisTexture->This->isTransparentPixel({pos.x, pos.y});
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTexture_setDefaultSmooth(tguiBool smooth)
{
    tgui::Texture::setDefaultSmooth(smooth != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiTexture_getDefaultSmooth(void)
{
    return tgui::Texture::getDefaultSmooth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
