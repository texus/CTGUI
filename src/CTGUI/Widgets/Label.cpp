/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2016 Bruno Van de Velde (vdv_b@tgui.eu)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <CTGUI/Widgets/Label.h>
#include <CTGUI/WidgetStruct.h>

#include <TGUI/Widgets/Label.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::Label>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiLabel_create(void)
{
    return new tguiWidget(tgui::Label::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiLabel_setText(tguiWidget* widget, const sfUint32* text)
{
    DOWNCAST(widget->This)->setText(text);
}

const sfUint32* tguiLabel_getText(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getText().getData();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiLabel_setTextSize(tguiWidget* widget, unsigned int size)
{
    DOWNCAST(widget->This)->setTextSize(size);
}

unsigned int tguiLabel_getTextSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiLabel_setHorizontalAlignment(tguiWidget* widget, tguiHorizontalAlignment alignment)
{
    DOWNCAST(widget->This)->setHorizontalAlignment(static_cast<tgui::Label::HorizontalAlignment>(alignment));
}

tguiHorizontalAlignment tguiLabel_getHorizontalAlignment(const tguiWidget* widget)
{
    return static_cast<tguiHorizontalAlignment>(DOWNCAST(widget->This)->getHorizontalAlignment());
}

void tguiLabel_setVerticalAlignment(tguiWidget* widget, tguiVerticalAlignment alignment)
{
    DOWNCAST(widget->This)->setVerticalAlignment(static_cast<tgui::Label::VerticalAlignment>(alignment));
}

tguiVerticalAlignment tguiLabel_getVerticalAlignment(const tguiWidget* widget)
{
    return static_cast<tguiVerticalAlignment>(DOWNCAST(widget->This)->getVerticalAlignment());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiLabel_setAutoSize(tguiWidget* widget, sfBool autoSize)
{
    DOWNCAST(widget->This)->setAutoSize(autoSize != 0);
}

sfBool tguiLabel_getAutoSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getAutoSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiLabel_setMaximumTextWidth(tguiWidget* widget, float maximumTextWidth)
{
    DOWNCAST(widget->This)->setMaximumTextWidth(maximumTextWidth);
}

float tguiLabel_getMaximumTextWidth(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMaximumTextWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiLabel_ignoreMouseEvents(tguiWidget* widget, sfBool ignore)
{
    DOWNCAST(widget->This)->ignoreMouseEvents(ignore != 0);
}

sfBool tguiLabel_isIgnoringMouseEvents(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isIgnoringMouseEvents();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiLabel_connect_onDoubleClick(tguiWidget* widget, void (*function)(const sfUint32*), const char** error)
{
    try
    {
        DOWNCAST(widget->This)->onDoubleClick.connect([function](const sf::String& str){ function(str.getData()); });
        *error = nullptr;
    }
    catch (const tgui::Exception& e)
    {
        tguiErrorMessage = e.what();
        *error = tguiErrorMessage.c_str();
    }
}
