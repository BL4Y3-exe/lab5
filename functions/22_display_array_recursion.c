#include <stdio.h>


/**
 * display_array - prints all elements in array.
 * @arr - array to print.
 * @size - size of array.
 * @index - index (on which element we are currently).
 */
void display_array(int arr[], int size, int index){
    if (index >= size) return;

    printf("%d", arr[index]);
    return display_array(arr, size, index + 1);
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

        printf("Array elements: ");
        display_array(arr, n, 0);
        printf("\n");
    }
    return 0;
}

