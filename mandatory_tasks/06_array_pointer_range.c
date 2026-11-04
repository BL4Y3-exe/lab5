#include <stdio.h>


int sum_range(int *start, int *end){
    int sum = 0;

    for (int *p = start; p < end; p++){
        sum += *p;
    }
    return sum;
}


int main(void) {
    int arr[] = {5, 10, 15, 20};

    // arr + 4 points to the element after the last
    printf("Sum = %d\n", sum_range(arr, arr + 4)); 
    return 0;
}


/**
 * Over indexing by one is okay in C, and you can compute pointers pointing
 * up to one element past the end of an array, as long as you dont dereference
 * that one pointer.
 *
 * Over indexing by more, causes undefined behaviour, cuz we dont know what is
 * in those parts of memory.
 */

