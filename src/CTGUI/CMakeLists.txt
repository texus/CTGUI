set(INCROOT ${PROJECT_SOURCE_DIR}/include/CTGUI)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/CTGUI)
set(SRC
    ${SRCROOT}/Container.cpp
    ${INCROOT}/Container.h
    ${SRCROOT}/ConvertEvent.h
    ${SRCROOT}/CustomWidgetForBindings.cpp
    ${INCROOT}/CustomWidgetForBindings.h
    ${SRCROOT}/CustomWidgetForBindingsStruct.h
    ${SRCROOT}/Global.cpp
    ${INCROOT}/Global.h
    ${SRCROOT}/Gui.cpp
    ${INCROOT}/Gui.h
    ${SRCROOT}/GuiStruct.h
    ${SRCROOT}/InternalGlobal.cpp
    ${SRCROOT}/InternalGlobal.h
    ${SRCROOT}/Layout.cpp
    ${INCROOT}/Layout.h
    ${SRCROOT}/LayoutStruct.h
    ${SRCROOT}/Outline.cpp
    ${INCROOT}/Outline.h
    ${SRCROOT}/OutlineStruct.h
    ${SRCROOT}/RendererData.cpp
    ${INCROOT}/RendererData.h
    ${SRCROOT}/RendererDataStruct.h
    ${SRCROOT}/Theme.cpp
    ${INCROOT}/Theme.h
    ${SRCROOT}/ThemeStruct.h
    ${SRCROOT}/ToolTip.cpp
    ${INCROOT}/ToolTip.h
    ${INCROOT}/Types.h
    ${SRCROOT}/Widget.cpp
    ${INCROOT}/Widget.h
    ${SRCROOT}/WidgetStruct.h
    ${SRCROOT}/Renderers/BoxLayoutRenderer.cpp
    ${INCROOT}/Renderers/BoxLayoutRenderer.h
    ${SRCROOT}/Renderers/ButtonRenderer.cpp
    ${INCROOT}/Renderers/ButtonRenderer.h
    ${SRCROOT}/Renderers/ChatBoxRenderer.cpp
    ${INCROOT}/Renderers/ChatBoxRenderer.h
    ${SRCROOT}/Renderers/ChildWindowRenderer.cpp
    ${INCROOT}/Renderers/ChildWindowRenderer.h
    ${SRCROOT}/Renderers/ComboBoxRenderer.cpp
    ${INCROOT}/Renderers/ComboBoxRenderer.h
    ${SRCROOT}/Renderers/EditBoxRenderer.cpp
    ${INCROOT}/Renderers/EditBoxRenderer.h
    ${SRCROOT}/Renderers/GroupRenderer.cpp
    ${INCROOT}/Renderers/GroupRenderer.h
    ${SRCROOT}/Renderers/KnobRenderer.cpp
    ${INCROOT}/Renderers/KnobRenderer.h
    ${SRCROOT}/Renderers/LabelRenderer.cpp
    ${INCROOT}/Renderers/LabelRenderer.h
    ${SRCROOT}/Renderers/ListBoxRenderer.cpp
    ${INCROOT}/Renderers/ListBoxRenderer.h
    ${SRCROOT}/Renderers/MenuBarRenderer.cpp
    ${INCROOT}/Renderers/MenuBarRenderer.h
    ${SRCROOT}/Renderers/MessageBoxRenderer.cpp
    ${INCROOT}/Renderers/MessageBoxRenderer.h
    ${SRCROOT}/Renderers/PanelRenderer.cpp
    ${INCROOT}/Renderers/PanelRenderer.h
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
    ${SRCROOT}/Renderers/SliderRenderer.cpp
    ${INCROOT}/Renderers/SliderRenderer.h
    ${SRCROOT}/Renderers/SpinButtonRenderer.cpp
    ${INCROOT}/Renderers/SpinButtonRenderer.h
    ${SRCROOT}/Renderers/TabsRenderer.cpp
    ${INCROOT}/Renderers/TabsRenderer.h
    ${SRCROOT}/Renderers/TextBoxRenderer.cpp
    ${INCROOT}/Renderers/TextBoxRenderer.h
    ${SRCROOT}/Renderers/TreeViewRenderer.cpp
    ${INCROOT}/Renderers/TreeViewRenderer.h
    ${SRCROOT}/Renderers/WidgetRenderer.cpp
    ${INCROOT}/Renderers/WidgetRenderer.h
    ${SRCROOT}/SFML/CallbackStream.h
    ${SRCROOT}/SFML/Graphics/FontStruct.h
    ${SRCROOT}/SFML/Graphics/TextureStruct.h
    ${INCROOT}/Widgets/BitmapButton.h
    ${SRCROOT}/Widgets/BitmapButton.cpp
    ${INCROOT}/Widgets/BoxLayout.h
    ${SRCROOT}/Widgets/BoxLayout.cpp
    ${INCROOT}/Widgets/BoxLayoutRatios.h
    ${SRCROOT}/Widgets/BoxLayoutRatios.cpp
    ${INCROOT}/Widgets/Button.h
    ${SRCROOT}/Widgets/Button.cpp
    ${INCROOT}/Widgets/Canvas.h
    ${SRCROOT}/Widgets/Canvas.cpp
    ${INCROOT}/Widgets/ChatBox.h
    ${SRCROOT}/Widgets/ChatBox.cpp
    ${INCROOT}/Widgets/CheckBox.h
    ${SRCROOT}/Widgets/CheckBox.cpp
    ${INCROOT}/Widgets/ChildWindow.h
    ${SRCROOT}/Widgets/ChildWindow.cpp
    ${INCROOT}/Widgets/ClickableWidget.h
    ${SRCROOT}/Widgets/ClickableWidget.cpp
    ${INCROOT}/Widgets/ComboBox.h
    ${SRCROOT}/Widgets/ComboBox.cpp
    ${INCROOT}/Widgets/EditBox.h
    ${SRCROOT}/Widgets/EditBox.cpp
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
    ${INCROOT}/Widgets/MenuBar.h
    ${SRCROOT}/Widgets/MenuBar.cpp
    ${INCROOT}/Widgets/MessageBox.h
    ${SRCROOT}/Widgets/MessageBox.cpp
    ${INCROOT}/Widgets/Panel.h
    ${SRCROOT}/Widgets/Panel.cpp
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
    ${INCROOT}/Widgets/ScrollablePanel.h
    ${SRCROOT}/Widgets/ScrollablePanel.cpp
    ${INCROOT}/Widgets/Scrollbar.h
    ${SRCROOT}/Widgets/Scrollbar.cpp
    ${INCROOT}/Widgets/Slider.h
    ${SRCROOT}/Widgets/Slider.cpp
    ${INCROOT}/Widgets/SpinButton.h
    ${SRCROOT}/Widgets/SpinButton.cpp
    ${INCROOT}/Widgets/Tabs.h
    ${SRCROOT}/Widgets/Tabs.cpp
    ${INCROOT}/Widgets/TextBox.h
    ${SRCROOT}/Widgets/TextBox.cpp
    ${INCROOT}/Widgets/TreeView.h
    ${SRCROOT}/Widgets/TreeView.cpp
    ${INCROOT}/Widgets/VerticalLayout.h
    ${SRCROOT}/Widgets/VerticalLayout.cpp
)

