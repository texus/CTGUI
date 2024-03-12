cmake_minimum_required(VERSION 3.18...3.29)

# Define a macro that helps defining an option
macro(ctgui_set_option var default type docstring)
    if(NOT DEFINED ${var})
        set(${var} ${default})
    endif()
    set(${var} ${${var}} CACHE ${type} ${docstring} FORCE)
endmacro()

# Set a default build type if none was provided
ctgui_set_option(CMAKE_BUILD_TYPE Release STRING "Choose the type of build (Debug or Release)")

project(CTGUI VERSION 1.2.0 LANGUAGES C CXX)

# Use the paths from the cmake GNUInstallDirs module as defaults (https://cmake.org/cmake/help/latest/module/GNUInstallDirs.html)
include(GNUInstallDirs)

include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/Config.cmake)

# Add an option for choosing the build type (shared or static)
ctgui_set_option(BUILD_SHARED_LIBS TRUE BOOL "TRUE to build CTGUI as a shared library, FALSE to build it as a static library")

# Define an option for choosing between static and dynamic C runtime
if(TGUI_OS_WINDOWS)
    ctgui_set_option(CTGUI_USE_STATIC_STD_LIBS FALSE BOOL "TRUE to statically link to the standard libraries, FALSE to use them as DLLs")

    if(BUILD_SHARED_LIBS AND CTGUI_USE_STATIC_STD_LIBS)
        message(FATAL_ERROR "BUILD_SHARED_LIBS and CTGUI_USE_STATIC_STD_LIBS cannot be used together")
    endif()
endif()

# Install pkg-config files by default on Linux (and BSD)
if(TGUI_OS_LINUX)
    set(CTGUI_INSTALL_PKGCONFIG_DEFAULT ON)
else()
    set(CTGUI_INSTALL_PKGCONFIG_DEFAULT OFF)
endif()
option(CTGUI_INSTALL_PKGCONFIG_FILES "TRUE to automatically install pkg-config files so other projects can find TGUI" ${CTGUI_INSTALL_PKGCONFIG_DEFAULT})
if (CTGUI_INSTALL_PKGCONFIG_FILES)
    if (TGUI_OS_BSD)
        set(default_pkgconfig_dir "libdata/pkgconfig")
    else()
        set(default_pkgconfig_dir "${CMAKE_INSTALL_LIBDIR}/pkgconfig")
    endif()
    ctgui_set_option(CTGUI_PKGCONFIG_INSTALL_DIR "${default_pkgconfig_dir}" PATH "Install directory for CTGUI's pkg-config .pc file")

    configure_file("cmake/pkgconfig/ctgui.pc.in" "pkgconfig/ctgui.pc" @ONLY)
    install(FILES "${CMAKE_CURRENT_BINARY_DIR}/pkgconfig/ctgui.pc" DESTINATION "${CTGUI_PKGCONFIG_INSTALL_DIR}")
endif()

# Provide an option to select the backend
set(CTGUI_BACKEND_OPTIONS "")
set(CTGUI_BACKEND_OPTIONS_DESC "")
list(APPEND CTGUI_BACKEND_OPTIONS CSFML_GRAPHICS)
string(APPEND CTGUI_BACKEND_OPTIONS_DESC " - CSFML_GRAPHICS: csfml-graphics (independent from c++ TGUI backends)\n")
list(APPEND CTGUI_BACKEND_OPTIONS SDL_RENDERER)
string(APPEND CTGUI_BACKEND_OPTIONS_DESC " - SDL_RENDERER: SDL + SDL_ttf (requires SDL_RENDERER backend in c++ TGUI library)\n")

ctgui_set_option(CTGUI_BACKEND "" STRING "Select a backend for rendering or select Custom to use your own backend")
set_property(CACHE CTGUI_BACKEND PROPERTY STRINGS ${CTGUI_BACKEND_OPTIONS})
if(NOT CTGUI_BACKEND OR NOT CTGUI_BACKEND IN_LIST CTGUI_BACKEND_OPTIONS)
    message(FATAL_ERROR
      " Please select a backend by setting the value of CTGUI_BACKEND.\n"
      " \n"
      " The following backends are available:\n"
      ${CTGUI_BACKEND_OPTIONS_DESC})
endif()

option(CTGUI_BUILD_EXAMPLE "TRUE to build the CTGUI example, FALSE to ignore it" FALSE)

if(TGUI_OS_WINDOWS)
    set(link_tgui_statically_default TRUE)
else()
    set(link_tgui_statically_default FALSE)
endif()
ctgui_set_option(CTGUI_LINK_TGUI_STATICALLY ${link_tgui_statically_default} BOOL "TRUE to link to a static version of TGUI, FALSE to link dynamically")

set(TGUI_STATIC_LIBRARIES ${CTGUI_LINK_TGUI_STATICALLY})
find_package(TGUI ${PROJECT_VERSION_MAJOR} REQUIRED CONFIG)

if(CTGUI_BACKEND STREQUAL "CSFML_GRAPHICS")
    list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake/Modules/")
    find_package(CSFML 2 REQUIRED)
elseif(CTGUI_BACKEND STREQUAL "SDL_RENDERER")
    find_package(SDL2 REQUIRED CONFIG)
    find_package(SDL2_ttf REQUIRED CONFIG)

    if(DEFINED SDL2_VERSION)
        if (SDL2_VERSION VERSION_LESS 2.22)
            message(FATAL_ERROR "SDL 2.22 or higher is required")
        endif()
    endif()

    if(DEFINED SDL2_ttf_VERSION)
        if (SDL2_ttf_VERSION VERSION_LESS "2.20")
            message(FATAL_ERROR "SDL_ttf 2.20 or higher is required")
        endif()
    endif()
endif()

add_subdirectory(src/CTGUI)

if (CTGUI_BUILD_EXAMPLE)
    add_subdirectory(examples)
endif()

install(DIRECTORY include/
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
        COMPONENT devel)
install(FILES license.md DESTINATION ${CMAKE_INSTALL_DOCDIR})
install(FILES README.md DESTINATION ${CMAKE_INSTALL_DOCDIR})
