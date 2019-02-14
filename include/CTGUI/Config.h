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

#ifndef TGUI_CONFIG_H
#define TGUI_CONFIG_H

#include <SFML/Config.h>
#include <CTGUI/Types.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Define the CTGUI version
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define CTGUI_VERSION_MAJOR 0
#define CTGUI_VERSION_MINOR 8
#define CTGUI_VERSION_PATCH 3

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Define portable import / export macros
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#if defined(CTGUI_EXPORTS)
    #define CTGUI_API CSFML_API_EXPORT
#else
    #define CTGUI_API CSFML_API_IMPORT
#endif

#endif // TGUI_CONFIG_H
