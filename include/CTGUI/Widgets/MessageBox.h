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


#ifndef CTGUI_MESSAGE_BOX_H
#define CTGUI_MESSAGE_BOX_H

#include <CTGUI/Widget.h>
#include <CTGUI/Alignment.h>

CTGUI_API tguiWidget* tguiMessageBox_create(void);

CTGUI_API void tguiMessageBox_setText(tguiWidget* widget, tguiUtf32 text);
CTGUI_API tguiUtf32 tguiMessageBox_getText(const tguiWidget* widget);

CTGUI_API void tguiMessageBox_addButton(tguiWidget* widget, tguiUtf32 text);
CTGUI_API void tguiMessageBox_removeButtons(tguiWidget* widget);
CTGUI_API const tguiUtf32* tguiMessageBox_getButtons(const tguiWidget* widget, size_t* count); // count is set by the function to indicate length of returned array

CTGUI_API void tguiMessageBox_setLabelAlignment(tguiWidget* widget, tguiHorizontalAlignment labelAlignment);
CTGUI_API tguiHorizontalAlignment tguiMessageBox_getLabelAlignment(const tguiWidget* widget);

CTGUI_API void tguiMessageBox_setButtonAlignment(tguiWidget* widget, tguiHorizontalAlignment buttonAlignment);
CTGUI_API tguiHorizontalAlignment tguiMessageBox_getButtonAlignment(const tguiWidget* widget);

#endif // CTGUI_MESSAGE_BOX_H

