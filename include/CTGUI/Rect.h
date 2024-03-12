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


#ifndef CTGUI_RECT_H
#define CTGUI_RECT_H

#include <CTGUI/Vector2.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct
{
    float left;
    float top;
    float width;
    float height;
} tguiFloatRect;

typedef struct
{
    int left;
    int top;
    int width;
    int height;
} tguiIntRect;

typedef struct
{
    unsigned int left;
    unsigned int top;
    unsigned int width;
    unsigned int height;
} tguiUIntRect;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiFloatRect tguiFloatRect_Null; ///< Predefined FloatRect with value (0,0,0,0)
CTGUI_API tguiIntRect tguiIntRect_Null;     ///< Predefined IntRect with value (0,0,0,0)
CTGUI_API tguiUIntRect tguiUIntRect_Null;   ///< Predefined UIntRect with value (0,0,0,0)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiBool tguiFloatRect_contains(const tguiFloatRect* rect, tguiVector2f pos);
CTGUI_API tguiBool tguiIntRect_contains(const tguiIntRect* rect, tguiVector2i pos);
CTGUI_API tguiBool tguiUIntRect_contains(const tguiUIntRect* rect, tguiVector2u pos);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiBool tguiFloatRect_intersects(const tguiFloatRect* rect, const tguiFloatRect* otherRect);
CTGUI_API tguiBool tguiIntRect_intersects(const tguiIntRect* rect, const tguiIntRect* otherRect);
CTGUI_API tguiBool tguiUIntRect_intersects(const tguiUIntRect* rect, const tguiUIntRect* otherRect);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // CTGUI_RECT_H

