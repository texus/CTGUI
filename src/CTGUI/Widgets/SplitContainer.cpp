// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/SplitContainer.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/SplitContainer.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::SplitContainer>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiSplitContainer_create(void)
{
    return ctgui::addWidgetRef(tgui::SplitContainer::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSplitContainer_setOrientation(tguiWidget* thisWidget, tguiOrientation value)
{
    DOWNCAST(thisWidget->This)->setOrientation(static_cast<tgui::Orientation>(value));
}

tguiOrientation tguiSplitContainer_getOrientation(const tguiWidget* thisWidget)
{
    return static_cast<tguiOrientation>(DOWNCAST(thisWidget->This)->getOrientation());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSplitContainer_setSplitterWidth(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setSplitterWidth(value);
}

float tguiSplitContainer_getSplitterWidth(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getSplitterWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSplitContainer_setMinimumGrabWidth(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setMinimumGrabWidth(value);
}

float tguiSplitContainer_getMinimumGrabWidth(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMinimumGrabWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSplitContainer_setMinValidSplitterOffset(tguiWidget* thisWidget, float minOffset)
{
    DOWNCAST(thisWidget->This)->setMinValidSplitterOffset(minOffset);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSplitContainer_setMaxValidSplitterOffset(tguiWidget* thisWidget, float maxOffset)
{
    DOWNCAST(thisWidget->This)->setMaxValidSplitterOffset(maxOffset);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSplitContainer_setSplitterOffset(tguiWidget* thisWidget, float offset)
{
    DOWNCAST(thisWidget->This)->setSplitterOffset(offset);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiSplitContainer_getMinValidSplitterOffset(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMinValidSplitterOffset();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiSplitContainer_getMaxValidSplitterOffset(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMaxValidSplitterOffset();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiSplitContainer_getSplitterOffset(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getSplitterOffset();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
