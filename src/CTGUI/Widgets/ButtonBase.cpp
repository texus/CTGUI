// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/ButtonBase.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/ButtonBase.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ButtonBase>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonBase_setText(tguiWidget* thisWidget, tguiUtf32 value)
{
    DOWNCAST(thisWidget->This)->setText(ctgui::toCppStr(value));
}

tguiUtf32 tguiButtonBase_getText(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getText());
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
