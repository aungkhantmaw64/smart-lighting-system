#include "FakeTimeService.h"

FakeTimeService::FakeTimeService(/* args */)
{
    today = Unknown_day;
    thisHour = 0;
    thisMin = 0;
}

FakeTimeService::~FakeTimeService()
{
}

Day FakeTimeService::getDay(void)
{
    return today;
}

uint8_t FakeTimeService::getHour(void)
{
    return thisHour;
}

uint8_t FakeTimeService::getMin(void)
{
    return thisMin;
}
void FakeTimeService::setDay(Day day)
{
    today = day;
}

void FakeTimeService::setHour(uint8_t hr)
{
    thisHour = hr;
}

void FakeTimeService::setMin(uint8_t min)
{
    thisMin = min;
}