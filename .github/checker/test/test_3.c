#include "unity.h"
#include "largest_num.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_3(void) {
    TEST_ASSERT_EQUAL_INT(4, find_max(3, 4, -2));
    TEST_ASSERT_EQUAL_INT(3, find_max(1, -2, 3));
    TEST_ASSERT_EQUAL_INT(14, find_max(3, -4, 14));
    TEST_ASSERT_EQUAL_INT(7, find_max(5, -9, 7));
}