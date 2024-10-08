#include <CTGUI/Container.h>

#include <TGUI/Container.hpp>

@TGUI_GENERATED_HEAD@

#define DOWNCAST(x) std::static_pointer_cast<tgui::Container>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContainer_loadWidgetsFromFile(tguiWidget* container, const char* filename, tguiBool replaceExisting)
{
    try
    {
        DOWNCAST(container->This)->loadWidgetsFromFile(filename, replaceExisting);
        return true;
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return false;
    }
}

tguiBool tguiContainer_saveWidgetsToFile(tguiWidget* container, const char* filename)
{
    try
    {
        DOWNCAST(container->This)->saveWidgetsToFile(filename);
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
