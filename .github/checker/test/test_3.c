#include "unity.h"
#include "largest_num.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_1(void) {
    printf("find_max(3, 4, -2)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(4, find_max(3, 4, -2));
    fflush(stdout);
}

void test_2(void) {
    printf("find_max(1, -2, 3)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(3, find_max(1, -2, 3));
    fflush(stdout);
}

void test_3(void) {
    printf("find_max(3, -4, 14)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(14, find_max(3, -4, 14));
    fflush(stdout);
}

void test_4(void) {
    printf("find_max(5, -9, 7)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(7, find_max(5, -9, 7));
    fflush(stdout);
}