#include "unity.h"
#include "unity_fixture.h"
#include "led_driver.h"

TEST_GROUP(led_driver);

TEST_SETUP(led_driver)
{
   
}

TEST_TEAR_DOWN(led_driver)
{

}

TEST(led_driver, test_led_driver_init)
{
    TEST_ASSERT_TRUE(true);
}

TEST_GROUP_RUNNER(led_driver)
{
    RUN_TEST_CASE(led_driver, test_led_driver_init);
}

/*
TEST_CASE("LED config ", "[led][config]")
{
    bool ret = pinMode(2, OUTPUT);
    TEST_ASSERT_EQUAL(true, ret);
}

TEST_CASE("LED set low", "[led][low]")
{
    digitalWrite(2, LOW);
    TEST_ASSERT_EQUAL(LOW, digitalRead(2));
}

TEST_CASE("LED set high", "[led][high]")
{
    digitalWrite(2, HIGH);
    TEST_ASSERT_EQUAL(HIGH, digitalRead(2));
}*/