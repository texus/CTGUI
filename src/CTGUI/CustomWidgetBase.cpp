/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2026 Bruno Van de Velde (vdv_b@tgui.eu)
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


#include <CTGUI/CustomWidgetBase.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace ctgui
{
#if TGUI_COMPILED_WITH_CPP_VER < 17
    constexpr const char CustomWidgetBase::StaticWidgetType[];
#endif

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    CustomWidgetBase::CustomWidgetBase(const char* typeName, bool initRenderer) :
        tgui::Widget{typeName, initRenderer}
    {
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    CustomWidgetBase::Ptr CustomWidgetBase::create()
    {
        return std::make_shared<CustomWidgetBase>();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CustomWidgetBase::setPosition(const tgui::Layout2d& position)
    {
        tgui::Widget::setPosition(position);
        if (implPositionChanged)
            implPositionChanged(getPosition());
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CustomWidgetBase::setSize(const tgui::Layout2d& size)
    {
        tgui::Widget::setSize(size);
        if (implSizeChanged)
            implSizeChanged(getSize());
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    tgui::Vector2f CustomWidgetBase::getFullSize() const
    {
        return implGetFullSize ? implGetFullSize() : tgui::Widget::getFullSize();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    tgui::Vector2f CustomWidgetBase::getWidgetOffset() const
    {
        return implGetWidgetOffset ? implGetWidgetOffset() : tgui::Widget::getWidgetOffset();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CustomWidgetBase::setVisible(bool visible)
    {
        tgui::Widget::setVisible(visible);
        if (implVisibleChanged)
            implVisibleChanged(visible);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CustomWidgetBase::setEnabled(bool enabled)
    {
        tgui::Widget::setEnabled(enabled);
        if (implEnableChanged)
            implEnableChanged(enabled);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CustomWidgetBase::setFocused(bool focused)
    {
        tgui::Widget::setFocused(focused);
        if (implFocusChanged)
            implFocusChanged(focused);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    bool CustomWidgetBase::canGainFocus() const
    {
        return implCanGainFocus ? implCanGainFocus() : tgui::Widget::canGainFocus();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    bool CustomWidgetBase::updateTime(tgui::Duration elapsedTime)
    {
        bool screenRefreshRequired = tgui::Widget::updateTime(elapsedTime);
        if (implUpdateTimeFunction)
            screenRefreshRequired |= implUpdateTimeFunction(elapsedTime);
        return screenRefreshRequired;
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    bool CustomWidgetBase::isMouseOnWidget(tgui::Vector2f pos) const
    {
        return implMouseOnWidget ? implMouseOnWidget(pos) : false;
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    bool CustomWidgetBase::leftMousePressed(tgui::Vector2f pos)
    {
        tgui::Widget::leftMousePressed(pos);
        return implLeftMousePressed ? implLeftMousePressed(pos) : false;
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CustomWidgetBase::leftMouseReleased(tgui::Vector2f pos)
    {
        tgui::Widget::leftMouseReleased(pos);
        if (implLeftMouseReleased)
            implLeftMouseReleased(pos);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CustomWidgetBase::rightMousePressed(tgui::Vector2f pos)
    {
        tgui::Widget::rightMousePressed(pos);
        if (implRightMousePressed)
            implRightMousePressed(pos);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CustomWidgetBase::rightMouseReleased(tgui::Vector2f pos)
    {
        tgui::Widget::rightMouseReleased(pos);
        if (implRightMouseReleased)
            implRightMouseReleased(pos);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CustomWidgetBase::mouseMoved(tgui::Vector2f pos)
    {
        tgui::Widget::mouseMoved(pos);
        if (implMouseMoved)
            implMouseMoved(pos);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CustomWidgetBase::keyPressed(const tgui::Event::KeyEvent& event)
    {
        tgui::Widget::keyPressed(event);
        if (implKeyPressed)
            implKeyPressed(event);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CustomWidgetBase::textEntered(char32_t key)
    {
        tgui::Widget::textEntered(key);
        if (implTextEntered)
            implTextEntered(key);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    bool CustomWidgetBase::scrolled(float delta, tgui::Vector2f pos, bool touch)
    {
        return implScrolled ? implScrolled(delta, pos, touch) : tgui::Widget::scrolled(delta, pos, touch);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CustomWidgetBase::mouseNoLongerOnWidget()
    {
        tgui::Widget::mouseNoLongerOnWidget();
        if (implMouseNoLongerOnWidget)
            implMouseNoLongerOnWidget();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CustomWidgetBase::leftMouseButtonNoLongerDown()
    {
        tgui::Widget::leftMouseButtonNoLongerDown();
        if (implLeftMouseButtonNoLongerDown)
            implLeftMouseButtonNoLongerDown();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CustomWidgetBase::rendererChanged(const tgui::String& property)
    {
        if (!implRendererChanged || !implRendererChanged(property))
            tgui::Widget::rendererChanged(property);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CustomWidgetBase::mouseEnteredWidget()
    {
        tgui::Widget::mouseEnteredWidget();
        if (implMouseEnteredWidget)
            implMouseEnteredWidget();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CustomWidgetBase::mouseLeftWidget()
    {
        tgui::Widget::mouseLeftWidget();
        if (implMouseLeftWidget)
            implMouseLeftWidget();
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void CustomWidgetBase::draw(tgui::BackendRenderTarget& target, tgui::RenderStates states) const
    {
        if (implDrawFunction)
            implDrawFunction(target, states);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    tgui::Widget::Ptr CustomWidgetBase::clone() const
    {
        return std::make_shared<CustomWidgetBase>(*this);
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}
