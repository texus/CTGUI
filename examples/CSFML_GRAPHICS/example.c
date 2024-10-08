#include <CTGUI/CTGUI.h>
#include <CTGUI/Backend/CSFML-Graphics.h>
#include <stdio.h>

void func(void)
{
    printf("Button clicked\n");
}

int main()
{
    sfVideoMode videoMode = {400, 300, 32};
#if CSFML_VERSION_MAJOR >= 3
    sfRenderWindow* window = sfRenderWindow_create(videoMode, "CTGUI example (CSFML-GRAPHICS)", sfDefaultStyle, sfWindowed, NULL);
#else
    sfRenderWindow* window = sfRenderWindow_create(videoMode, "CTGUI example (CSFML-GRAPHICS)", sfDefaultStyle, NULL);
#endif
    // The tguiGui object should always be the first CTGUI object to create
    tguiGui* gui = tguiGuiCSFMLGraphics_create(window);

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

    tguiWidget_signalConnect(button, "Pressed", func);

    while (sfRenderWindow_isOpen(window))
    {
        sfEvent event;
        while (sfRenderWindow_pollEvent(window, &event))
        {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);

            tguiGuiCSFMLGraphics_handleEvent(gui, &event);
        }

        sfRenderWindow_clear(window, sfBlack);
        tguiGui_draw(gui);
        sfRenderWindow_display(window);
    }

    tguiWidget_destroy(button);
    tguiGuiCSFMLGraphics_destroy(gui);

    sfRenderWindow_destroy(window);
    return 0;
}
