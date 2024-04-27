Updating generated files
------------------------

Some files or parts of files are generated from templates to reduce the amount of boilerplate code that needs to be written.

Simply run the `GenerateCodeC.py` script to regenerate all such files. The output is written directly to the src and include directories from the root folder.


Renderers
---------

Almost all files in `src/CTGUI/Renderers/` and `include/CTGUI/Renderers/` are generated based on the files found in the `Renderers` subfolder.

The exceptions are `WidgetRenderer.h`, `WidgetRenderer.cpp` and `RendererStruct.hpp`. These files need to be edited directly in the src and include folders.


Additional error checks
-----------------------

The `ValidateDescFiles.py` scripts attempts to detect some issues with the description files by comparing them to the c++ files. It can detect issues such as missing properties, which would not be detected by simply building the generated files.
