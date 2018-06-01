#include <CTGUI/CTGUI.h>
#include <stdio.h>

void func()
{
    printf("Button clicked\n");
}

void main()
{
    sfVideoMode videoMode = {400, 300, 32};
    sfRenderWindow* window = sfRenderWindow_create(videoMode, "CTGUI example", sfDefaultStyle, NULL);

    tguiGui* gui = tguiGui_createFromTargetRenderWindow(window);

    tguiWidget* button = tguiButton_create();
    tguiGui_add(gui, button, U"MyButton");

    tguiButton_setText(button, U"Hello");

    sfVector2f position = {40, 30};
    tguiWidget_setPosition(button, position);

    sfVector2f size = {200, 40};
    tguiWidget_setSize(button, size);

    tguiWidget_connect(button, "pressed", func);

    while (sfRenderWindow_isOpen(window))
    {
        sfEvent event;
        while (sfRenderWindow_pollEvent(window, &event))
        {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);

            tguiGui_handleEvent(gui, event);
        }

        sfRenderWindow_clear(window, sfBlack);
        tguiGui_draw(gui);
        sfRenderWindow_display(window);
    }

    tguiWidget_destroy(button);
    tguiGui_destroy(gui);
    sfRenderWindow_destroy(window);
}
