// This file is generated, it should not be edited directly.

#ifndef CTGUI_SPLITCONTAINER_H
#define CTGUI_SPLITCONTAINER_H

#include <CTGUI/Widget.h>

#include <CTGUI/Orientation.h>

CTGUI_API tguiWidget* tguiSplitContainer_create(void);

CTGUI_API void tguiSplitContainer_setOrientation(tguiWidget* thisWidget, tguiOrientation value);
CTGUI_API tguiOrientation tguiSplitContainer_getOrientation(const tguiWidget* thisWidget);

CTGUI_API void tguiSplitContainer_setSplitterWidth(tguiWidget* thisWidget, float value);
CTGUI_API float tguiSplitContainer_getSplitterWidth(const tguiWidget* thisWidget);

CTGUI_API void tguiSplitContainer_setMinimumGrabWidth(tguiWidget* thisWidget, float value);
CTGUI_API float tguiSplitContainer_getMinimumGrabWidth(const tguiWidget* thisWidget);

CTGUI_API void tguiSplitContainer_setMinValidSplitterOffset(tguiWidget* thisWidget, float minOffset);

CTGUI_API void tguiSplitContainer_setMaxValidSplitterOffset(tguiWidget* thisWidget, float maxOffset);

CTGUI_API void tguiSplitContainer_setSplitterOffset(tguiWidget* thisWidget, float offset);

CTGUI_API float tguiSplitContainer_getMinValidSplitterOffset(const tguiWidget* thisWidget);

CTGUI_API float tguiSplitContainer_getMaxValidSplitterOffset(const tguiWidget* thisWidget);

CTGUI_API float tguiSplitContainer_getSplitterOffset(const tguiWidget* thisWidget);

#endif // CTGUI_SPLITCONTAINER_H
