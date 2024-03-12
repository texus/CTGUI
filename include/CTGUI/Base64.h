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


#ifndef CTGUI_BASE64_H
#define CTGUI_BASE64_H

#include <CTGUI/Global.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API const char* tgui_base64Encode(const uint8_t* data, size_t nrBytes);
CTGUI_API const uint8_t* tgui_base64Decode(const char* data, size_t* count); // count is set by the function to indicate length of returned array, the returned value does NOT need to be freed

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // CTGUI_BASE64_H