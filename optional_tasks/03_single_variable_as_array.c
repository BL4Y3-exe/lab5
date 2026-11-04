#include <stdio.h>


int* find_max(int *arr, int length) {
    if (length <= 0) return NULL;
    int *max_p = arr;
    for (int i = 1; i < length; i++) {
        if (*(arr + i) > *max_p) {
            max_p = arr + i;
        }
    }
    return max_p;
}


int main(void) {
    int val = 42;
    
    int *max = find_max(&val, 1);
    printf("Result: %d\n", *max);
    return 0;
}

