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


#include <CTGUI/Backend/CSFML-Graphics.h>
#include <CTGUI/Backend/CSFML-Graphics/BackendTexture.inl>
#include <CTGUI/Backend/CSFML-Graphics/BackendFont.inl>
#include <CTGUI/Backend/CSFML-Graphics/BackendRenderer.inl>
#include <CTGUI/Backend/CSFML-Graphics/BackendRenderTarget.inl>
#include <CTGUI/Backend/CSFML-Graphics/Backend.inl>
#include <CTGUI/GuiStruct.hpp>
#include <TGUI/Backend/Window/BackendGui.hpp>
#include <TGUI/Timer.hpp>
#include <stdlib.h>
#include <thread>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace ctgui
{
    TGUI_NODISCARD static tgui::Event::KeyboardKey convertKeyCode(sfKeyCode key)
    {
        switch (key)
        {
        case sfKeyA:          return tgui::Event::KeyboardKey::A;
        case sfKeyB:          return tgui::Event::KeyboardKey::B;
        case sfKeyC:          return tgui::Event::KeyboardKey::C;
        case sfKeyD:          return tgui::Event::KeyboardKey::D;
        case sfKeyE:          return tgui::Event::KeyboardKey::E;
        case sfKeyF:          return tgui::Event::KeyboardKey::F;
        case sfKeyG:          return tgui::Event::KeyboardKey::G;
        case sfKeyH:          return tgui::Event::KeyboardKey::H;
        case sfKeyI:          return tgui::Event::KeyboardKey::I;
        case sfKeyJ:          return tgui::Event::KeyboardKey::J;
        case sfKeyK:          return tgui::Event::KeyboardKey::K;
        case sfKeyL:          return tgui::Event::KeyboardKey::L;
        case sfKeyM:          return tgui::Event::KeyboardKey::M;
        case sfKeyN:          return tgui::Event::KeyboardKey::N;
        case sfKeyO:          return tgui::Event::KeyboardKey::O;
        case sfKeyP:          return tgui::Event::KeyboardKey::P;
        case sfKeyQ:          return tgui::Event::KeyboardKey::Q;
        case sfKeyR:          return tgui::Event::KeyboardKey::R;
        case sfKeyS:          return tgui::Event::KeyboardKey::S;
        case sfKeyT:          return tgui::Event::KeyboardKey::T;
        case sfKeyU:          return tgui::Event::KeyboardKey::U;
        case sfKeyV:          return tgui::Event::KeyboardKey::V;
        case sfKeyW:          return tgui::Event::KeyboardKey::W;
        case sfKeyX:          return tgui::Event::KeyboardKey::X;
        case sfKeyY:          return tgui::Event::KeyboardKey::Y;
        case sfKeyZ:          return tgui::Event::KeyboardKey::Z;
        case sfKeyNum0:       return tgui::Event::KeyboardKey::Num0;
        case sfKeyNum1:       return tgui::Event::KeyboardKey::Num1;
        case sfKeyNum2:       return tgui::Event::KeyboardKey::Num2;
        case sfKeyNum3:       return tgui::Event::KeyboardKey::Num3;
        case sfKeyNum4:       return tgui::Event::KeyboardKey::Num4;
        case sfKeyNum5:       return tgui::Event::KeyboardKey::Num5;
        case sfKeyNum6:       return tgui::Event::KeyboardKey::Num6;
        case sfKeyNum7:       return tgui::Event::KeyboardKey::Num7;
        case sfKeyNum8:       return tgui::Event::KeyboardKey::Num8;
        case sfKeyNum9:       return tgui::Event::KeyboardKey::Num9;
        case sfKeyEscape:     return tgui::Event::KeyboardKey::Escape;
        case sfKeyLControl:   return tgui::Event::KeyboardKey::LControl;
        case sfKeyLShift:     return tgui::Event::KeyboardKey::LShift;
        case sfKeyLAlt:       return tgui::Event::KeyboardKey::LAlt;
        case sfKeyLSystem:    return tgui::Event::KeyboardKey::LSystem;
        case sfKeyRControl:   return tgui::Event::KeyboardKey::RControl;
        case sfKeyRShift:     return tgui::Event::KeyboardKey::RShift;
        case sfKeyRAlt:       return tgui::Event::KeyboardKey::RAlt;
        case sfKeyRSystem:    return tgui::Event::KeyboardKey::RSystem;
        case sfKeyMenu:       return tgui::Event::KeyboardKey::Menu;
        case sfKeyLBracket:   return tgui::Event::KeyboardKey::LBracket;
        case sfKeyRBracket:   return tgui::Event::KeyboardKey::RBracket;
        case sfKeySemicolon:  return tgui::Event::KeyboardKey::Semicolon;
        case sfKeyComma:      return tgui::Event::KeyboardKey::Comma;
        case sfKeyPeriod:     return tgui::Event::KeyboardKey::Period;
        case sfKeyApostrophe: return tgui::Event::KeyboardKey::Quote;
        case sfKeySlash:      return tgui::Event::KeyboardKey::Slash;
        case sfKeyBackslash:  return tgui::Event::KeyboardKey::Backslash;
        case sfKeyEqual:      return tgui::Event::KeyboardKey::Equal;
        case sfKeyHyphen:     return tgui::Event::KeyboardKey::Minus;
        case sfKeySpace:      return tgui::Event::KeyboardKey::Space;
        case sfKeyEnter:      return tgui::Event::KeyboardKey::Enter;
        case sfKeyBackspace:  return tgui::Event::KeyboardKey::Backspace;
        case sfKeyTab:        return tgui::Event::KeyboardKey::Tab;
        case sfKeyPageUp:     return tgui::Event::KeyboardKey::PageUp;
        case sfKeyPageDown:   return tgui::Event::KeyboardKey::PageDown;
        case sfKeyEnd:        return tgui::Event::KeyboardKey::End;
        case sfKeyHome:       return tgui::Event::KeyboardKey::Home;
        case sfKeyInsert:     return tgui::Event::KeyboardKey::Insert;
        case sfKeyDelete:     return tgui::Event::KeyboardKey::Delete;
        case sfKeyAdd:        return tgui::Event::KeyboardKey::Add;
        case sfKeySubtract:   return tgui::Event::KeyboardKey::Subtract;
        case sfKeyMultiply:   return tgui::Event::KeyboardKey::Multiply;
        case sfKeyDivide:     return tgui::Event::KeyboardKey::Divide;
        case sfKeyLeft:       return tgui::Event::KeyboardKey::Left;
        case sfKeyRight:      return tgui::Event::KeyboardKey::Right;
        case sfKeyUp:         return tgui::Event::KeyboardKey::Up;
        case sfKeyDown:       return tgui::Event::KeyboardKey::Down;
        case sfKeyNumpad0:    return tgui::Event::KeyboardKey::Numpad0;
        case sfKeyNumpad1:    return tgui::Event::KeyboardKey::Numpad1;
        case sfKeyNumpad2:    return tgui::Event::KeyboardKey::Numpad2;
        case sfKeyNumpad3:    return tgui::Event::KeyboardKey::Numpad3;
        case sfKeyNumpad4:    return tgui::Event::KeyboardKey::Numpad4;
        case sfKeyNumpad5:    return tgui::Event::KeyboardKey::Numpad5;
        case sfKeyNumpad6:    return tgui::Event::KeyboardKey::Numpad6;
        case sfKeyNumpad7:    return tgui::Event::KeyboardKey::Numpad7;
        case sfKeyNumpad8:    return tgui::Event::KeyboardKey::Numpad8;
        case sfKeyNumpad9:    return tgui::Event::KeyboardKey::Numpad9;
        case sfKeyF1:         return tgui::Event::KeyboardKey::F1;
        case sfKeyF2:         return tgui::Event::KeyboardKey::F2;
        case sfKeyF3:         return tgui::Event::KeyboardKey::F3;
        case sfKeyF4:         return tgui::Event::KeyboardKey::F4;
        case sfKeyF5:         return tgui::Event::KeyboardKey::F5;
        case sfKeyF6:         return tgui::Event::KeyboardKey::F6;
        case sfKeyF7:         return tgui::Event::KeyboardKey::F7;
        case sfKeyF8:         return tgui::Event::KeyboardKey::F8;
        case sfKeyF9:         return tgui::Event::KeyboardKey::F9;
        case sfKeyF10:        return tgui::Event::KeyboardKey::F10;
        case sfKeyF11:        return tgui::Event::KeyboardKey::F11;
        case sfKeyF12:        return tgui::Event::KeyboardKey::F12;
        case sfKeyF13:        return tgui::Event::KeyboardKey::F13;
        case sfKeyF14:        return tgui::Event::KeyboardKey::F14;
        case sfKeyF15:        return tgui::Event::KeyboardKey::F15;
        case sfKeyPause:      return tgui::Event::KeyboardKey::Pause;
        default: // We don't process the other keys
            return tgui::Event::KeyboardKey::Unknown;
        }
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    TGUI_NODISCARD static bool convertEvent(const sfEvent& eventSFML, tgui::Event& eventTGUI)
    {
        switch (eventSFML.type)
        {
            case sfEvtLostFocus:
            {
                eventTGUI.type = tgui::Event::Type::LostFocus;
                return true;
            }
            case sfEvtGainedFocus:
            {
                eventTGUI.type = tgui::Event::Type::GainedFocus;
                return true;
            }
            case sfEvtResized:
            {
                eventTGUI.type = tgui::Event::Type::Resized;
                eventTGUI.size.width = eventSFML.size.width;
                eventTGUI.size.height = eventSFML.size.height;
                return true;
            }
            case sfEvtClosed:
            {
                eventTGUI.type = tgui::Event::Type::Closed;
                return true;
            }
            case sfEvtTextEntered:
            {
                eventTGUI.type = tgui::Event::Type::TextEntered;
                eventTGUI.text.unicode = eventSFML.text.unicode;
                return true;
            }
            case sfEvtKeyPressed:
            {
                const tgui::Event::KeyboardKey code = convertKeyCode(eventSFML.key.code);
                if (code == tgui::Event::KeyboardKey::Unknown)
                    return false; // This key isn't handled by TGUI

                eventTGUI.type = tgui::Event::Type::KeyPressed;
                eventTGUI.key.code = code;
                eventTGUI.key.alt = eventSFML.key.alt;
                eventTGUI.key.control = eventSFML.key.control;
                eventTGUI.key.shift = eventSFML.key.shift;
                eventTGUI.key.system = eventSFML.key.system;
                return true;
            }
            case sfEvtMouseWheelScrolled:
            {
                if (eventSFML.mouseWheelScroll.wheel != sfMouseVerticalWheel)
                    return false; // TGUI only handles the vertical mouse wheel

                eventTGUI.type = tgui::Event::Type::MouseWheelScrolled;
                eventTGUI.mouseWheel.delta = eventSFML.mouseWheelScroll.delta;
                eventTGUI.mouseWheel.x = eventSFML.mouseWheelScroll.x;
                eventTGUI.mouseWheel.y = eventSFML.mouseWheelScroll.y;
                return true;
            }
            case sfEvtMouseButtonPressed:
            case sfEvtMouseButtonReleased:
            {
                switch (eventSFML.mouseButton.button)
                {
                case sfMouseLeft:
                    eventTGUI.mouseButton.button = tgui::Event::MouseButton::Left;
                    break;
                case sfMouseMiddle:
                    eventTGUI.mouseButton.button = tgui::Event::MouseButton::Middle;
                    break;
                case sfMouseRight:
                    eventTGUI.mouseButton.button = tgui::Event::MouseButton::Right;
                    break;
                default: // This mouse button isn't handled by TGUI
                    return false;
                }

                if (eventSFML.type == sfEvtMouseButtonPressed)
                    eventTGUI.type = tgui::Event::Type::MouseButtonPressed;
                else
                    eventTGUI.type = tgui::Event::Type::MouseButtonReleased;

                eventTGUI.mouseButton.x = eventSFML.mouseButton.x;
                eventTGUI.mouseButton.y = eventSFML.mouseButton.y;
                return true;
            }
            case sfEvtMouseMoved:
            {
                eventTGUI.type = tgui::Event::Type::MouseMoved;
                eventTGUI.mouseMove.x = eventSFML.mouseMove.x;
                eventTGUI.mouseMove.y = eventSFML.mouseMove.y;
                return true;
            }
            case sfEvtMouseEntered:
            {
                eventTGUI.type = tgui::Event::Type::MouseEntered;
                return true;
            }
            case sfEvtMouseLeft:
            {
                eventTGUI.type = tgui::Event::Type::MouseLeft;
                return true;
            }
            case sfEvtTouchMoved:
            {
                if (eventSFML.touch.finger != 0)
                    return false; // Only the first finger is handled

                // Simulate a MouseMoved event
                eventTGUI.type = tgui::Event::Type::MouseMoved;
                eventTGUI.mouseMove.x = eventSFML.touch.x;
                eventTGUI.mouseMove.y = eventSFML.touch.y;
                return true;
            }
            case sfEvtTouchBegan:
            case sfEvtTouchEnded:
            {
                if (eventSFML.touch.finger != 0)
                    return false; // Only the first finger is handled

                // Simulate a MouseButtonPressed or MouseButtonReleased event
                if (eventSFML.type == sfEvtTouchBegan)
                    eventTGUI.type = tgui::Event::Type::MouseButtonPressed;
                else
                    eventTGUI.type = tgui::Event::Type::MouseButtonReleased;

                eventTGUI.mouseButton.button = tgui::Event::MouseButton::Left;
                eventTGUI.mouseButton.x = eventSFML.touch.x;
                eventTGUI.mouseButton.y = eventSFML.touch.y;
                return true;
            }
            default: // This event is not handled by TGUI
                return false;
        }
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    class GuiCSFMLGraphics : public tgui::BackendGui
    {
    public:
        GuiCSFMLGraphics(sfRenderWindow* target) :
            m_window(target)
        {
            if (!tgui::isBackendSet())
            {
                auto backend = std::make_shared<BackendCSFMLGraphics>();
                backend->setFontBackend(std::make_shared<tgui::BackendFontFactoryImpl<BackendFontCSFMLGraphics>>());
                backend->setRenderer(std::make_shared<BackendRendererCSFMLGraphics>());
                backend->setDestroyOnLastGuiDetatch(true);
                setBackend(backend);
            }

            m_backendRenderTarget = std::make_shared<BackendRenderTargetCSFMLGraphics>(target);

            tgui::getBackend()->attachGui(this);

            TGUI_ASSERT(std::dynamic_pointer_cast<BackendCSFMLGraphics>(tgui::getBackend()), "BackendGuiCSFMLGraphics requires system backend of type BackendSFML");
            std::static_pointer_cast<BackendCSFMLGraphics>(tgui::getBackend())->setGuiWindow(this, m_window);

            updateContainerSize();
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        bool handleEvent(const sfEvent& sfmlEvent)
        {
            // Detect scrolling with two fingers by examining touch events
            if ((sfmlEvent.type == sfEvtTouchBegan) || (sfmlEvent.type == sfEvtTouchEnded) || (sfmlEvent.type == sfEvtTouchMoved))
            {
                const bool wasScrolling = m_twoFingerScroll.isScrolling();

                const auto fingerId = static_cast<std::intptr_t>(sfmlEvent.touch.finger);
                const float x = static_cast<float>(sfmlEvent.touch.x);
                const float y = static_cast<float>(sfmlEvent.touch.y);

                if (sfmlEvent.type == sfEvtTouchBegan)
                    m_twoFingerScroll.reportFingerDown(fingerId, x, y);
                else if (sfmlEvent.type == sfEvtTouchEnded)
                    m_twoFingerScroll.reportFingerUp(fingerId);
                else if (sfmlEvent.type == sfEvtTouchMoved)
                {
                    m_twoFingerScroll.reportFingerMotion(fingerId, x, y);
                    if (m_twoFingerScroll.isScrolling())
                        return handleTwoFingerScroll(wasScrolling);
                }
            }

            // Convert the event to our own type so that we can process it in a backend-independent way afterwards
            tgui::Event event;
            if (!convertEvent(sfmlEvent, event))
                return false; // We don't process this type of event

            if ((event.type == tgui::Event::Type::MouseButtonPressed) && (sfmlEvent.type == sfEvtTouchBegan))
            {
                // For touches, always send a mouse move event before the mouse press,
                // because widgets may assume that the mouse had to move to the clicked location first
                tgui::Event mouseMoveEvent;
                mouseMoveEvent.type = tgui::Event::Type::MouseMoved;
                mouseMoveEvent.mouseMove.x = event.mouseButton.x;
                mouseMoveEvent.mouseMove.y = event.mouseButton.y;
                tgui::BackendGui::handleEvent(mouseMoveEvent);
            }

            return tgui::BackendGui::handleEvent(event);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void mainLoop(tgui::Color clearColor) override
        {
            if (!m_window)
                return;

            m_backendRenderTarget->setClearColor(clearColor);

            // Helper function that calculates the amount of time to sleep, which is 10ms unless a timer will expire before this time
            const auto getTimerWakeUpTime = []{
                tgui::Optional<tgui::Duration> duration = tgui::Timer::getNextScheduledTime();
                if (duration && (*duration < std::chrono::milliseconds(10)))
                    return *duration;
                else
                    return tgui::Duration{std::chrono::milliseconds(10)};
            };

            setDrawingUpdatesTime(false);

            sfEvent event;
            bool refreshRequired = true;
            std::chrono::steady_clock::time_point lastRenderTime;
            bool windowOpen = true;
            while (sfRenderWindow_isOpen(m_window)) // Don't just check windowOpen, user code can also call sfRenderWindow_close(window)
            {
                bool eventProcessed = false;
                while (true)
                {
                    while (sfRenderWindow_pollEvent(m_window, &event))
                    {
                        if (handleEvent(event))
                            eventProcessed = true;

                        if (event.type == sfEvtClosed)
                        {
                            // We don't call sfRenderWindow_close(m_window) as it would destroy the OpenGL context, which will cause messages to be
                            // printed in the terminal later when we try to destroy our backend renderer (which tries to clean up OpenGL resources).
                            // The close function will be called by the window destructor.
                            windowOpen = false;
                            eventProcessed = true;
                        }
                        else if ((event.type == sfEvtResized) || (event.type == sfEvtMouseLeft))
                        {
                            eventProcessed = true;
                        }
                    }

                    if (updateTime())
                        break;

                    if (eventProcessed || refreshRequired)
                        break;

                    std::this_thread::sleep_for(std::chrono::nanoseconds(getTimerWakeUpTime()));
                }

                if (!windowOpen)
                    break;

                refreshRequired = true;

                // Don't try to render too often, even when the screen is changing (e.g. during animation)
                const auto timePointNow = std::chrono::steady_clock::now();
                const auto timePointNextAllowed = lastRenderTime + std::chrono::milliseconds(15);
                if (timePointNextAllowed > timePointNow)
                {
                    const auto timerWakeUpTime = getTimerWakeUpTime();
                    if (timePointNextAllowed - timePointNow < timerWakeUpTime)
                        std::this_thread::sleep_for(timePointNextAllowed - timePointNow);
                    else
                        std::this_thread::sleep_for(std::chrono::nanoseconds(timerWakeUpTime));

                    continue;
                }

                m_backendRenderTarget->clearScreen();
                draw();
                sfRenderWindow_display(m_window);

                refreshRequired = false;
                lastRenderTime = std::chrono::steady_clock::now(); // Don't use timePointNow to provide enough rest on low-end hardware
            }
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void startTextInput(tgui::FloatRect) override
        {
            // Open the software keyboard on Android and iOS
            sfKeyboard_setVirtualKeyboardVisible(true);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void stopTextInput() override
        {
            // Open the software keyboard on Android and iOS
            sfKeyboard_setVirtualKeyboardVisible(false);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    protected:

        void updateContainerSize() override
        {
            // We can't do anything yet if we don't have a window
            if (!m_window)
                return;

            const sfVector2u windowSize = sfRenderWindow_getSize(m_window);
            m_framebufferSize = {static_cast<int>(windowSize.x), static_cast<int>(windowSize.y)};

            tgui::BackendGui::updateContainerSize();
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    protected:

        sfRenderWindow* m_window = nullptr;
    };
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiGui* tguiGuiCSFMLGraphics_create(sfRenderWindow* window)
{
    tguiGui* gui = new tguiGui();
    gui->This = std::make_unique<ctgui::GuiCSFMLGraphics>(window);
    return gui;
}

void tguiGuiCSFMLGraphics_free(tguiGui* gui)
{
    delete gui;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGuiCSFMLGraphics_handleEvent(tguiGui* gui, const sfEvent* event)
{
    static_cast<ctgui::GuiCSFMLGraphics*>(gui->This.get())->handleEvent(*event);
}
