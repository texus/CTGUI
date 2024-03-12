set(INCROOT ${PROJECT_SOURCE_DIR}/include/CTGUI)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/CTGUI)
set(SRC
    ${INCROOT}/Animation.h
    ${SRCROOT}/Base64.cpp
    ${SRCROOT}/BackendRenderTarget.cpp
    ${SRCROOT}/BackendRenderTargetStruct.hpp
    ${INCROOT}/BackendRenderTarget.h
    ${SRCROOT}/Color.cpp
    ${INCROOT}/Color.h
    ${SRCROOT}/Container.cpp
    ${INCROOT}/Container.h
    ${SRCROOT}/Cursor.cpp
    ${INCROOT}/Cursor.h
    ${SRCROOT}/CustomWidget.cpp
    ${INCROOT}/CustomWidget.h
    ${SRCROOT}/CustomWidgetBase.cpp
    ${SRCROOT}/CustomWidgetBase.hpp
    ${SRCROOT}/Duration.cpp
    ${INCROOT}/Duration.h
    ${INCROOT}/Event.h
    ${SRCROOT}/Filesystem.cpp
    ${INCROOT}/Filesystem.h
    ${SRCROOT}/Font.cpp
    ${SRCROOT}/FontStruct.hpp
    ${INCROOT}/Font.h
    ${SRCROOT}/Global.cpp
    ${INCROOT}/Global.h
    ${SRCROOT}/Gui.cpp
    ${SRCROOT}/GuiStruct.hpp
    ${INCROOT}/Gui.h
    ${SRCROOT}/InternalGlobal.cpp
    ${SRCROOT}/InternalGlobal.hpp
    ${SRCROOT}/Layout.cpp
    ${SRCROOT}/LayoutStruct.hpp
    ${INCROOT}/Layout.h
    ${SRCROOT}/Outline.cpp
    ${SRCROOT}/OutlineStruct.hpp
    ${INCROOT}/Outline.h
    ${SRCROOT}/Rect.cpp
    ${INCROOT}/Rect.h
    ${SRCROOT}/RendererData.cpp
    ${SRCROOT}/RendererDataStruct.hpp
    ${INCROOT}/RendererData.h
    ${INCROOT}/ScrollbarPolicy.h
    ${SRCROOT}/Sprite.cpp
    ${SRCROOT}/SpriteStruct.hpp
    ${INCROOT}/Sprite.h
    ${SRCROOT}/Text.cpp
    ${SRCROOT}/TextStruct.hpp
    ${INCROOT}/Text.h
    ${SRCROOT}/Texture.cpp
    ${SRCROOT}/TextureStruct.hpp
    ${INCROOT}/Texture.h
    ${SRCROOT}/Theme.cpp
    ${SRCROOT}/ThemeStruct.hpp
    ${INCROOT}/Theme.h
    ${SRCROOT}/Timer.cpp
    ${SRCROOT}/TimerStruct.hpp
    ${INCROOT}/Timer.h
    ${SRCROOT}/ToolTip.cpp
    ${INCROOT}/ToolTip.h
    ${INCROOT}/Types.h
    ${SRCROOT}/Vector2.cpp
    ${INCROOT}/Vector2.h
    ${SRCROOT}/Widget.cpp
    ${SRCROOT}/WidgetStruct.hpp
    ${INCROOT}/Widget.h
    ${SRCROOT}/Renderers/BoxLayoutRenderer.cpp
    ${INCROOT}/Renderers/BoxLayoutRenderer.h
    ${SRCROOT}/Renderers/ButtonRenderer.cpp
    ${INCROOT}/Renderers/ButtonRenderer.h
    ${SRCROOT}/Renderers/ChatBoxRenderer.cpp
    ${INCROOT}/Renderers/ChatBoxRenderer.h
    ${SRCROOT}/Renderers/ChildWindowRenderer.cpp
    ${INCROOT}/Renderers/ChildWindowRenderer.h
    ${SRCROOT}/Renderers/ColorPickerRenderer.cpp
    ${INCROOT}/Renderers/ColorPickerRenderer.h
    ${SRCROOT}/Renderers/ComboBoxRenderer.cpp
    ${INCROOT}/Renderers/ComboBoxRenderer.h
    ${SRCROOT}/Renderers/EditBoxRenderer.cpp
    ${INCROOT}/Renderers/EditBoxRenderer.h
    ${SRCROOT}/Renderers/FileDialogRenderer.cpp
    ${INCROOT}/Renderers/FileDialogRenderer.h
    ${SRCROOT}/Renderers/GroupRenderer.cpp
    ${INCROOT}/Renderers/GroupRenderer.h
    ${SRCROOT}/Renderers/KnobRenderer.cpp
    ${INCROOT}/Renderers/KnobRenderer.h
    ${SRCROOT}/Renderers/LabelRenderer.cpp
    ${INCROOT}/Renderers/LabelRenderer.h
    ${SRCROOT}/Renderers/ListBoxRenderer.cpp
    ${INCROOT}/Renderers/ListBoxRenderer.h
    ${SRCROOT}/Renderers/ListViewRenderer.cpp
    ${INCROOT}/Renderers/ListViewRenderer.h
    ${SRCROOT}/Renderers/MenuBarRenderer.cpp
    ${INCROOT}/Renderers/MenuBarRenderer.h
    ${SRCROOT}/Renderers/MessageBoxRenderer.cpp
    ${INCROOT}/Renderers/MessageBoxRenderer.h
    ${SRCROOT}/Renderers/PanelRenderer.cpp
    ${INCROOT}/Renderers/PanelRenderer.h
    ${SRCROOT}/Renderers/PanelListBoxRenderer.cpp
    ${INCROOT}/Renderers/PanelListBoxRenderer.h
    ${SRCROOT}/Renderers/PictureRenderer.cpp
    ${INCROOT}/Renderers/PictureRenderer.h
    ${SRCROOT}/Renderers/ProgressBarRenderer.cpp
    ${INCROOT}/Renderers/ProgressBarRenderer.h
    ${SRCROOT}/Renderers/RadioButtonRenderer.cpp
    ${INCROOT}/Renderers/RadioButtonRenderer.h
    ${SRCROOT}/Renderers/RangeSliderRenderer.cpp
    ${INCROOT}/Renderers/RangeSliderRenderer.h
    ${SRCROOT}/Renderers/ScrollablePanelRenderer.cpp
    ${INCROOT}/Renderers/ScrollablePanelRenderer.h
    ${SRCROOT}/Renderers/ScrollbarRenderer.cpp
    ${INCROOT}/Renderers/ScrollbarRenderer.h
    ${SRCROOT}/Renderers/SeparatorLineRenderer.cpp
    ${INCROOT}/Renderers/SeparatorLineRenderer.h
    ${SRCROOT}/Renderers/SliderRenderer.cpp
    ${INCROOT}/Renderers/SliderRenderer.h
    ${SRCROOT}/Renderers/SpinButtonRenderer.cpp
    ${INCROOT}/Renderers/SpinButtonRenderer.h
    ${SRCROOT}/Renderers/TabsRenderer.cpp
    ${INCROOT}/Renderers/TabsRenderer.h
    ${SRCROOT}/Renderers/TextAreaRenderer.cpp
    ${INCROOT}/Renderers/TextAreaRenderer.h
    ${SRCROOT}/Renderers/TreeViewRenderer.cpp
    ${INCROOT}/Renderers/TreeViewRenderer.h
    ${SRCROOT}/Renderers/WidgetRenderer.cpp
    ${INCROOT}/Renderers/WidgetRenderer.h
    ${INCROOT}/Widgets/BitmapButton.h
    ${SRCROOT}/Widgets/BitmapButton.cpp
    ${INCROOT}/Widgets/BoxLayout.h
    ${SRCROOT}/Widgets/BoxLayout.cpp
    ${INCROOT}/Widgets/BoxLayoutRatios.h
    ${SRCROOT}/Widgets/BoxLayoutRatios.cpp
    ${INCROOT}/Widgets/Button.h
    ${SRCROOT}/Widgets/Button.cpp
    ${INCROOT}/Widgets/ButtonBase.h
    ${SRCROOT}/Widgets/ButtonBase.cpp
    ${INCROOT}/Widgets/ChatBox.h
    ${SRCROOT}/Widgets/ChatBox.cpp
    ${INCROOT}/Widgets/CheckBox.h
    ${SRCROOT}/Widgets/CheckBox.cpp
    ${INCROOT}/Widgets/ChildWindow.h
    ${SRCROOT}/Widgets/ChildWindow.cpp
    ${INCROOT}/Widgets/ClickableWidget.h
    ${SRCROOT}/Widgets/ClickableWidget.cpp
    ${INCROOT}/Widgets/ColorPicker.h
    ${SRCROOT}/Widgets/ColorPicker.cpp
    ${INCROOT}/Widgets/ComboBox.h
    ${SRCROOT}/Widgets/ComboBox.cpp
    ${INCROOT}/Widgets/EditBox.h
    ${SRCROOT}/Widgets/EditBox.cpp
    ${INCROOT}/Widgets/FileDialog.h
    ${SRCROOT}/Widgets/FileDialog.cpp
    ${INCROOT}/Widgets/Grid.h
    ${SRCROOT}/Widgets/Grid.cpp
    ${INCROOT}/Widgets/Group.h
    ${SRCROOT}/Widgets/Group.cpp
    ${INCROOT}/Widgets/HorizontalLayout.h
    ${SRCROOT}/Widgets/HorizontalLayout.cpp
    ${INCROOT}/Widgets/HorizontalWrap.h
    ${SRCROOT}/Widgets/HorizontalWrap.cpp
    ${INCROOT}/Widgets/Knob.h
    ${SRCROOT}/Widgets/Knob.cpp
    ${INCROOT}/Widgets/Label.h
    ${SRCROOT}/Widgets/Label.cpp
    ${INCROOT}/Widgets/ListBox.h
    ${SRCROOT}/Widgets/ListBox.cpp
    ${INCROOT}/Widgets/ListView.h
    ${SRCROOT}/Widgets/ListView.cpp
    ${INCROOT}/Widgets/MenuBar.h
    ${SRCROOT}/Widgets/MenuBar.cpp
    ${INCROOT}/Widgets/MessageBox.h
    ${SRCROOT}/Widgets/MessageBox.cpp
    ${INCROOT}/Widgets/Panel.h
    ${SRCROOT}/Widgets/Panel.cpp
    ${INCROOT}/Widgets/PanelListBox.h
    ${SRCROOT}/Widgets/PanelListBox.cpp
    ${INCROOT}/Widgets/Picture.h
    ${SRCROOT}/Widgets/Picture.cpp
    ${INCROOT}/Widgets/ProgressBar.h
    ${SRCROOT}/Widgets/ProgressBar.cpp
    ${INCROOT}/Widgets/RadioButton.h
    ${SRCROOT}/Widgets/RadioButton.cpp
    ${INCROOT}/Widgets/RadioButtonGroup.h
    ${SRCROOT}/Widgets/RadioButtonGroup.cpp
    ${INCROOT}/Widgets/RangeSlider.h
    ${SRCROOT}/Widgets/RangeSlider.cpp
    ${INCROOT}/Widgets/RichTextLabel.h
    ${SRCROOT}/Widgets/RichTextLabel.cpp
    ${INCROOT}/Widgets/ScrollablePanel.h
    ${SRCROOT}/Widgets/ScrollablePanel.cpp
    ${INCROOT}/Widgets/Scrollbar.h
    ${SRCROOT}/Widgets/Scrollbar.cpp
    ${INCROOT}/Widgets/SeparatorLine.h
    ${SRCROOT}/Widgets/SeparatorLine.cpp
    ${INCROOT}/Widgets/Slider.h
    ${SRCROOT}/Widgets/Slider.cpp
    ${INCROOT}/Widgets/SpinButton.h
    ${SRCROOT}/Widgets/SpinButton.cpp
    ${INCROOT}/Widgets/SpinControl.h
    ${SRCROOT}/Widgets/SpinControl.cpp
    ${INCROOT}/Widgets/Tabs.h
    ${SRCROOT}/Widgets/Tabs.cpp
    ${INCROOT}/Widgets/TabContainer.h
    ${SRCROOT}/Widgets/TabContainer.cpp
    ${INCROOT}/Widgets/TextArea.h
    ${SRCROOT}/Widgets/TextArea.cpp
    ${INCROOT}/Widgets/ToggleButton.h
    ${SRCROOT}/Widgets/ToggleButton.cpp
    ${INCROOT}/Widgets/TreeView.h
    ${SRCROOT}/Widgets/TreeView.cpp
    ${INCROOT}/Widgets/VerticalLayout.h
    ${SRCROOT}/Widgets/VerticalLayout.cpp
)

