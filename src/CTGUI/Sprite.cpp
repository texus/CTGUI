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


#include <CTGUI/Sprite.h>
#include <CTGUI/SpriteStruct.hpp>
#include <CTGUI/InternalGlobal.hpp>

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

void tguiSprite_setTexture(tguiSprite* sprite, tguiTexture* texture)
{
    sprite->This.setTexture(*texture->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiSprite_isSet(const tguiSprite* sprite)
{
    return sprite->This.isSet();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSprite_setSize(tguiSprite* sprite, tguiVector2f size)
{
    sprite->This.setSize({size.x, size.y});
}

tguiVector2f tguiSprite_getSize(const tguiSprite* sprite)
{
    const tgui::Vector2f size = sprite->This.getSize();
    return {size.x, size.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSprite_setOpacity(tguiSprite* sprite, float opacity)
{
    sprite->This.setOpacity(opacity);
}

float tguiSprite_getOpacity(const tguiSprite* sprite)
{
    return sprite->This.getOpacity();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSprite_setVisibleRect(tguiSprite* sprite, tguiFloatRect visibleRect)
{
    sprite->This.setVisibleRect({visibleRect.left, visibleRect.top, visibleRect.width, visibleRect.height});
}

tguiFloatRect tguiSprite_getVisibleRect(const tguiSprite* sprite)
{
    const tgui::FloatRect rect = sprite->This.getVisibleRect();
    return {rect.left, rect.top, rect.width, rect.height};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSprite_setPosition(tguiSprite* sprite, tguiVector2f position)
{
    sprite->This.setPosition({position.x, position.y});
}

tguiVector2f tguiSprite_getPosition(const tguiSprite* sprite)
{
    const tgui::Vector2f position = sprite->This.getPosition();
    return {position.x, position.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSprite_setRotation(tguiSprite* sprite, float angle)
{
    sprite->This.setRotation(angle);
}

float tguiSprite_getRotation(const tguiSprite* sprite)
{
    return sprite->This.getRotation();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiSprite_isTransparentPixel(const tguiSprite* sprite, tguiVector2f pos)
{
    return sprite->This.isTransparentPixel({pos.x, pos.y});
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiSpriteScalingType tguiSprite_getScalingType(const tguiSprite* sprite)
{
    return static_cast<tguiSpriteScalingType>(sprite->This.getScalingType());
}
