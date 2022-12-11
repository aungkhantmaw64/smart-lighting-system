#include <gtest/gtest.h>
#include "LightControllerSpy.h"

#define DEFAULT_LIGHT_PIN 5

class LightControllerSpyTest : public ::testing ::Test
{
protected:
    virtual void SetUp(void) override
    {
    }
    virtual void TearDown(void) override
    {
    }
};

TEST_F(LightControllerSpyTest, LightState_UnknownAfterInitialization)
{
    LightControllerSpy lightController{DEFAULT_LIGHT_PIN};
    EXPECT_EQ(LIGHTSTATE_UNKNOWN, lightController.getLastLightState());
}

TEST_F(LightControllerSpyTest, LightState_On)
{
    LightControllerSpy lightController{DEFAULT_LIGHT_PIN};
    lightController.turnOn();
    EXPECT_EQ(LIGHTSTATE_ON, lightController.getLastLightState());
}

TEST_F(LightControllerSpyTest, LightState_Off)
{
    LightControllerSpy lightController{DEFAULT_LIGHT_PIN};
    lightController.turnOff();
    EXPECT_EQ(LIGHTSTATE_OFF, lightController.getLastLightState());
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    if (RUN_ALL_TESTS())
        ;
    // Always return zero-code and allow PlatformIO to parse results
    return 0;
}