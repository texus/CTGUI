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

#ifndef CTGUI_BACKEND_CSFML_GRAPHICS_H
#define CTGUI_BACKEND_CSFML_GRAPHICS_H

#include <CTGUI/Global.h>
#include <TGUI/Backend/Window/Backend.hpp>
#include <SFML/Graphics.h>
#include <unordered_map>
#include <memory>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace ctgui
{
    class BackendCSFMLGraphics : public tgui::Backend
    {
    public:
        ~BackendCSFMLGraphics()
        {
            for (auto& pair : m_mouseCursors)
            {
                sfCursor* cursor = pair.second;
                if (cursor)
                    sfCursor_destroy(cursor);
            }
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void setGuiWindow(tgui::BackendGui* gui, sfRenderWindow* window)
        {
            TGUI_ASSERT(m_guis.find(gui) != m_guis.end(), "BackendCSFMLGraphics::setGuiWindow called with a gui that wasn't attached");
            m_guiResources[gui].window = window;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void detatchGui(tgui::BackendGui* gui) override
        {
            if (m_guiResources[gui].window && m_mouseCursors[m_guiResources[gui].mouseCursor])
            {
                sfCursor* cursor = sfCursor_createFromSystem(sfCursorArrow);
                sfRenderWindow_setMouseCursor(m_guiResources[gui].window, cursor);
                sfCursor_destroy(cursor);
            }

            // Don't check if it existed, detach is called for every gui while attached is only called for properly initialized guis
            m_guiResources.erase(gui);

            tgui::Backend::detatchGui(gui);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void setMouseCursorStyle(tgui::Cursor::Type type, const std::uint8_t* pixels, tgui::Vector2u size, tgui::Vector2u hotspot) override
        {
            sfCursor* newCursor = sfCursor_createFromPixels(pixels, {size.x, size.y}, {hotspot.x, hotspot.y});
            if (newCursor)
                updateMouseCursor(type, newCursor);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void resetMouseCursorStyle(tgui::Cursor::Type type) override
        {
            updateMouseCursor(type, createSystemCursor(type));
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void setMouseCursor(tgui::BackendGui* gui, tgui::Cursor::Type type) override
        {
            TGUI_ASSERT(m_guis.find(gui) != m_guis.end(), "BackendCSFMLGraphics::setMouseCursor called with a gui that wasn't attached");
            if (type == m_guiResources[gui].mouseCursor)
                return;

            m_guiResources[gui].mouseCursor = type;

            // If the gui has no access to the window then we can't change the mouse cursor
            if (!m_guiResources[gui].window)
                return;

            updateMouseCursor(m_guiResources[gui].window, type);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        TGUI_NODISCARD bool isKeyboardModifierPressed(tgui::Event::KeyModifier modifierKey) override
        {
            switch (modifierKey)
            {
            case tgui::Event::KeyModifier::System:
                return sfKeyboard_isKeyPressed(sfKeyLSystem) || sfKeyboard_isKeyPressed(sfKeyRSystem);
            case tgui::Event::KeyModifier::Control:
                return sfKeyboard_isKeyPressed(sfKeyLControl) || sfKeyboard_isKeyPressed(sfKeyRControl);
            case tgui::Event::KeyModifier::Shift:
                return sfKeyboard_isKeyPressed(sfKeyLShift) || sfKeyboard_isKeyPressed(sfKeyRShift);
            case tgui::Event::KeyModifier::Alt:
                return sfKeyboard_isKeyPressed(sfKeyLAlt) || sfKeyboard_isKeyPressed(sfKeyRAlt);
            }

            TGUI_ASSERT(false, "BackendCSFMLGraphics::isKeyboardModifierPressed called with an invalid value");
            return false;
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void setClipboard(const tgui::String& contents) override
        {
            sfClipboard_setUnicodeString(reinterpret_cast<const sfUint32*>(contents.toUtf32().c_str()));
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        TGUI_NODISCARD tgui::String getClipboard() const override
        {
            return reinterpret_cast<const char32_t*>(sfClipboard_getUnicodeString());
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    protected:

        void updateMouseCursor(tgui::Cursor::Type type, sfCursor* cursor)
        {
            sfCursor* oldCursor = m_mouseCursors[type];
            m_mouseCursors[type] = cursor;

            // Update the cursor on the screen if the cursor was in use
            for (auto& pair : m_guiResources)
            {
                if (pair.second.mouseCursor == type)
                {
                    if (pair.second.window)
                        updateMouseCursor(pair.second.window, type);
                }
            }

            if (oldCursor)
                sfCursor_destroy(oldCursor);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        void updateMouseCursor(sfRenderWindow* window, tgui::Cursor::Type type)
        {
            // If the cursor doesn't exist yet then create it now
            if (!m_mouseCursors[type])
                m_mouseCursors[type] = createSystemCursor(type);

            // Pass the cursor to SFML to set it while the mouse is on top of the window
            sfRenderWindow_setMouseCursor(window, m_mouseCursors[type]);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        sfCursor* createSystemCursor(tgui::Cursor::Type type)
        {
            switch (type)
            {
            case tgui::Cursor::Type::Arrow:
                return sfCursor_createFromSystem(sfCursorArrow);
            case tgui::Cursor::Type::Text:
                return sfCursor_createFromSystem(sfCursorText);
            case tgui::Cursor::Type::Hand:
                return sfCursor_createFromSystem(sfCursorHand);
            case tgui::Cursor::Type::SizeLeft:
                return sfCursor_createFromSystem(sfCursorSizeLeft);
            case tgui::Cursor::Type::SizeRight:
                return sfCursor_createFromSystem(sfCursorSizeRight);
            case tgui::Cursor::Type::SizeTop:
                return sfCursor_createFromSystem(sfCursorSizeTop);
            case tgui::Cursor::Type::SizeBottom:
                return sfCursor_createFromSystem(sfCursorSizeBottom);
            case tgui::Cursor::Type::SizeBottomRight:
                return sfCursor_createFromSystem(sfCursorSizeBottomRight);
            case tgui::Cursor::Type::SizeTopLeft:
                return sfCursor_createFromSystem(sfCursorSizeTopLeft);
            case tgui::Cursor::Type::SizeBottomLeft:
                return sfCursor_createFromSystem(sfCursorSizeBottomLeft);
            case tgui::Cursor::Type::SizeTopRight:
                return sfCursor_createFromSystem(sfCursorSizeTopRight);
            case tgui::Cursor::Type::SizeHorizontal:
                return sfCursor_createFromSystem(sfCursorSizeHorizontal);
            case tgui::Cursor::Type::SizeVertical:
                return sfCursor_createFromSystem(sfCursorSizeVertical);
            case tgui::Cursor::Type::Crosshair:
                return sfCursor_createFromSystem(sfCursorCross);
            case tgui::Cursor::Type::Help:
                return sfCursor_createFromSystem(sfCursorHelp);
            case tgui::Cursor::Type::NotAllowed:
                return sfCursor_createFromSystem(sfCursorNotAllowed);
            }

            return sfCursor_createFromSystem(sfCursorArrow);
        }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    protected:

        struct GuiResources
        {
            sfRenderWindow* window = nullptr;
            tgui::Cursor::Type mouseCursor = tgui::Cursor::Type::Arrow;
        };

        std::unordered_map<tgui::BackendGui*, GuiResources> m_guiResources;
        std::unordered_map<tgui::Cursor::Type, sfCursor*> m_mouseCursors;
    };
}

#endif // CTGUI_BACKEND_CSFML_GRAPHICS_H
