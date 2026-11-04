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
    int numbers[] = {12, 45, 7, 89, 34};
    int *max = find_max(numbers, 5);
    if (max) {
        printf("Max value: %d at address: %p\n", *max, (void *)max);
    }
    return 0;
}

