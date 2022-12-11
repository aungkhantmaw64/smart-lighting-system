#ifndef D_FAKE_TIME_SERVICE_H
#define D_FAKE_TIME_SERVICE_H

#include "TimeService.h"

class FakeTimeService : public TimeService
{
private:
    Day today;
    uint8_t thisHour;
    uint8_t thisMin;

public:
    FakeTimeService(/* args */);
    ~FakeTimeService();
    virtual Day getDay(void) override;
    virtual uint8_t getHour(void) override;
    virtual uint8_t getMin(void) override;
    void setDay(Day day);
    void setHour(uint8_t hr);
    void setMin(uint8_t min);
};

#endif