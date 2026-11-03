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


int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Sum = %d\n", sum_array(numbers, size));
    return 0;
}

