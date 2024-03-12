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


#ifndef CTGUI_EVENT_H
#define CTGUI_EVENT_H

#include <CTGUI/Config.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef enum
{
    tguiKeyboardKeyUnknown = -1, //!< Unhandled key
    tguiKeyboardKeyA = 0,        //!< The A key
    tguiKeyboardKeyB,            //!< The B key
    tguiKeyboardKeyC,            //!< The C key
    tguiKeyboardKeyD,            //!< The D key
    tguiKeyboardKeyE,            //!< The E key
    tguiKeyboardKeyF,            //!< The F key
    tguiKeyboardKeyG,            //!< The G key
    tguiKeyboardKeyH,            //!< The H key
    tguiKeyboardKeyI,            //!< The I key
    tguiKeyboardKeyJ,            //!< The J key
    tguiKeyboardKeyK,            //!< The K key
    tguiKeyboardKeyL,            //!< The L key
    tguiKeyboardKeyM,            //!< The M key
    tguiKeyboardKeyN,            //!< The N key
    tguiKeyboardKeyO,            //!< The O key
    tguiKeyboardKeyP,            //!< The P key
    tguiKeyboardKeyQ,            //!< The Q key
    tguiKeyboardKeyR,            //!< The R key
    tguiKeyboardKeyS,            //!< The S key
    tguiKeyboardKeyT,            //!< The T key
    tguiKeyboardKeyU,            //!< The U key
    tguiKeyboardKeyV,            //!< The V key
    tguiKeyboardKeyW,            //!< The W key
    tguiKeyboardKeyX,            //!< The X key
    tguiKeyboardKeyY,            //!< The Y key
    tguiKeyboardKeyZ,            //!< The Z key
    tguiKeyboardKeyNum0,         //!< The 0 key
    tguiKeyboardKeyNum1,         //!< The 1 key
    tguiKeyboardKeyNum2,         //!< The 2 key
    tguiKeyboardKeyNum3,         //!< The 3 key
    tguiKeyboardKeyNum4,         //!< The 4 key
    tguiKeyboardKeyNum5,         //!< The 5 key
    tguiKeyboardKeyNum6,         //!< The 6 key
    tguiKeyboardKeyNum7,         //!< The 7 key
    tguiKeyboardKeyNum8,         //!< The 8 key
    tguiKeyboardKeyNum9,         //!< The 9 key
    tguiKeyboardKeyEscape,       //!< The Escape key
    tguiKeyboardKeyLControl,     //!< The left Control key
    tguiKeyboardKeyLShift,       //!< The left Shift key
    tguiKeyboardKeyLAlt,         //!< The left Alt key
    tguiKeyboardKeyLSystem,      //!< The left OS specific key (windows key / super key / command key)
    tguiKeyboardKeyRControl,     //!< The right Control key
    tguiKeyboardKeyRShift,       //!< The right Shift key
    tguiKeyboardKeyRAlt,         //!< The right Alt key
    tguiKeyboardKeyRSystem,      //!< The right OS specific key (windows key / super key / command key)
    tguiKeyboardKeyMenu,         //!< The Menu key
    tguiKeyboardKeyLBracket,     //!< The [ key
    tguiKeyboardKeyRBracket,     //!< The ] key
    tguiKeyboardKeySemicolon,    //!< The ; key
    tguiKeyboardKeyComma,        //!< The , key
    tguiKeyboardKeyPeriod,       //!< The . key
    tguiKeyboardKeyQuote,        //!< The ' key
    tguiKeyboardKeySlash,        //!< The / key
    tguiKeyboardKeyBackslash,    //!< The \ key
    tguiKeyboardKeyTilde,        //!< The ~ key
    tguiKeyboardKeyEqual,        //!< The = key
    tguiKeyboardKeyMinus,        //!< The - key (hyphen)
    tguiKeyboardKeySpace,        //!< The Space key
    tguiKeyboardKeyEnter,        //!< The Enter/Return keys
    tguiKeyboardKeyBackspace,    //!< The Backspace key
    tguiKeyboardKeyTab,          //!< The Tabulation key
    tguiKeyboardKeyPageUp,       //!< The Page up key
    tguiKeyboardKeyPageDown,     //!< The Page down key
    tguiKeyboardKeyEnd,          //!< The End key
    tguiKeyboardKeyHome,         //!< The Home key
    tguiKeyboardKeyInsert,       //!< The Insert key
    tguiKeyboardKeyDelete,       //!< The Delete key
    tguiKeyboardKeyAdd,          //!< The + key
    tguiKeyboardKeySubtract,     //!< The - key (minus from numpad)
    tguiKeyboardKeyMultiply,     //!< The * key
    tguiKeyboardKeyDivide,       //!< The / key
    tguiKeyboardKeyLeft,         //!< Left arrow
    tguiKeyboardKeyRight,        //!< Right arrow
    tguiKeyboardKeyUp,           //!< Up arrow
    tguiKeyboardKeyDown,         //!< Down arrow
    tguiKeyboardKeyNumpad0,      //!< The numpad 0 key
    tguiKeyboardKeyNumpad1,      //!< The numpad 1 key
    tguiKeyboardKeyNumpad2,      //!< The numpad 2 key
    tguiKeyboardKeyNumpad3,      //!< The numpad 3 key
    tguiKeyboardKeyNumpad4,      //!< The numpad 4 key
    tguiKeyboardKeyNumpad5,      //!< The numpad 5 key
    tguiKeyboardKeyNumpad6,      //!< The numpad 6 key
    tguiKeyboardKeyNumpad7,      //!< The numpad 7 key
    tguiKeyboardKeyNumpad8,      //!< The numpad 8 key
    tguiKeyboardKeyNumpad9,      //!< The numpad 9 key
    tguiKeyboardKeyF1,           //!< The F1 key
    tguiKeyboardKeyF2,           //!< The F2 key
    tguiKeyboardKeyF3,           //!< The F3 key
    tguiKeyboardKeyF4,           //!< The F4 key
    tguiKeyboardKeyF5,           //!< The F5 key
    tguiKeyboardKeyF6,           //!< The F6 key
    tguiKeyboardKeyF7,           //!< The F7 key
    tguiKeyboardKeyF8,           //!< The F8 key
    tguiKeyboardKeyF9,           //!< The F9 key
    tguiKeyboardKeyF10,          //!< The F10 key
    tguiKeyboardKeyF11,          //!< The F11 key
    tguiKeyboardKeyF12,          //!< The F12 key
    tguiKeyboardKeyF13,          //!< The F13 key
    tguiKeyboardKeyF14,          //!< The F14 key
    tguiKeyboardKeyF15,          //!< The F15 key
    tguiKeyboardKeyPause         //!< The Pause key
} tguiKeyboardKey;

