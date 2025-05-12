#include "unity.h"
#include "largest_num.h"
#include <stdio.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_1(void) {
    printf("find_max(1, 2, 3)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(3, find_max(1, 2, 3));
    fflush(stdout);
}

void test_2(void) {
    printf("find_max(3, 1, 2)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(3, find_max(3, 1, 2));
    fflush(stdout);
}

void test_3(void) {
    printf("find_max(1, 4, 14)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(14, find_max(1, 4, 14));
    fflush(stdout);
}

void test_4(void) {
    printf("find_max(1, 9, 7)\n");
    fflush(stdout);
    TEST_ASSERT_EQUAL_INT(9, find_max(1, 9, 7));
    fflush(stdout);
}