// This file is generated, it should not be edited directly.

#include <CTGUI/ToolTip.h>
#include <CTGUI/InternalGlobal.hpp>
#include <TGUI/ToolTip.hpp>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiToolTip_setInitialDelay(tguiDuration value)
{
    tgui::ToolTip::setInitialDelay(std::chrono::nanoseconds(value.nanoseconds));
}

tguiDuration tguiToolTip_getInitialDelay(void)
{
    tguiDuration returnedDelay;
    returnedDelay.nanoseconds = static_cast<tguiInt64>(std::chrono::nanoseconds(tgui::ToolTip::getInitialDelay()).count());
    return returnedDelay;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiToolTip_setDistanceToMouse(tguiVector2f value)
{
    tgui::ToolTip::setDistanceToMouse({value.x, value.y});
}

tguiVector2f tguiToolTip_getDistanceToMouse(void)
{
    const auto value = tgui::ToolTip::getDistanceToMouse();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiToolTip_setShowOnDisabledWidget(tguiBool value)
{
    tgui::ToolTip::setShowOnDisabledWidget(value != 0);
}

tguiBool tguiToolTip_getShowOnDisabledWidget(void)
{
    return tgui::ToolTip::getShowOnDisabledWidget();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
