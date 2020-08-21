cmake_minimum_required(VERSION 3.9)

# Define a macro that helps defining an option
macro(ctgui_set_option var default type docstring)
    if(NOT DEFINED ${var})
        set(${var} ${default})
    endif()
    set(${var} ${${var}} CACHE ${type} ${docstring} FORCE)
endmacro()

# Set a default build type and module path if none was provided
ctgui_set_option(CMAKE_BUILD_TYPE Release STRING "Choose the type of build (Debug or Release)")
ctgui_set_option(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/Modules" STRING "The path to the cmake modules. This path must contain the FindCSFML.cmake file.")

# Project name and version
project(CTGUI VERSION 0.8.8)

# Include the configuration file
include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/Config.cmake)

# Add an option for choosing the build type (shared or static)
ctgui_set_option(BUILD_SHARED_LIBS TRUE BOOL "TRUE to build CTGUI as shared libraries, FALSE to build it as static libraries")

# Define an option for choosing between static and dynamic C runtime
if(TGUI_OS_WINDOWS)
    ctgui_set_option(TGUI_USE_STATIC_STD_LIBS FALSE BOOL "TRUE to statically link to the standard libraries, FALSE to use them as DLLs. This option has to match with the one from sfml.")

    # The following combination of flags is not valid
    if(BUILD_SHARED_LIBS AND TGUI_USE_STATIC_STD_LIBS)
        message(FATAL_ERROR "BUILD_SHARED_LIBS and TGUI_USE_STATIC_STD_LIBS cannot be used together")
    endif()
endif()

find_package(SFML 2 COMPONENTS graphics REQUIRED)
find_package(TGUI ${CTGUI_VERSION_MAJOR}.${CTGUI_VERSION_MINOR} REQUIRED)

# Find the header files of CSFML
find_package(CSFML ${SFML_VERSION_MAJOR}.${SFML_VERSION_MINOR})
if (NOT CSFML_INCLUDE_DIR)
    set(CSFML_INCLUDE_DIR "" CACHE PATH "Path of the CSFML include directory")
    message(FATAL_ERROR "CMake couldn't find the CSFML header files. Set the CSFML_INCLUDE_DIR entry to SFML's include directory.")
endif()

# Add the subdirectory
add_subdirectory(src/CTGUI)

# Install the header files
install(DIRECTORY include
        DESTINATION .
        COMPONENT devel
        PATTERN ".svn" EXCLUDE)
