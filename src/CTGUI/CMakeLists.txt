# Add the CTGUI sources path
include_directories(${CMAKE_SOURCE_DIR}/src)

# Set the output directory for CTGUI library
set(LIBRARY_OUTPUT_PATH "${CMAKE_BINARY_DIR}/lib")

# Define the export symbol
add_definitions(-DCTGUI_EXPORTS)

# Search for the right SFML and TGUI libraries
if(SFML_OS_WINDOWS)
    if (CTGUI_LINK_DEPENDENCIES_STATICALLY)
        set(SFML_STATIC_LIBRARIES TRUE)
        add_definitions(-DSFML_STATIC)
    endif()
endif()

# Find TGUI library
find_package(TGUI ${VERSION_MAJOR}.${VERSION_MINOR})
if (NOT TGUI_FOUND)
    set(TGUI_ROOT "" CACHE PATH "TGUI root directory")
    message(FATAL_ERROR "CMake couldn't find TGUI. Set the TGUI_ROOT entry to TGUI's root directory (containing \"include\" and \"lib\" directories).")
endif()

# Find SFML library
find_package(SFML 2 COMPONENTS graphics window system)
if (NOT SFML_FOUND)
    set(SFML_ROOT "" CACHE PATH "SFML root directory")
    message(FATAL_ERROR "CMake couldn't find SFML. Set the SFML_ROOT entry to SFML's root directory (containing \"include\" and \"lib\" directories).")
endif()

# Find the header files of CSFML
find_package(CSFML ${SFML_VERSION_MAJOR}.${SFML_VERSION_MINOR})
if (NOT CSFML_INCLUDE_DIR)
    set(CSFML_INCLUDE_DIR "" CACHE PATH "Path of the CSFML include directory")
    message(FATAL_ERROR "CMake couldn't find the CSFML header files. Set the CSFML_INCLUDE_DIR entry to SFML's include directory.")
endif()

include_directories(${TGUI_INCLUDE_DIR} ${SFML_INCLUDE_DIR} ${CSFML_INCLUDE_DIR})

# All source files
set(INCROOT ${CMAKE_SOURCE_DIR}/include/CTGUI)
set(SRCROOT ${CMAKE_SOURCE_DIR}/src/CTGUI)
set(SRC
    ${SRCROOT}/Container.cpp
    ${INCROOT}/Container.h
    ${SRCROOT}/ConvertEvent.h
    ${SRCROOT}/Gui.cpp
    ${INCROOT}/Gui.h
    ${SRCROOT}/GuiStruct.h
    ${SRCROOT}/Layout.cpp
    ${INCROOT}/Layout.h
    ${SRCROOT}/LayoutStruct.h
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
    ${SRCROOT}/Renderers/ProgressBarRenderer.cpp
    ${INCROOT}/Renderers/ProgressBarRenderer.h
    ${SRCROOT}/Renderers/RadioButtonRenderer.cpp
    ${INCROOT}/Renderers/RadioButtonRenderer.h
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
    ${SRCROOT}/Renderers/WidgetRenderer.cpp
    ${INCROOT}/Renderers/WidgetRenderer.h
    ${SRCROOT}/SFML/CallbackStream.h
    ${SRCROOT}/SFML/Graphics/FontStruct.h
    ${SRCROOT}/SFML/Graphics/TextureStruct.h
    ${INCROOT}/Widgets/BoxLayout.h
    ${SRCROOT}/Widgets/BoxLayout.cpp
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
    ${INCROOT}/Widgets/HorizontalLayout.h
    ${SRCROOT}/Widgets/HorizontalLayout.cpp
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
    ${INCROOT}/Widgets/VerticalLayout.h
    ${SRCROOT}/Widgets/VerticalLayout.cpp
)

# Create the target
add_library(${PROJECT_NAME} ${SRC})

# Define the export symbol of the module
string(REPLACE "-" "_" NAME_UPPER "${PROJECT_NAME}")
string(TOUPPER "${NAME_UPPER}" NAME_UPPER)
set_target_properties(${PROJECT_NAME} PROPERTIES DEFINE_SYMBOL ${NAME_UPPER}_EXPORTS)

if(SFML_OS_WINDOWS)
    # Include the major version number in Windows shared library names (but not import library names)
    set_target_properties(${PROJECT_NAME} PROPERTIES DEBUG_POSTFIX -d)
    set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX "-${VERSION_MAJOR}.${VERSION_MINOR}${CMAKE_SHARED_LIBRARY_SUFFIX}")
else()
    set_target_properties(${PROJECT_NAME} PROPERTIES DEBUG_POSTFIX -d)
endif()
if (SFML_OS_WINDOWS AND SFML_COMPILER_GCC)
    # On Windows/gcc get rid of "lib" prefix for shared libraries and transform the ".dll.a" suffix into ".a" for import libraries
    set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "")
    set_target_properties(${PROJECT_NAME} PROPERTIES IMPORT_SUFFIX ".a")
endif()

# Set the version and soversion of the target (for compatible systems -- mostly Linuxes)
set_target_properties(${PROJECT_NAME} PROPERTIES SOVERSION ${VERSION_MAJOR}.${VERSION_MINOR})
set_target_properties(${PROJECT_NAME} PROPERTIES VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH})

# Set the target's folder (for IDEs that support it, e.g. Visual Studio)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "CTGUI")

# For gcc >= 4.0 on Windows, apply the SFML_USE_STATIC_STD_LIBS option if it is enabled
if(SFML_OS_WINDOWS AND SFML_COMPILER_GCC AND NOT SFML_GCC_VERSION VERSION_LESS "4")
    if(SFML_USE_STATIC_STD_LIBS AND NOT SFML_COMPILER_GCC_TDM)
        set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "-static-libgcc -static-libstdc++")
    elseif(NOT SFML_USE_STATIC_STD_LIBS AND SFML_COMPILER_GCC_TDM)
        set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "-shared-libgcc -shared-libstdc++")
    endif()
endif()

# If using gcc >= 4.0 or clang >= 3.0 on a non-Windows platform, we must hide public symbols by default (exported ones are explicitely marked)
if(NOT SFML_OS_WINDOWS AND ((SFML_COMPILER_GCC AND NOT SFML_GCC_VERSION VERSION_LESS "4") OR (SFML_COMPILER_CLANG AND NOT SFML_CLANG_VERSION VERSION_LESS "3")))
    set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS -fvisibility=hidden)
endif()

# Link the target to its external dependencies (C++ TGUI library and SFML)
set(CTGUI_EXT_LIBS ${TGUI_LIBRARY} ${SFML_LIBRARIES})
if(CTGUI_LINK_DEPENDENCIES_STATICALLY)
    set(CTGUI_EXT_LIBS ${CTGUI_EXT_LIBS} ${SFML_DEPENDENCIES})
endif()
target_link_libraries(${PROJECT_NAME} ${CTGUI_EXT_LIBS})

# Build dylibs
if(SFML_OS_MACOSX AND BUILD_SHARED_LIBS)
    # Adapt install directory to allow distributing dylibs in user’s application bundle
    set_target_properties(${PROJECT_NAME} PROPERTIES
                          BUILD_WITH_INSTALL_RPATH 1
                          INSTALL_NAME_DIR "@rpath")
endif()

# Add the install rule
install(TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION bin COMPONENT bin
        LIBRARY DESTINATION lib${LIB_SUFFIX} COMPONENT bin 
        ARCHIVE DESTINATION lib${LIB_SUFFIX} COMPONENT devel)
