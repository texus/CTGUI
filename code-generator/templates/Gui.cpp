#include <CTGUI/Gui.h>
#include <CTGUI/GuiStruct.hpp>
#include <CTGUI/InternalGlobal.hpp>

@TGUI_GENERATED_HEAD@

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiGui_draw(tguiGui* gui)
{
    gui->This->draw();

    ctgui::cleanupWidgets(); // Fully destroy widgets that no longer exist
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiGui_loadWidgetsFromFile(tguiGui* gui, const char* filename, tguiBool replaceExisting)
{
    try
    {
        gui->This->loadWidgetsFromFile(filename, replaceExisting);
        return true;
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return false;
    }
}

tguiBool tguiGui_saveWidgetsToFile(tguiGui* gui, const char* filename)
{
    try
    {
        gui->This->saveWidgetsToFile(filename);
        return true;
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

@TGUI_GENERATED_BODY@
