cmake_minimum_required(VERSION 2.8.3)

# Define a macro that helps defining an option
macro(ctgui_set_option var default type docstring)
    if(NOT DEFINED ${var})
        set(${var} ${default})
    endif()
    set(${var} ${${var}} CACHE ${type} ${docstring} FORCE)
endmacro()

# Define a macro to add compiler flags
macro(tgui_add_cxx_flag flag)
    string(REGEX REPLACE "\\+" "\\\\+" escapedFlag ${flag})
    if (NOT (${CMAKE_CXX_FLAGS} MATCHES ".*${escapedFlag}.*"))
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${flag}" CACHE STRING "C++ compiler flags" FORCE)
    endif()
endmacro()

# Set a default build type and module path if none was provided
ctgui_set_option(CMAKE_BUILD_TYPE Release STRING "Choose the type of build (Debug or Release)")
ctgui_set_option(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/Modules" STRING "The path to the cmake modules. This path must contain the FindTGUI.cmake file.")

# Project name
project(ctgui)

# Project version
set(VERSION_MAJOR 0)
set(VERSION_MINOR 8)
set(VERSION_PATCH 0)

# Include the configuration file
include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/Config.cmake)

# Add the CTGUI header path
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Add an option for choosing the build type (shared or static)
ctgui_set_option(BUILD_SHARED_LIBS TRUE BOOL "TRUE to build CTGUI as shared libraries, FALSE to build it as static libraries")

# Disable the rpath stuff
set(CMAKE_SKIP_BUILD_RPATH TRUE)

# Define an option for choosing between static and dynamic C runtime (Windows only)
if(SFML_OS_WINDOWS)
    set(STATIC_STD_LIBS FALSE CACHE BOOL "TRUE to statically link to the standard libraries, FALSE to use them as DLLs")
    
    # For VC++, we can apply it globally by modifying the compiler flags
    if(SFML_COMPILER_MSVC AND STATIC_STD_LIBS)
        foreach(flag
                CMAKE_CXX_FLAGS CMAKE_CXX_FLAGS_DEBUG CMAKE_CXX_FLAGS_RELEASE
                CMAKE_CXX_FLAGS_MINSIZEREL CMAKE_CXX_FLAGS_RELWITHDEBINFO)
            if(${flag} MATCHES "/MD")
                string(REGEX REPLACE "/MD" "/MT" ${flag} "${${flag}}")
            endif()
        endforeach()
    endif()
endif()

# Set some compile flags when using GCC and Clang
if(SFML_COMPILER_GCC OR SFML_COMPILER_CLANG)
    tgui_add_cxx_flag(-Wall)
    tgui_add_cxx_flag(-Wextra)
    tgui_add_cxx_flag(-Wshadow)
    tgui_add_cxx_flag(-Wno-long-long)
    tgui_add_cxx_flag(-pedantic)
    tgui_add_cxx_flag(-std=c++14)
endif()

# Add the subdirectory
add_subdirectory(src/CTGUI)

# Setup the install rules
install(DIRECTORY include
        DESTINATION .
        COMPONENT devel
        PATTERN ".svn" EXCLUDE)
#install(FILES license.txt DESTINATION ${INSTALL_MISC_DIR})
#install(FILES readme.txt DESTINATION ${INSTALL_MISC_DIR})