add_library(ctgui SHARED ${SRC})

if(CTGUI_BACKEND STREQUAL "CSFML_GRAPHICS")
    target_sources(ctgui PRIVATE
        ${SRCROOT}/Backend/CSFML-Graphics.cpp
        ${INCROOT}/Backend/CSFML-Graphics.h
    )
    target_include_directories(ctgui PUBLIC ${CSFML_INCLUDE_DIR})
    target_link_libraries(ctgui PUBLIC csfml-graphics csfml-window csfml-system)
elseif(CTGUI_BACKEND STREQUAL "SDL_RENDERER")
    target_sources(ctgui PRIVATE
        ${SRCROOT}/Backend/SDL-Renderer.cpp
        ${INCROOT}/Backend/SDL-Renderer.h
    )
    target_link_libraries(ctgui PUBLIC SDL2::SDL2 SDL2_ttf::SDL2_ttf)
endif()

target_link_libraries(ctgui PUBLIC TGUI::TGUI)

target_include_directories(ctgui PUBLIC "${PROJECT_SOURCE_DIR}/include")
target_include_directories(ctgui PRIVATE "${PROJECT_SOURCE_DIR}/src")

set_target_properties(ctgui PROPERTIES DEFINE_SYMBOL CTGUI_EXPORTS)

