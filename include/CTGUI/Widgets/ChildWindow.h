// This file is generated, it should not be edited directly.

#ifndef CTGUI_CHILDWINDOW_H
#define CTGUI_CHILDWINDOW_H

#include <CTGUI/Widget.h>

#include <CTGUI/Alignment.h>

typedef enum
{
    tguiChildWindowCloseBehaviorNone,
    tguiChildWindowCloseBehaviorHide,
    tguiChildWindowCloseBehaviorRemove,
} tguiChildWindowCloseBehavior;

CTGUI_API tguiWidget* tguiChildWindow_create(void);

CTGUI_API void tguiChildWindow_setClientSize(tguiWidget* thisWidget, tguiVector2f size);

CTGUI_API void tguiChildWindow_setClientSizeFromLayout(tguiWidget* thisWidget, const tguiLayout2d* layout);

CTGUI_API tguiVector2f tguiChildWindow_getClientSize(const tguiWidget* thisWidget);

CTGUI_API void tguiChildWindow_setMaximumSize(tguiWidget* thisWidget, tguiVector2f value);
CTGUI_API tguiVector2f tguiChildWindow_getMaximumSize(const tguiWidget* thisWidget);

CTGUI_API void tguiChildWindow_setMinimumSize(tguiWidget* thisWidget, tguiVector2f value);
CTGUI_API tguiVector2f tguiChildWindow_getMinimumSize(const tguiWidget* thisWidget);

CTGUI_API void tguiChildWindow_setTitle(tguiWidget* thisWidget, tguiUtf32 value);
CTGUI_API tguiUtf32 tguiChildWindow_getTitle(const tguiWidget* thisWidget);

CTGUI_API void tguiChildWindow_setTitleTextSize(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiChildWindow_getTitleTextSize(const tguiWidget* thisWidget);

CTGUI_API void tguiChildWindow_setTitleAlignment(tguiWidget* thisWidget, tguiHorizontalAlignment value);
CTGUI_API tguiHorizontalAlignment tguiChildWindow_getTitleAlignment(const tguiWidget* thisWidget);

CTGUI_API void tguiChildWindow_setTitleButtons(tguiWidget* thisWidget, unsigned int value);
CTGUI_API unsigned int tguiChildWindow_getTitleButtons(const tguiWidget* thisWidget);

CTGUI_API void tguiChildWindow_setCloseBehavior(tguiWidget* thisWidget, tguiChildWindowCloseBehavior value);
CTGUI_API tguiChildWindowCloseBehavior tguiChildWindow_getCloseBehavior(const tguiWidget* thisWidget);

CTGUI_API void tguiChildWindow_setResizable(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiChildWindow_isResizable(const tguiWidget* thisWidget);

CTGUI_API void tguiChildWindow_setKeepInParent(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiChildWindow_getKeepInParent(const tguiWidget* thisWidget);

CTGUI_API void tguiChildWindow_setPositionLocked(tguiWidget* thisWidget, tguiBool value);
CTGUI_API tguiBool tguiChildWindow_isPositionLocked(const tguiWidget* thisWidget);

#endif // CTGUI_CHILDWINDOW_H
