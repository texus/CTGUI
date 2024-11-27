#include <CTGUI/Widget.h>
#include <CTGUI/WidgetStruct.hpp>
#include <CTGUI/RendererStruct.hpp>
#include <CTGUI/RendererDataStruct.hpp>

#include <TGUI/Container.hpp>
#include <TGUI/Widgets/ChildWindow.hpp>
#include <iostream>

@TGUI_GENERATED_HEAD@

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
                cWidget->This = std::move(cppWidget);
            }

            ++cWidget->referenceCount;
            return cWidget.get();
        }
        else // The widget didn't exist yet in C, so create the C wrapper now
            return globalWidgetsMap.insert({cppWidget.get(), std::make_unique<tguiWidget>(std::move(cppWidget))}).first->second.get();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void removeWidgetRef(const tgui::Widget::Ptr& cppWidget)
    {
        assert(globalWidgetsMap.find(cppWidget.get()) != globalWidgetsMap.end());
        auto& cWidget = globalWidgetsMap[cppWidget.get()];
        if (cWidget->referenceCount > 0)
            --cWidget->referenceCount;
        else
            std::cerr << "tguiWidget_destroy called too many times!\n";

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

void tguiWidget_destroy(tguiWidget* widget)
{
    // We will allow the destroy function to be called on a nullptr, so that you can e.g. always call tguiWidget_destroy after
    // a call to tguiWidget_getToolTip or tguiWidget_getParent without having to check if a non-null value was actually returned.
    if (widget)
        ctgui::removeWidgetRef(widget->This);
}

tguiWidget* tguiWidget_addPointerReference(tguiWidget* widget)
{
    // widget->This might be a nullptr when the widget was unreferenced (can happen when this function is called when processing
    // a callback for such a widget). This is why we use widget->weakWidgetPtr instead of widget->This.
    return ctgui::addWidgetRef(widget->weakWidgetPtr.lock());
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

unsigned int tguiWidget_signalConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(void))
{
    try
    {
        return widget->This->getSignal(ctgui::toCppStr(signalName)).connect(function);
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return 0;
    }
}

unsigned int tguiWidget_signalConnectEx(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiWidget*, tguiUtf32))
{
    try
    {
        return widget->This->getSignal(ctgui::toCppStr(signalName)).connectEx(
            [function](const std::shared_ptr<tgui::Widget>& cppWidget, const tgui::String& name) {
                function(ctgui::addWidgetRef(cppWidget), reinterpret_cast<tguiUtf32>(name.c_str()));
            });
    }
    catch (const tgui::Exception& e)
    {
        ctgui::tguiErrorMessage = e.what();
        return 0;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int tguiWidget_signalIntConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(int))
{
    return ctgui::connectSignal<tgui::SignalInt>(widget, signalName, function);
}

unsigned int tguiWidget_signalUIntConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(unsigned int))
{
    return ctgui::connectSignal<tgui::SignalUInt>(widget, signalName, function);
}

unsigned int tguiWidget_signalSizeTConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(size_t))
{
    return ctgui::connectSignal<tgui::SignalTyped<std::size_t>>(widget, signalName, function);
}

unsigned int tguiWidget_signalBoolConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiBool))
{
    return ctgui::connectSignal<tgui::SignalBool>(widget, signalName, [function](bool value) {
        function(value);
    });
}

unsigned int tguiWidget_signalFloatConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(float))
{
    return ctgui::connectSignal<tgui::SignalFloat>(widget, signalName, function);
}

unsigned int tguiWidget_signalColorConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiColor))
{
    return ctgui::connectSignal<tgui::SignalColor>(widget, signalName, [function](const tgui::Color& value) {
        function(tguiColor_fromRGBA(value.getRed(), value.getGreen(), value.getBlue(), value.getAlpha()));
    });
}

unsigned int tguiWidget_signalStringConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiUtf32))
{
    return ctgui::connectSignal<tgui::SignalString>(widget, signalName, [function](const tgui::String& value) {
        function(reinterpret_cast<tguiUtf32>(value.c_str()));
    });
}

unsigned int tguiWidget_signalVector2fConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiVector2f))
{
    return ctgui::connectSignal<tgui::SignalVector2f>(widget, signalName, [function](const tgui::Vector2f& value) {
        function({value.x, value.y});
    });
}

unsigned int tguiWidget_signalFloatRectConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiFloatRect))
{
    return ctgui::connectSignal<tgui::SignalFloatRect>(widget, signalName, [function](const tgui::FloatRect& value) {
        function({value.left, value.top, value.width, value.height});
    });
}