add_library(ctgui ${SRC})

target_include_directories(ctgui PUBLIC ${CSFML_INCLUDE_DIR})
target_include_directories(ctgui PUBLIC "${PROJECT_SOURCE_DIR}/include")
target_include_directories(ctgui PRIVATE "${PROJECT_SOURCE_DIR}/src")

set_target_properties(ctgui PROPERTIES DEFINE_SYMBOL CTGUI_EXPORTS)

# Set some compile flags when using GCC and Clang
if(TGUI_COMPILER_GCC OR TGUI_COMPILER_CLANG)
    target_compile_options(ctgui PRIVATE -Wall)
    target_compile_options(ctgui PRIVATE -Wextra)
    target_compile_options(ctgui PRIVATE -Wshadow)
    target_compile_options(ctgui PRIVATE -Wno-long-long)
    target_compile_options(ctgui PRIVATE -pedantic)

    set_target_properties(ctgui PROPERTIES CXX_STANDARD_REQUIRED ON)
    set_target_properties(ctgui PROPERTIES CXX_EXTENSIONS OFF)
    set_target_properties(ctgui PROPERTIES CXX_STANDARD 14)
endif()

# Set the version and soversion of the target (for compatible systems -- mostly Linuxes)
set_target_properties(ctgui PROPERTIES SOVERSION ${CTGUI_VERSION_MAJOR}.${CTGUI_VERSION_MINOR})
set_target_properties(ctgui PROPERTIES VERSION ${CTGUI_VERSION_MAJOR}.${CTGUI_VERSION_MINOR}.${CTGUI_VERSION_PATCH})

