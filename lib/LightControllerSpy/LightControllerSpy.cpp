#include "LightControllerSpy.h"

LightControllerSpy::LightControllerSpy(int pinNumber)
{
}

LightControllerSpy::~LightControllerSpy()
{
}

void LightControllerSpy::init(void)
{
    state = LIGHTSTATE_UNKNOWN;
}

void LightControllerSpy::turnOn(void)
{
    state = LIGHTSTATE_ON;
}

void LightControllerSpy::turnOff(void)
{
    state = LIGHTSTATE_OFF;
}

void LightControllerSpy::deinit(void)
{
    state = LIGHTSTATE_UNKNOWN;
}

LightState LightControllerSpy::getLastLightState(void)
{
    return state;
}