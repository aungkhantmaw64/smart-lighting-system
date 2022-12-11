#include "LightSwitchSpy.h"

LightSwitchSpy::LightSwitchSpy(int pinNumber)
{
    state = SWITCH_UNKNOWN;
}

LightSwitchSpy::~LightSwitchSpy(void)
{
}

int LightSwitchSpy::isPressed(void)
{
    return state;
}

void LightSwitchSpy::setSwitchState(SwitchState state)
{
}