# Detect the OS
if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
    set(TGUI_OS_WINDOWS 1)
elseif(CMAKE_SYSTEM_NAME STREQUAL "Android")
    set(TGUI_OS_ANDROID 1)
elseif(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    set(TGUI_OS_LINUX 1)
elseif(CMAKE_SYSTEM_NAME MATCHES ".*BSD")
    # We will pretend that BSD is Linux because the two are practically indistinguishable on the
    # high level that TGUI uses to access the OS. The presence or absence of the TGUI_OS_BSD variable
    # can still be used to differentiate between the two where necessary.
    set(TGUI_OS_LINUX 1)
    set(TGUI_OS_BSD 1)
elseif(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
    set(TGUI_OS_MACOS 1)
elseif(CMAKE_SYSTEM_NAME STREQUAL "iOS")
    set(TGUI_OS_IOS 1)
elseif(CMAKE_SYSTEM_NAME MATCHES "MINGW64_NT.*") # MSYS2 with MinGW x64
    set(TGUI_OS_WINDOWS 1)
else()
    message(FATAL_ERROR "Unsupported CMAKE_SYSTEM_NAME value: ${CMAKE_SYSTEM_NAME}")
    return()
endif()

# Detect the compiler
if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    set(TGUI_COMPILER_MSVC 1)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "AppleClang")
    set(TGUI_COMPILER_APPLE_CLANG 1)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    if(CMAKE_CXX_COMPILER_FRONTEND_VARIANT STREQUAL "MSVC")
        set(TGUI_COMPILER_CLANG_CL 1)
    else()
        set(TGUI_COMPILER_LLVM_CLANG 1)
    endif()
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    set(TGUI_COMPILER_GCC 1)

    # Check if this is the TDM-GCC version.
    # The TGUI_COMPILER_GCC_TDM variable will contain a text if TDM and will be empty otherwise.
    execute_process(COMMAND "${CMAKE_CXX_COMPILER}" "--version" OUTPUT_VARIABLE GCC_COMPILER_VERSION)
    string(REGEX MATCHALL ".*(tdm[64]*-[1-9]).*" TGUI_COMPILER_GCC_TDM "${GCC_COMPILER_VERSION}")
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "IntelLLVM")
    set(TGUI_COMPILER_INTEL_ONEAPI 1)
else()
    message(WARNING "Unrecognized compiler: ${CMAKE_CXX_COMPILER_ID}. Use at your own risk.")
endif()
