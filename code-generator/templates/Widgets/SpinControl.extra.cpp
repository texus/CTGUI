tguiBool tguiSpinControl_setValue(tguiWidget* thisWidget, float value)
{
    return DOWNCAST(thisWidget->This)->setValue(value);
}

float tguiSpinControl_getValue(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getValue();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinControl_setStep(tguiWidget* thisWidget, float value)
{
    DOWNCAST(thisWidget->This)->setStep(value);
}

float tguiSpinControl_getStep(const tguiWidget* thisWidget)
{
    return DOWNCAST(thisWidget->This)->getStep();
}
