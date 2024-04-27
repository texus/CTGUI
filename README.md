CTGUI
=====

CTGUI is a C binding for the [TGUI library](https://github.com/texus/TGUI), a cross-platform c++ GUI.

It is intended to simplify creating bindings for TGUI in other languages, but it is also possible to use CTGUI directly in a C program.

Backends
--------

CTGUI provides multiple backends to choose from. One of multiple can be selected by setting the `CTGUI_HAS_BACKEND_XXX` properties in CMake (e.g. `CTGUI_HAS_BACKEND_CSFML_GRAPHICS`).

| Backend            | Description |
|:-------------------|:------------|
| **CSFML_GRAPHICS** | Uses csfml-graphics (>= 2.6.1) for rendering and events. The c++ TGUI library can be built *without* any backends, as the CSFML\_GRAPHICS backend is implemented directly in CTGUI and is independent of the c++ SFML\_GRAPHICS backend. |
| **SDL_RENDERER**   | Uses SDL (>= 2.24) and SDL\_ttf (>= 2.20) for rendering and events. The c++ TGUI library also needs to be built with the SDL\_RENDERER backend, as CTGUI uses it internally. |

Other important CMake options
-----------------------------

| Option                     | Description |
|:---------------------------|:------------|
| CTGUI_LINK_TGUI_STATICALLY | Set this to TRUE if the c++ TGUI library is linked statically, and FALSE if the TGUI library is linked dynamically. |

Documentation
-------------

Unfortunately there are no tutorials or documentation for the C binding itself, except for the example code provided in the `examples` directory.

Since this is a binding for the c++ TGUI library, the available functionality can be found in the c++ [documentation](https://tgui.eu/documentation/latest-stable/annotated.html) and [tutorials](https://tgui.eu/tutorials/latest-stable/).

For a list of C functions that correspond with the c++ classes, you will need to check the source code in the `include` folder.

Code generation
---------------

Some files or parts of files are generated to reduce the amount of boilerplate code that needs to be written. The generated files are part of the repository so it doesn't affect you when attempting to use CTGUI. It you wish to make modifications to the CTGUI code then you might need to look at the contents of the `code-generator` folder, depending on which files you want to modify.
