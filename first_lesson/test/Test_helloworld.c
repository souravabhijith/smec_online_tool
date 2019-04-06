#include <stdlib.h>
#include "unity.h"
#include "helloworld.c"


static void test_hello_world() {
    TEST_ASSERT_EQUAL_STRING("hello, world!", hello_world());
}

static void test_sum() {
    TEST_ASSERT_EQUAL(6, sum(2,3));
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_hello_world);
    RUN_TEST(test_sum);
    return UNITY_END();
}