unsigned int tguiWidget_signalBoolPtrConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiBool*))
{
    return ctgui::connectSignal<tgui::SignalTyped<bool*>>(widget, signalName, [function](bool* value) {
        tguiBool cValue = *value;
        function(&cValue);
        *value = cValue;
    });
}

unsigned int tguiWidget_signalRangeConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(float, float))
{
    return ctgui::connectSignal<tgui::SignalRange>(widget, signalName, function);
}

unsigned int tguiWidget_signalTabSelectionChangingConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(int, tguiBool*))
{
    return ctgui::connectSignal<tgui::SignalTyped2<int, bool*>>(widget, signalName, [function](int index, bool* abort) {
        tguiBool cAbort = *abort;
        function(index, &cAbort);
        *abort = cAbort;
    });
}

unsigned int tguiWidget_signalChildWindowConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiWidget*))
{
    return ctgui::connectSignal<tgui::SignalChildWindow>(widget, signalName, [function](const tgui::ChildWindow::Ptr& value) {
        function(ctgui::addWidgetRef(value));
    });
}

unsigned int tguiWidget_signalItemConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(int))
{
    return ctgui::connectSignal<tgui::SignalItem>(widget, signalName, function);
}

unsigned int tguiWidget_signalPanelListBoxItemConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(int))
{
    return ctgui::connectSignal<tgui::SignalPanelListBoxItem>(widget, signalName, function);
}

unsigned int tguiWidget_signalFileDialogPathsConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(size_t, const tguiUtf32*))
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

unsigned int tguiWidget_signalShowEffectConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiShowEffectType, tguiBool))
{
    return ctgui::connectSignal<tgui::SignalShowEffect>(widget, signalName, [function](tgui::ShowEffectType type, bool showing) {
        function(static_cast<tguiShowEffectType>(type), showing);
    });
}

unsigned int tguiWidget_signalAnimationTypeConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(tguiAnimationType))
{
    return ctgui::connectSignal<tgui::SignalAnimationType>(widget, signalName, [function](tgui::AnimationType type) {
        function(static_cast<tguiAnimationType>(type));
    });
}

unsigned int tguiWidget_signalItemHierarchyConnect(tguiWidget* widget, tguiUtf32 signalName, void (*function)(size_t, const tguiUtf32*))
{
    return ctgui::connectSignal<tgui::SignalItemHierarchy>(widget, signalName, [function](const std::vector<tgui::String>& value) {
        std::vector<tguiUtf32> cStrings;
        for (auto& cppStr : value)
            cStrings.emplace_back(reinterpret_cast<tguiUtf32>(cppStr.c_str()));

        function(cStrings.size(), cStrings.data());
    });
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiWidget_signalDisconnect(tguiWidget* widget, tguiUtf32 signalName, unsigned int id)
{
    try
    {
        return widget->This->getSignal(ctgui::toCppStr(signalName)).disconnect(id);
    }
    catch (const tgui::Exception& e)
    {
        // No signal exists with the given name
        ctgui::tguiErrorMessage = e.what();
        return false;
    }
}

void tguiWidget_signalDisconnectAll(tguiWidget* widget, tguiUtf32 signalName)
{
    try
    {
        widget->This->getSignal(ctgui::toCppStr(signalName)).disconnectAll();
    }
    catch (const tgui::Exception& e)
    {
        // No signal exists with the given name
        ctgui::tguiErrorMessage = e.what();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiWidget_setSignalEnabled(tguiWidget* widget, tguiUtf32 signalName, tguiBool enabled)
{
    try
    {
        widget->This->getSignal(ctgui::toCppStr(signalName)).setEnabled(enabled != 0);
        return true;
    }
    catch (const tgui::Exception& e)
    {
        // No signal exists with the given name
        ctgui::tguiErrorMessage = e.what();
        return false;
    }
}

tguiBool tguiWidget_isSignalEnabled(tguiWidget* widget, tguiUtf32 signalName)
{
    try
    {
        return widget->This->getSignal(ctgui::toCppStr(signalName)).isEnabled();
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

tguiGui* tguiWidget_getParentGui(const tguiWidget* widget)
{
    const tgui::BackendGui* gui = widget->This->getParentGui();
    return ctgui::guiMap[gui];
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiWidget_updateTime(tguiWidget* widget, tguiDuration duration)
{
    widget->This->updateTime(std::chrono::nanoseconds(duration.nanoseconds));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

@TGUI_GENERATED_BODY@
