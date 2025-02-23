# define the list of search paths for headers and libraries
set(FIND_CSFML_PATHS
    ${CSFML_ROOT}
    $ENV{CSFML_ROOT}
    /usr/local
    /usr
    /sw
    /opt/local
    /opt/csw
    /opt)

# find the CSFML include directory
if (NOT CSFML_FIND_VERSION OR NOT CSFML_FIND_VERSION_MAJOR OR CSFML_FIND_VERSION_MAJOR GREATER_EQUAL 3)
    find_path(CSFML_INCLUDE_DIR CSFML/Config.h
              PATH_SUFFIXES include
              PATHS ${FIND_CSFML_PATHS})
endif()
if (NOT CSFML_FIND_VERSION OR NOT CSFML_FIND_VERSION_MAJOR OR CSFML_FIND_VERSION_MAJOR EQUAL 2)
    find_path(CSFML_INCLUDE_DIR SFML/Config.h
              PATH_SUFFIXES include
              PATHS ${FIND_CSFML_PATHS})
endif()

# check the version number
set(CSFML_VERSION_OK TRUE)
if (CSFML_INCLUDE_DIR)
    set(CSFML_FOUND TRUE)
else()
    set(CSFML_FOUND FALSE)
endif()
if (CSFML_FIND_VERSION AND CSFML_INCLUDE_DIR)
    # extract the major and minor version numbers from SFML/Config.h
    if (CSFML_FIND_VERSION_MAJOR GREATER_EQUAL 3)
        set(CSFML_CONFIG_H_INPUT "${CSFML_INCLUDE_DIR}/CSFML/Config.h")
    else()
        set(CSFML_CONFIG_H_INPUT "${CSFML_INCLUDE_DIR}/SFML/Config.h")
    endif()
    FILE(READ "${CSFML_CONFIG_H_INPUT}" CSFML_CONFIG_H_CONTENTS)
    STRING(REGEX REPLACE ".*#define CSFML_VERSION_MAJOR ([0-9]+).*" "\\1" CSFML_VERSION_MAJOR "${CSFML_CONFIG_H_CONTENTS}")
    STRING(REGEX REPLACE ".*#define CSFML_VERSION_MINOR ([0-9]+).*" "\\1" CSFML_VERSION_MINOR "${CSFML_CONFIG_H_CONTENTS}")
    STRING(REGEX REPLACE ".*#define CSFML_VERSION_PATCH ([0-9]+).*" "\\1" CSFML_VERSION_PATCH "${CSFML_CONFIG_H_CONTENTS}")
    if (NOT "${CSFML_VERSION_PATCH}" MATCHES "^[0-9]+$")
        set(CSFML_VERSION_PATCH 0)
    endif()
    math(EXPR CSFML_REQUESTED_VERSION "${CSFML_FIND_VERSION_MAJOR} * 10000 + ${CSFML_FIND_VERSION_MINOR} * 100 + ${CSFML_FIND_VERSION_PATCH}")

    # if we could extract them, compare with the requested version number
    if (CSFML_VERSION_MAJOR)
        # transform version numbers to an integer
        math(EXPR CSFML_VERSION "${CSFML_VERSION_MAJOR} * 10000 + ${CSFML_VERSION_MINOR} * 100 + ${CSFML_VERSION_PATCH}")

        # compare them
        if(CSFML_VERSION LESS CSFML_REQUESTED_VERSION)
            set(CSFML_VERSION_OK FALSE)
        endif()
    else()
        # CSFML version is < 2.0
        if (CSFML_REQUESTED_VERSION GREATER 10900)
            set(CSFML_VERSION_OK FALSE)
            set(CSFML_VERSION_MAJOR 1)
            set(CSFML_VERSION_MINOR x)
            set(CSFML_VERSION_PATCH x)
        endif()
    endif()
endif()

if (CSFML_LIBRARIES_DIR)
    link_directories("${CSFML_LIBRARIES_DIR}")
elseif(CSFML_INCLUDE_DIR AND IS_DIRECTORY "${CSFML_INCLUDE_DIR}/../lib")
    link_directories("${CSFML_INCLUDE_DIR}/../lib")
endif()

# handle errors
if(NOT CSFML_VERSION_OK)
    # CSFML version not ok
    set(FIND_CSFML_ERROR "CSFML found but version too low (requested: ${CSFML_FIND_VERSION}, found: ${CSFML_VERSION_MAJOR}.${CSFML_VERSION_MINOR}.${CSFML_VERSION_PATCH})")
    set(CSFML_FOUND FALSE)
elseif(NOT CSFML_FOUND)
    # include directory not found
    set(FIND_CSFML_ERROR "Could NOT find CSFML headers (please set CSFML_INCLUDE_DIR manually)")
endif()
if (NOT CSFML_FOUND)
    if(CSFML_FIND_REQUIRED)
        # fatal error
        message(FATAL_ERROR ${FIND_CSFML_ERROR})
    elseif(NOT CSFML_FIND_QUIETLY)
        # error but continue
        message(WARNING "${FIND_CSFML_ERROR}")
    endif()
endif()

# handle success
if(CSFML_FOUND AND NOT CSFML_FIND_QUIETLY)
    message(STATUS "Found CSFML ${CSFML_VERSION_MAJOR}.${CSFML_VERSION_MINOR}.${CSFML_VERSION_PATCH} in ${CSFML_INCLUDE_DIR}")
endif()
