add_executable(example-sdl-renderer example.c)
target_link_libraries(example-sdl-renderer PRIVATE ctgui SDL2::SDL2 SDL2_ttf::SDL2_ttf)
