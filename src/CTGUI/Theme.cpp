/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2016 Bruno Van de Velde (vdv_b@tgui.eu)
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


#include <CTGUI/Theme.h>
#include <CTGUI/ThemeStruct.h>
#include <CTGUI/RendererDataStruct.h>
#include <CTGUI/Global.h>

#include <TGUI/Exception.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiTheme* tguiTheme_create(void)
{
    return new tguiTheme;
}

tguiTheme* tguiTheme_copy(const tguiTheme* theme)
{
    return new tguiTheme(*theme);
}

void tguiTheme_destroy(tguiTheme* theme)
{
    delete theme;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTheme_load(tguiTheme* theme, const char* filename, const char** error)
{
    try
    {
        theme->This.load(filename);
        *error = nullptr;
    }
    catch (const tgui::Exception& e)
    {
        tguiErrorMessage = e.what();
        *error = tguiErrorMessage.c_str();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRendererData* tguiTheme_getRenderer(tguiTheme* theme, const char* id, const char** error)
{
    try
    {
        std::shared_ptr<tgui::RendererData> data = theme->This.getRenderer(id);
        *error = nullptr;
        return new tguiRendererData(data);
    }
    catch (const tgui::Exception& e)
    {
        tguiErrorMessage = e.what();
        *error = tguiErrorMessage.c_str();
        return nullptr;
    }
}

void tguiTheme_addRenderer(tguiTheme* theme, const char* id, tguiRendererData* renderer)
{
    theme->This.addRenderer(id, renderer->This);
}

sfBool tguiTheme_removeRenderer(tguiTheme* theme, const char* id)
{
    return theme->This.removeRenderer(id);
}
