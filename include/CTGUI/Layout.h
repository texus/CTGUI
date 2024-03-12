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


#ifndef CTGUI_LAYOUT_H
#define CTGUI_LAYOUT_H

#include <CTGUI/Global.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef enum
{
    tguiAutoLayoutManual,     //!< Position and size need to be manually set. This is the default.
    tguiAutoLayoutTop,        //!< Places the widget on on the top and sets its width to the area between Leftmost and Rightmost aligned components. Height needs to be manually set.
    tguiAutoLayoutLeft,       //!< Places the widget on the left side and sets its height to the area between Top and Bottom aligned components. Width needs to be manually set.
    tguiAutoLayoutRight,      //!< Places the widget on the right side and sets its height to the area between Top and Bottom aligned components. Width needs to be manually set.
    tguiAutoLayoutBottom,     //!< Places the widget on on the bottom and sets its width to the area between Leftmost and Rightmost aligned components. Height needs to be manually set.
    tguiAutoLayoutLeftmost,   //!< Places the widget on the left side and sets height to 100%. Width needs to be manually set. Same as Left alignment if no widget uses Top or Bottom alignment.
    tguiAutoLayoutRightmost,  //!< Places the widget on the right side and sets height to 100%. Width needs to be manually set. Same as Left alignment if no widget uses Top or Bottom alignment.
    tguiAutoLayoutFill        //!< Sets the position and size to fill the entire area that isn't already taken by components with the other AutoLayout values.
} tguiAutoLayout;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiLayout* tguiLayout_create(float constant);
CTGUI_API tguiLayout* tguiLayout_createFromString(const char* expression);
CTGUI_API tguiLayout* tguiLayout_copy(const tguiLayout* other);
CTGUI_API void tguiLayout_free(tguiLayout* layout);

CTGUI_API void tguiLayout_replaceValue(tguiLayout* layout, const tguiLayout* newLayout);
CTGUI_API float tguiLayout_getValue(const tguiLayout* layout);
CTGUI_API tguiBool tguiLayout_isConstant(const tguiLayout* layout);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiLayout2d* tguiLayout2d_create(tguiVector2f constant);
CTGUI_API tguiLayout2d* tguiLayout2d_createFromLayouts(tguiLayout* x, tguiLayout* y);
CTGUI_API tguiLayout2d* tguiLayout2d_createFromString(const char* expression);
CTGUI_API tguiLayout2d* tguiLayout2d_copy(const tguiLayout2d* other);
CTGUI_API void tguiLayout2d_free(tguiLayout2d* layout);

CTGUI_API tguiVector2f tguiLayout2d_getValue(const tguiLayout2d* layout);

tguiLayout* tguiLayout2d_getX(const tguiLayout2d* layout); // tguiLayout_free must be called on the return value
tguiLayout* tguiLayout2d_getY(const tguiLayout2d* layout); // tguiLayout_free must be called on the return value

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiLayout*   tguiBindPosX(const tguiWidget* widget);
CTGUI_API tguiLayout*   tguiBindPosY(const tguiWidget* widget);
CTGUI_API tguiLayout*   tguiBindLeft(const tguiWidget* widget);
CTGUI_API tguiLayout*   tguiBindTop(const tguiWidget* widget);
CTGUI_API tguiLayout*   tguiBindWidth(const tguiWidget* widget);
CTGUI_API tguiLayout*   tguiBindHeight(const tguiWidget* widget);
CTGUI_API tguiLayout*   tguiBindInnerWidth(const tguiWidget* container);
CTGUI_API tguiLayout*   tguiBindInnerHeight(const tguiWidget* container);
CTGUI_API tguiLayout*   tguiBindRight(const tguiWidget* widget);
CTGUI_API tguiLayout*   tguiBindBottom(const tguiWidget* widget);
CTGUI_API tguiLayout2d* tguiBindPosition(const tguiWidget* widget);
CTGUI_API tguiLayout2d* tguiBindSize(const tguiWidget* widget);
CTGUI_API tguiLayout2d* tguiBindInnerSize(const tguiWidget* container);
CTGUI_API tguiLayout*   tguiBindMin(const tguiLayout* value1, const tguiLayout* value2);
CTGUI_API tguiLayout*   tguiBindMax(const tguiLayout* value1, const tguiLayout* value2);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // CTGUI_LAYOUT_H
