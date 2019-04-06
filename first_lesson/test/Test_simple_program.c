#include <stdlib.h>
#include "unity.h"
#include "simple_program.c"

static void test_add() {
    TEST_ASSERT_EQUAL_INT(add(1,23), 24);
    TEST_ASSERT_EQUAL_INT(add(2147483647, 1), 2147483648);
}

static void test_subract() {
    TEST_ASSERT_EQUAL_INT(subtract(3,2), 1);
    TEST_ASSERT_EQUAL_INT(subtract(2,3), -1);
}

static void test_mul() {
    TEST_ASSERT_EQUAL_INT(mul(2,3), 6);
}

static void test_divide() {
    TEST_ASSERT_EQUAL_INT(divide(24,2), 12);
    TEST_ASSERT_EQUAL_FLOAT(divide(11,2), 5.5);
}

int main(int argc, char **argv) {
    UNITY_BEGIN();
    
    RUN_TEST(test_add);
    RUN_TEST(test_subract);
    RUN_TEST(test_mul);
    RUN_TEST(test_divide);

    return UNITY_END();
}