# Ignore warnings about deprecated TGUI code as we must keep it in CTGUI
target_compile_definitions(ctgui PUBLIC TGUI_NO_DEPRECATED_WARNINGS)

# Set some compile flags when using GCC and Clang
if(TGUI_COMPILER_GCC OR TGUI_COMPILER_CLANG)
    target_compile_options(ctgui PRIVATE -Wall)
    target_compile_options(ctgui PRIVATE -Wextra)
    target_compile_options(ctgui PRIVATE -Wshadow)
    target_compile_options(ctgui PRIVATE -Wno-long-long)
    target_compile_options(ctgui PRIVATE -pedantic)
endif()

# Require C11 to use CTGUI and C++17 to build CTGUI
target_compile_features(ctgui PUBLIC c_std_11)
target_compile_features(ctgui PRIVATE cxx_std_17)

# Set the version and soversion of the target (for compatible systems -- mostly Linuxes)
set_target_properties(ctgui PROPERTIES SOVERSION ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR})
set_target_properties(ctgui PROPERTIES VERSION ${PROJECT_VERSION})

# Set the target's folder (for IDEs that support it, e.g. Visual Studio)
set_target_properties(ctgui PROPERTIES FOLDER "CTGUI")

if(TGUI_OS_WINDOWS)
    # Include the major version number in Windows shared library names (but not import library names)
    set_target_properties(ctgui PROPERTIES DEBUG_POSTFIX -d)
    set_target_properties(ctgui PROPERTIES SUFFIX "-${PROJECT_VERSION_MAJOR}${CMAKE_SHARED_LIBRARY_SUFFIX}")
