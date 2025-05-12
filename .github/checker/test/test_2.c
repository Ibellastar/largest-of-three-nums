#include "unity.h"
#include "largest_num.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_2(void) {
    TEST_ASSERT_EQUAL_INT(-2, find_max(-3, -4, -2));
    TEST_ASSERT_EQUAL_INT(-1, find_max(-1, -2, -3));
    TEST_ASSERT_EQUAL_INT(-3, find_max(-3, -4, -14));
    TEST_ASSERT_EQUAL_INT(-5, find_max(-5, -9, -7));
}