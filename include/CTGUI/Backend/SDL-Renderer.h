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

#ifndef CTGUI_GUI_SDL_RENDERER_H
#define CTGUI_GUI_SDL_RENDERER_H

#include <CTGUI/Global.h>
#include <CTGUI/Gui.h>

#if !CTGUI_HAS_BACKEND_SDL_RENDERER
    #error "CTGUI wasn't build with the SDL_RENDERER backend"
#endif

#ifdef __cplusplus
    #if defined(__GNUC__)
        #pragma GCC diagnostic push
        #pragma GCC diagnostic ignored "-Wold-style-cast"
    #elif defined (_MSC_VER)
        #if defined(__clang__)
            #pragma clang diagnostic push
            #pragma clang diagnostic ignored "-Wold-style-cast"
            #pragma clang diagnostic ignored "-Wlanguage-extension-token"
        #endif
    #endif
#endif

#if CTGUI_USE_SDL_VERSION == 3
    #include <SDL3/SDL.h>
    #include <SDL3_ttf/SDL_ttf.h>
#elif CTGUI_USE_SDL_VERSION == 2
    #include <SDL.h>
    #include <SDL_ttf.h>
#else
    #error "CTGUI_USE_SDL_VERSION wasn't set correctly"
#endif

#ifdef __cplusplus
    #if defined(__GNUC__)
        #pragma GCC diagnostic pop
    #elif defined (_MSC_VER)
        #if defined(__clang__)
            #pragma clang diagnostic pop
        #endif
    #endif
#endif

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

CTGUI_API tguiGui* tguiGuiSDLRenderer_create(SDL_Window* window, SDL_Renderer* renderer);
CTGUI_API void tguiGuiSDLRenderer_free(tguiGui* gui);

CTGUI_API void tguiGuiSDLRenderer_handleEvent(tguiGui* gui, const SDL_Event* event);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // CTGUI_GUI_SDL_RENDERER_H
