#ifndef D_LIGHT_CONTROLLER_SPY_H
#define D_LIGHT_CONTROLLER_SPY_H

#include "LightController.h"

typedef enum
{
    LIGHTSTATE_UNKNOWN = -1,
    LIGHTSTATE_ON = 1,
    LIGHTSTATE_OFF = 0
} LightState;

class LightControllerSpy : public LightController
{

private:
    LightState state;

public:
    LightControllerSpy(int pinNumber);
    ~LightControllerSpy();
    virtual void turnOn(void) override;
    virtual void turnOff(void) override;

    /*Functions for spying*/
    LightState getLastLightState(void);
};

#endif