/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2024 Bruno Van de Velde (vdv_b@tgui.eu)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <CTGUI/Filesystem.h>
#include <CTGUI/InternalGlobal.hpp>
#include <TGUI/Filesystem.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiUtf32 tguiFilesystem_getParentPath(tguiUtf32 path)
{
    return ctgui::fromCppStr(tgui::Filesystem::Path(ctgui::toCppStr(path)).getParentPath().asString());
}

tguiUtf32 tguiFilesystem_joinPaths(tguiUtf32 path1, tguiUtf32 path2)
{
    return ctgui::fromCppStr((tgui::Filesystem::Path(ctgui::toCppStr(path1)) / tgui::Filesystem::Path(ctgui::toCppStr(path2))).asString());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiBool tguiFilesystem_directoryExists(tguiUtf32 path)
{
    return tgui::Filesystem::directoryExists(tgui::Filesystem::Path(ctgui::toCppStr(path)));
}

tguiBool tguiFilesystem_fileExists(tguiUtf32 path)
{
    return tgui::Filesystem::fileExists(tgui::Filesystem::Path(ctgui::toCppStr(path)));
}

tguiBool tguiFilesystem_createDirectory(tguiUtf32 path)
{
    return tgui::Filesystem::createDirectory(tgui::Filesystem::Path(ctgui::toCppStr(path)));
}

tguiUtf32 tguiFilesystem_getLocalDataDirectory(void)
{
    return ctgui::fromCppStr(tgui::Filesystem::getLocalDataDirectory().asString());
}

