#ifndef D_LIGHT_SWITCH_SPY_H
#define D_LIGHT_SWITCH_SPY_H

#include "LightSwitch.h"

typedef enum
{
    SWITCH_PRESSED = 1,
    SWITCH_RELEASED = 0,
    SWITCH_UNKNOWN = -1,
} SwitchState;

class LightSwitchSpy : public LightSwitch
{
private:
    SwitchState state;

public:
    LightSwitchSpy(int pinNumber);
    ~LightSwitchSpy();
    virtual int isPressed(void) override;

    void setSwitchState(SwitchState expectedState);
};

#endif