#include <CTGUI/CTGUI.h>
#include <CTGUI/Backend/SDL-GPU.h>
#include <stdio.h>

#include <SDL3/SDL_main.h>

void func(void)
{
    printf("Button clicked\n");
}

int main(int argc, char* argv[])
{
    // SDL and SDL_ttf need to be initialized before using CTGUI
    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();

    SDL_GPUDevice* device = SDL_CreateGPUDevice(SDL_GPU_SHADERFORMAT_SPIRV | SDL_GPU_SHADERFORMAT_DXIL | SDL_GPU_SHADERFORMAT_MSL, false, NULL);
    SDL_Window* window = SDL_CreateWindow("CTGUI example (SDL-GPU)", 400, 300, 0);
    SDL_ClaimWindowForGPUDevice(device, window);

    // The tguiGui object should always be the first CTGUI object to create
    tguiGui* gui = tguiGuiSDLGPU_create(window, device);

    tguiWidget* button = tguiButton_create();
    tguiGui_add(gui, button, U"MyButton");

    tguiButtonBase_setText(button, U"Hello");

    tguiVector2f position = {40, 30};
    tguiWidget_setPosition(button, position);

    tguiVector2f size = {200, 40};
    tguiWidget_setSize(button, size);

    tguiRenderer* buttonRenderer = tguiWidget_getRenderer(button);
    tguiButtonRenderer_setBackgroundColor(buttonRenderer, tguiColor_fromRGB(128, 220, 128));
    tguiWidgetRenderer_destroy(buttonRenderer);

    tguiWidget_signalConnect(button, U"Pressed", func);

    bool quit = false;
    while (!quit)
    {
        SDL_Event event;
        while (SDL_PollEvent(&event) != 0)
        {
            tguiGuiSDLGPU_handleEvent(gui, &event);

            if (event.type == SDL_EVENT_QUIT)
                quit = true;
        }

        SDL_GPUCommandBuffer* cmdBuffer = SDL_AcquireGPUCommandBuffer(device);

        SDL_GPUTexture* swapchainTexture = NULL;
        SDL_WaitAndAcquireGPUSwapchainTexture(cmdBuffer, window, &swapchainTexture, NULL, NULL);
        if (swapchainTexture)
        {
            SDL_GPUCopyPass* copyPass = SDL_BeginGPUCopyPass(cmdBuffer);
            tguiGuiSDLGPU_prepareDraw(gui, cmdBuffer, copyPass);
            SDL_EndGPUCopyPass(copyPass);

            SDL_GPUColorTargetInfo colorTargetInfo = {
                .texture = swapchainTexture,
                .clear_color = {200.f / 255.f, 200.f / 255.f, 200.f / 255.f, 1.f},
                .load_op = SDL_GPU_LOADOP_CLEAR,
                .store_op = SDL_GPU_STOREOP_STORE
            };
            SDL_GPURenderPass* renderPass = SDL_BeginGPURenderPass(cmdBuffer, &colorTargetInfo, 1, NULL);
            tguiGuiSDLGPU_draw(gui, renderPass);
            SDL_EndGPURenderPass(renderPass);
        }

        SDL_SubmitGPUCommandBuffer(cmdBuffer);
    }

    tguiWidget_destroy(button);
    tguiGuiSDLGPU_destroy(gui);

    // All CTGUI resources must be destructed before destroying SDL and SDL_ttf
    TTF_Quit();
    SDL_ReleaseWindowFromGPUDevice(device, window);
    SDL_DestroyWindow(window);
    SDL_DestroyGPUDevice(device);
    SDL_Quit();
    return 0;
}
