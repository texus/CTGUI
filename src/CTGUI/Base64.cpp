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


#include <CTGUI/Base64.h>
#include <TGUI/Base64.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const char* tgui_base64Encode(const uint8_t* data, size_t nrBytes)
{
    static std::string result;
    result = tgui::base64Encode(data, nrBytes);
    return result.c_str();
}

const uint8_t* tgui_base64Decode(const char* data, size_t* count)
{
    static std::vector<std::uint8_t> result;
    result = tgui::base64Decode(data);

    *count = result.size();
    return result.data();
}
