cmake_minimum_required(VERSION 2.8.3)

# Define a macro that helps defining an option
macro(ctgui_set_option var default type docstring)
    if(NOT DEFINED ${var})
        set(${var} ${default})
    endif()
    set(${var} ${${var}} CACHE ${type} ${docstring} FORCE)
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

# Add an option for building the API documentation
ctgui_set_option(CTGUI_BUILD_DOC FALSE BOOL "TRUE to generate the API documentation, FALSE to ignore it")

# Add an option for linking to tgui either statically or dynamically
ctgui_set_option(CTGUI_LINK_TGUI_STATICALLY TRUE BOOL "TRUE to link to a static version of TGUI, FALSE to link dynamically")

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

# Add the subdirectories
add_subdirectory(src/CTGUI)
if(CTGUI_BUILD_DOC)
    add_subdirectory(doc)
endif()

# Setup the install rules
install(DIRECTORY include
        DESTINATION .
        COMPONENT devel
        PATTERN ".svn" EXCLUDE)
#install(FILES license.txt DESTINATION ${INSTALL_MISC_DIR})
#install(FILES readme.txt DESTINATION ${INSTALL_MISC_DIR})
