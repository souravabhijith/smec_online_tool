#include <stdlib.h>
#include "unity.h"
#include "string.h"
#include "B.c"

static void test_add() {
    while(1) {
    }
    TEST_ASSERT_EQUAL_INT(add(1,23), 24);
    //TEST_ASSERT_EQUAL_INT(add(2147483647, 1), 2147483648);
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
    printf("Args for simple_program.c\n");
    for (int i = 0; i < argc; ++i)
    {
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    fflush(stdout);
    UNITY_BEGIN();
    if (strcmp(argv[1], "sum") == 0) {
        printf("Testing sum ====================>");
      RUN_TEST(test_add);
    } else if (strcmp(argv[1], "subtract") == 0) {
        printf("Testing subtract ====>");
      RUN_TEST(test_subract);
    } else if (strcmp(argv[1], "mul") == 0) {
      RUN_TEST(test_mul);
    } else if (strcmp(argv[1], "divide") == 0) {
      RUN_TEST(test_divide);
    } else {

    }
    return UNITY_END();
}
