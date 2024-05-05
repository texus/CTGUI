// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/ColorPicker.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/ColorPicker.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ColorPicker>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiColorPicker_create(void)
{
    return ctgui::addWidgetRef(tgui::ColorPicker::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiColorPicker_setColor(tguiWidget* thisWidget, const tguiColor* value)
{
    DOWNCAST(thisWidget->This)->setColor(ctgui::toCppColor(value));
}

const tguiColor* tguiColorPicker_getColor(const tguiWidget* thisWidget)
{
    return ctgui::fromCppColor(DOWNCAST(thisWidget->This)->getColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
