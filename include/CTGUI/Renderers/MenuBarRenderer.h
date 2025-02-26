// This file is generated, it should not be edited directly.

#ifndef CTGUI_MENUBARRENDERER_H
#define CTGUI_MENUBARRENDERER_H

#include <CTGUI/Global.h>

CTGUI_API tguiRenderer* tguiMenuBarRenderer_create(void);
CTGUI_API tguiRenderer* tguiMenuBarRenderer_copy(const tguiRenderer* other);

CTGUI_API void tguiMenuBarRenderer_setTextureBackground(tguiRenderer* thisRenderer, const tguiTexture* value);
CTGUI_API const tguiTexture* tguiMenuBarRenderer_getTextureBackground(const tguiRenderer* thisRenderer);

#endif // CTGUI_MENUBARRENDERER_H
