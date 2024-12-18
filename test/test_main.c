#ifdef TEST
#include "unity.h"         // Test-Framework
#include "main.h"          // Haupt-Projektdatei
#include "stm32f4xx_hal.h" // HAL-Bibliothek

void test_MainFunction_Should_DoSomething(void)
{
    // Test-Logik hier
    TEST_ASSERT_EQUAL(1, 1);
}

#endif // TEST
