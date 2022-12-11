#include <gtest/gtest.h>
#include "FakeTimeService.h"

TEST(FakeTimeService, Create)
{
    FakeTimeService timeService;
    EXPECT_EQ(-1, timeService.getDay());
    EXPECT_EQ(0, timeService.getHour());
    EXPECT_EQ(0, timeService.getMin());
}

TEST(FakeTimeServiceTest, SetDay)
{
    FakeTimeService timeService;
    timeService.setDay(Sunday);
    EXPECT_EQ(Sunday, timeService.getDay());
}

TEST(FakeTimeServiceTest, SetHour)
{
    FakeTimeService timeService;
    timeService.setHour(12);
    EXPECT_EQ(12, timeService.getHour());
}

TEST(FakeTimeServiceTest, SetMin)
{
    FakeTimeService timeService;
    timeService.setMin(45);
    EXPECT_EQ(45, timeService.getMin());
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    if (RUN_ALL_TESTS())
        ;
    // Always return zero-code and allow PlatformIO to parse results
    return 0;
}