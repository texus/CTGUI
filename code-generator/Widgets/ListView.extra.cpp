void tguiListView_sort(tguiWidget* widget, size_t index, tguiBool (*comp)(tguiUtf32, tguiUtf32))
{
    DOWNCAST(widget->This)->sort(index, [&comp](const tgui::String& str1, const tgui::String& str2){
        return comp(reinterpret_cast<tguiUtf32>(str1.c_str()), reinterpret_cast<tguiUtf32>(str2.c_str())) != 0;
    });
}

