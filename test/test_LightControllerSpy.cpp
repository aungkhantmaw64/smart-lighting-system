#include <gtest/gtest.h>
#include "LightControllerSpy.h"

#define DEFAULT_LIGHT_PIN 5

static LightControllerSpy lightController{DEFAULT_LIGHT_PIN};

class LightControllerSpyTest : public ::testing ::Test
{
protected:
    virtual void SetUp(void) override
    {
        lightController.init();
    }
    virtual void TearDown(void) override
    {
        lightController.deinit();
    }
};

TEST_F(LightControllerSpyTest, LightState_UnknownAfterInitialization)
{
    EXPECT_EQ(LIGHTSTATE_UNKNOWN, lightController.getLastLightState());
}

TEST_F(LightControllerSpyTest, LightState_On)
{
    lightController.turnOn();
    EXPECT_EQ(LIGHTSTATE_ON, lightController.getLastLightState());
}

TEST_F(LightControllerSpyTest, LightState_Off){
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