// This file is generated, it should not be edited directly.

#include <CTGUI/Widget.h>
#include <CTGUI/WidgetStruct.hpp>
#include <CTGUI/RendererStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>

#include <TGUI/Container.hpp>
#include <TGUI/Widgets/ChildWindow.hpp>
#include <iostream>

#include <CTGUI/WidgetStruct.hpp>
#include <CTGUI/LayoutStruct.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace ctgui
{
    std::unordered_map<tgui::Widget*, std::unique_ptr<tguiWidget>> globalWidgetsMap;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    tguiWidget* addWidgetRef(tgui::Widget::Ptr cppWidget)
    {
        if (!cppWidget)
            return nullptr;

        const auto it = globalWidgetsMap.find(cppWidget.get());
        if (it != globalWidgetsMap.end())
        {
            auto& cWidget = it->second;

            // If the widget previously became unreferenced (but it still existed inside the gui),
            // then we need to store the shared_ptr inside it again.
            if (!cWidget->This)
            {
                assert(cWidget->referenceCount == 0);
                cWidget->This = cppWidget;
            }

            ++cWidget->referenceCount;
            return cWidget.get();
        }
        else
        {
            globalWidgetsMap[cppWidget.get()] = std::make_unique<tguiWidget>(std::move(cppWidget));
            return globalWidgetsMap[cppWidget.get()].get();
        }
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void removeWidgetRef(const tgui::Widget::Ptr& cppWidget)
    {
        assert(globalWidgetsMap.find(cppWidget.get()) != globalWidgetsMap.end());
        auto& cWidget = globalWidgetsMap[cppWidget.get()];
        if (cWidget->referenceCount > 0)
            --cWidget->referenceCount;
        else
            std::cerr << "tguiWidget_free called too many times!\n";

        if (cWidget->referenceCount == 0)
        {
            // The widget is no longer referenced from user code, but it may still be in use by the gui.
            // We can't erase the widget from our global list, as we still need the pointer to send an event when the widget is destroyed.
            // We can't keep the shared_ptr inside our global map as it would prevent the widget from ever being destroyed.
            cWidget->This = nullptr;
        }
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void cleanupWidgets()
    {
        auto it = globalWidgetsMap.begin();
        while (it != globalWidgetsMap.end())
        {
            if (it->second->isAlive())
            {
                ++it;
                continue;
            }

            if (ctgui::bindingWidgetCleanupCallback)
                ctgui::bindingWidgetCleanupCallback(it->second.get());

            it = globalWidgetsMap.erase(it);
        }
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

} // namespace ctgui

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiWidget_copy(const tguiWidget* widget)
{
    return ctgui::addWidgetRef(widget->This->clone());
}

void tguiWidget_free(tguiWidget* widget)
{
    // We will allow the free function to be called on a nullptr, so that you can e.g. always call tguiWidget_free after
    // a call to tguiWidget_getToolTip or tguiWidget_getParent without having to check if a non-null value was actually returned.
    if (widget)
        ctgui::removeWidgetRef(widget->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setAutoLayout(const tguiWidget* widget, tguiAutoLayout layout)
{
    widget->This->setAutoLayout(static_cast<tgui::AutoLayout>(layout));
}

tguiAutoLayout tguiWidget_getAutoLayout(const tguiWidget* widget)
{
    return static_cast<tguiAutoLayout>(widget->This->getAutoLayout());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int tguiWidget_signalConnect(tguiWidget* widget, const char* signalName, void (*function)(void))
{
    try
    {
        return widget->This->getSignal(signalName).connect(function);
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return 0;
    }
}

unsigned int tguiWidget_signalConnectEx(tguiWidget* widget, const char* signalName, void (*function)(tguiWidget*, tguiUtf32))
{
    try
    {
        return widget->This->getSignal(signalName).connectEx(
            [function](const std::shared_ptr<tgui::Widget>& cppWidget, const tgui::String& name) {
                function(ctgui::addWidgetRef(cppWidget), ctgui::fromCppStr(name));
            });
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return 0;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int tguiWidget_signalIntConnect(tguiWidget* widget, const char* signalName, void (*function)(int))
{
    return ctgui::connectSignal<tgui::SignalInt>(widget, signalName, function);
}

unsigned int tguiWidget_signalUIntConnect(tguiWidget* widget, const char* signalName, void (*function)(unsigned int))
{
    return ctgui::connectSignal<tgui::SignalUInt>(widget, signalName, function);
}

unsigned int tguiWidget_signalBoolConnect(tguiWidget* widget, const char* signalName, void (*function)(tguiBool))
{
    return ctgui::connectSignal<tgui::SignalBool>(widget, signalName, [function](bool value) {
        function(value);
    });
}

unsigned int tguiWidget_signalFloatConnect(tguiWidget* widget, const char* signalName, void (*function)(float))
{
    return ctgui::connectSignal<tgui::SignalFloat>(widget, signalName, function);
}

unsigned int tguiWidget_signalColorConnect(tguiWidget* widget, const char* signalName, void (*function)(tguiColor))
{
    return ctgui::connectSignal<tgui::SignalColor>(widget, signalName, [function](const tgui::Color& value) {
        function(tguiColor_fromRGBA(value.getRed(), value.getGreen(), value.getBlue(), value.getAlpha()));
    });
}

unsigned int tguiWidget_signalStringConnect(tguiWidget* widget, const char* signalName, void (*function)(tguiUtf32))
{
    return ctgui::connectSignal<tgui::SignalString>(widget, signalName, [function](const tgui::String& value) {
        function(ctgui::fromCppStr(value));
    });
}

unsigned int tguiWidget_signalVector2fConnect(tguiWidget* widget, const char* signalName, void (*function)(tguiVector2f))
{
    return ctgui::connectSignal<tgui::SignalVector2f>(widget, signalName, [function](const tgui::Vector2f& value) {
        function({value.x, value.y});
    });
}

unsigned int tguiWidget_signalFloatRectConnect(tguiWidget* widget, const char* signalName, void (*function)(tguiFloatRect))
{
    return ctgui::connectSignal<tgui::SignalFloatRect>(widget, signalName, [function](const tgui::FloatRect& value) {
        tguiFloatRect rect;
        rect.left = value.left;
        rect.top = value.top;
        rect.width = value.width;
        rect.height = value.height;
        function(rect);
    });
}

unsigned int tguiWidget_signalRangeConnect(tguiWidget* widget, const char* signalName, void (*function)(float, float))
{
    return ctgui::connectSignal<tgui::SignalRange>(widget, signalName, function);
}

unsigned int tguiWidget_signalChildWindowConnect(tguiWidget* widget, const char* signalName, void (*function)(tguiWidget*))
{
    return ctgui::connectSignal<tgui::SignalChildWindow>(widget, signalName, [function](const tgui::ChildWindow::Ptr& value) {
        function(ctgui::addWidgetRef(value));
    });
}

unsigned int tguiWidget_signalItemConnect(tguiWidget* widget, const char* signalName, void (*function)(int))
{
    return ctgui::connectSignal<tgui::SignalItem>(widget, signalName, function);
}

unsigned int tguiWidget_signalPanelListBoxItemConnect(tguiWidget* widget, const char* signalName, void (*function)(int))
{
    return ctgui::connectSignal<tgui::SignalPanelListBoxItem>(widget, signalName, function);
}

unsigned int tguiWidget_signalFileDialogPathsConnect(tguiWidget* widget, const char* signalName, void (*function)(size_t, const tguiUtf32*))
{
    return ctgui::connectSignal<tgui::SignalFileDialogPaths>(widget, signalName, [function](const std::vector<tgui::Filesystem::Path>& value) {
        std::vector<tgui::String> cppStrings;
        for (const auto& path : value)
            cppStrings.emplace_back(path.asString());

        // Create the array that we will pass as parameter to the callback function. We can't do this in the same loop
        // as above because we need to be certain that cppStrings will no longer move its data.
        std::vector<tguiUtf32> cStrings;
        for (auto& cppStr : cppStrings)
            cStrings.emplace_back(reinterpret_cast<tguiUtf32>(cppStr.c_str()));

        function(cStrings.size(), cStrings.data());
    });
}

unsigned int tguiWidget_signalShowEffectConnect(tguiWidget* widget, const char* signalName, void (*function)(tguiShowEffectType, tguiBool))
{
    return ctgui::connectSignal<tgui::SignalShowEffect>(widget, signalName, [function](tgui::ShowEffectType type, bool showing) {
        function(static_cast<tguiShowEffectType>(type), showing);
    });
}

unsigned int tguiWidget_signalAnimationTypeConnect(tguiWidget* widget, const char* signalName, void (*function)(tguiAnimationType))
{
    return ctgui::connectSignal<tgui::SignalAnimationType>(widget, signalName, [function](tgui::AnimationType type) {
        function(static_cast<tguiAnimationType>(type));
    });
}

unsigned int tguiWidget_signalItemHierarchyConnect(tguiWidget* widget, const char* signalName, void (*function)(size_t, const tguiUtf32*))
{
    return ctgui::connectSignal<tgui::SignalItemHierarchy>(widget, signalName, [function](const std::vector<tgui::String>& value) {
        std::vector<tguiUtf32> cStrings;
        for (auto& cppStr : value)
            cStrings.emplace_back(reinterpret_cast<tguiUtf32>(cppStr.c_str()));

        function(cStrings.size(), cStrings.data());
    });
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiWidget_signalDisconnect(tguiWidget* widget, const char* signalName, unsigned int id)
{
    try
    {
        return widget->This->getSignal(signalName).disconnect(id);
    }
    catch (const tgui::Exception& e)
    {
        // No signal exists with the given name
        ctgui::tguiErrorMessage = e.what();
        return false;
    }
}

void tguiWidget_signalDisconnectAll(tguiWidget* widget, const char* signalName)
{
    try
    {
        widget->This->getSignal(signalName).disconnectAll();
    }
    catch (const tgui::Exception& e)
    {
        // No signal exists with the given name
        ctgui::tguiErrorMessage = e.what();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiWidget_setSignalEnabled(tguiWidget* widget, const char* signalName, tguiBool enabled)
{
    try
    {
        widget->This->getSignal(signalName).setEnabled(enabled != 0);
        return true;
    }
    catch (const tgui::Exception& e)
    {
        // No signal exists with the given name
        ctgui::tguiErrorMessage = e.what();
        return false;
    }
}

tguiBool tguiWidget_isSignalEnabled(tguiWidget* widget, const char* signalName)
{
    try
    {
        return widget->This->getSignal(signalName).isEnabled();
    }
    catch (const tgui::Exception& e)
    {
        // No signal exists with the given name
        ctgui::tguiErrorMessage = e.what();
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiWidget_setRenderer(tguiWidget* widget, tguiRendererData* renderer)
{
    try
    {
        widget->This->setRenderer(renderer->This);
        return true;
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return false;
    }
}

tguiRenderer* tguiWidget_getRenderer(const tguiWidget* widget)
{
    return new tguiRenderer(widget->This->getRenderer(), false);
}

tguiRenderer* tguiWidget_getSharedRenderer(const tguiWidget* widget)
{
    return new tguiRenderer(widget->This->getSharedRenderer(), false);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_showWithEffect(tguiWidget* widget, tguiShowEffectType type, tguiDuration duration)
{
    widget->This->showWithEffect(static_cast<tgui::ShowEffectType>(type), std::chrono::nanoseconds(duration.nanoseconds));
}

void tguiWidget_hideWithEffect(tguiWidget* widget, tguiShowEffectType type, tguiDuration duration)
{
    widget->This->hideWithEffect(static_cast<tgui::ShowEffectType>(type), std::chrono::nanoseconds(duration.nanoseconds));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_moveWithAnimation(tguiWidget* widget, tguiVector2f position, tguiDuration duration)
{
    widget->This->moveWithAnimation({position.x, position.y}, std::chrono::nanoseconds(duration.nanoseconds));
}

void tguiWidget_resizeWithAnimation(tguiWidget* widget, tguiVector2f size, tguiDuration duration)
{
    widget->This->resizeWithAnimation({size.x, size.y}, std::chrono::nanoseconds(duration.nanoseconds));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setToolTip(tguiWidget* widget, tguiWidget* toolTip)
{
    if (toolTip)
        widget->This->setToolTip(toolTip->This);
    else
        widget->This->setToolTip(nullptr);
}

tguiWidget* tguiWidget_getToolTip(const tguiWidget* widget)
{
    return ctgui::addWidgetRef(widget->This->getToolTip());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiWidget_getParent(const tguiWidget* widget)
{
    tgui::Container* parent = widget->This->getParent();
    if (parent)
        return ctgui::addWidgetRef(parent->shared_from_this());
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_updateTime(tguiWidget* widget, tguiDuration duration)
{
    widget->This->updateTime(std::chrono::nanoseconds(duration.nanoseconds));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setPosition(tguiWidget* thisWidget, tguiVector2f position)
{
    thisWidget->This->setPosition({position.x, position.y});
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setPositionFromLayout(tguiWidget* thisWidget, const tguiLayout2d* layout)
{
    thisWidget->This->setPosition(layout->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiWidget_getPosition(const tguiWidget* thisWidget)
{
    const auto value = thisWidget->This->getPosition();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiWidget_getAbsolutePosition(const tguiWidget* thisWidget)
{
    const auto value = thisWidget->This->getAbsolutePosition();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiWidget_getAbsolutePositionWithOffset(const tguiWidget* thisWidget, tguiVector2f offset)
{
    const auto value = thisWidget->This->getAbsolutePosition({offset.x, offset.y});
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiWidget_getWidgetOffset(const tguiWidget* thisWidget)
{
    const auto value = thisWidget->This->getWidgetOffset();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setWidth(tguiWidget* thisWidget, float width)
{
    thisWidget->This->setWidth(width);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setWidthFromLayout(tguiWidget* thisWidget, const tguiLayout* layout)
{
    thisWidget->This->setWidth(layout->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setHeight(tguiWidget* thisWidget, float height)
{
    thisWidget->This->setHeight(height);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setHeightFromLayout(tguiWidget* thisWidget, const tguiLayout* layout)
{
    thisWidget->This->setHeight(layout->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setSize(tguiWidget* thisWidget, tguiVector2f size)
{
    thisWidget->This->setSize({size.x, size.y});
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setSizeFromLayout(tguiWidget* thisWidget, const tguiLayout2d* layout)
{
    thisWidget->This->setSize(layout->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiWidget_getSize(const tguiWidget* thisWidget)
{
    const auto value = thisWidget->This->getSize();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiWidget_getFullSize(const tguiWidget* thisWidget)
{
    const auto value = thisWidget->This->getFullSize();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setOrigin(tguiWidget* thisWidget, tguiVector2f value)
{
    thisWidget->This->setOrigin({value.x, value.y});
}

tguiVector2f tguiWidget_getOrigin(const tguiWidget* thisWidget)
{
    const auto value = thisWidget->This->getOrigin();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setScale(tguiWidget* thisWidget, tguiVector2f origin)
{
    thisWidget->This->setScale({origin.x, origin.y});
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setScaleWithOrigin(tguiWidget* thisWidget, tguiVector2f scale, tguiVector2f origin)
{
    thisWidget->This->setScale({scale.x, scale.y}, {origin.x, origin.y});
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiWidget_getScale(const tguiWidget* thisWidget)
{
    const auto value = thisWidget->This->getScale();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiWidget_getScaleOrigin(const tguiWidget* thisWidget)
{
    const auto value = thisWidget->This->getScaleOrigin();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setRotation(tguiWidget* thisWidget, float angle)
{
    thisWidget->This->setRotation(angle);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setRotationWithOrigin(tguiWidget* thisWidget, float angle, tguiVector2f origin)
{
    thisWidget->This->setRotation(angle, {origin.x, origin.y});
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float tguiWidget_getRotation(const tguiWidget* thisWidget)
{
    return thisWidget->This->getRotation();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiVector2f tguiWidget_getRotationOrigin(const tguiWidget* thisWidget)
{
    const auto value = thisWidget->This->getRotationOrigin();
    return {value.x, value.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setVisible(tguiWidget* thisWidget, tguiBool value)
{
    thisWidget->This->setVisible(value != 0);
}

tguiBool tguiWidget_isVisible(const tguiWidget* thisWidget)
{
    return thisWidget->This->isVisible();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setEnabled(tguiWidget* thisWidget, tguiBool value)
{
    thisWidget->This->setEnabled(value != 0);
}

tguiBool tguiWidget_isEnabled(const tguiWidget* thisWidget)
{
    return thisWidget->This->isEnabled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setFocused(tguiWidget* thisWidget, tguiBool value)
{
    thisWidget->This->setFocused(value != 0);
}

tguiBool tguiWidget_isFocused(const tguiWidget* thisWidget)
{
    return thisWidget->This->isFocused();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setFocusable(tguiWidget* thisWidget, tguiBool value)
{
    thisWidget->This->setFocusable(value != 0);
}

tguiBool tguiWidget_isFocusable(const tguiWidget* thisWidget)
{
    return thisWidget->This->isFocusable();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiWidget_getWidgetType(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(thisWidget->This->getWidgetType());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_moveToFront(tguiWidget* thisWidget)
{
    thisWidget->This->moveToFront();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_moveToBack(tguiWidget* thisWidget)
{
    thisWidget->This->moveToBack();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setUserData(tguiWidget* thisWidget, void* value)
{
    thisWidget->This->setUserData(value);
}

void* tguiWidget_getUserData(const tguiWidget* thisWidget)
{
    try
    {
        // User data will be of type void* when it was set in the C binding
        return thisWidget->This->getUserData<void*>();
    }
    catch (const std::bad_cast&)
    {
        try
        {
            // User data will be of type tgui::String when it was set by loading the widget from a form
            return const_cast<void*>(static_cast<const void*>(ctgui::fromCppStr(thisWidget->This->getUserData<tgui::String>())));
        }
        catch (const std::bad_cast&)
        {
           return nullptr;
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiWidget_hasUserData(const tguiWidget* thisWidget)
{
    return thisWidget->This->hasUserData();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiWidget_isAnimationPlaying(const tguiWidget* thisWidget)
{
    return thisWidget->This->isAnimationPlaying();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setTextSize(tguiWidget* thisWidget, unsigned int value)
{
    thisWidget->This->setTextSize(value);
}

unsigned int tguiWidget_getTextSize(const tguiWidget* thisWidget)
{
    return thisWidget->This->getTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setWidgetName(tguiWidget* thisWidget, tguiUtf32 value)
{
    thisWidget->This->setWidgetName(ctgui::toCppStr(value));
}

tguiUtf32 tguiWidget_getWidgetName(const tguiWidget* thisWidget)
{
    return ctgui::fromCppStr(thisWidget->This->getWidgetName());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setMouseCursor(tguiWidget* thisWidget, tguiCursorType value)
{
    thisWidget->This->setMouseCursor(static_cast<tgui::Cursor::Type>(value));
}

tguiCursorType tguiWidget_getMouseCursor(const tguiWidget* thisWidget)
{
    return static_cast<tguiCursorType>(thisWidget->This->getMouseCursor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setNavigationUp(tguiWidget* thisWidget, tguiWidget* value)
{
    thisWidget->This->setNavigationUp(value->This);
}

tguiWidget* tguiWidget_getNavigationUp(const tguiWidget* thisWidget)
{
    tgui::Widget::Ptr widgetToReturn = thisWidget->This->getNavigationUp();
    if (widgetToReturn)
        return ctgui::addWidgetRef(widgetToReturn);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setNavigationDown(tguiWidget* thisWidget, tguiWidget* value)
{
    thisWidget->This->setNavigationDown(value->This);
}

tguiWidget* tguiWidget_getNavigationDown(const tguiWidget* thisWidget)
{
    tgui::Widget::Ptr widgetToReturn = thisWidget->This->getNavigationDown();
    if (widgetToReturn)
        return ctgui::addWidgetRef(widgetToReturn);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setNavigationLeft(tguiWidget* thisWidget, tguiWidget* value)
{
    thisWidget->This->setNavigationLeft(value->This);
}

tguiWidget* tguiWidget_getNavigationLeft(const tguiWidget* thisWidget)
{
    tgui::Widget::Ptr widgetToReturn = thisWidget->This->getNavigationLeft();
    if (widgetToReturn)
        return ctgui::addWidgetRef(widgetToReturn);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setNavigationRight(tguiWidget* thisWidget, tguiWidget* value)
{
    thisWidget->This->setNavigationRight(value->This);
}

tguiWidget* tguiWidget_getNavigationRight(const tguiWidget* thisWidget)
{
    tgui::Widget::Ptr widgetToReturn = thisWidget->This->getNavigationRight();
    if (widgetToReturn)
        return ctgui::addWidgetRef(widgetToReturn);
    else
        return nullptr;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setIgnoreMouseEvents(tguiWidget* thisWidget, tguiBool value)
{
    thisWidget->This->setIgnoreMouseEvents(value != 0);
}

tguiBool tguiWidget_getIgnoreMouseEvents(const tguiWidget* thisWidget)
{
    return thisWidget->This->getIgnoreMouseEvents();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_finishAllAnimations(tguiWidget* thisWidget)
{
    thisWidget->This->finishAllAnimations();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setAutoLayoutUpdateEnabled(tguiWidget* thisWidget, tguiBool enabled)
{
    thisWidget->This->setAutoLayoutUpdateEnabled(enabled != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiWidget_isMouseDown(const tguiWidget* thisWidget)
{
    return thisWidget->This->isMouseDown();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiWidget_isMouseOnWidget(const tguiWidget* thisWidget, tguiVector2f pos)
{
    return thisWidget->This->isMouseOnWidget({pos.x, pos.y});
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
