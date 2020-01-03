/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2019 Bruno Van de Velde (vdv_b@tgui.eu)
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


#include <CTGUI/CustomWidgetForBindings.h>
#include <CTGUI/CustomWidgetForBindingsStruct.h>
#include <CTGUI/SFML/Graphics/ConvertTransform.hpp>
#include <CTGUI/SFML/Graphics/TextureStruct.h>
#include <CTGUI/SFML/Graphics/ShaderStruct.h>

#include <TGUI/CustomWidgetForBindings.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::CustomWidgetForBindings>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

static sfRenderStates convertRenderStates(sf::RenderStates states)
{
    sfRenderStates csfmlStates;
    csfmlStates.blendMode.colorSrcFactor = static_cast<sfBlendFactor>(states.blendMode.colorSrcFactor);
    csfmlStates.blendMode.colorDstFactor = static_cast<sfBlendFactor>(states.blendMode.colorDstFactor);
    csfmlStates.blendMode.colorEquation = static_cast<sfBlendEquation>(states.blendMode.colorEquation);
    csfmlStates.blendMode.alphaSrcFactor = static_cast<sfBlendFactor>(states.blendMode.alphaSrcFactor);
    csfmlStates.blendMode.alphaDstFactor = static_cast<sfBlendFactor>(states.blendMode.alphaDstFactor);
    csfmlStates.blendMode.alphaEquation = static_cast<sfBlendEquation>(states.blendMode.alphaEquation);
    csfmlStates.transform = convertTransform(states.transform);
    csfmlStates.texture = states.texture ? new sfTexture(const_cast<sf::Texture*>(states.texture)) : nullptr;
    csfmlStates.shader = nullptr; // We can't copy sf::Shader, and sfShader doesn't use a pointer to one :(
    return csfmlStates;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiCustomWidgetForBindings* tguiCustomWidgetForBindings_create(void)
{
    auto widget = new tguiCustomWidgetForBindings{tgui::CustomWidgetForBindings::create()};
    DOWNCAST(widget->This)->implPositionChanged = [widget](sf::Vector2f pos){ widget->positionChanged({pos.x, pos.y}); };
    DOWNCAST(widget->This)->implSizeChanged = [widget](sf::Vector2f size){ widget->sizeChanged({size.x, size.y}); };
    DOWNCAST(widget->This)->implVisibleChanged = [widget](bool visible){ widget->visibleChanged(visible); };
    DOWNCAST(widget->This)->implEnableChanged = [widget](bool enabled){ widget->enableChanged(enabled); };
    DOWNCAST(widget->This)->implFocusChanged = [widget](bool focused){ widget->focusChanged(focused); };
    DOWNCAST(widget->This)->implCanGainFocus = [widget](){ return (widget->canGainFocus() != 0); };
    DOWNCAST(widget->This)->implGetFullSize = [widget]()
        {
            const sfVector2f size = widget->getFullSize();
            return sf::Vector2f{size.x, size.y};
        };
    DOWNCAST(widget->This)->implGetAbsolutePosition = [widget]()
        {
            const sfVector2f pos = widget->getAbsolutePosition();
            return sf::Vector2f{pos.x, pos.y};
        };
    DOWNCAST(widget->This)->implGetWidgetOffset = [widget]()
        {
            const sfVector2f offset = widget->getWidgetOffset();
            return sf::Vector2f{offset.x, offset.y};
        };
    DOWNCAST(widget->This)->implUpdateFunction = [widget](sf::Time time)
        {
            sfTime csfmlTime;
            csfmlTime.microseconds = time.asMicroseconds();
            widget->updateFunction(csfmlTime);
        };
    DOWNCAST(widget->This)->implMouseNoLongerOnWidget = [widget](){ widget->mouseNoLongerOnWidget(); };
    DOWNCAST(widget->This)->implLeftMouseButtonNoLongerDown = [widget](){ widget->leftMouseButtonNoLongerDown(); };
    DOWNCAST(widget->This)->implMouseEnteredWidget = [widget](){ widget->mouseEnteredWidget(); };
    DOWNCAST(widget->This)->implMouseLeftWidget = [widget](){ widget->mouseLeftWidget(); };
    DOWNCAST(widget->This)->implMouseOnWidget = [widget](sf::Vector2f pos){ return (widget->mouseOnWidget({pos.x, pos.y}) != 0); };
    DOWNCAST(widget->This)->implLeftMousePressed = [widget](sf::Vector2f pos){ widget->leftMousePressed({pos.x, pos.y}); };
    DOWNCAST(widget->This)->implLeftMouseReleased = [widget](sf::Vector2f pos){ widget->leftMouseReleased({pos.x, pos.y}); };
    DOWNCAST(widget->This)->implRightMousePressed = [widget](sf::Vector2f pos){ widget->rightMousePressed({pos.x, pos.y}); };
    DOWNCAST(widget->This)->implRightMouseReleased = [widget](sf::Vector2f pos){ widget->rightMouseReleased({pos.x, pos.y}); };
    DOWNCAST(widget->This)->implMouseMoved = [widget](sf::Vector2f pos){ widget->mouseMoved({pos.x, pos.y}); };
    DOWNCAST(widget->This)->implKeyPressed = [widget](const sf::Event::KeyEvent &event)
        {
            sfKeyEvent keyEvent;
            keyEvent.code = static_cast<sfKeyCode>(event.code);
            keyEvent.alt = event.alt;
            keyEvent.control = event.control;
            keyEvent.shift = event.shift;
            keyEvent.system = event.system;
            widget->keyPressed(keyEvent);
        };
    DOWNCAST(widget->This)->implTextEntered = [widget](std::uint32_t key){ widget->textEntered(key); };
    DOWNCAST(widget->This)->implMouseWheelScrolled = [widget](float delta, sf::Vector2f pos)
        {
            return (widget->mouseWheelScrolled(delta, {pos.x, pos.y}) != 0);
        };
    DOWNCAST(widget->This)->implRendererChanged = [widget](const std::string& property)
        {
            return (widget->rendererChanged(property.c_str()) != 0);
        };
    DOWNCAST(widget->This)->implDrawFunction = [widget](sf::RenderTarget&, sf::RenderStates states)
        {
            sfRenderStates csfmlStates = convertRenderStates(states);
            widget->drawFunction(csfmlStates);
            delete csfmlStates.texture;
            delete csfmlStates.shader;
        };
    return widget;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiCustomWidgetForBindings_setPositionChangedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfVector2f))
{
    widget->positionChanged = function;
}

