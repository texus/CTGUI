#include <CTGUI/CTGUI.h>
#include <CTGUI/Backend/SDL-Renderer.h>
#include <stdio.h>
#include <stdbool.h>

void func()
{
    printf("Button clicked\n");
}

void main()
{
    // SDL and SDL_ttf need to be initialized before using CTGUI
    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();

    SDL_Window* window = SDL_CreateWindow("CTGUI example (SDL-Renderer)",
                                          SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                          400, 300,
                                          SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    // The tguiGui object should always be the first CTGUI object to create
    tguiGui* gui = tguiGuiSDLRenderer_create(window, renderer);

    tguiWidget* button = tguiButton_create();
    tguiGui_add(gui, button, U"MyButton");

    tguiButtonBase_setText(button, U"Hello");

    tguiVector2f position = {40, 30};
    tguiWidget_setPosition(button, position);

    tguiVector2f size = {200, 40};
    tguiWidget_setSize(button, size);

    tguiColor buttonColor = tguiColor_fromRGB(128, 220, 128);
    tguiRenderer* buttonRenderer = tguiWidget_getRenderer(button);
    tguiButtonRenderer_setBackgroundColor(buttonRenderer, &buttonColor);
    tguiWidgetRenderer_free(buttonRenderer);

    tguiWidget_signalConnect(button, "Pressed", func);

    bool quit = false;
    while (!quit)
    {
        SDL_Event event;
        while (SDL_PollEvent(&event) != 0)
        {
            if (event.type == SDL_QUIT)
                quit = true;

            tguiGuiSDLRenderer_handleEvent(gui, &event);
        }

        SDL_RenderClear(renderer);
        tguiGui_draw(gui);
        SDL_RenderPresent(renderer);
    }

    tguiWidget_free(button);
    tguiGuiSDLRenderer_free(gui);

    // All CTGUI resources must be destructed before destroying SDL and SDL_ttf
    TTF_Quit();
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