# Set the target's folder (for IDEs that support it, e.g. Visual Studio)
set_target_properties(ctgui PROPERTIES FOLDER "CTGUI")

if(TGUI_OS_WINDOWS)
    # Include the major version number in Windows shared library names (but not import library names)
    set_target_properties(ctgui PROPERTIES DEBUG_POSTFIX -d)
    set_target_properties(ctgui PROPERTIES SUFFIX "-${CTGUI_VERSION_MAJOR}.${CTGUI_VERSION_MINOR}${CMAKE_SHARED_LIBRARY_SUFFIX}")
else()
    set_target_properties(ctgui PROPERTIES DEBUG_POSTFIX -d)
endif()

if (TGUI_OS_WINDOWS AND TGUI_COMPILER_GCC)
    # On Windows/gcc get rid of "lib" prefix for shared libraries and transform the ".dll.a" suffix into ".a" for import libraries
    set_target_properties(ctgui PROPERTIES PREFIX "")
    set_target_properties(ctgui PROPERTIES IMPORT_SUFFIX ".a")
endif()

# Use libc++ on macOS
if(TGUI_OS_MACOSX)
    if(${CMAKE_GENERATOR} MATCHES "Xcode")
        set_property(TARGET ctgui PROPERTY XCODE_ATTRIBUTE_CLANG_CXX_LIBRARY "libc++")
    else()
        target_compile_options(ctgui PRIVATE "-stdlib=libc++")
        target_link_libraries(ctgui PRIVATE "-stdlib=libc++")
    endif()
endif()

# Apply the TGUI_USE_STATIC_STD_LIBS option on windows
if(TGUI_OS_WINDOWS)
    if(TGUI_COMPILER_MSVC AND TGUI_USE_STATIC_STD_LIBS)
        foreach(flag
                CMAKE_CXX_FLAGS CMAKE_CXX_FLAGS_DEBUG CMAKE_CXX_FLAGS_RELEASE
                CMAKE_CXX_FLAGS_MINSIZEREL CMAKE_CXX_FLAGS_RELWITHDEBINFO)
            if(${flag} MATCHES "/MD")
                string(REGEX REPLACE "/MD" "/MT" ${flag} "${${flag}}")
            endif()
        endforeach()
    elseif(TGUI_COMPILER_GCC)
        if(TGUI_USE_STATIC_STD_LIBS AND NOT TGUI_COMPILER_GCC_TDM)
            target_link_libraries(ctgui PRIVATE "-static-libgcc" "-static-libstdc++")
        elseif(NOT TGUI_USE_STATIC_STD_LIBS AND TGUI_COMPILER_GCC_TDM)
            target_link_libraries(ctgui PRIVATE "-shared-libgcc" "-shared-libstdc++")
        endif()
    endif()
endif()

# Hide public symbols by default (exported ones are explicitly marked)
if(NOT TGUI_OS_WINDOWS)
    target_compile_options(ctgui PRIVATE -fvisibility=hidden)
endif()

# Link the target to its external dependencies
target_link_libraries(ctgui PUBLIC tgui sfml-graphics)

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

# Install the binaries to the lib folder
install(TARGETS ctgui
        RUNTIME DESTINATION bin COMPONENT bin
        LIBRARY DESTINATION lib${LIB_SUFFIX} COMPONENT bin 
        ARCHIVE DESTINATION lib${LIB_SUFFIX} COMPONENT devel)