else()
    set_target_properties(ctgui PROPERTIES DEBUG_POSTFIX -d)
endif()

if (TGUI_OS_WINDOWS AND TGUI_COMPILER_GCC)
    # On Windows/gcc get rid of "lib" prefix for shared libraries and transform the ".dll.a" suffix into ".a" for import libraries
    set_target_properties(ctgui PROPERTIES PREFIX "")
    set_target_properties(ctgui PROPERTIES IMPORT_SUFFIX ".a")
endif()

# Apply the CTGUI_USE_STATIC_STD_LIBS option on windows
if(TGUI_OS_WINDOWS)
    if(TGUI_COMPILER_MSVC AND CTGUI_USE_STATIC_STD_LIBS)
        foreach(flag
                CMAKE_CXX_FLAGS CMAKE_CXX_FLAGS_DEBUG CMAKE_CXX_FLAGS_RELEASE
                CMAKE_CXX_FLAGS_MINSIZEREL CMAKE_CXX_FLAGS_RELWITHDEBINFO)
            if(${flag} MATCHES "/MD")
                string(REGEX REPLACE "/MD" "/MT" ${flag} "${${flag}}")
            endif()
        endforeach()
    elseif(TGUI_COMPILER_GCC)
        if(CTGUI_USE_STATIC_STD_LIBS AND NOT TGUI_COMPILER_GCC_TDM)
            target_link_libraries(ctgui PRIVATE "-static-libgcc" "-static-libstdc++")
        elseif(NOT CTGUI_USE_STATIC_STD_LIBS AND TGUI_COMPILER_GCC_TDM)
            target_link_libraries(ctgui PRIVATE "-shared-libgcc" "-shared-libstdc++")
        endif()
    endif()
endif()

# Hide public symbols by default (exported ones are explicitly marked)
set_target_properties(ctgui PROPERTIES CXX_VISIBILITY_PRESET hidden VISIBILITY_INLINES_HIDDEN YES)

# Build dylibs on macOS
if(TGUI_OS_MACOSX AND BUILD_SHARED_LIBS)
    # Adapt install directory to allow distributing dylibs/frameworks in user’s frameworks/application bundle but only if cmake rpath options aren't set
    if(NOT CMAKE_SKIP_RPATH AND NOT CMAKE_SKIP_INSTALL_RPATH AND NOT CMAKE_INSTALL_RPATH AND NOT CMAKE_INSTALL_RPATH_USE_LINK_PATH AND NOT CMAKE_INSTALL_NAME_DIR)
        set_target_properties(ctgui PROPERTIES INSTALL_NAME_DIR "@rpath")
        if(NOT CMAKE_SKIP_BUILD_RPATH)
            set_target_properties(ctgui PROPERTIES BUILD_WITH_INSTALL_NAME_DIR TRUE)
        endif()
    endif()
endif()

install(TARGETS ctgui
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR} COMPONENT bin
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT bin
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR} COMPONENT devel)
