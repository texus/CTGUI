tguiWidget* getCheckedRadioButton(tguiWidget* widget)
{
    return ctgui::addWidgetRef(DOWNCAST(widget->This)->getCheckedRadioButton());
}
