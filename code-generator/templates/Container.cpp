#include <CTGUI/Container.h>
#include <CTGUI/FormLoadOptionsStruct.hpp>

#include <TGUI/Container.hpp>

@TGUI_GENERATED_HEAD@

#define DOWNCAST(x) std::static_pointer_cast<tgui::Container>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiContainer_loadWidgetsFromFile(tguiWidget* container, tguiUtf32 filename, tguiFormLoadOptions *loadOptions)
{
    try
    {
        DOWNCAST(container->This)->loadWidgetsFromFile(ctgui::toCppStr(filename), loadOptions ? loadOptions->This : tgui::FormLoadOptions());
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
