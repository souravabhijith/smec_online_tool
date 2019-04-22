#include <stdlib.h>
#include "unity.h"
#include "helloworld.c"


static void test_hello_world() {
    TEST_ASSERT_EQUAL_STRING("hello, world!", hello_world());
}

int main(int argc, char **argv)
{
    for (int i = 0; i < argc; ++i)
    {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    UNITY_BEGIN();
    RUN_TEST(test_hello_world);
    return UNITY_END();
}