void tguiCustomWidgetForBindings_setSizeChangedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfVector2f))
{
    widget->sizeChanged = function;
}

void tguiCustomWidgetForBindings_setVisibleChangedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfBool))
{
    widget->visibleChanged = function;
}

void tguiCustomWidgetForBindings_setEnableChangedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfBool))
{
    widget->enableChanged = function;
}

void tguiCustomWidgetForBindings_setFocusChangedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfBool))
{
    widget->focusChanged = function;
}

void tguiCustomWidgetForBindings_setCanGainFocusCallback(tguiCustomWidgetForBindings* widget, sfBool (*function)(void))
{
    widget->canGainFocus = function;
}

void tguiCustomWidgetForBindings_setGetFullSizeCallback(tguiCustomWidgetForBindings* widget, sfVector2f (*function)(void))
{
    widget->getFullSize = function;
}

void tguiCustomWidgetForBindings_setGetAbsolutePositionCallback(tguiCustomWidgetForBindings* widget, sfVector2f (*function)(void))
{
    widget->getAbsolutePosition = function;
}

void tguiCustomWidgetForBindings_setGetWidgetOffsetCallback(tguiCustomWidgetForBindings* widget, sfVector2f (*function)(void))
{
    widget->getWidgetOffset = function;
}

void tguiCustomWidgetForBindings_setUpdateCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfTime))
{
    widget->updateFunction = function;
}

void tguiCustomWidgetForBindings_setMouseOnWidgetCallback(tguiCustomWidgetForBindings* widget, sfBool (*function)(sfVector2f))
{
    widget->mouseOnWidget = function;
}

void tguiCustomWidgetForBindings_setLeftMousePressedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfVector2f))
{
    widget->leftMousePressed = function;
}

void tguiCustomWidgetForBindings_setLeftMouseReleasedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfVector2f))
{
    widget->leftMouseReleased = function;
}

void tguiCustomWidgetForBindings_setRightMousePressedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfVector2f))
{
    widget->rightMousePressed = function;
}

void tguiCustomWidgetForBindings_setRightMouseReleasedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfVector2f))
{
    widget->rightMouseReleased = function;
}

void tguiCustomWidgetForBindings_setMouseMovedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfVector2f))
{
    widget->mouseMoved = function;
}

void tguiCustomWidgetForBindings_setKeyPressedCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfKeyEvent))
{
    widget->keyPressed = function;
}

void tguiCustomWidgetForBindings_setTextEnteredCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfUint32))
{
    widget->textEntered = function;
}

void tguiCustomWidgetForBindings_setMouseWheelScrolledCallback(tguiCustomWidgetForBindings* widget, sfBool (*function)(float, sfVector2f))
{
    widget->mouseWheelScrolled = function;
}

void tguiCustomWidgetForBindings_setMouseNoLongerOnWidgetCallback(tguiCustomWidgetForBindings* widget, void (*function)(void))
{
    widget->mouseNoLongerOnWidget = function;
}

void tguiCustomWidgetForBindings_setLeftMouseButtonNoLongerDownCallback(tguiCustomWidgetForBindings* widget, void (*function)(void))
{
    widget->leftMouseButtonNoLongerDown = function;
}

void tguiCustomWidgetForBindings_setMouseEnteredWidgetCallback(tguiCustomWidgetForBindings* widget, void (*function)(void))
{
    widget->mouseEnteredWidget = function;
}

void tguiCustomWidgetForBindings_setMouseLeftWidgetCallback(tguiCustomWidgetForBindings* widget, void (*function)(void))
{
    widget->mouseLeftWidget = function;
}

void tguiCustomWidgetForBindings_setRendererChangedCallback(tguiCustomWidgetForBindings* widget, sfBool (*function)(const char*))
{
    widget->rendererChanged = function;
}

void tguiCustomWidgetForBindings_setDrawCallback(tguiCustomWidgetForBindings* widget, void (*function)(sfRenderStates))
{
    widget->drawFunction = function;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

