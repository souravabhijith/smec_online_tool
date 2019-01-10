#include <stdio.h>
#include <stdlib.h>
#include "helloworld.c"
#include "goodbye.c"

int main() {
    printf("%d\n", sum(1,5));
    printf("%s\n", hello_world());
}