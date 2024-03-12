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

#ifndef CTGUI_CONFIG_H
#define CTGUI_CONFIG_H

#include <CTGUI/Types.h>

#define CTGUI_VERSION_MAJOR 1
#define CTGUI_VERSION_MINOR 2
#define CTGUI_VERSION_PATCH 0

#if defined(_WIN32)
    #define CTGUI_SYSTEM_WINDOWS // Windows
#elif defined(__APPLE__) && defined(__MACH__)
    #include "TargetConditionals.h"
    #if TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR
        #define CTGUI_SYSTEM_IOS // iOS
    #elif TARGET_OS_MAC
        #define CTGUI_SYSTEM_MACOS // macOS
    #endif
#elif defined(__unix__)
    #if defined(__ANDROID__)
        #define CTGUI_SYSTEM_ANDROID // Android
    #else //if defined(__linux__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__OpenBSD__)
        #define CTGUI_SYSTEM_LINUX // Linux or BSD
    #endif
#endif

#ifdef __cplusplus
    #define CTGUI_IMPORT_EXTERN_C extern "C"
#else
    #define CTGUI_IMPORT_EXTERN_C extern
#endif

#ifdef CTGUI_SYSTEM_WINDOWS
    #define CTGUI_API_EXPORT CTGUI_IMPORT_EXTERN_C __declspec(dllexport)
    #define CTGUI_API_IMPORT CTGUI_IMPORT_EXTERN_C __declspec(dllimport)
#else
    #define CTGUI_API_EXPORT CTGUI_IMPORT_EXTERN_C __attribute__ ((__visibility__ ("default")))
    #define CTGUI_API_IMPORT CTGUI_IMPORT_EXTERN_C __attribute__ ((__visibility__ ("default")))
#endif

#ifdef CTGUI_EXPORTS
    #define CTGUI_API CTGUI_API_EXPORT
#else
    #define CTGUI_API CTGUI_API_IMPORT
#endif

#endif // CTGUI_CONFIG_H
