cmake_minimum_required(VERSION 3.22...3.31)

# Define a macro that helps defining an option
macro(ctgui_set_option var default type docstring)
    if(NOT DEFINED ${var})
        set(${var} ${default})
    endif()
    set(${var} ${${var}} CACHE ${type} ${docstring} FORCE)
endmacro()

# Set a default build type if none was provided
ctgui_set_option(CMAKE_BUILD_TYPE Release STRING "Choose the type of build (Debug or Release)")

project(CTGUI VERSION 1.13.0 LANGUAGES C CXX)

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
if(CTGUI_INSTALL_PKGCONFIG_FILES)
    if(TGUI_OS_BSD)
        set(default_pkgconfig_dir "libdata/pkgconfig")
    else()
        set(default_pkgconfig_dir "${CMAKE_INSTALL_LIBDIR}/pkgconfig")
    endif()
    ctgui_set_option(CTGUI_PKGCONFIG_INSTALL_DIR "${default_pkgconfig_dir}" PATH "Install directory for CTGUI's pkg-config .pc file")

    configure_file("cmake/pkgconfig/ctgui.pc.in" "pkgconfig/ctgui.pc" @ONLY)
    install(FILES "${CMAKE_CURRENT_BINARY_DIR}/pkgconfig/ctgui.pc" DESTINATION "${CTGUI_PKGCONFIG_INSTALL_DIR}")
endif()

option(CTGUI_HAS_BACKEND_CSFML_GRAPHICS "Build CSFML_GRAPHICS backend (uses csfml-graphics). Independent from TGUI's c++ SFML_GRAPHICS backend.")
option(CTGUI_HAS_BACKEND_SDL_RENDERER "Build SDL_RENDERER backend (uses SDL and SDL_ttf). Requires SDL_RENDERER backend in c++ TGUI library.")
option(CTGUI_HAS_BACKEND_SDL_GPU "Build SDL_GPU backend (uses SDL and SDL_ttf). Requires SDL_GPU backend in c++ TGUI library.")

option(CTGUI_BUILD_EXAMPLE "TRUE to build the CTGUI example, FALSE to ignore it" FALSE)

if(TGUI_OS_WINDOWS)
    set(link_tgui_statically_default TRUE)
else()
    set(link_tgui_statically_default FALSE)
endif()
ctgui_set_option(CTGUI_LINK_TGUI_STATICALLY ${link_tgui_statically_default} BOOL "TRUE to link to a static version of TGUI, FALSE to link dynamically")

set(TGUI_STATIC_LIBRARIES ${CTGUI_LINK_TGUI_STATICALLY})
if(NOT TARGET TGUI::TGUI)
    find_package(TGUI ${PROJECT_VERSION_MAJOR} REQUIRED CONFIG)
endif()

if(CTGUI_HAS_BACKEND_CSFML_GRAPHICS)
    ctgui_set_option(CTGUI_USE_CSFML_VERSION 3 STRING "Select the CSFML version to search and link to")

    list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake/Modules/")
    find_package(CSFML ${CTGUI_USE_CSFML_VERSION} REQUIRED)
endif()
if(CTGUI_HAS_BACKEND_SDL_RENDERER OR CTGUI_HAS_BACKEND_SDL_GPU)
    ctgui_set_option(CTGUI_USE_SDL_VERSION 3 STRING "Select the SDL version to search and link to")

    if(CTGUI_USE_SDL_VERSION EQUAL 2)
        if(CTGUI_HAS_BACKEND_SDL_GPU)
            message(FATAL_ERROR "CTGUI_USE_SDL_VERSION must be 3 when building SDL_GPU backend")
        endif()

        if(NOT TARGET SDL2::SDL2)
            find_package(SDL2 REQUIRED CONFIG)
        endif()
        if(NOT TARGET SDL2_ttf::SDL2_ttf)
            find_package(SDL2_ttf REQUIRED CONFIG)
        endif()

        if(DEFINED SDL2_VERSION)
            if(SDL2_VERSION VERSION_LESS 2.24)
                message(FATAL_ERROR "SDL 2.24 or higher is required")
            endif()
        endif()

        if(DEFINED SDL2_ttf_VERSION)
            if(SDL2_ttf_VERSION VERSION_LESS "2.20")
                message(FATAL_ERROR "SDL_ttf 2.20 or higher is required")
            endif()
        endif()
    elseif(CTGUI_USE_SDL_VERSION EQUAL 3)
        if(NOT TARGET SDL3::SDL3-shared)
            find_package(SDL3 REQUIRED CONFIG)
        endif()
        if(NOT TARGET SDL3_ttf::SDL3_ttf-shared)
            find_package(SDL3_ttf REQUIRED CONFIG)
        endif()
    else()
        message(FATAL_ERROR "CTGUI_USE_SDL_VERSION can only be 2 or 3")
    endif()
endif()

configure_file("include/CTGUI/Config.h.in" "${CMAKE_CURRENT_SOURCE_DIR}/include/CTGUI/Config.h" @ONLY)

add_subdirectory(src/CTGUI)

if(CTGUI_BUILD_EXAMPLE)
    add_subdirectory(examples)
endif()

install(DIRECTORY include/
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
        COMPONENT devel)
install(FILES license.md DESTINATION ${CMAKE_INSTALL_DOCDIR})
install(FILES README.md DESTINATION ${CMAKE_INSTALL_DOCDIR})
