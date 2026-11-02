#include <stdio.h>


/**
 * find_max - finds biggest element in an array.
 * @arr - array.
 * @size - size of an array.
 * @index - index (element we are current working with).
 * @max - max value.
 *
 * Return(int): maximum element in an array.
 */
int find_max(int arr[], int size, int index, int max){
    if (index >= size) return max;
    if (arr[index] > max){
        max = arr[index];
    }

    return find_max(arr, size, index + 1, max);
}


/**
 * find_min - finds smallest element in an array.
 * @arr - array.
 * @size - size of an array.
 * @index - index (element we are current working with).
 * @max - min value.
 *
 * Return(int): minimum element in an array.
 */
int find_min(int arr[], int size, int index, int min){
    if (index >= size) return min;
    if (arr[index] < min){
        min = arr[index];
    }

    return find_min(arr, size, index + 1, min);
}

/**
 * Note.
 * Probably there is better solution,
 * but i can't figure it now.
 */
/************************************************/
// main program
int main(void) {
    int n;
    printf("Enter array size: ");
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        printf("Enter %d elements: ", n);
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

        printf("Maximum element = %d\n", find_max(arr, n, 0, arr[0]));
        printf("Minimum element = %d\n", find_min(arr, n, 0, arr[0]));
    }
    return 0;
}


// Final tought about recursion:
// recursion is good, but recursion is bad.

