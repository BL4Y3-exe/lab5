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
    int numbers[6] = {1, 99, 3, 4, 5, 6};
    
    // Pass second half of array (index 3 onwards, length 3)
    int *max_half = find_max(numbers + 3, 3);
    if (max_half) {
        printf("Max in second half: %d\n", *max_half);
    }
    return 0;
}

