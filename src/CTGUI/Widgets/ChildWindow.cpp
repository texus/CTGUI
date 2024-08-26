// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/ChildWindow.h>
#include <CTGUI/LayoutStruct.hpp>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/ChildWindow.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ChildWindow>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiChildWindow_create(void)
{
    return ctgui::addWidgetRef(tgui::ChildWindow::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setClientSize(tguiWidget* thisWidget, tguiVector2f size)
{
    DOWNCAST(thisWidget->This)->setClientSize({size.x, size.y});
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setClientSizeFromLayout(tguiWidget* thisWidget, const tguiLayout2d* layout)
{
    DOWNCAST(thisWidget->This)->setClientSize(layout->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiChildWindow_getClientSize(const tguiWidget* thisWidget)
{
    const auto value = DOWNCAST(thisWidget->This)->getClientSize();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setMaximumSize(tguiWidget* thisWidget, tguiVector2f value)
{
    DOWNCAST(thisWidget->This)->setMaximumSize({value.x, value.y});
}

tguiVector2f tguiChildWindow_getMaximumSize(const tguiWidget* thisWidget)
{
    const auto value = DOWNCAST(thisWidget->This)->getMaximumSize();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setMinimumSize(tguiWidget* thisWidget, tguiVector2f value)
{
    DOWNCAST(thisWidget->This)->setMinimumSize({value.x, value.y});
}

tguiVector2f tguiChildWindow_getMinimumSize(const tguiWidget* thisWidget)
{
    const auto value = DOWNCAST(thisWidget->This)->getMinimumSize();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setTitle(tguiWidget* thisWidget, tguiUtf32 value)
{
    DOWNCAST(thisWidget->This)->setTitle(ctgui::toCppStr(value));
}

tguiUtf32 tguiChildWindow_getTitle(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(DOWNCAST(thisWidget->This)->getTitle());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setTitleTextSize(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setTitleTextSize(value);
}

unsigned int tguiChildWindow_getTitleTextSize(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getTitleTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setTitleAlignment(tguiWidget* thisWidget, tguiHorizontalAlignment value)
{
    DOWNCAST(thisWidget->This)->setTitleAlignment(static_cast<tgui::HorizontalAlignment>(value));
}

tguiHorizontalAlignment tguiChildWindow_getTitleAlignment(const tguiWidget* thisWidget)
{
    return static_cast<tguiHorizontalAlignment>(DOWNCAST(thisWidget->This)->getTitleAlignment());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setTitleButtons(tguiWidget* thisWidget, unsigned int value)
{
    DOWNCAST(thisWidget->This)->setTitleButtons(value);
}

unsigned int tguiChildWindow_getTitleButtons(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getTitleButtons();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setResizable(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setResizable(value != 0);
}

tguiBool tguiChildWindow_isResizable(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->isResizable();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setKeepInParent(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setKeepInParent(value != 0);
}

tguiBool tguiChildWindow_getKeepInParent(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getKeepInParent();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiChildWindow_setPositionLocked(tguiWidget* thisWidget, tguiBool value)
{
    DOWNCAST(thisWidget->This)->setPositionLocked(value != 0);
}

tguiBool tguiChildWindow_isPositionLocked(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->isPositionLocked();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
