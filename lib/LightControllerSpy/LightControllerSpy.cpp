#include "LightControllerSpy.h"

LightControllerSpy::LightControllerSpy(int pinNumber)
{
    state = LIGHTSTATE_UNKNOWN;
}

LightControllerSpy::~LightControllerSpy()
{
}

void LightControllerSpy::turnOn(void)
{
    state = LIGHTSTATE_ON;
}

void LightControllerSpy::turnOff(void)
{
    state = LIGHTSTATE_OFF;
}

LightState LightControllerSpy::getLastLightState(void)
{
    return state;
}