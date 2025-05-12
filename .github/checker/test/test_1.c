#include "unity.h"
#include "largest_num.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_1(void) {
    TEST_ASSERT_EQUAL_INT(3, find_max(3, 1, 2));
    TEST_ASSERT_EQUAL_INT(3, find_max(1, 2, 3));
    TEST_ASSERT_EQUAL_INT(14, find_max(1, 4, 14));
    TEST_ASSERT_EQUAL_INT(9, find_max(1, 9, 7));
}