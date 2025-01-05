#include "unity.h"
#include "foo_driver.h"

void setUp(void) {}
void tearDown(void) {}

void test_foo_driver_function_should_return_84(void)
{
    TEST_ASSERT_EQUAL(84, foo_driver_function());
}
