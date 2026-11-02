#include <stdio.h>

int main(void) {
    printf("Size of char*:   %zu bytes\n", sizeof(char *));
    printf("Size of int*:    %zu bytes\n", sizeof(int *));
    printf("Size of void*:   %zu bytes\n", sizeof(void *));

    return 0;
}

// Since pointer, stores address and not a value itself,
// it doesnt matter to which data type pointer is pointing,
// its gonna be the same.
