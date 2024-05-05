// This file is generated, it should not be edited directly.

#ifndef CTGUI_PROGRESSBAR_H
#define CTGUI_PROGRESSBAR_H

#include <CTGUI/Widget.h>

typedef enum
{
    tguiProgressBarFillDirectionLeftToRight,
    tguiProgressBarFillDirectionRightToLeft,
    tguiProgressBarFillDirectionTopToBottom,
    tguiProgressBarFillDirectionBottomToTop,
} tguiProgressBarFillDirection;

CTGUI_API tguiWidget* tguiProgressBar_create(void);

CTGUI_API void tguiProgressBar_setMinimum(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiProgressBar_getMinimum(const tguiWidget* thisWidget);

CTGUI_API void tguiProgressBar_setMaximum(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiProgressBar_getMaximum(const tguiWidget* thisWidget);

CTGUI_API void tguiProgressBar_setValue(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiProgressBar_getValue(const tguiWidget* thisWidget);

CTGUI_API unsigned int tguiProgressBar_incrementValue(tguiWidget* thisWidget);

CTGUI_API void tguiProgressBar_setText(tguiWidget* thisWidget, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiProgressBar_getText(const tguiWidget* thisWidget);

CTGUI_API void tguiProgressBar_setFillDirection(tguiWidget* thisWidget, tguiProgressBarFillDirection value);
CTGUI_API tguiProgressBarFillDirection tguiProgressBar_getFillDirection(const tguiWidget* thisWidget);

#endif // CTGUI_PROGRESSBAR_H
