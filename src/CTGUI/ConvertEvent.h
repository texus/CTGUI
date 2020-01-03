/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2020 Bruno Van de Velde (vdv_b@tgui.eu)
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

#ifndef CTGUI_CONVERT_EVENT_H
#define CTGUI_CONVERT_EVENT_H

#include <SFML/Window/Event.hpp>
#include <SFML/Window/Event.h>

// Define a function to convert an sfEvent to an sf::Event
void convertEvent(const sfEvent& event, sf::Event& SFMLEvent)
{
    // Convert its type
    SFMLEvent.type = static_cast<sf::Event::EventType>(event.type);

    // Fill its fields
    switch (event.type)
    {
        case sfEvtResized :
            SFMLEvent.size.width = event.size.width;
            SFMLEvent.size.height = event.size.height;
            break;

        case sfEvtTextEntered :
            SFMLEvent.text.unicode = event.text.unicode;
            break;

        case sfEvtKeyReleased :
        case sfEvtKeyPressed :
            SFMLEvent.key.code = static_cast<sf::Keyboard::Key>(event.key.code);
            SFMLEvent.key.alt     = event.key.alt     ? true : false;
            SFMLEvent.key.control = event.key.control ? true : false;
            SFMLEvent.key.shift   = event.key.shift   ? true : false;
            SFMLEvent.key.system  = event.key.system  ? true : false;
            break;

        case sfEvtMouseWheelScrolled :
            SFMLEvent.mouseWheelScroll.wheel = static_cast<sf::Mouse::Wheel>(event.mouseWheelScroll.wheel);
            SFMLEvent.mouseWheelScroll.delta = event.mouseWheelScroll.delta;
            SFMLEvent.mouseWheelScroll.x     = event.mouseWheelScroll.x;
            SFMLEvent.mouseWheelScroll.y     = event.mouseWheelScroll.y;
            break;

        case sfEvtMouseButtonPressed :
        case sfEvtMouseButtonReleased :
            SFMLEvent.mouseButton.button = static_cast<sf::Mouse::Button>(event.mouseButton.button);
            SFMLEvent.mouseButton.x      = event.mouseButton.x;
            SFMLEvent.mouseButton.y      = event.mouseButton.y;
            break;

        case sfEvtMouseMoved :
            SFMLEvent.mouseMove.x = event.mouseMove.x;
            SFMLEvent.mouseMove.y = event.mouseMove.y;
            break;

        case sfEvtJoystickButtonPressed :
        case sfEvtJoystickButtonReleased :
            SFMLEvent.joystickButton.joystickId = event.joystickButton.joystickId;
            SFMLEvent.joystickButton.button     = event.joystickButton.button;
            break;

        case sfEvtJoystickMoved :
            SFMLEvent.joystickMove.joystickId = event.joystickMove.joystickId;
            SFMLEvent.joystickMove.axis       = static_cast<sf::Joystick::Axis>(event.joystickMove.axis);
            SFMLEvent.joystickMove.position   = event.joystickMove.position;
            break;

        case sfEvtJoystickConnected :
        case sfEvtJoystickDisconnected :
            SFMLEvent.joystickConnect.joystickId = event.joystickConnect.joystickId;
            break;

        case sfEvtTouchBegan :
        case sfEvtTouchMoved :
        case sfEvtTouchEnded :
            SFMLEvent.touch.finger = event.touch.finger;
            SFMLEvent.touch.x      = event.touch.x;
            SFMLEvent.touch.y      = event.touch.y;
            break;

        case sfEvtSensorChanged :
            SFMLEvent.sensor.type = static_cast<sf::Sensor::Type>(event.sensor.sensorType);
            SFMLEvent.sensor.x = event.sensor.x;
            SFMLEvent.sensor.y = event.sensor.y;
            SFMLEvent.sensor.z = event.sensor.z;
            break;

        default:
            break;
    }
}

#endif // CTGUI_CONVERT_EVENT_H
