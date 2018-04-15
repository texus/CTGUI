/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2018 Bruno Van de Velde (vdv_b@tgui.eu)
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


#ifndef CTGUI_LABEL_H
#define CTGUI_LABEL_H

#include <CTGUI/Config.h>
#include <CTGUI/Widget.h>
#include <CTGUI/Alignment.h>

CTGUI_API tguiWidget* tguiLabel_create(void);

CTGUI_API void tguiLabel_setText(tguiWidget* widget, const sfUint32* text);
CTGUI_API const sfUint32* tguiLabel_getText(const tguiWidget* widget);

CTGUI_API void tguiLabel_setTextSize(tguiWidget* widget, unsigned int size);
CTGUI_API unsigned int tguiLabel_getTextSize(const tguiWidget* widget);

CTGUI_API void tguiLabel_setHorizontalAlignment(tguiWidget* widget, tguiHorizontalAlignment alignment);
CTGUI_API tguiHorizontalAlignment tguiLabel_getHorizontalAlignment(const tguiWidget* widget);

CTGUI_API void tguiLabel_setVerticalAlignment(tguiWidget* widget, tguiVerticalAlignment alignment);
CTGUI_API tguiVerticalAlignment tguiLabel_getVerticalAlignment(const tguiWidget* widget);

CTGUI_API void tguiLabel_setAutoSize(tguiWidget* widget, sfBool autoSize);
CTGUI_API sfBool tguiLabel_getAutoSize(const tguiWidget* widget);

CTGUI_API void tguiLabel_setMaximumTextWidth(tguiWidget* widget, float maximumTextWidth);
CTGUI_API float tguiLabel_getMaximumTextWidth(const tguiWidget* widget);

CTGUI_API void tguiLabel_ignoreMouseEvents(tguiWidget* widget, sfBool ignore);
CTGUI_API sfBool tguiLabel_isIgnoringMouseEvents(const tguiWidget* widget);

CTGUI_API void tguiLabel_connect_onDoubleClick(tguiWidget* widget, void (*function)(const sfUint32*), const char** error);

#endif // CTGUI_LABEL_H

