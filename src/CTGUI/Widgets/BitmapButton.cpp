// This file is generated, it should not be edited directly.

#include <CTGUI/Widgets/BitmapButton.h>
#include <CTGUI/TextureStruct.hpp>
#include <CTGUI/WidgetStruct.hpp>

#include <TGUI/Widgets/BitmapButton.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::BitmapButton>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiBitmapButton_create(void)
{
    return ctgui::addWidgetRef(tgui::BitmapButton::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiBitmapButton_setImage(tguiWidget* thisWidget, const tguiTexture* value)
{
    DOWNCAST(thisWidget->This)->setImage(*value->This);
}

const tguiTexture* tguiBitmapButton_getImage(const tguiWidget* thisWidget)
{
    return new tguiTexture(std::make_unique<tgui::Texture>(DOWNCAST(thisWidget->This)->getImage()));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiBitmapButton_setImageScaling(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setImageScaling(value);
}

float tguiBitmapButton_getImageScaling(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getImageScaling();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
