#ifndef D_LIGHT_SWITCH_H
#define D_LIGHT_SWITCH_H

class LightSwitch
{

public:
    virtual ~LightSwitch(void);
    virtual int isPressed(void);
};

#endif