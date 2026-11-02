#include <stdio.h>


/**
 * sum_array - finds sum of element of an array.
 * @arr - array.
 * @size - size of an array.
 * @index - index (the element we are currently working with).
 *
 * Return(int): sum of elements of an array.
 */
int sum_array(int arr[], int size, int index){
    if (index >= size) return 0;

    return arr[index] + sum_array(arr, size, index + 1);
}


/************************************************/
// main program
int main(void) {
    int n;
    printf("Enter array size: ");
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        printf("Enter %d elements: ", n);
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

        printf("Sum of array elements = %lld\n", sum_array(arr, n, 0));
    }
    return 0;
}

