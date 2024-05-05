// This file is generated, it should not be edited directly.

#ifndef CTGUI_BITMAPBUTTON_H
#define CTGUI_BITMAPBUTTON_H

#include <CTGUI/Widget.h>

CTGUI_API tguiWidget* tguiBitmapButton_create(void);

CTGUI_API void tguiBitmapButton_setImage(tguiWidget* thisWidget, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiBitmapButton_getImage(const tguiWidget* thisWidget);

CTGUI_API void tguiBitmapButton_setImageScaling(tguiWidget* thisWidget, float value);
CTGUI_API float tguiBitmapButton_getImageScaling(const tguiWidget* thisWidget);

#endif // CTGUI_BITMAPBUTTON_H
