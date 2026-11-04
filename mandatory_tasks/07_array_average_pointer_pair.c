#include <stdio.h>


double average_range(int *start, int *end){
    int sum = 0;
    int cnt = 0;

    for (int *p = start; p < end; p++){
        sum += *p;
        cnt++;
    }
    return (double)sum/cnt;
}

/**
 * The other solution for that can be, finding the difference between
 * start and end.
 */


int main(void) {
    int arr[] = {5, 10, 15, 20};

    // arr + 4 points to the element after the last
    printf("Average = %.2f\n", average_range(arr, arr + 4)); 
    return 0;
}

