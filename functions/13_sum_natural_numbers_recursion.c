#include <stdio.h>


/**
 * sum - finds sum of all natural numbers between 1 and n.
 * @n - till which number sum is going to be calculated.
 *
 * Return(int): sum of numbers from 1 to n.
 */
int sum(int n){
    if (n == 1) return 1;

    return (n + sum(n - 1));
}


/************************************************/
// main program
int main(void) {
    int n;
    printf("Enter N: ");
    if (scanf("%d", &n) == 1 && n >= 1) {
        printf("Sum of natural numbers from 1 to %d = %lld\n", n, sum(n));
    }
    return 0;
}

