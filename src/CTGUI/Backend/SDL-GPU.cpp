/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2026 Bruno Van de Velde (vdv_b@tgui.eu)
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


#include <CTGUI/Backend/SDL-GPU.h>
#include <CTGUI/GuiStruct.hpp>
#include <TGUI/Backend/SDL-GPU.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiGui* tguiGuiSDLGPU_create(SDL_Window* window, SDL_GPUDevice* device)
{
    tguiGui* gui = new tguiGui();
    gui->This = std::make_unique<tgui::SDL_GPU::Gui>(window, device);
    ctgui::guiMap[gui->This.get()] = gui;
    return gui;
}

void tguiGuiSDLGPU_destroy(tguiGui* gui)
{
    ctgui::guiMap.erase(gui->This.get());
    delete gui;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGuiSDLGPU_handleEvent(tguiGui* gui, const SDL_Event* event)
{
    static_cast<tgui::SDL_GPU::Gui*>(gui->This.get())->handleEvent(*event);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGuiSDLGPU_prepareDraw(tguiGui* gui, SDL_GPUCommandBuffer* cmdBuffer, SDL_GPUCopyPass* copyPass)
{
    static_cast<tgui::SDL_GPU::Gui*>(gui->This.get())->prepareDraw(cmdBuffer, copyPass);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGuiSDLGPU_draw(tguiGui* gui, SDL_GPURenderPass* renderPass)
{
    static_cast<tgui::SDL_GPU::Gui*>(gui->This.get())->draw(renderPass);
}
