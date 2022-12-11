#include <gtest/gtest.h>
#include "LightSwitchSpy.h"

#define DEFAULT_LIGHT_PIN 4

class LightSwitchSpyTest : public ::testing ::Test
{
protected:
    virtual void SetUp(void) override
    {
    }
    virtual void TearDown(void) override
    {
    }
};

TEST_F(LightSwitchSpyTest, SwitchState_UnknownAfterInitialization)
{
    LightSwitchSpy lightSwitch{DEFAULT_LIGHT_PIN};
    EXPECT_EQ(SWITCH_UNKNOWN, lightSwitch.isPressed());
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    if (RUN_ALL_TESTS())
        ;
    // Always return zero-code and allow PlatformIO to parse results
    return 0;
}