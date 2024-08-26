// This file is generated, it should not be edited directly.

#ifndef CTGUI_BUTTONBASE_H
#define CTGUI_BUTTONBASE_H

#include <CTGUI/Widget.h>

CTGUI_API void tguiButtonBase_setText(tguiWidget* thisWidget, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiButtonBase_getText(const tguiWidget* thisWidget);

CTGUI_API void tguiButtonBase_setIgnoreKeyEvents(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiButtonBase_getIgnoreKeyEvents(const tguiWidget* thisWidget);

CTGUI_API void tguiButtonBase_setTextPositionAbs(tguiWidget* widget, tguiVector2f position, tguiVector2f origin);
CTGUI_API void tguiButtonBase_setTextPositionRel(tguiWidget* widget, tguiVector2f position, tguiVector2f origin);

#endif // CTGUI_BUTTONBASE_H
