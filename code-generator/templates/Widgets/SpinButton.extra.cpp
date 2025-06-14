void tguiSpinButton_setValue(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setValue(value);
}

float tguiSpinButton_getValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButton_setStep(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setStep(value);
}

float tguiSpinButton_getStep(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getStep();
}
