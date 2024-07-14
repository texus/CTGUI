// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/MessageBox.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/MessageBox.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::MessageBox>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiMessageBox_create(void)
{
    return ctgui::addWidgetRef(tgui::MessageBox::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMessageBox_setText(tguiWidget* thisWidget, tguiUtf32 value)
{
    DOWNCAST(thisWidget->This)->setText(ctgui::toCppStr(value));
}

tguiUtf32 tguiMessageBox_getText(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMessageBox_addButton(tguiWidget* thisWidget, tguiUtf32 text)
{
    DOWNCAST(thisWidget->This)->addButton(ctgui::toCppStr(text));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMessageBox_changeButtons(tguiWidget* thisWidget, const tguiUtf32* buttonCaptions, size_t buttonCaptionsLength)
{
    std::vector<tgui::String> convertedButtonCaptions;
    convertedButtonCaptions.reserve(buttonCaptionsLength);
    for (size_t i = 0; i < buttonCaptionsLength; ++i)
        convertedButtonCaptions.push_back(ctgui::toCppStr(buttonCaptions[i]));

    DOWNCAST(thisWidget->This)->changeButtons(std::move(convertedButtonCaptions));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const tguiUtf32* tguiMessageBox_getButtons(const tguiWidget* thisWidget, size_t* returnCount)
{
    static std::vector<tgui::String> cppStrings;
    cppStrings = DOWNCAST(thisWidget->This)->getButtons();

    static std::vector<tguiUtf32> cStrings;
    cStrings.clear();
    cStrings.reserve(cppStrings.size());
    for (const auto& item : cppStrings)
        cStrings.emplace_back(reinterpret_cast<tguiUtf32>(item.c_str()));

    *returnCount = cStrings.size();
    return cStrings.data();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMessageBox_setLabelAlignment(tguiWidget* thisWidget, tguiHorizontalAlignment value)
{
    DOWNCAST(thisWidget->This)->setLabelAlignment(static_cast<tgui::HorizontalAlignment>(value));
}

tguiHorizontalAlignment tguiMessageBox_getLabelAlignment(const tguiWidget* thisWidget)
{
    return static_cast<tguiHorizontalAlignment>(DOWNCAST(thisWidget->This)->getLabelAlignment());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiMessageBox_setButtonAlignment(tguiWidget* thisWidget, tguiHorizontalAlignment value)
{
    DOWNCAST(thisWidget->This)->setButtonAlignment(static_cast<tgui::HorizontalAlignment>(value));
}

tguiHorizontalAlignment tguiMessageBox_getButtonAlignment(const tguiWidget* thisWidget)
{
    return static_cast<tguiHorizontalAlignment>(DOWNCAST(thisWidget->This)->getButtonAlignment());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
