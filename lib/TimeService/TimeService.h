#ifndef D_TIMESERVICE_H
#define D_TIMESERVICE_H

#include <stdint.h>

typedef enum
{
    Unknown_day = -1,
    Sunday = 0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
} Day;

class TimeService
{
public:
    virtual ~TimeService();
    virtual Day getDay(void);
    virtual uint8_t getHour(void);
    virtual uint8_t getMin(void);
};

#endif