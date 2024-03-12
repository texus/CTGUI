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


#include <CTGUI/Widgets/ButtonBase.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/ButtonBase.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ButtonBase>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonBase_setText(tguiWidget* widget, tguiUtf32 text)
{
    DOWNCAST(widget->This)->setText(ctgui::toCppStr(text));
}

tguiUtf32 tguiButtonBase_getText(const tguiWidget* widget)
{
    return ctgui::fromCppStr(DOWNCAST(widget->This)->getText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonBase_setTextPositionAbs(tguiWidget* widget, tguiVector2f position, tguiVector2f origin)
{
    DOWNCAST(widget->This)->setTextPosition({position.x, position.y}, {origin.x, origin.y});
}

void tguiButtonBase_setTextPositionRel(tguiWidget* widget, tguiVector2f position, tguiVector2f origin)
{
    DOWNCAST(widget->This)->setTextPosition({tgui::RelativeValue(position.x), tgui::RelativeValue(position.y)}, {origin.x, origin.y});
}
