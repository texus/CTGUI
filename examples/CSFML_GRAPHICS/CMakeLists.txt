add_executable(example-csfml-graphics example.c)
target_link_libraries(example-csfml-graphics PRIVATE ctgui csfml-graphics csfml-window csfml-system)
