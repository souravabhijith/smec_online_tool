#include <stdlib.h>
#include "unity.h"
#include "goodbye.c"

static void test_difference() {
    TEST_ASSERT_EQUAL(4, difference(8,4));
    TEST_ASSERT_EQUAL(-2, difference(2,4));
}

int main() {
    UNITY_BEGIN();
    RUN_TEST(test_difference);
    return UNITY_END();
}
