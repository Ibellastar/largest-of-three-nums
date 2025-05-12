#include "unity.h"
#include "largest_num.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_1(void) {
    printf("find_max(0, 0, 1)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(1, find_max(0, 0, 1));
    fflush(stdout);
}

void test_2(void) {
    printf("find_max(1, 1, 1)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(1, find_max(1, 1, 1));
    fflush(stdout);
}

void test_3(void) {
    printf("find_max(7, 7, -7)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(7, find_max(7, 7, -7));
    fflush(stdout);
}

void test_4(void) {
    printf("find_max(5, 5, 6)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(6, find_max(5, 5, 6));
    fflush(stdout);
}