#include "unity.h"
#include "unity_fixture.h"
#include "button_driver.h"

TEST_GROUP(button_driver);

TEST_SETUP(button_driver)
{
   
}

TEST_TEAR_DOWN(button_driver)
{

}

TEST(button_driver, test_button_driver_init)
{
    TEST_ASSERT_TRUE(true);
}

TEST_GROUP_RUNNER(button_driver)
{
    RUN_TEST_CASE(button_driver, test_button_driver_init);
}
