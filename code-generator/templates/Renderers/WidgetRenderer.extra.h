CTGUI_API tguiBool tguiWidgetRenderer_hasProperty(const tguiRenderer* renderer, tguiUtf32 property);

CTGUI_API tguiBool tguiWidgetRenderer_getPropertyBool(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiFont* tguiWidgetRenderer_getPropertyFont(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiColor tguiWidgetRenderer_getPropertyColor(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiUtf32 tguiWidgetRenderer_getPropertyString(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API float tguiWidgetRenderer_getPropertyNumber(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiOutline* tguiWidgetRenderer_getPropertyOutline(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiTexture* tguiWidgetRenderer_getPropertyTexture(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiUint32 tguiWidgetRenderer_getPropertyTextStyle(const tguiRenderer* renderer, tguiUtf32 property);
CTGUI_API tguiRendererData* tguiWidgetRenderer_getPropertyRendererData(const tguiRenderer* renderer, tguiUtf32 property);

CTGUI_API void tguiWidgetRenderer_destroy(tguiRenderer* renderer);
