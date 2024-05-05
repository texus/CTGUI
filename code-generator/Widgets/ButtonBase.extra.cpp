void tguiButtonBase_setTextPositionAbs(tguiWidget* widget, tguiVector2f position, tguiVector2f origin)
{
    DOWNCAST(widget->This)->setTextPosition({position.x, position.y}, {origin.x, origin.y});
}

void tguiButtonBase_setTextPositionRel(tguiWidget* widget, tguiVector2f position, tguiVector2f origin)
{
    DOWNCAST(widget->This)->setTextPosition({tgui::RelativeValue(position.x), tgui::RelativeValue(position.y)}, {origin.x, origin.y});
}
