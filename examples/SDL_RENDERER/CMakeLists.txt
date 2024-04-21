add_executable(example-sdl-renderer example.c)
target_link_libraries(example-sdl-renderer PRIVATE ctgui)

if (CTGUI_USE_SDL_VERSION EQUAL 2)
    if (TARGET SDL2::SDL2main) # This target is only required on Windows
        target_link_libraries(example-sdl-renderer PRIVATE SDL2::SDL2main)
    endif()
endif()