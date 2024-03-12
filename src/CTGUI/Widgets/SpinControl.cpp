/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2024 Bruno Van de Velde (vdv_b@tgui.eu)
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


#include <CTGUI/Widgets/SpinControl.h>
#include <CTGUI/WidgetStruct.hpp>
#include <CTGUI/Renderers/RendererStruct.hpp>

#include <TGUI/Widgets/SpinControl.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::SpinControl>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiSpinControl_create(void)
{
    return ctgui::addWidgetRef(tgui::SpinControl::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiSpinControl_getSpinButtonRenderer(const tguiWidget* widget)
{
    return new tguiRenderer(DOWNCAST(widget->This)->getSpinButtonRenderer(), false);
}

tguiRenderer* tguiSpinControl_getSpinButtonSharedRenderer(const tguiWidget* widget)
{
    return new tguiRenderer(DOWNCAST(widget->This)->getSpinButtonSharedRenderer(), false);
}

tguiRenderer* tguiSpinControl_getSpinTextRenderer(const tguiWidget* widget)
{
    return new tguiRenderer(DOWNCAST(widget->This)->getSpinTextRenderer(), false);
}

tguiRenderer* tguiSpinControl_getSpinTextSharedRenderer(const tguiWidget* widget)
{
    return new tguiRenderer(DOWNCAST(widget->This)->getSpinTextSharedRenderer(), false);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinControl_setMinimum(tguiWidget* widget, float minimum)
{
    DOWNCAST(widget->This)->setMinimum(minimum);
}

float tguiSpinControl_getMinimum(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMinimum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinControl_setMaximum(tguiWidget* widget, float maximum)
{
    DOWNCAST(widget->This)->setMaximum(maximum);
}

float tguiSpinControl_getMaximum(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMaximum();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinControl_setValue(tguiWidget* widget, float value)
{
    DOWNCAST(widget->This)->setValue(value);
}

float tguiSpinControl_getValue(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinControl_setStep(tguiWidget* widget, float step)
{
    DOWNCAST(widget->This)->setStep(step);
}

float tguiSpinControl_getStep(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getStep();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinControl_setDecimalPlaces(tguiWidget* widget, unsigned int decimalPlaces)
{
    DOWNCAST(widget->This)->setDecimalPlaces(decimalPlaces);
}

unsigned int tguiSpinControl_getDecimalPlaces(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getDecimalPlaces();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinControl_setUseWideArrows(tguiWidget* widget, tguiBool useWideArrows)
{
    DOWNCAST(widget->This)->setUseWideArrows(useWideArrows != 0);
}

tguiBool tguiSpinControl_getUseWideArrows(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getUseWideArrows();
}
