#include "unity.h"
#include "largest_num.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_4(void) {
    TEST_ASSERT_EQUAL_INT(1, find_max(0, 0, 1));
    TEST_ASSERT_EQUAL_INT(1, find_max(1, 1, 1));
    TEST_ASSERT_EQUAL_INT(7, find_max(7, 7, -7));
    TEST_ASSERT_EQUAL_INT(6, find_max(5, 5, 6));
}