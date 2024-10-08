#include <CTGUI/Texture.h>
#include <CTGUI/TextureStruct.hpp>
#include <CTGUI/InternalGlobal.hpp>

@TGUI_GENERATED_HEAD@

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

void tguiTexture_destroy(tguiTexture* texture)
{
    delete texture;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

@TGUI_GENERATED_BODY@