/// Mouse buttons
typedef enum
{
    tguiMouseButtonLeft,   //!< The left mouse button
    tguiMouseButtonRight,  //!< The right mouse button
    tguiMouseButtonMiddle  //!< The middle (wheel) mouse button
} tguiMouseButton;

typedef enum
{
    tguiKeyModifierSystem,
    tguiKeyModifierControl,
    tguiKeyModifierShift,
    tguiKeyModifierAlt
} tguiKeyModifier;

typedef enum
{
    tguiEventTypeLostFocus,
    tguiEventTypeGainedFocus,
    tguiEventTypeTextEntered,
    tguiEventTypeKeyPressed,
    tguiEventTypeMouseWheelScrolled,
    tguiEventTypeMouseButtonPressed,
    tguiEventTypeMouseButtonReleased,
    tguiEventTypeMouseMoved,
    tguiEventTypeMouseEntered,
    tguiEventTypeMouseLeft,
    tguiEventTypeResized,
    tguiEventTypeClosed
} tguiEventType;

typedef struct
{
    tguiEventType   type;
    tguiKeyboardKey code;
    tguiBool        alt;
    tguiBool        control;
    tguiBool        shift;
    tguiBool        system;
} tguiKeyEvent;

typedef struct
{
    tguiEventType type;
    tguiUint32    unicode;
} tguiTextEvent;

typedef struct
{
    tguiEventType type;
    int x;
    int y;
} tguiMouseMoveEvent;

typedef struct
{
    tguiEventType type;
    tguiMouseButton button;
    int x;
    int y;
} tguiMouseButtonEvent;

typedef struct
{
    tguiEventType type;
    float delta;
    int   x;
    int   y;
} tguiMouseWheelEvent;

typedef struct
{
    tguiEventType type;
    unsigned int width;
    unsigned int height;
} tguiSizeEvent;

typedef struct
{
    tguiEventType             type;
    tguiKeyEvent              key;
    tguiTextEvent             text;
    tguiMouseMoveEvent        mouseMove;
    tguiMouseButtonEvent      mouseButton;
    tguiMouseWheelEvent       mouseWheel;
    tguiSizeEvent             size;
} tguiEvent;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // CTGUI_EVENT_H

