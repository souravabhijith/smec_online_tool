#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "unity.h"
#include "../src/helloworld.c"

int points = 0;

static void test_hello_world() {
    TEST_ASSERT_EQUAL_STRING("hello, world!", hello_world());
    points++;
}

static void test_sum() {
    TEST_ASSERT_EQUAL(6, sum(2,3));
    points++;
}

int main(int argc, char const *argv[])
{
    UNITY_BEGIN();
    RUN_TEST(test_hello_world);
    RUN_TEST(test_sum);
    UNITY_END();

    // printf("points : \n%d\n", points);
}
