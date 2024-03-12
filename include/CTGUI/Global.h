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


#ifndef CTGUI_GLOBAL_H
#define CTGUI_GLOBAL_H

#include <CTGUI/Config.h>
#include <CTGUI/Color.h>
#include <CTGUI/Duration.h>
#include <CTGUI/Rect.h>
#include <CTGUI/Vector2.h>

CTGUI_API void tgui_setGlobalTextSize(unsigned int textSize);
CTGUI_API unsigned int tgui_getGlobalTextSize(void);

CTGUI_API void tgui_setDoubleClickTime(tguiDuration duration);
CTGUI_API tguiDuration tgui_getDoubleClickTime(void);

CTGUI_API void tgui_setResourcePath(tguiUtf32 path);

CTGUI_API void tgui_setEditCursorBlinkRate(tguiDuration blinkRate);
CTGUI_API tguiDuration tgui_getEditCursorBlinkRate(void);

CTGUI_API tguiUint8* tgui_readFileToMemory(tguiUtf32 filename, size_t* fileSize); // Returned pointer must be deallocated with tgui_readFileToMemory_free. Returns NULL on failure.
CTGUI_API tguiBool tgui_writeFile(tguiUtf32 filename, const char* textToWrite);

CTGUI_API void tgui_readFileToMemory_free(tguiUint8*);

// Returns the last error message that was set in the C binding upon catching a c++ exception
CTGUI_API const char* tgui_getLastError(void);

// The BindingWidgetCleanup callback is called once per frame for each widget that was destroyed since the last check.
// Note that the pointer passed as parameter should NOT be freed or accessed in any way by the callback function!
// A binding for another language that uses CTGUI may store a global map of resources with the widget pointer as key,
// this callback allows the binding to release all resources that were still attached to the freed widget.
CTGUI_API void tgui_setBindingWidgetCleanupCallback(void (*function)(tguiWidget*));

#endif // CTGUI_GLOBAL_H

