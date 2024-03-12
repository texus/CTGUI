add_executable(example example.c)
target_link_libraries(example PRIVATE ctgui SDL2::SDL2 SDL2_ttf::SDL2_ttf)
