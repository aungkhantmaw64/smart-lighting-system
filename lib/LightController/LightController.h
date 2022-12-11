#ifndef D_LIGHT_CONTROLLER_H
#define D_LIGHT_CONTROLLER_H

class LightController
{
public:
    virtual ~LightController();
    virtual void turnOn(void);
    virtual void turnOff(void);
};

#endif