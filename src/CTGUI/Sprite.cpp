// This file is generated, it should not be edited directly.

#include <CTGUI/Sprite.h>
#include <CTGUI/SpriteStruct.hpp>
#include <CTGUI/InternalGlobal.hpp>

#include <CTGUI/TextureStruct.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiSprite* tguiSprite_createNull(void)
{
    return new tguiSprite(nullptr);
}

tguiSprite* tguiSprite_createFromTexture(tguiTexture* texture)
{
    return new tguiSprite(texture);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSprite_free(tguiSprite* sprite)
{
    delete sprite;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiSpriteScalingType tguiSprite_getScalingType(const tguiSprite* sprite)
{
    return static_cast<tguiSpriteScalingType>(sprite->This->getScalingType());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiSprite_isSet(const tguiSprite* thisSprite)
{
    return thisSprite->This->isSet();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSprite_setTexture(tguiSprite* thisSprite, const tguiTexture* value)
{
    thisSprite->This->setTexture(*value->This);
}

const tguiTexture* tguiSprite_getTexture(const tguiSprite* thisSprite)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(thisSprite->This->getTexture()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSprite_setPosition(tguiSprite* thisSprite, tguiVector2f value)
{
    thisSprite->This->setPosition({value.x, value.y});
}

tguiVector2f tguiSprite_getPosition(const tguiSprite* thisSprite)
{
    const auto value = thisSprite->This->getPosition();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSprite_setSize(tguiSprite* thisSprite, tguiVector2f value)
{
    thisSprite->This->setSize({value.x, value.y});
}

tguiVector2f tguiSprite_getSize(const tguiSprite* thisSprite)
{
    const auto value = thisSprite->This->getSize();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSprite_setOpacity(tguiSprite* thisSprite, float value)
{
    thisSprite->This->setOpacity(value);
}

float tguiSprite_getOpacity(const tguiSprite* thisSprite)
{
    return thisSprite->This->getOpacity();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSprite_setVisibleRect(tguiSprite* thisSprite, tguiFloatRect value)
{
    thisSprite->This->setVisibleRect({value.left, value.top, value.width, value.height});
}

tguiFloatRect tguiSprite_getVisibleRect(const tguiSprite* thisSprite)
{
    const auto rect = thisSprite->This->getVisibleRect();
    return {rect.getPosition().x, rect.getPosition().y, rect.getSize().x, rect.getSize().y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSprite_setRotation(tguiSprite* thisSprite, float value)
{
    thisSprite->This->setRotation(value);
}

float tguiSprite_getRotation(const tguiSprite* thisSprite)
{
    return thisSprite->This->getRotation();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiSprite_isTransparentPixel(const tguiSprite* thisSprite, tguiVector2f pos)
{
    return thisSprite->This->isTransparentPixel({pos.x, pos.y});
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
