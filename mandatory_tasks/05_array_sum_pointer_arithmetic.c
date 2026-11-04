#include <stdio.h>


int sum_array(int *arr, int length){
    int sum = 0;
    for (int i = 0; i < length; i++){
        sum += *(arr + i); /**
                            * pointer arithmetic; we changing the element
                            * to which pointer is pointing
                            */
    }

    return sum;
}

// Question: Can we determine array size inside the function without length?
// Answer: No, when array name is passed to a function, it passed like pointer.
// `sizeof(arr)` inside the function would evaluates to the size of pointer variable.


int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Sum = %d\n", sum_array(numbers, size));
    return 0;
}

