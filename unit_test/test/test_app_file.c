#include "unity.h"
#include "app_file.h"

void setUp(void) {}
void tearDown(void) {}

void test_app_function_should_return_42(void)
{
    TEST_ASSERT_EQUAL(42, app_function());
}
