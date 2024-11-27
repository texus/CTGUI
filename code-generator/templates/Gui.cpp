#include <CTGUI/Gui.h>
#include <CTGUI/GuiStruct.hpp>
#include <CTGUI/InternalGlobal.hpp>

@TGUI_GENERATED_HEAD@

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiGui_handleEventLostFocus(tguiGui* gui)
{
    tgui::Event event;
    event.type = tgui::Event::Type::LostFocus;
    return gui->This->handleEvent(event);
}

tguiBool tguiGui_handleEventGainedFocus(tguiGui* gui)
{
    tgui::Event event;
    event.type = tgui::Event::Type::GainedFocus;
    return gui->This->handleEvent(event);
}

tguiBool tguiGui_handleEventTextEntered(tguiGui* gui, tguiTextEvent textEvent)
{
    tgui::Event event;
    event.type = tgui::Event::Type::TextEntered;
    event.text.unicode = static_cast<char32_t>(textEvent.unicode);
    return gui->This->handleEvent(event);
}

tguiBool tguiGui_handleEventKeyPressed(tguiGui* gui, tguiKeyEvent keyEvent)
{
    tgui::Event event;
    event.type = tgui::Event::Type::KeyPressed;
    event.key.code = static_cast<tgui::Event::KeyboardKey>(keyEvent.code);
    event.key.alt = keyEvent.alt;
    event.key.control = keyEvent.control;
    event.key.shift = keyEvent.shift;
    event.key.system = keyEvent.system;
    return gui->This->handleEvent(event);
}

tguiBool tguiGui_handleEventMouseWheelScrolled(tguiGui* gui, tguiMouseWheelEvent mouseWheelEvent)
{
    tgui::Event event;
    event.type = tgui::Event::Type::MouseWheelScrolled;
    event.mouseWheel.delta = mouseWheelEvent.delta;
    event.mouseWheel.x = mouseWheelEvent.x;
    event.mouseWheel.y = mouseWheelEvent.y;
    return gui->This->handleEvent(event);
}

tguiBool tguiGui_handleEventMouseButtonPressed(tguiGui* gui, tguiMouseButtonEvent mouseButtonEvent)
{
    tgui::Event event;
    event.type = tgui::Event::Type::MouseButtonPressed;
    event.mouseButton.button = static_cast<tgui::Event::MouseButton>(mouseButtonEvent.button);
    event.mouseButton.x = mouseButtonEvent.x;
    event.mouseButton.y = mouseButtonEvent.y;
    return gui->This->handleEvent(event);
}

tguiBool tguiGui_handleEventMouseButtonReleased(tguiGui* gui, tguiMouseButtonEvent mouseButtonEvent)
{
    tgui::Event event;
    event.type = tgui::Event::Type::MouseButtonReleased;
    event.mouseButton.button = static_cast<tgui::Event::MouseButton>(mouseButtonEvent.button);
    event.mouseButton.x = mouseButtonEvent.x;
    event.mouseButton.y = mouseButtonEvent.y;
    return gui->This->handleEvent(event);
}

tguiBool tguiGui_handleEventMouseMoved(tguiGui* gui, tguiMouseMoveEvent mouseMoveEvent)
{
    tgui::Event event;
    event.type = tgui::Event::Type::MouseMoved;
    event.mouseMove.x = mouseMoveEvent.x;
    event.mouseMove.y = mouseMoveEvent.y;
    return gui->This->handleEvent(event);
}

tguiBool tguiGui_handleEventMouseEntered(tguiGui* gui)
{
    tgui::Event event;
    event.type = tgui::Event::Type::MouseEntered;
    return gui->This->handleEvent(event);
}

tguiBool tguiGui_handleEventMouseLeft(tguiGui* gui)
{
    tgui::Event event;
    event.type = tgui::Event::Type::MouseLeft;
    return gui->This->handleEvent(event);
}

tguiBool tguiGui_handleEventResized(tguiGui* gui, tguiSizeEvent sizeEvent)
{
    tgui::Event event;
    event.type = tgui::Event::Type::Resized;
    event.size.width = sizeEvent.width;
    event.size.height = sizeEvent.height;
    return gui->This->handleEvent(event);
}

tguiBool tguiGui_handleEventClosed(tguiGui* gui)
{
    tgui::Event event;
    event.type = tgui::Event::Type::Closed;
    return gui->This->handleEvent(event);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_draw(tguiGui* gui)
{
    gui->This->draw();

    ctgui::cleanupWidgets(); // Fully destroy widgets that no longer exist
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiGui_loadWidgetsFromFile(tguiGui* gui, tguiUtf32 filename, tguiBool replaceExisting)
{
    try
    {
        gui->This->loadWidgetsFromFile(ctgui::toCppStr(filename), replaceExisting);
        return true;
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return false;
    }
}

tguiBool tguiGui_saveWidgetsToFile(tguiGui* gui, tguiUtf32 filename)
{
    try
    {
        gui->This->saveWidgetsToFile(ctgui::toCppStr(filename));
        return true;
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_setViewChangeCallback(tguiGui* gui, void (*function)(tguiGui*))
{
    if (function)
        gui->This->onViewChange.connect([=]{ function(gui); });
    else
        gui->This->onViewChange.disconnectAll();
}

void tguiGui_setWindowFocusCallback(tguiGui* gui, void (*function)(tguiGui*))
{
    if (function)
        gui->This->onWindowFocus.connect([=]{ function(gui); });
    else
        gui->This->onWindowFocus.disconnectAll();
}

void tguiGui_setWindowUnfocusCallback(tguiGui* gui, void (*function)(tguiGui*))
{
    if (function)
        gui->This->onWindowUnfocus.connect([=]{ function(gui); });
    else
        gui->This->onWindowUnfocus.disconnectAll();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

@TGUI_GENERATED_BODY@
