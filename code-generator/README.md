Updating generated files
------------------------

Some files or parts of files are generated from templates to reduce the amount of boilerplate code that needs to be written.

Simply run the `GenerateCodeC.py` script to regenerate all such files. The output is written directly to the src and include directories from the root folder.

All files in `src/CTGUI/Renderers/`, `include/CTGUI/Renderers/`, `src/CTGUI/Widgets/` and `include/CTGUI/Widgets/` are generated based on the `.desc` files found in the `Renderers` and  `Widgets` subfolder. For some classes there are additional `.extra.h` and `.extra.c` files from which the contents is copied directly to the header and source files and placed below the generated code.


Additional error checks
-----------------------

The `ValidateDescFiles.py` scripts attempts to detect some issues with the description files by comparing them to the c++ files. It can sometimes detect issues which would not be detected by simply building the generated files, such as missing renderer properties.
