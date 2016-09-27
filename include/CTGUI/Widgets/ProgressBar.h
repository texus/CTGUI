/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2016 Bruno Van de Velde (vdv_b@tgui.eu)
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


#ifndef CTGUI_PROGRESS_BAR_H
#define CTGUI_PROGRESS_BAR_H

#include <CTGUI/Config.h>
#include <CTGUI/Widget.h>

typedef enum
{
	tguiFillDirectionLeftToRight,
	tguiFillDirectionRightToLeft,
	tguiFillDirectionTopToBottom,
	tguiFillDirectionBottomToTop
} tguiFillDirection;

CTGUI_API tguiWidget* tguiProgressBar_create(void);

CTGUI_API void tguiProgressBar_setMinimum(tguiWidget* widget, unsigned int minimum);
CTGUI_API unsigned int tguiProgressBar_getMinimum(const tguiWidget* widget);

CTGUI_API void tguiProgressBar_setMaximum(tguiWidget* widget, unsigned int maximum);
CTGUI_API unsigned int tguiProgressBar_getMaximum(const tguiWidget* widget);

CTGUI_API void tguiProgressBar_setValue(tguiWidget* widget, unsigned int value);
CTGUI_API unsigned int tguiProgressBar_getValue(const tguiWidget* widget);

CTGUI_API unsigned int tguiProgressBar_incrementValue(const tguiWidget* widget);

CTGUI_API void tguiProgressBar_setText(tguiWidget* widget, const sfUint32* text);
CTGUI_API const sfUint32* tguiProgressBar_getText(const tguiWidget* widget);

CTGUI_API void tguiProgressBar_setTextSize(tguiWidget* widget, unsigned int size);
CTGUI_API unsigned int tguiProgressBar_getTextSize(const tguiWidget* widget);

CTGUI_API void tguiProgressBar_setFillDirection(tguiWidget* widget, tguiFillDirection fillDirection);
CTGUI_API tguiFillDirection tguiProgressBar_getFillDirection(const tguiWidget* widget);

#endif // CTGUI_PROGRESS_BAR_H

