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


#ifndef CTGUI_CURSOR_H
#define CTGUI_CURSOR_H

#include <CTGUI/Global.h>

typedef enum
{
	tguiCursorTypeArrow,            //!< Arrow cursor (default)
	tguiCursorTypeText,             //!< I-beam, cursor when hovering over a text field
	tguiCursorTypeHand,             //!< Pointing hand cursor
	tguiCursorTypeSizeLeft,         //!< Left arrow on Linux, horizontal double arrow cursor on Windows and macOS
	tguiCursorTypeSizeRight,        //!< Right arrow on Linux, horizontal double arrow cursor on Windows and macOS
	tguiCursorTypeSizeTop,          //!< Up arrow on Linux, vertical double arrow cursor on Windows and macOS
	tguiCursorTypeSizeBottom,       //!< Down arrow on Linux, vertical double arrow cursor on Windows and macOS
	tguiCursorTypeSizeTopLeft,      //!< Top-left arrow on Linux, double arrow cursor going from top-left to bottom-right on Windows and macOS
	tguiCursorTypeSizeBottomRight,  //!< Bottom-right arrow on Linux, double arrow cursor going from top-left to bottom-right on Windows and
	tguiCursorTypeSizeBottomLeft,   //!< Bottom-left arrow on Linux, double arrow cursor going from bottom-left to top-right on Windows and macOS
	tguiCursorTypeSizeTopRight,     //!< Top-right arrow on Linux, double arrow cursor going from bottom-left to top-right on Windows and macOS
	tguiCursorTypeSizeHorizontal,   //!< Horizontal double arrow cursor
	tguiCursorTypeSizeVertical,     //!< Vertical double arrow cursor
	tguiCursorTypeCrosshair,        //!< Crosshair cursor
	tguiCursorTypeHelp,             //!< Help cursor
	tguiCursorTypeNotAllowed        //!< Action not allowed cursor
} tguiCursorType;

CTGUI_API void setStyle(tguiCursorType type, const tguiUint8* pixels, tguiVector2u size, tguiVector2u hotspot);
CTGUI_API void resetStyle(tguiCursorType type);

#endif // CTGUI_CURSOR_H
