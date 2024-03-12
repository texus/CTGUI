CTGUI
=====

CTGUI is a C binding for the [TGUI library](https://github.com/texus/TGUI), a cross-platform c++ GUI.

It is intended to simplify creating bindings for TGUI in other languages, but it is also possible to use CTGUI directly in a C program.

Backends
--------

CTGUI provides 2 backends to choose from. One of them should be provided to the `CTGUI_BACKEND` property in CMake.

| Backend            | Description |
|:-------------------|:------------|
| **CSFML_GRAPHICS** | Uses csfml-graphics (>= 2.6.1) for rendering and events. The c++ TGUI library can be built *without* any backends, as the CSFML\_GRAPHICS backend is implemented directly in CTGUI and is independent of the c++ SFML\_GRAPHICS backend. |
| **SDL_RENDERER**   | Uses SDL (>= 2.24) and SDL\_ttf (>= 2.20) for rendering and events. The c++ TGUI library also needs to be built with the SDL\_RENDERER backend, as CTGUI uses it internally. |

Important CMake options
-----------------------

| Option                     | Description |
|:---------------------------|:------------|
| CTGUI_BACKEND              | This needs to be set to one of the backend values explained above in order to choose which libraries are used for rendering and handling events. |
| CTGUI_LINK_TGUI_STATICALLY | Set this to TRUE if the c++ TGUI library is linked statically, and FALSE if the TGUI library is linked dynamically. |

Documentation
-------------

Unfortunately there are no tutorials or documentation for the C binding itself, except for the example code provided in the `examples` directory.

Since this is a binding for the c++ TGUI library, the available functionality can be found in the c++ [documentation](https://tgui.eu/documentation/latest-stable/annotated.html) and [tutorials](https://tgui.eu/tutorials/latest-stable/).

For a list of C functions that correspond with the c++ classes, you will need to check the source code in the `include` folder.
