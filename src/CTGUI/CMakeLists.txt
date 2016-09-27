# Add the CTGUI sources path
include_directories(${CMAKE_SOURCE_DIR}/src)

# Set the output directory for CTGUI library
set(LIBRARY_OUTPUT_PATH "${CMAKE_BINARY_DIR}/lib")

# Disable stupid warnings with Visual C++
if(SFML_COMPILER_MSVC)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif()

# Find C++ TGUI library
if(SFML_OS_WINDOWS)
    if (CTGUI_LINK_TGUI_STATICALLY)
        set(SFML_STATIC_LIBRARIES TRUE)
        add_definitions(-DSFML_STATIC)
    endif()
endif()
find_package(TGUI ${VERSION_MAJOR}.${VERSION_MINOR} REQUIRED)
include_directories(${TGUI_INCLUDE_DIR})

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
    ${INCROOT}/Types.h
    ${SRCROOT}/Widget.cpp
    ${INCROOT}/Widget.h
    ${SRCROOT}/WidgetStruct.h
    ${SRCROOT}/Renderers/ButtonRenderer.cpp
    ${INCROOT}/Renderers/ButtonRenderer.h
    ${SRCROOT}/Renderers/EditBoxRenderer.cpp
    ${INCROOT}/Renderers/EditBoxRenderer.h
    ${SRCROOT}/Renderers/LabelRenderer.cpp
    ${INCROOT}/Renderers/LabelRenderer.h
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
    ${SRCROOT}/Renderers/WidgetRenderer.cpp
    ${INCROOT}/Renderers/WidgetRenderer.h
    ${SRCROOT}/SFML/CallbackStream.h
    ${SRCROOT}/SFML/Graphics/FontStruct.h
    ${SRCROOT}/SFML/Graphics/TextureStruct.h
    ${INCROOT}/Widgets/Button.h
    ${SRCROOT}/Widgets/Button.cpp
    ${INCROOT}/Widgets/CheckBox.h
    ${SRCROOT}/Widgets/CheckBox.cpp
    ${INCROOT}/Widgets/ClickableWidget.h
    ${SRCROOT}/Widgets/ClickableWidget.cpp
    ${INCROOT}/Widgets/EditBox.h
    ${SRCROOT}/Widgets/EditBox.cpp
    ${INCROOT}/Widgets/Label.h
    ${SRCROOT}/Widgets/Label.cpp
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
    set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX "-${VERSION_MAJOR}${CMAKE_SHARED_LIBRARY_SUFFIX}")
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

# Link the target to its external dependencies (C++ TGUI library)
target_link_libraries(${PROJECT_NAME} ${TGUI_LIBRARY})

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
