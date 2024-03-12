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


#ifndef CTGUI_TYPES_H
#define CTGUI_TYPES_H

#include <stddef.h>
#include <stdint.h>
#include <uchar.h>

typedef struct tguiFont tguiFont;
typedef struct tguiGui tguiGui;
typedef struct tguiLayout tguiLayout;
typedef struct tguiLayout2d tguiLayout2d;
typedef struct tguiOutline tguiOutline;
typedef struct tguiRenderer tguiRenderer;
typedef struct tguiRendererData tguiRendererData;
typedef struct tguiBackendRenderTarget tguiBackendRenderTarget;
typedef struct tguiSprite tguiSprite;
typedef struct tguiText tguiText;
typedef struct tguiTexture tguiTexture;
typedef struct tguiTheme tguiTheme;
typedef struct tguiWidget tguiWidget;
typedef struct tguiTimer tguiTimer;

typedef const char32_t* tguiUtf32;

typedef int8_t tguiInt8;
typedef uint8_t tguiUint8;

typedef int16_t tguiInt16;
typedef uint16_t tguiUint16;

typedef int32_t tguiInt32;
typedef uint32_t tguiUint32;

typedef int64_t tguiInt64;
typedef uint64_t tguiUint64;

typedef int tguiBool;
#define tguiFalse 0
#define tguiTrue  1

#endif // CTGUI_TYPES_H

