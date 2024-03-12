#include <CTGUI/CTGUI.h>
#include <CTGUI/Backend/CSFML-Graphics.h>
#include <stdio.h>

void func()
{
    printf("Button clicked\n");
}

void main()
{
    sfVideoMode videoMode = {400, 300, 32};
    sfRenderWindow* window = sfRenderWindow_create(videoMode, "CTGUI example (CSFML-GRAPHICS)", sfDefaultStyle, NULL);

    // The tguiGui object should always be the first CTGUI object to create
    tguiGui* gui = tguiGuiCSFMLGraphics_create(window);

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

    tguiWidget_free(button);
    tguiGuiCSFMLGraphics_free(gui);

    sfRenderWindow_destroy(window);
}
