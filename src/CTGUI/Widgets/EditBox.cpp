// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/EditBox.h>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/EditBox.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::EditBox>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiEditBox_create(void)
{
    return ctgui::addWidgetRef(tgui::EditBox::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setText(tguiWidget* thisWidget, tguiUtf32 value)
{
    DOWNCAST(thisWidget->This)->setText(ctgui::toCppStr(value));
}

tguiUtf32 tguiEditBox_getText(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setDefaultText(tguiWidget* thisWidget, tguiUtf32 value)
{
    DOWNCAST(thisWidget->This)->setDefaultText(ctgui::toCppStr(value));
}

tguiUtf32 tguiEditBox_getDefaultText(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getDefaultText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setPasswordCharacter(tguiWidget* thisWidget, tguiChar32 value)
{
    DOWNCAST(thisWidget->This)->setPasswordCharacter(value);
}

tguiChar32 tguiEditBox_getPasswordCharacter(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getPasswordCharacter();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setMaximumCharacters(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setMaximumCharacters(value);
}

unsigned int tguiEditBox_getMaximumCharacters(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getMaximumCharacters();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setAlignment(tguiWidget* thisWidget, tguiHorizontalAlignment value)
{
    DOWNCAST(thisWidget->This)->setAlignment(static_cast<tgui::HorizontalAlignment>(value));
}

tguiHorizontalAlignment tguiEditBox_getAlignment(const tguiWidget* thisWidget)
{
    return static_cast<tguiHorizontalAlignment>(DOWNCAST(thisWidget->This)->getAlignment());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setTextWidthLimited(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setTextWidthLimited(value != 0);
}

tguiBool tguiEditBox_isTextWidthLimited(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->isTextWidthLimited();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setReadOnly(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setReadOnly(value != 0);
}

tguiBool tguiEditBox_isReadOnly(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->isReadOnly();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setCaretPosition(tguiWidget* thisWidget, size_t value)
{
    DOWNCAST(thisWidget->This)->setCaretPosition(value);
}

size_t tguiEditBox_getCaretPosition(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getCaretPosition();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setInputValidator(tguiWidget* thisWidget, tguiUtf32 value)
{
    DOWNCAST(thisWidget->This)->setInputValidator(ctgui::toCppStr(value));
}

tguiUtf32 tguiEditBox_getInputValidator(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getInputValidator());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_setSuffix(tguiWidget* thisWidget, tguiUtf32 value)
{
    DOWNCAST(thisWidget->This)->setSuffix(ctgui::toCppStr(value));
}

tguiUtf32 tguiEditBox_getSuffix(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getSuffix());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiEditBox_selectText(tguiWidget* thisWidget, size_t start, size_t length)
{
    DOWNCAST(thisWidget->This)->selectText(start, length);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiEditBox_getSelectedText(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getSelectedText());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
