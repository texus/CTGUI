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

#ifndef CTGUI_CTGUI_HPP
#define CTGUI_CTGUI_HPP

#include <CTGUI/Global.h>
#include <CTGUI/Alignment.h>
#include <CTGUI/Animation.h>
#include <CTGUI/BackendRenderTarget.h>
#include <CTGUI/Base64.h>
#include <CTGUI/Color.h>
#include <CTGUI/Container.h>
#include <CTGUI/Cursor.h>
#include <CTGUI/CustomWidget.h>
#include <CTGUI/Duration.h>
#include <CTGUI/Event.h>
#include <CTGUI/Filesystem.h>
#include <CTGUI/Font.h>
#include <CTGUI/Gui.h>
#include <CTGUI/Layout.h>
#include <CTGUI/Outline.h>
#include <CTGUI/Rect.h>
#include <CTGUI/RendererData.h>
#include <CTGUI/RenderStates.h>
#include <CTGUI/ScrollbarPolicy.h>
#include <CTGUI/Sprite.h>
#include <CTGUI/Text.h>
#include <CTGUI/Texture.h>
#include <CTGUI/Theme.h>
#include <CTGUI/Timer.h>
#include <CTGUI/ToolTip.h>
#include <CTGUI/Vector2.h>
#include <CTGUI/Vertex.h>
#include <CTGUI/Widget.h>

#include <CTGUI/Widgets/BitmapButton.h>
#include <CTGUI/Widgets/BoxLayout.h>
#include <CTGUI/Widgets/BoxLayoutRatios.h>
#include <CTGUI/Widgets/Button.h>
#include <CTGUI/Widgets/ButtonBase.h>
#include <CTGUI/Widgets/ChatBox.h>
#include <CTGUI/Widgets/CheckBox.h>
#include <CTGUI/Widgets/ChildWindow.h>
#include <CTGUI/Widgets/ClickableWidget.h>
#include <CTGUI/Widgets/ColorPicker.h>
#include <CTGUI/Widgets/ComboBox.h>
#include <CTGUI/Widgets/EditBox.h>
#include <CTGUI/Widgets/FileDialog.h>
#include <CTGUI/Widgets/Grid.h>
#include <CTGUI/Widgets/Group.h>
#include <CTGUI/Widgets/HorizontalLayout.h>
#include <CTGUI/Widgets/HorizontalWrap.h>
#include <CTGUI/Widgets/Knob.h>
#include <CTGUI/Widgets/Label.h>
#include <CTGUI/Widgets/ListBox.h>
#include <CTGUI/Widgets/ListView.h>
#include <CTGUI/Widgets/MenuBar.h>
#include <CTGUI/Widgets/MessageBox.h>
#include <CTGUI/Widgets/Panel.h>
#include <CTGUI/Widgets/Picture.h>
#include <CTGUI/Widgets/ProgressBar.h>
#include <CTGUI/Widgets/RadioButton.h>
#include <CTGUI/Widgets/RadioButtonGroup.h>
#include <CTGUI/Widgets/RangeSlider.h>
#include <CTGUI/Widgets/ScrollablePanel.h>
#include <CTGUI/Widgets/Scrollbar.h>
#include <CTGUI/Widgets/Slider.h>
#include <CTGUI/Widgets/SpinButton.h>
#include <CTGUI/Widgets/SpinControl.h>
#include <CTGUI/Widgets/Tabs.h>
#include <CTGUI/Widgets/TabContainer.h>
#include <CTGUI/Widgets/TextArea.h>
#include <CTGUI/Widgets/ToggleButton.h>
#include <CTGUI/Widgets/TreeView.h>
#include <CTGUI/Widgets/VerticalLayout.h>

#include <CTGUI/Renderers/BoxLayoutRenderer.h>
#include <CTGUI/Renderers/ButtonRenderer.h>
#include <CTGUI/Renderers/ChatBoxRenderer.h>
#include <CTGUI/Renderers/ChildWindowRenderer.h>
#include <CTGUI/Renderers/ColorPickerRenderer.h>
#include <CTGUI/Renderers/ComboBoxRenderer.h>
#include <CTGUI/Renderers/EditBoxRenderer.h>
#include <CTGUI/Renderers/FileDialogRenderer.h>
#include <CTGUI/Renderers/GroupRenderer.h>
#include <CTGUI/Renderers/KnobRenderer.h>
#include <CTGUI/Renderers/LabelRenderer.h>
#include <CTGUI/Renderers/ListBoxRenderer.h>
#include <CTGUI/Renderers/ListViewRenderer.h>
#include <CTGUI/Renderers/MenuBarRenderer.h>
#include <CTGUI/Renderers/MessageBoxRenderer.h>
#include <CTGUI/Renderers/PanelRenderer.h>
#include <CTGUI/Renderers/PictureRenderer.h>
#include <CTGUI/Renderers/ProgressBarRenderer.h>
#include <CTGUI/Renderers/RadioButtonRenderer.h>
#include <CTGUI/Renderers/RangeSliderRenderer.h>
#include <CTGUI/Renderers/ScrollablePanelRenderer.h>
#include <CTGUI/Renderers/ScrollbarRenderer.h>
#include <CTGUI/Renderers/SliderRenderer.h>
#include <CTGUI/Renderers/SpinButtonRenderer.h>
#include <CTGUI/Renderers/TabsRenderer.h>
#include <CTGUI/Renderers/TextAreaRenderer.h>
#include <CTGUI/Renderers/TreeViewRenderer.h>
#include <CTGUI/Renderers/WidgetRenderer.h>

#endif // CTGUI_CTGUI_HPP
