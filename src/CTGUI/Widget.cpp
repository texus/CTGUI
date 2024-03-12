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


#include <CTGUI/Widget.h>
#include <CTGUI/WidgetStruct.hpp>
#include <CTGUI/LayoutStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>
#include <CTGUI/Renderers/RendererStruct.hpp>

#include <TGUI/Container.hpp>
#include <TGUI/Widgets/ChildWindow.hpp>
#include <iostream>

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

void tguiWidget_setPosition(tguiWidget* widget, tguiVector2f position)
{
    widget->This->setPosition({position.x, position.y});
}

void tguiWidget_setPositionFromLayout(tguiWidget* widget, tguiLayout2d* layout)
{
    widget->This->setPosition(layout->This);
}

tguiVector2f tguiWidget_getPosition(const tguiWidget* widget)
{
    tgui::Vector2f pos = widget->This->getPosition();
    return {pos.x, pos.y};
}

tguiVector2f tguiWidget_getAbsolutePosition(const tguiWidget* widget)
{
    tgui::Vector2f pos = widget->This->getAbsolutePosition();
    return {pos.x, pos.y};
}

tguiVector2f tguiWidget_getWidgetOffset(const tguiWidget* widget)
{
    tgui::Vector2f pos = widget->This->getWidgetOffset();
    return {pos.x, pos.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setWidth(tguiWidget* widget, float width)
{
    widget->This->setWidth(width);
}

void tguiWidget_setWidthFromLayout(tguiWidget* widget, tguiLayout* layout)
{
    widget->This->setWidth(layout->This);
}

void tguiWidget_setHeight(tguiWidget* widget, float height)
{
    widget->This->setHeight(height);
}

void tguiWidget_setHeightFromLayout(tguiWidget* widget, tguiLayout* layout)
{
    widget->This->setHeight(layout->This);
}

void tguiWidget_setSize(tguiWidget* widget, tguiVector2f size)
{
    widget->This->setSize({size.x, size.y});
}

void tguiWidget_setSizeFromLayout(tguiWidget* widget, tguiLayout2d* layout)
{
    widget->This->setSize(layout->This);
}

tguiVector2f tguiWidget_getSize(const tguiWidget* widget)
{
    const tgui::Vector2f size = widget->This->getSize();
    return {size.x, size.y};
}

tguiVector2f tguiWidget_getFullSize(const tguiWidget* widget)
{
    const tgui::Vector2f size = widget->This->getFullSize();
    return {size.x, size.y};
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

void tguiWidget_setOrigin(tguiWidget* widget, tguiVector2f origin)
{
    widget->This->setOrigin({origin.x, origin.y});
}

tguiVector2f tguiWidget_getOrigin(const tguiWidget* widget)
{
    const tgui::Vector2f origin = widget->This->getOrigin();
    return {origin.x, origin.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setScale(tguiWidget* widget, tguiVector2f scale)
{
    widget->This->setScale({scale.x, scale.y});
}

void tguiWidget_setScaleWithOrigin(tguiWidget* widget, tguiVector2f scale, tguiVector2f origin)
{
    widget->This->setScale({scale.x, scale.y}, {origin.x, origin.y});
}

tguiVector2f tguiWidget_getScale(const tguiWidget* widget)
{
    const tgui::Vector2f scale = widget->This->getScale();
    return {scale.x, scale.y};
}

tguiVector2f tguiWidget_getScaleOrigin(const tguiWidget* widget)
{
    const tgui::Vector2f origin = widget->This->getScaleOrigin();
    return {origin.x, origin.y};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setRotation(tguiWidget* widget, float angle)
{
    widget->This->setRotation(angle);
}

void tguiWidget_setRotationWithOrigin(tguiWidget* widget, float angle, tguiVector2f origin)
{
    widget->This->setRotation(angle, {origin.x, origin.y});
}

float tguiWidget_getRotation(const tguiWidget* widget)
{
    return widget->This->getRotation();
}

tguiVector2f tguiWidget_getRotationOrigin(const tguiWidget* widget)
{
    const tgui::Vector2f origin = widget->This->getRotationOrigin();
    return {origin.x, origin.y};
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
                function(ctgui::addWidgetRef(cppWidget), name.c_str());
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
        function(value.c_str());
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
            cStrings.emplace_back(cppStr.c_str());

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
            cStrings.emplace_back(cppStr.c_str());

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

void tguiWidget_setVisible(tguiWidget* widget, tguiBool visible)
{
    widget->This->setVisible(visible != 0);
}

tguiBool tguiWidget_isVisible(const tguiWidget* widget)
{
    return widget->This->isVisible();
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

void tguiWidget_setEnabled(tguiWidget* widget, tguiBool enabled)
{
    widget->This->setEnabled(enabled != 0);
}

tguiBool tguiWidget_isEnabled(const tguiWidget* widget)
{
    return widget->This->isEnabled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setFocused(tguiWidget* widget, tguiBool focused)
{
    widget->This->setFocused(focused != 0);
}

tguiBool tguiWidget_isFocused(const tguiWidget* widget)
{
    return widget->This->isFocused();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setFocusable(tguiWidget* widget, tguiBool focusable)
{
    widget->This->setFocusable(focusable != 0);
}

tguiBool tguiWidget_isFocusable(const tguiWidget* widget)
{
    return widget->This->isFocusable();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiWidget_getWidgetType(const tguiWidget* widget)
{
    return ctgui::fromCppStr(widget->This->getWidgetType());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_moveToFront(tguiWidget* widget)
{
    widget->This->moveToFront();
}

void tguiWidget_moveToBack(tguiWidget* widget)
{
    widget->This->moveToBack();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setUserData(tguiWidget* widget, void* data)
{
    widget->This->setUserData(data);
}

void* tguiWidget_getUserData(const tguiWidget* widget)
{
    try
    {
        return widget->This->getUserData<void*>();
    }
    catch (const std::bad_cast&)
    {
        return nullptr;
    }
}

tguiBool tguiWidget_hasUserData(const tguiWidget* widget)
{
    return widget->This->hasUserData();
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

tguiBool tguiWidget_isAnimationPlaying(const tguiWidget* widget)
{
    return widget->This->isAnimationPlaying();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setTextSize(tguiWidget* widget, unsigned int size)
{
    widget->This->setTextSize(size);
}

unsigned int tguiWidget_getTextSize(const tguiWidget* widget)
{
    return widget->This->getTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setWidgetName(tguiWidget* widget, tguiUtf32 name)
{
    widget->This->setWidgetName(ctgui::toCppStr(name));
}

tguiUtf32 tguiWidget_getWidgetName(const tguiWidget* widget)
{
    return ctgui::fromCppStr(widget->This->getWidgetName());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setMouseCursor(tguiWidget* widget, tguiCursorType cursor)
{
    widget->This->setMouseCursor(static_cast<tgui::Cursor::Type>(cursor));
}

tguiCursorType tguiWidget_getMouseCursor(const tguiWidget* widget)
{
    return static_cast<tguiCursorType>(widget->This->getMouseCursor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setNavigationUp(tguiWidget* widget, const tguiWidget* widgetAbove)
{
    widget->This->setNavigationUp(widgetAbove->This);
}

void tguiWidget_setNavigationDown(tguiWidget* widget, const tguiWidget* widgetBelow)
{
    widget->This->setNavigationDown(widgetBelow->This);
}

void tguiWidget_setNavigationLeft(tguiWidget* widget, const tguiWidget* widgetLeft)
{
    widget->This->setNavigationLeft(widgetLeft->This);
}

void tguiWidget_setNavigationRight(tguiWidget* widget, const tguiWidget* widgetRight)
{
    widget->This->setNavigationRight(widgetRight->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiWidget_getNavigationUp(const tguiWidget* widget)
{
    return ctgui::addWidgetRef(widget->This->getNavigationUp());
}

tguiWidget* tguiWidget_getNavigationDown(const tguiWidget* widget)
{
    return ctgui::addWidgetRef(widget->This->getNavigationDown());
}

tguiWidget* tguiWidget_getNavigationLeft(const tguiWidget* widget)
{
    return ctgui::addWidgetRef(widget->This->getNavigationLeft());
}

tguiWidget* tguiWidget_getNavigationRight(const tguiWidget* widget)
{
    return ctgui::addWidgetRef(widget->This->getNavigationRight());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_finishAllAnimations(tguiWidget* widget)
{
    widget->This->finishAllAnimations();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_setAutoLayoutUpdateEnabled(tguiWidget* widget, tguiBool enabled)
{
    widget->This->setAutoLayoutUpdateEnabled(enabled != 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_updateTime(tguiWidget* widget, tguiDuration duration)
{
    widget->This->updateTime(std::chrono::nanoseconds(duration.nanoseconds));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiWidget_isMouseDown(const tguiWidget* widget)
{
    return widget->This->isMouseDown();
}

tguiBool tguiWidget_isMouseOnWidget(tguiWidget* widget, tguiVector2f pos)
{
    return widget->This->isMouseOnWidget({pos.x, pos.y});
}
