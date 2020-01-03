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


#ifndef CTGUI_OUTLINE_H
#define CTGUI_OUTLINE_H

#include <CTGUI/Config.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiOutline* tguiOutline_create(float left, float top, float right, float bottom);
CTGUI_API tguiOutline* tguiOutline_createFromStrings(const char* left, const char* top, const char* right, const char* bottom);

CTGUI_API tguiOutline* tguiOutline_copy(const tguiOutline* other);
CTGUI_API void tguiOutline_destroy(tguiOutline* outline);

CTGUI_API float tguiOutline_getLeft(const tguiOutline* outline);
CTGUI_API float tguiOutline_getTop(const tguiOutline* outline);
CTGUI_API float tguiOutline_getRight(const tguiOutline* outline);
CTGUI_API float tguiOutline_getBottom(const tguiOutline* outline);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // CTGUI_OUTLINE_H

